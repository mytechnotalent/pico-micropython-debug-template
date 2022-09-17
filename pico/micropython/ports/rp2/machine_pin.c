/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016-2021 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <string.h>

#include "py/runtime.h"
#include "py/mphal.h"
#include "shared/runtime/mpirq.h"
#include "modmachine.h"
#include "extmod/virtpin.h"

#include "hardware/irq.h"
#include "hardware/regs/intctrl.h"
#include "hardware/structs/iobank0.h"
#include "hardware/structs/padsbank0.h"

#define GPIO_MODE_IN (0)
#define GPIO_MODE_OUT (1)
#define GPIO_MODE_OPEN_DRAIN (2)
#define GPIO_MODE_ALT (3)

// These can be or'd together.
#define GPIO_PULL_UP (1)
#define GPIO_PULL_DOWN (2)

#define GPIO_IRQ_ALL (0xf)

// Macros to access the state of the hardware.
#define GPIO_GET_FUNCSEL(id) ((iobank0_hw->io[(id)].ctrl & IO_BANK0_GPIO0_CTRL_FUNCSEL_BITS) >> IO_BANK0_GPIO0_CTRL_FUNCSEL_LSB)
#define GPIO_IS_OUT(id) (sio_hw->gpio_oe & (1 << (id)))
#define GPIO_IS_PULL_UP(id) (padsbank0_hw->io[(id)] & PADS_BANK0_GPIO0_PUE_BITS)
#define GPIO_IS_PULL_DOWN(id) (padsbank0_hw->io[(id)] & PADS_BANK0_GPIO0_PDE_BITS)

// Open drain behaviour is simulated.
#define GPIO_IS_OPEN_DRAIN(id) (machine_pin_open_drain_mask & (1 << (id)))

#ifndef MICROPY_HW_PIN_RESERVED
#define MICROPY_HW_PIN_RESERVED(i) (0)
#endif

typedef struct _machine_pin_obj_t {
    mp_obj_base_t base;
    uint8_t id;
    #if MICROPY_HW_PIN_CYW43_COUNT
    bool is_cyw43;
    bool is_output;
    bool last_output_value;
    #endif
} machine_pin_obj_t;

typedef struct _machine_pin_irq_obj_t {
    mp_irq_obj_t base;
    uint32_t flags;
    uint32_t trigger;
} machine_pin_irq_obj_t;

STATIC const mp_irq_methods_t machine_pin_irq_methods;

STATIC const machine_pin_obj_t machine_pin_obj[NUM_BANK0_GPIOS] = {
    {{&machine_pin_type}, 0},
    {{&machine_pin_type}, 1},
    {{&machine_pin_type}, 2},
    {{&machine_pin_type}, 3},
    {{&machine_pin_type}, 4},
    {{&machine_pin_type}, 5},
    {{&machine_pin_type}, 6},
    {{&machine_pin_type}, 7},
    {{&machine_pin_type}, 8},
    {{&machine_pin_type}, 9},
    {{&machine_pin_type}, 10},
    {{&machine_pin_type}, 11},
    {{&machine_pin_type}, 12},
    {{&machine_pin_type}, 13},
    {{&machine_pin_type}, 14},
    {{&machine_pin_type}, 15},
    {{&machine_pin_type}, 16},
    {{&machine_pin_type}, 17},
    {{&machine_pin_type}, 18},
    {{&machine_pin_type}, 19},
    {{&machine_pin_type}, 20},
    {{&machine_pin_type}, 21},
    {{&machine_pin_type}, 22},
    {{&machine_pin_type}, 23},
    {{&machine_pin_type}, 24},
    {{&machine_pin_type}, 25},
    {{&machine_pin_type}, 26},
    {{&machine_pin_type}, 27},
    {{&machine_pin_type}, 28},
    {{&machine_pin_type}, 29},
};

#if MICROPY_HW_PIN_CYW43_COUNT
#include "lib/cyw43-driver/src/cyw43.h"
#define CYW43_PIN_NAME_PREFIX "WL_GPIO"
STATIC machine_pin_obj_t cyw43_pin_obj[MICROPY_HW_PIN_CYW43_COUNT];
#endif

#define LED_PIN_NAME "LED"

#ifndef MICROPY_HW_PIN_ENABLE_LED_PIN
#if defined(MICROPY_HW_PIN_CYW43_LED_PIN_NUM) || defined(PICO_DEFAULT_LED_PIN)
#define MICROPY_HW_PIN_ENABLE_LED_PIN 1
#endif
#endif

#ifdef MICROPY_HW_PIN_ENABLE_LED_PIN
#ifdef MICROPY_HW_PIN_CYW43_LED_PIN_NUM
STATIC machine_pin_obj_t *led_pin_obj = &cyw43_pin_obj[MICROPY_HW_PIN_CYW43_LED_PIN_NUM];
#elif defined(MICROPY_HW_PIN_LED_PIN_NUM)
STATIC machine_pin_obj_t *led_pin_obj = &machine_pin_obj[MICROPY_HW_PIN_LED_PIN_NUM];
#elif defined(PICO_DEFAULT_LED_PIN)
STATIC const machine_pin_obj_t *led_pin_obj = &machine_pin_obj[PICO_DEFAULT_LED_PIN];
#else
#error MICROPY_HW_PIN_ENABLE_LED_PIN defined but there is no LED pin
#endif
#endif

// Mask with "1" indicating that the corresponding pin is in simulated open-drain mode.
uint32_t machine_pin_open_drain_mask;

#if MICROPY_HW_PIN_CYW43_COUNT
STATIC inline bool is_cyw43_pin(__unused const machine_pin_obj_t *self) {
    return self->is_cyw43;
}
#else
#define is_cyw43_pin(x) false
#endif

#if MICROPY_HW_PIN_CYW43_COUNT
STATIC inline void update_cyw43_value(__unused machine_pin_obj_t *self, bool value) {
    if (value != self->last_output_value || !self->is_output) {
        cyw43_gpio_set(&cyw43_state, self->id, value);
    }
    self->last_output_value = value;
}
#endif

#if MICROPY_HW_PIN_CYW43_COUNT
STATIC inline bool get_cyw43_value(__unused machine_pin_obj_t *self) {
    bool value = false;
    cyw43_gpio_get(&cyw43_state, self->id, &value);
    return value;
}
#endif

STATIC void gpio_irq(void) {
    for (int i = 0; i < 4; ++i) {
        uint32_t intr = iobank0_hw->intr[i];
        if (intr) {
            for (int j = 0; j < 8; ++j) {
                if (intr & 0xf) {
                    uint32_t gpio = 8 * i + j;
                    gpio_acknowledge_irq(gpio, intr & 0xf);
                    machine_pin_irq_obj_t *irq = MP_STATE_PORT(machine_pin_irq_obj[gpio]);
                    if (irq != NULL && (intr & irq->trigger)) {
                        irq->flags = intr & irq->trigger;
                        mp_irq_handler(&irq->base);
                    }
                }
                intr >>= 4;
            }
        }
    }
}

void machine_pin_init(void) {
    memset(MP_STATE_PORT(machine_pin_irq_obj), 0, sizeof(MP_STATE_PORT(machine_pin_irq_obj)));
    irq_add_shared_handler(IO_IRQ_BANK0, gpio_irq, PICO_SHARED_IRQ_HANDLER_DEFAULT_ORDER_PRIORITY);
    irq_set_enabled(IO_IRQ_BANK0, true);
    #if MICROPY_HW_PIN_CYW43_COUNT
    for (uint i = 0; i < count_of(cyw43_pin_obj); i++) {
        cyw43_pin_obj[i].id = i;
        cyw43_pin_obj[i].base.type = &machine_pin_type;
        cyw43_pin_obj[i].is_cyw43 = true;
    }
    #endif
}

void machine_pin_deinit(void) {
    for (int i = 0; i < NUM_BANK0_GPIOS; ++i) {
        if (MICROPY_HW_PIN_RESERVED(i)) {
            continue;
        }
        gpio_set_irq_enabled(i, GPIO_IRQ_ALL, false);
    }
    irq_remove_handler(IO_IRQ_BANK0, gpio_irq);
}

STATIC void machine_pin_print(const mp_print_t *print, mp_obj_t self_in, mp_print_kind_t kind) {
    machine_pin_obj_t *self = self_in;
    uint funcsel = GPIO_GET_FUNCSEL(self->id);
    qstr mode_qst;
    if (!is_cyw43_pin(self)) {
        if (funcsel == GPIO_FUNC_SIO) {
            if (GPIO_IS_OPEN_DRAIN(self->id)) {
                mode_qst = MP_QSTR_OPEN_DRAIN;
            } else if (GPIO_IS_OUT(self->id)) {
                mode_qst = MP_QSTR_OUT;
            } else {
                mode_qst = MP_QSTR_IN;
            }
        } else {
            mode_qst = MP_QSTR_ALT;
        }
        mp_printf(print, "Pin(%u, mode=%q", self->id, mode_qst);
        bool pull_up = false;
        if (GPIO_IS_PULL_UP(self->id)) {
            mp_printf(print, ", pull=%q", MP_QSTR_PULL_UP);
            pull_up = true;
        }
        if (GPIO_IS_PULL_DOWN(self->id)) {
            if (pull_up) {
                mp_printf(print, "|%q", MP_QSTR_PULL_DOWN);
            } else {
                mp_printf(print, ", pull=%q", MP_QSTR_PULL_DOWN);
            }
        }
        if (funcsel != GPIO_FUNC_SIO) {
            mp_printf(print, ", alt=%u", funcsel);
        }
    } else {
        #if MICROPY_HW_PIN_CYW43_COUNT
        mode_qst = self->is_output ? MP_QSTR_OUT : MP_QSTR_IN;
        mp_printf(print, "Pin(%s%u, mode=%q", CYW43_PIN_NAME_PREFIX,  self->id, mode_qst);
        #endif
    }
    mp_printf(print, ")");
}

enum {
    ARG_mode, ARG_pull, ARG_value, ARG_alt
};
static const mp_arg_t allowed_args[] = {
    {MP_QSTR_mode,  MP_ARG_OBJ,                  {.u_rom_obj = MP_ROM_NONE}},
    {MP_QSTR_pull,  MP_ARG_OBJ,                  {.u_rom_obj = MP_ROM_NONE}},
    {MP_QSTR_value, MP_ARG_KW_ONLY | MP_ARG_OBJ, {.u_rom_obj = MP_ROM_NONE}},
    {MP_QSTR_alt,   MP_ARG_KW_ONLY | MP_ARG_INT, {.u_int = GPIO_FUNC_SIO}},
};

#if MICROPY_HW_PIN_CYW43_COUNT
// pin.init(mode, pull=None, *, value=None, alt=FUNC_SIO)
STATIC mp_obj_t machine_pin_cyw43_obj_init_helper(machine_pin_obj_t *self, size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    if (args[ARG_pull].u_obj != mp_const_none) {
        int pull = mp_obj_get_int(args[ARG_pull].u_obj);
        if (pull) {
            mp_raise_ValueError("Pulls are not supported for this pin");
        }
    }

    if (args[ARG_alt].u_int != GPIO_FUNC_SIO) {
        mp_raise_ValueError("Alternate functions are not supported for this pin");
    }

    int value = -1;
    if (args[ARG_value].u_obj != mp_const_none) {
        value = mp_obj_is_true(args[ARG_value].u_obj);
    }

    if (args[ARG_mode].u_obj != mp_const_none) {
        mp_int_t mode = mp_obj_get_int(args[ARG_mode].u_obj);
        if (mode == GPIO_MODE_IN) {
            if (self->is_output) {
                // todo need to disable output
            }
            self->is_output = false;
        } else if (mode == GPIO_MODE_OUT) {
            if (!self->is_output) {
                // todo need to enable output
                // for now we just set the value
                if (value == -1) {
                    value = self->last_output_value;
                }
                self->last_output_value = !self->last_output_value; // defeat shortcircuit
                update_cyw43_value(self, value);
                self->is_output = true;
            }
        } else {
            mp_raise_ValueError("only Pin.OUT and Pin.IN are supported for this pin");
        }
    }

    if (value != -1) {
        if (self->is_output) {
            update_cyw43_value(self, value);
        } else {
            // figure if you pass a value to IN it should still remember it (this is what regular GPIO does)
            self->last_output_value = value;
        }
    }

    return mp_const_none;
}
#endif

STATIC mp_obj_t machine_pin_obj_init_helper(const machine_pin_obj_t *self, size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {

    // parse args
    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args, pos_args, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    // set initial value (do this before configuring mode/pull)
    if (args[ARG_value].u_obj != mp_const_none) {
        gpio_put(self->id, mp_obj_is_true(args[ARG_value].u_obj));
    }

    // configure mode
    if (args[ARG_mode].u_obj != mp_const_none) {
        mp_int_t mode = mp_obj_get_int(args[ARG_mode].u_obj);
        if (mode == GPIO_MODE_IN) {
            mp_hal_pin_input(self->id);
        } else if (mode == GPIO_MODE_OUT) {
            mp_hal_pin_output(self->id);
        } else if (mode == GPIO_MODE_OPEN_DRAIN) {
            mp_hal_pin_open_drain(self->id);
        } else {
            // Alternate function.
            gpio_set_function(self->id, args[ARG_alt].u_int);
            machine_pin_open_drain_mask &= ~(1 << self->id);
        }
    }

    // configure pull (unconditionally because None means no-pull)
    uint32_t pull = 0;
    if (args[ARG_pull].u_obj != mp_const_none) {
        pull = mp_obj_get_int(args[ARG_pull].u_obj);
    }
    gpio_set_pulls(self->id, pull & GPIO_PULL_UP, pull & GPIO_PULL_DOWN);
    return mp_const_none;
}

// constructor(id, ...)
mp_obj_t mp_pin_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    mp_arg_check_num(n_args, n_kw, 1, MP_OBJ_FUN_ARGS_MAX, true);


    const machine_pin_obj_t *self = NULL;
    if (mp_obj_is_str(args[0])) {
        const char *name = mp_obj_str_get_str(args[0]);
        #if MICROPY_HW_PIN_ENABLE_LED_PIN
        if (!strcmp(name, LED_PIN_NAME)) {
            self = led_pin_obj;
        }
        #endif
        #if MICROPY_HW_PIN_CYW43_COUNT
        static_assert(MICROPY_HW_PIN_CYW43_COUNT < 10, ""); // makes parsing name easy!
        if (!self && !strncmp(name, CYW43_PIN_NAME_PREFIX, strlen(CYW43_PIN_NAME_PREFIX)) && strlen(name) == strlen(CYW43_PIN_NAME_PREFIX) + 1) {
            int num = name[strlen(CYW43_PIN_NAME_PREFIX)] - '0';
            if (num < MICROPY_HW_PIN_CYW43_COUNT) {
                self = &cyw43_pin_obj[num];
            }
        }
        #endif
        if (!self) {
            mp_raise_msg_varg(&mp_type_ValueError, MP_ERROR_TEXT("Unknown named pin \"%s\""), name);
        }
    }
    if (!self) {
        // get the wanted pin object
        int wanted_pin = mp_obj_get_int(args[0]);
        if (!(0 <= wanted_pin && wanted_pin < MP_ARRAY_SIZE(machine_pin_obj))) {
            mp_raise_ValueError("invalid pin");
        }
        self = &machine_pin_obj[wanted_pin];
    }
    // note we have different init args based on the type of pin. so Pin("LED", Pin.OUT) may not always make sense
    if (!is_cyw43_pin(self)) {
        if (n_args > 1 || n_kw > 0) {
            // pin mode given, so configure this GPIO
            mp_map_t kw_args;
            mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
            machine_pin_obj_init_helper(self, n_args - 1, args + 1, &kw_args);
        }
        return MP_OBJ_FROM_PTR(self);
    }
    #if MICROPY_HW_PIN_CYW43_COUNT
    if (n_args > 1 || n_kw > 0) {
        // pin mode given, so configure this GPIO
        mp_map_t kw_args;
        mp_map_init_fixed_table(&kw_args, n_kw, args + n_args);
        // The regular Pins are const, but the CYW43 pins are mutable.
        machine_pin_obj_t *mutable_self = (machine_pin_obj_t *)self;
        machine_pin_cyw43_obj_init_helper(mutable_self, n_args - 1, args + 1, &kw_args);
    }
    return MP_OBJ_FROM_PTR(self);
    #endif
}

// fast method for getting/setting pin value
STATIC mp_obj_t machine_pin_call(mp_obj_t self_in, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    mp_arg_check_num(n_args, n_kw, 0, 1, false);
    machine_pin_obj_t *self = self_in;
    if (n_args == 0) {
        // get pin
        if (!is_cyw43_pin(self)) {
            return MP_OBJ_NEW_SMALL_INT(gpio_get(self->id));
        }
        #if MICROPY_HW_PIN_CYW43_COUNT
        return MP_OBJ_NEW_SMALL_INT(get_cyw43_value(self));
        #endif
    } else {
        // set pin
        bool value = mp_obj_is_true(args[0]);
        if (!is_cyw43_pin(self)) {
            if (GPIO_IS_OPEN_DRAIN(self->id)) {
                MP_STATIC_ASSERT(GPIO_IN == 0 && GPIO_OUT == 1);
                gpio_set_dir(self->id, 1 - value);
            } else {
                gpio_put(self->id, value);
            }
            return mp_const_none;
        }
        #if MICROPY_HW_PIN_CYW43_COUNT
        update_cyw43_value(self, value);
        #endif
    }
    return mp_const_none;
}

// pin.init(mode, pull)
STATIC mp_obj_t machine_pin_obj_init(size_t n_args, const mp_obj_t *args, mp_map_t *kw_args) {
    if (!is_cyw43_pin(args[0])) {
        return machine_pin_obj_init_helper(args[0], n_args - 1, args + 1, kw_args);
    }
    #if MICROPY_HW_PIN_CYW43_COUNT
    return machine_pin_cyw43_obj_init_helper(args[0], n_args - 1, args + 1, kw_args);
    #endif
}
MP_DEFINE_CONST_FUN_OBJ_KW(machine_pin_init_obj, 1, machine_pin_obj_init);

// pin.value([value])
STATIC mp_obj_t machine_pin_value(size_t n_args, const mp_obj_t *args) {
    return machine_pin_call(args[0], n_args - 1, 0, args + 1);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(machine_pin_value_obj, 1, 2, machine_pin_value);

// pin.low()
STATIC mp_obj_t machine_pin_low(mp_obj_t self_in) {
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(self_in);
    if (!is_cyw43_pin(self)) {
        if (GPIO_IS_OPEN_DRAIN(self->id)) {
            gpio_set_dir(self->id, GPIO_OUT);
        } else {
            gpio_clr_mask(1u << self->id);
        }
        return mp_const_none;
    }
    #if MICROPY_HW_PIN_CYW43_COUNT
    update_cyw43_value(self, 0);
    return mp_const_none;
    #endif
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(machine_pin_low_obj, machine_pin_low);

// pin.high()
STATIC mp_obj_t machine_pin_high(mp_obj_t self_in) {
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(self_in);
    if (!is_cyw43_pin(self)) {
        if (GPIO_IS_OPEN_DRAIN(self->id)) {
            gpio_set_dir(self->id, GPIO_IN);
        } else {
            gpio_set_mask(1u << self->id);
        }
        return mp_const_none;
    }
    #if MICROPY_HW_PIN_CYW43_COUNT
    update_cyw43_value(self, 1);
    return mp_const_none;
    #endif
}

STATIC MP_DEFINE_CONST_FUN_OBJ_1(machine_pin_high_obj, machine_pin_high);

// pin.toggle()
STATIC mp_obj_t machine_pin_toggle(mp_obj_t self_in) {
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(self_in);
    if (!is_cyw43_pin(self)) {
        if (GPIO_IS_OPEN_DRAIN(self->id)) {
            if (GPIO_IS_OUT(self->id)) {
                gpio_set_dir(self->id, GPIO_IN);
            } else {
                gpio_set_dir(self->id, GPIO_OUT);
            }
        } else {
            gpio_xor_mask(1u << self->id);
        }
        return mp_const_none;
    }
    #if MICROPY_HW_PIN_CYW43_COUNT
    update_cyw43_value(self, self->last_output_value ^ 1);
    return mp_const_none;
    #endif
}
STATIC MP_DEFINE_CONST_FUN_OBJ_1(machine_pin_toggle_obj, machine_pin_toggle);

STATIC machine_pin_irq_obj_t *machine_pin_get_irq(mp_hal_pin_obj_t pin) {
    // Get the IRQ object.
    machine_pin_irq_obj_t *irq = MP_STATE_PORT(machine_pin_irq_obj[pin]);

    // Allocate the IRQ object if it doesn't already exist.
    if (irq == NULL) {
        irq = m_new_obj(machine_pin_irq_obj_t);
        irq->base.base.type = &mp_irq_type;
        irq->base.methods = (mp_irq_methods_t *)&machine_pin_irq_methods;
        irq->base.parent = MP_OBJ_FROM_PTR(&machine_pin_obj[pin]);
        irq->base.handler = mp_const_none;
        irq->base.ishard = false;
        MP_STATE_PORT(machine_pin_irq_obj[pin]) = irq;
    }
    return irq;
}

void mp_hal_pin_interrupt(mp_hal_pin_obj_t pin, mp_obj_t handler, mp_uint_t trigger, bool hard) {
    machine_pin_irq_obj_t *irq = machine_pin_get_irq(pin);

    // Disable all IRQs while data is updated.
    gpio_set_irq_enabled(pin, GPIO_IRQ_ALL, false);

    // Update IRQ data.
    irq->base.handler = handler;
    irq->base.ishard = hard;
    irq->flags = 0;
    irq->trigger = trigger;

    // Enable IRQ if a handler is given.
    if (handler != mp_const_none && trigger != MP_HAL_PIN_TRIGGER_NONE) {
        gpio_set_irq_enabled(pin, trigger, true);
    }
}

// pin.irq(handler=None, trigger=IRQ_FALLING|IRQ_RISING, hard=False)
STATIC mp_obj_t machine_pin_irq(size_t n_args, const mp_obj_t *pos_args, mp_map_t *kw_args) {
    enum { ARG_handler, ARG_trigger, ARG_hard };
    static const mp_arg_t allowed_args[] = {
        { MP_QSTR_handler, MP_ARG_OBJ, {.u_rom_obj = MP_ROM_NONE} },
        { MP_QSTR_trigger, MP_ARG_INT, {.u_int = MP_HAL_PIN_TRIGGER_FALL | MP_HAL_PIN_TRIGGER_RISE} },
        { MP_QSTR_hard, MP_ARG_BOOL, {.u_bool = false} },
    };
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(pos_args[0]);
    if (is_cyw43_pin(self)) {
        mp_raise_ValueError(MP_ERROR_TEXT("expecting a regular GPIO Pin"));
    }

    mp_arg_val_t args[MP_ARRAY_SIZE(allowed_args)];
    mp_arg_parse_all(n_args - 1, pos_args + 1, kw_args, MP_ARRAY_SIZE(allowed_args), allowed_args, args);

    machine_pin_irq_obj_t *irq = machine_pin_get_irq(self->id);

    if (n_args > 1 || kw_args->used != 0) {
        // Update IRQ data.
        mp_obj_t handler = args[ARG_handler].u_obj;
        mp_uint_t trigger = args[ARG_trigger].u_int;
        bool hard = args[ARG_hard].u_bool;
        mp_hal_pin_interrupt(self->id, handler, trigger, hard);
    }
    return MP_OBJ_FROM_PTR(irq);
}
STATIC MP_DEFINE_CONST_FUN_OBJ_KW(machine_pin_irq_obj, 1, machine_pin_irq);

STATIC const mp_rom_map_elem_t machine_pin_locals_dict_table[] = {
    // instance methods
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&machine_pin_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_value), MP_ROM_PTR(&machine_pin_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_low), MP_ROM_PTR(&machine_pin_low_obj) },
    { MP_ROM_QSTR(MP_QSTR_high), MP_ROM_PTR(&machine_pin_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_off), MP_ROM_PTR(&machine_pin_low_obj) },
    { MP_ROM_QSTR(MP_QSTR_on), MP_ROM_PTR(&machine_pin_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_toggle), MP_ROM_PTR(&machine_pin_toggle_obj) },
    { MP_ROM_QSTR(MP_QSTR_irq), MP_ROM_PTR(&machine_pin_irq_obj) },

    // class constants
    { MP_ROM_QSTR(MP_QSTR_IN), MP_ROM_INT(GPIO_MODE_IN) },
    { MP_ROM_QSTR(MP_QSTR_OUT), MP_ROM_INT(GPIO_MODE_OUT) },
    { MP_ROM_QSTR(MP_QSTR_OPEN_DRAIN), MP_ROM_INT(GPIO_MODE_OPEN_DRAIN) },
    { MP_ROM_QSTR(MP_QSTR_ALT), MP_ROM_INT(GPIO_MODE_ALT) },
    { MP_ROM_QSTR(MP_QSTR_PULL_UP), MP_ROM_INT(GPIO_PULL_UP) },
    { MP_ROM_QSTR(MP_QSTR_PULL_DOWN), MP_ROM_INT(GPIO_PULL_DOWN) },
    { MP_ROM_QSTR(MP_QSTR_IRQ_RISING), MP_ROM_INT(GPIO_IRQ_EDGE_RISE) },
    { MP_ROM_QSTR(MP_QSTR_IRQ_FALLING), MP_ROM_INT(GPIO_IRQ_EDGE_FALL) },
};
STATIC MP_DEFINE_CONST_DICT(machine_pin_locals_dict, machine_pin_locals_dict_table);

STATIC mp_uint_t pin_ioctl(mp_obj_t self_in, mp_uint_t request, uintptr_t arg, int *errcode) {
    (void)errcode;
    machine_pin_obj_t *self = self_in;

    if (!is_cyw43_pin(self)) {
        switch (request) {
            case MP_PIN_READ: {
                return gpio_get(self->id);
            }
            case MP_PIN_WRITE: {
                gpio_put(self->id, arg);
                return 0;
            }
        }
        return -1;
    }

    #if MICROPY_HW_PIN_CYW43_COUNT
    switch (request) {
        case MP_PIN_READ: {
            return get_cyw43_value(self);
        }
        case MP_PIN_WRITE: {
            update_cyw43_value(self, arg);
            return 0;
        }
    }
    return -1;
    #endif
}

STATIC const mp_pin_p_t pin_pin_p = {
    .ioctl = pin_ioctl,
};

const mp_obj_type_t machine_pin_type = {
    { &mp_type_type },
    .name = MP_QSTR_Pin,
    .print = machine_pin_print,
    .make_new = mp_pin_make_new,
    .call = machine_pin_call,
    .protocol = &pin_pin_p,
    .locals_dict = (mp_obj_t)&machine_pin_locals_dict,
};

STATIC mp_uint_t machine_pin_irq_trigger(mp_obj_t self_in, mp_uint_t new_trigger) {
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(self_in);
    machine_pin_irq_obj_t *irq = MP_STATE_PORT(machine_pin_irq_obj[self->id]);
    gpio_set_irq_enabled(self->id, GPIO_IRQ_ALL, false);
    irq->flags = 0;
    irq->trigger = new_trigger;
    gpio_set_irq_enabled(self->id, new_trigger, true);
    return 0;
}

STATIC mp_uint_t machine_pin_irq_info(mp_obj_t self_in, mp_uint_t info_type) {
    machine_pin_obj_t *self = MP_OBJ_TO_PTR(self_in);
    machine_pin_irq_obj_t *irq = MP_STATE_PORT(machine_pin_irq_obj[self->id]);
    if (info_type == MP_IRQ_INFO_FLAGS) {
        return irq->flags;
    } else if (info_type == MP_IRQ_INFO_TRIGGERS) {
        return irq->trigger;
    }
    return 0;
}

STATIC const mp_irq_methods_t machine_pin_irq_methods = {
    .trigger = machine_pin_irq_trigger,
    .info = machine_pin_irq_info,
};

mp_hal_pin_obj_t mp_hal_get_pin_obj(mp_obj_t obj) {
    if (!mp_obj_is_type(obj, &machine_pin_type)) {
        mp_raise_ValueError(MP_ERROR_TEXT("expecting a Pin"));
    }
    machine_pin_obj_t *pin = MP_OBJ_TO_PTR(obj);
    if (is_cyw43_pin(pin)) {
        mp_raise_ValueError(MP_ERROR_TEXT("expecting a regular GPIO Pin"));
    }
    return pin->id;
}

MP_REGISTER_ROOT_POINTER(void *machine_pin_irq_obj[30]);
