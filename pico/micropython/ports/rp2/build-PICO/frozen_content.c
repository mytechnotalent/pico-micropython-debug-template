//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
#define MP_FROZEN_STR_NAMES \

const uint32_t mp_frozen_str_sizes[] = { 0 };
const char mp_frozen_str_content[] = {
"\0"
};

//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif

enum {
    MP_QSTR__boot_fat_dot_py = MP_QSTRnumber_of,
    MP_QSTR_os,
    MP_QSTR_bdev,
    MP_QSTR_vfs,
    MP_QSTR_rp2_dot_py,
    MP_QSTR_PIOASMError,
    MP_QSTR_PIOASMEmit,
    MP_QSTR_gpio,
    MP_QSTR_pins,
    MP_QSTR_x,
    MP_QSTR_y,
    MP_QSTR_null,
    MP_QSTR_pindirs,
    MP_QSTR_pc,
    MP_QSTR_status,
    MP_QSTR_isr,
    MP_QSTR_osr,
    MP_QSTR_not_x,
    MP_QSTR_x_dec,
    MP_QSTR_not_y,
    MP_QSTR_y_dec,
    MP_QSTR_x_not_y,
    MP_QSTR_pin,
    MP_QSTR_not_osre,
    MP_QSTR_noblock,
    MP_QSTR_block,
    MP_QSTR_iffull,
    MP_QSTR_ifempty,
    MP_QSTR_rel,
    MP_QSTR_wrap_target,
    MP_QSTR_wrap,
    MP_QSTR_word,
    MP_QSTR_jmp,
    MP_QSTR_wait,
    MP_QSTR_in_,
    MP_QSTR_out,
    MP_QSTR_out_init,
    MP_QSTR_set_init,
    MP_QSTR_sideset_init,
    MP_QSTR_autopush,
    MP_QSTR_autopull,
    MP_QSTR_fifo_join,
    MP_QSTR_asm_pio,
    MP_QSTR_sideset_count,
    MP_QSTR_sideset_opt,
    MP_QSTR_delay_max,
    MP_QSTR_pass_,
    MP_QSTR_num_instr,
    MP_QSTR_num_sideset,
    MP_QSTR_labels,
    MP_QSTR_H,
    MP_QSTR_wrap_used,
    MP_QSTR_start_pass,
    MP_QSTR_delay,
    MP_QSTR_side,
    MP_QSTR_no_space_sideset,
    MP_QSTR_dec,
    MP_QSTR__pio_funcs,
    MP_QSTR_instr,
    MP_QSTR_cond,
    MP_QSTR_src,
    MP_QSTR_dest,
    MP_QSTR_value2,
    MP_QSTR_mod,
    MP_QSTR_f,
    MP_QSTR_delay_space_too_space_large,
    MP_QSTR_sideset_space_too_space_large,
    MP_QSTR_duplicate_space_label_space__brace_open__brace_close_,
    MP_QSTR_unknown_space_label_space__brace_open__brace_close_,
    MP_QSTR_invalid_space_bit_space_count_space__brace_open__brace_close_,
    MP_QSTR__boot_dot_py,
    MP_QSTR_main_dot_py,
    MP_QSTR_foo,
    MP_QSTR_number,
    MP_QSTR_uasyncio_slash___init___dot_py,
    MP_QSTR_core,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_wait_for_ms,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_open_connection,
    MP_QSTR_start_server,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR_uasyncio_slash_core_dot_py,
    MP_QSTR_task,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_run_until_complete,
    MP_QSTR_wait_io_event,
    MP_QSTR_call_exception_handler,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR_exc,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR__dequeue,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_run_forever,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_ticks,
    MP_QSTR__exc_context,
    MP_QSTR__stop_task,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_aw,
    MP_QSTR_main_task,
    MP_QSTR__io_queue,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_dt,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_coroutine_space_expected,
    MP_QSTR_uasyncio_slash_event_dot_py,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_req,
    MP_QSTR_uasyncio_slash_funcs_dot_py,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_waiter,
    MP_QSTR_er,
    MP_QSTR_can_squot_t_space_gather,
    MP_QSTR_uasyncio_slash_lock_dot_py,
    MP_QSTR_exc_type,
    MP_QSTR_tb,
    MP_QSTR_Lock_space_not_space_acquired,
    MP_QSTR_uasyncio_slash_stream_dot_py,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_usocket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_setblocking,
    MP_QSTR_connect,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR__serve,
    MP_QSTR_stream_awrite,
    MP_QSTR_drain,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR_readexactly,
    MP_QSTR_accept,
    MP_QSTR_peername,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_sz,
    MP_QSTR_v,
    MP_QSTR_n,
    MP_QSTR_onewire_dot_py,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR__ow,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_required,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR_DS18X20,
    MP_QSTR_ow,
    MP_QSTR_convert_temp,
    MP_QSTR_read_scratch,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_read_temp,
    MP_QSTR_dht_dot_py,
    MP_QSTR_esp,
    MP_QSTR_mimxrt,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR_checksum_space_error,
    MP_QSTR_neopixel_dot_py,
    MP_QSTR_NeoPixel,
    MP_QSTR_bpp,
    MP_QSTR_timing,
    MP_QSTR_ORDER,
    MP_QSTR_i,
};

const qstr_hash_t mp_qstr_frozen_const_hashes[] = {
    71,
    121,
    112,
    134,
    18,
    244,
    121,
    84,
    65,
    221,
    220,
    222,
    190,
    22,
    113,
    109,
    235,
    183,
    96,
    182,
    161,
    49,
    242,
    4,
    13,
    236,
    121,
    63,
    126,
    95,
    81,
    43,
    114,
    142,
    61,
    43,
    206,
    66,
    57,
    20,
    47,
    30,
    19,
    192,
    232,
    123,
    107,
    62,
    85,
    208,
    237,
    233,
    203,
    80,
    126,
    253,
    103,
    254,
    151,
    35,
    7,
    35,
    60,
    227,
    195,
    57,
    85,
    82,
    13,
    14,
    171,
    169,
    163,
    70,
    194,
    190,
    8,
    42,
    136,
    201,
    233,
    142,
    89,
    63,
    26,
    182,
    203,
    86,
    216,
    191,
    156,
    54,
    3,
    40,
    102,
    110,
    210,
    1,
    57,
    146,
    25,
    82,
    147,
    239,
    36,
    232,
    108,
    37,
    3,
    30,
    137,
    219,
    237,
    192,
    106,
    121,
    22,
    204,
    168,
    131,
    188,
    65,
    58,
    9,
    67,
    36,
    16,
    209,
    154,
    51,
    252,
    210,
    37,
    135,
    214,
    80,
    149,
    57,
    250,
    41,
    212,
    238,
    194,
    99,
    181,
    124,
    212,
    179,
    249,
    178,
    183,
    147,
    252,
    147,
    167,
    132,
    57,
    160,
    227,
    82,
    249,
    236,
    117,
    110,
    50,
    96,
    110,
    219,
    56,
    15,
    33,
    132,
    204,
    173,
    90,
    117,
    133,
    199,
    201,
    133,
    128,
    37,
    92,
    228,
    106,
    236,
    211,
    203,
    15,
    80,
    104,
    226,
    185,
    251,
    164,
    130,
    203,
    44,
    181,
    38,
    200,
    166,
    1,
    125,
    65,
    84,
    79,
    59,
    228,
    90,
    99,
    18,
    86,
    238,
    40,
    93,
    253,
    29,
    124,
    233,
    48,
    174,
    105,
    199,
    53,
    75,
    204,
};

const qstr_len_t mp_qstr_frozen_const_lengths[] = {
    12,
    2,
    4,
    3,
    6,
    11,
    10,
    4,
    4,
    1,
    1,
    4,
    7,
    2,
    6,
    3,
    3,
    5,
    5,
    5,
    5,
    7,
    3,
    8,
    7,
    5,
    6,
    7,
    3,
    11,
    4,
    4,
    3,
    4,
    3,
    3,
    8,
    8,
    12,
    8,
    8,
    9,
    7,
    13,
    11,
    9,
    5,
    9,
    11,
    6,
    1,
    9,
    10,
    5,
    4,
    10,
    3,
    10,
    5,
    4,
    3,
    4,
    6,
    3,
    1,
    15,
    17,
    18,
    16,
    20,
    8,
    7,
    3,
    6,
    20,
    4,
    5,
    8,
    6,
    5,
    5,
    4,
    6,
    11,
    6,
    4,
    11,
    14,
    15,
    12,
    12,
    12,
    16,
    4,
    12,
    7,
    9,
    6,
    18,
    7,
    4,
    16,
    11,
    18,
    13,
    22,
    3,
    8,
    14,
    12,
    14,
    3,
    6,
    8,
    8,
    10,
    11,
    11,
    21,
    12,
    21,
    25,
    7,
    5,
    5,
    12,
    10,
    1,
    4,
    2,
    9,
    9,
    8,
    9,
    1,
    3,
    2,
    4,
    7,
    18,
    17,
    7,
    6,
    3,
    17,
    7,
    17,
    4,
    6,
    2,
    12,
    16,
    8,
    2,
    17,
    18,
    6,
    6,
    11,
    6,
    6,
    9,
    7,
    11,
    11,
    6,
    11,
    7,
    10,
    10,
    12,
    4,
    6,
    6,
    13,
    5,
    7,
    14,
    11,
    6,
    8,
    4,
    4,
    2,
    7,
    2,
    1,
    1,
    10,
    12,
    7,
    10,
    9,
    11,
    10,
    3,
    8,
    8,
    3,
    5,
    4,
    10,
    7,
    2,
    12,
    12,
    9,
    13,
    9,
    6,
    3,
    6,
    7,
    3,
    7,
    5,
    5,
    7,
    8,
    11,
    14,
    11,
    8,
    3,
    6,
    5,
    1,
};

extern const qstr_pool_t mp_qstr_const_pool;
const qstr_pool_t mp_qstr_frozen_const_pool = {
    &mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    10, // allocated entries
    227, // used entries
    (qstr_hash_t *)mp_qstr_frozen_const_hashes,
    (qstr_len_t *)mp_qstr_frozen_const_lengths,
    {
        "_boot_fat.py",
        "os",
        "bdev",
        "vfs",
        "rp2.py",
        "PIOASMError",
        "PIOASMEmit",
        "gpio",
        "pins",
        "x",
        "y",
        "null",
        "pindirs",
        "pc",
        "status",
        "isr",
        "osr",
        "not_x",
        "x_dec",
        "not_y",
        "y_dec",
        "x_not_y",
        "pin",
        "not_osre",
        "noblock",
        "block",
        "iffull",
        "ifempty",
        "rel",
        "wrap_target",
        "wrap",
        "word",
        "jmp",
        "wait",
        "in_",
        "out",
        "out_init",
        "set_init",
        "sideset_init",
        "autopush",
        "autopull",
        "fifo_join",
        "asm_pio",
        "sideset_count",
        "sideset_opt",
        "delay_max",
        "pass_",
        "num_instr",
        "num_sideset",
        "labels",
        "H",
        "wrap_used",
        "start_pass",
        "delay",
        "side",
        "no sideset",
        "dec",
        "_pio_funcs",
        "instr",
        "cond",
        "src",
        "dest",
        "value2",
        "mod",
        "f",
        "delay too large",
        "sideset too large",
        "duplicate label {}",
        "unknown label {}",
        "invalid bit count {}",
        "_boot.py",
        "main.py",
        "foo",
        "number",
        "uasyncio/__init__.py",
        "core",
        "funcs",
        "wait_for",
        "gather",
        "event",
        "Event",
        "Lock",
        "stream",
        "__version__",
        "_attrs",
        "attr",
        "wait_for_ms",
        "ThreadSafeFlag",
        "open_connection",
        "start_server",
        "StreamReader",
        "StreamWriter",
        "uasyncio/core.py",
        "task",
        "TimeoutError",
        "message",
        "exception",
        "future",
        "SingletonGenerator",
        "IOQueue",
        "Loop",
        "_promote_to_task",
        "create_task",
        "run_until_complete",
        "wait_io_event",
        "call_exception_handler",
        "run",
        "_stopper",
        "get_event_loop",
        "current_task",
        "new_event_loop",
        "exc",
        "poller",
        "_enqueue",
        "_dequeue",
        "queue_read",
        "queue_write",
        "run_forever",
        "set_exception_handler",
        "_exc_handler",
        "get_exception_handler",
        "default_exception_handler",
        "future:",
        "coro=",
        "ticks",
        "_exc_context",
        "_stop_task",
        "t",
        "sgen",
        "aw",
        "main_task",
        "_io_queue",
        "runq_len",
        "waitq_len",
        "s",
        "idx",
        "dt",
        "loop",
        "context",
        "coroutine expected",
        "uasyncio/event.py",
        "waiting",
        "is_set",
        "req",
        "uasyncio/funcs.py",
        "_Remove",
        "return_exceptions",
        "_run",
        "waiter",
        "er",
        "can't gather",
        "uasyncio/lock.py",
        "exc_type",
        "tb",
        "Lock not acquired",
        "uasyncio/stream.py",
        "Stream",
        "Server",
        "wait_closed",
        "aclose",
        "awrite",
        "awritestr",
        "usocket",
        "getaddrinfo",
        "SOCK_STREAM",
        "socket",
        "setblocking",
        "connect",
        "setsockopt",
        "SOL_SOCKET",
        "SO_REUSEADDR",
        "bind",
        "listen",
        "_serve",
        "stream_awrite",
        "drain",
        "out_buf",
        "get_extra_info",
        "readexactly",
        "accept",
        "peername",
        "host",
        "port",
        "cb",
        "backlog",
        "sz",
        "v",
        "n",
        "onewire.py",
        "OneWireError",
        "OneWire",
        "select_rom",
        "MATCH_ROM",
        "_search_rom",
        "SEARCH_ROM",
        "_ow",
        "SKIP_ROM",
        "required",
        "rom",
        "l_rom",
        "diff",
        "ds18x20.py",
        "DS18X20",
        "ow",
        "convert_temp",
        "read_scratch",
        "CRC error",
        "write_scratch",
        "read_temp",
        "dht.py",
        "esp",
        "mimxrt",
        "pyboard",
        "pyb",
        "DHTBase",
        "DHT11",
        "DHT22",
        "measure",
        "humidity",
        "temperature",
        "checksum error",
        "neopixel.py",
        "NeoPixel",
        "bpp",
        "timing",
        "ORDER",
        "i",
    },
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot_fat
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/_boot_fat.mpy
// - frozen file name: _boot_fat.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot_fat.py, scope _boot_fat__lt_module_gt_
static const byte fun_data__boot_fat__lt_module_gt_[108] = {
    0x2c,0x16, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x20,0x28,0x22,0x2a,0x4e,0x2b,0x2d,0x4b, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'os'
    0x16,0x02, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'rp2'
    0x16,0x04, // STORE_NAME 'rp2'
    0x11,0x04, // LOAD_NAME 'rp2'
    0x14,0x05, // LOAD_METHOD 'Flash'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0a, // STORE_NAME 'bdev'
    0x48,0x17, // SETUP_EXCEPT 23
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x06, // LOAD_METHOD 'VfsFat'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x16,0x0b, // STORE_NAME 'vfs'
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x07, // LOAD_METHOD 'mount'
    0x11,0x0b, // LOAD_NAME 'vfs'
    0x10,0x08, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x13,0x06, // LOAD_ATTR 'VfsFat'
    0x14,0x09, // LOAD_METHOD 'mkfs'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x06, // LOAD_METHOD 'VfsFat'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x16,0x0b, // STORE_NAME 'vfs'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x07, // LOAD_METHOD 'mount'
    0x11,0x0b, // LOAD_NAME 'vfs'
    0x10,0x08, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x19,0x02, // DELETE_NAME 'os'
    0x19,0x0a, // DELETE_NAME 'bdev'
    0x19,0x0b, // DELETE_NAME 'vfs'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code__boot_fat__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data__boot_fat__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 108,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot_fat__lt_module_gt_ + 3,
        .opcodes = fun_data__boot_fat__lt_module_gt_ + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data__boot_fat[12] = {
    MP_QSTR__boot_fat_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_os,
    MP_QSTR_machine,
    MP_QSTR_rp2,
    MP_QSTR_Flash,
    MP_QSTR_VfsFat,
    MP_QSTR_mount,
    MP_QSTR__slash_,
    MP_QSTR_mkfs,
    MP_QSTR_bdev,
    MP_QSTR_vfs,
};

static const mp_frozen_module_t frozen_module__boot_fat = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot_fat,
        .obj_table = NULL,
    },
    .rc = &raw_code__boot_fat__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module rp2
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/rp2.mpy
// - frozen file name: rp2.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file rp2.py, scope rp2__lt_module_gt_
static const byte fun_data_rp2__lt_module_gt_[284] = {
    0x18,0x6e, // prelude
    0x01, // names: <module>
    0x60,0x28,0x8c,0x0d,0x6b,0x20,0x89,0x9e,0x42,0x64,0x20,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x44,0x25,0x45,0x24,0x24,0x24,0x24,0x24,0x24,0x44,0x24,0x24,0x26,0x66,0x20,0x26,0x45,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x66,0x20,0x84,0x29, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME '_rp2'
    0x69, // IMPORT_STAR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'micropython'
    0x1c,0x04, // IMPORT_FROM 'const'
    0x16,0x04, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x06, // LOAD_CONST_STRING 'PIOASMError'
    0x11,0x56, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'PIOASMError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x07, // LOAD_CONST_STRING 'PIOASMEmit'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x07, // STORE_NAME 'PIOASMEmit'
    0x2c,0x28, // BUILD_MAP 40
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'gpio'
    0x62, // STORE_MAP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'pins'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x0a, // LOAD_CONST_STRING 'x'
    0x62, // STORE_MAP
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x0b, // LOAD_CONST_STRING 'y'
    0x62, // STORE_MAP
    0x83, // LOAD_CONST_SMALL_INT 3
    0x10,0x0c, // LOAD_CONST_STRING 'null'
    0x62, // STORE_MAP
    0x84, // LOAD_CONST_SMALL_INT 4
    0x10,0x0d, // LOAD_CONST_STRING 'pindirs'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x0e, // LOAD_CONST_STRING 'pc'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x0f, // LOAD_CONST_STRING 'status'
    0x62, // STORE_MAP
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x10, // LOAD_CONST_STRING 'isr'
    0x62, // STORE_MAP
    0x87, // LOAD_CONST_SMALL_INT 7
    0x10,0x11, // LOAD_CONST_STRING 'osr'
    0x62, // STORE_MAP
    0x88, // LOAD_CONST_SMALL_INT 8
    0x10,0x12, // LOAD_CONST_STRING 'exec'
    0x62, // STORE_MAP
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x13, // LOAD_CONST_STRING 'invert'
    0x62, // STORE_MAP
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x14, // LOAD_CONST_STRING 'reverse'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'not_x'
    0x62, // STORE_MAP
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x16, // LOAD_CONST_STRING 'x_dec'
    0x62, // STORE_MAP
    0x83, // LOAD_CONST_SMALL_INT 3
    0x10,0x17, // LOAD_CONST_STRING 'not_y'
    0x62, // STORE_MAP
    0x84, // LOAD_CONST_SMALL_INT 4
    0x10,0x18, // LOAD_CONST_STRING 'y_dec'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x19, // LOAD_CONST_STRING 'x_not_y'
    0x62, // STORE_MAP
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x1a, // LOAD_CONST_STRING 'pin'
    0x62, // STORE_MAP
    0x87, // LOAD_CONST_SMALL_INT 7
    0x10,0x1b, // LOAD_CONST_STRING 'not_osre'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x1c, // LOAD_CONST_STRING 'noblock'
    0x62, // STORE_MAP
    0xa1, // LOAD_CONST_SMALL_INT 33
    0x10,0x1d, // LOAD_CONST_STRING 'block'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x1e, // LOAD_CONST_STRING 'iffull'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x1f, // LOAD_CONST_STRING 'ifempty'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x20, // LOAD_CONST_STRING 'clear'
    0x62, // STORE_MAP
    0x32,0x04, // MAKE_FUNCTION 4
    0x10,0x21, // LOAD_CONST_STRING 'rel'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x22, // LOAD_CONST_STRING 'wrap_target'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x23, // LOAD_CONST_STRING 'wrap'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x24, // LOAD_CONST_STRING 'label'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x25, // LOAD_CONST_STRING 'word'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x26, // LOAD_CONST_STRING 'nop'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x27, // LOAD_CONST_STRING 'jmp'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x28, // LOAD_CONST_STRING 'wait'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x29, // LOAD_CONST_STRING 'in_'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2a, // LOAD_CONST_STRING 'out'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2b, // LOAD_CONST_STRING 'push'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2c, // LOAD_CONST_STRING 'pull'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2d, // LOAD_CONST_STRING 'mov'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2e, // LOAD_CONST_STRING 'irq'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x2f, // LOAD_CONST_STRING 'set'
    0x62, // STORE_MAP
    0x16,0x57, // STORE_NAME '_pio_funcs'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x3b, // STORE_NAME 'asm_pio'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x3c, // STORE_NAME 'asm_pio_encode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_PIOASMError
static const byte fun_data_rp2_PIOASMError[15] = {
    0x00,0x06, // prelude
    0x06, // names: PIOASMError
    0x88,0x12, // code info
    0x11,0x58, // LOAD_NAME '__name__'
    0x16,0x59, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'PIOASMError'
    0x16,0x5a, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_rp2_PIOASMError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_rp2_PIOASMError + 3,
        .opcodes = fun_data_rp2_PIOASMError + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit
static const byte fun_data_rp2_PIOASMEmit[191] = {
    0x18,0x4c, // prelude
    0x07, // names: PIOASMEmit
    0x88,0x16,0x1f,0x70,0x80,0x25,0x84,0x0f,0x64,0x84,0x07,0x84,0x0b,0x64,0x64,0x40,0x64,0x60,0x88,0x0c,0x64,0x68,0x60,0x84,0x07,0x64,0x40,0x84,0x07,0x69,0x60,0x69,0x60,0x64,0x40,0x68,0x60, // code info
    0x11,0x58, // LOAD_NAME '__name__'
    0x16,0x59, // STORE_NAME '__module__'
    0x10,0x07, // LOAD_CONST_STRING 'PIOASMEmit'
    0x16,0x5a, // STORE_NAME '__qualname__'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x51, // LOAD_CONST_NONE
    0x10,0x30, // LOAD_CONST_STRING 'out_init'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x31, // LOAD_CONST_STRING 'set_init'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x32, // LOAD_CONST_STRING 'sideset_init'
    0x62, // STORE_MAP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x33, // LOAD_CONST_STRING 'in_shiftdir'
    0x62, // STORE_MAP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x34, // LOAD_CONST_STRING 'out_shiftdir'
    0x62, // STORE_MAP
    0x50, // LOAD_CONST_FALSE
    0x10,0x35, // LOAD_CONST_STRING 'autopush'
    0x62, // STORE_MAP
    0x50, // LOAD_CONST_FALSE
    0x10,0x36, // LOAD_CONST_STRING 'autopull'
    0x62, // STORE_MAP
    0xa0, // LOAD_CONST_SMALL_INT 32
    0x10,0x37, // LOAD_CONST_STRING 'push_thresh'
    0x62, // STORE_MAP
    0xa0, // LOAD_CONST_SMALL_INT 32
    0x10,0x38, // LOAD_CONST_STRING 'pull_thresh'
    0x62, // STORE_MAP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x39, // LOAD_CONST_STRING 'fifo_join'
    0x62, // STORE_MAP
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x44, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x4a, // STORE_NAME 'start_pass'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x4b, // STORE_NAME '__getitem__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x4c, // STORE_NAME 'delay'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x4d, // STORE_NAME 'side'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x22, // STORE_NAME 'wrap_target'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x23, // STORE_NAME 'wrap'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x24, // STORE_NAME 'label'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x25, // STORE_NAME 'word'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x26, // STORE_NAME 'nop'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x0a, // MAKE_FUNCTION_DEFARGS 10
    0x16,0x27, // STORE_NAME 'jmp'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x28, // STORE_NAME 'wait'
    0x32,0x0c, // MAKE_FUNCTION 12
    0x16,0x29, // STORE_NAME 'in_'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x2a, // STORE_NAME 'out'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0e, // MAKE_FUNCTION_DEFARGS 14
    0x16,0x2b, // STORE_NAME 'push'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0f, // MAKE_FUNCTION_DEFARGS 15
    0x16,0x2c, // STORE_NAME 'pull'
    0x32,0x10, // MAKE_FUNCTION 16
    0x16,0x2d, // STORE_NAME 'mov'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x11, // MAKE_FUNCTION_DEFARGS 17
    0x16,0x2e, // STORE_NAME 'irq'
    0x32,0x12, // MAKE_FUNCTION 18
    0x16,0x2f, // STORE_NAME 'set'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit___init__
static const byte fun_data_rp2_PIOASMEmit___init__[144] = {
    0xa9,0x90,0x88,0x80,0x48,0x3e, // prelude
    0x44,0x5d,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39, // names: __init__, self, out_init, set_init, sideset_init, in_shiftdir, out_shiftdir, autopush, autopull, push_thresh, pull_thresh, fifo_join
    0x80,0x26,0x4b,0x25,0x22,0x20,0x23,0x26,0x26,0x24,0x24,0x24,0x45,0x51,0x44,0x25,0x26,0x29,0x46, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x45, // LOAD_CONST_STRING 'array'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x46, // IMPORT_NAME 'uarray'
    0x1c,0x45, // IMPORT_FROM 'array'
    0xcb, // STORE_FAST 11
    0x59, // POP_TOP
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x47, // STORE_ATTR 'labels'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xcc, // STORE_FAST 12
    0xba, // LOAD_FAST 10
    0x9e, // LOAD_CONST_SMALL_INT 30
    0xf0, // BINARY_OP 25 __lshift__
    0xb9, // LOAD_FAST 9
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0x99, // LOAD_CONST_SMALL_INT 25
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb8, // LOAD_FAST 8
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0x94, // LOAD_CONST_SMALL_INT 20
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb5, // LOAD_FAST 5
    0x93, // LOAD_CONST_SMALL_INT 19
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb4, // LOAD_FAST 4
    0x92, // LOAD_CONST_SMALL_INT 18
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb7, // LOAD_FAST 7
    0x91, // LOAD_CONST_SMALL_INT 17
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb6, // LOAD_FAST 6
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xcd, // STORE_FAST 13
    0xbb, // LOAD_FAST 11
    0x10,0x48, // LOAD_CONST_STRING 'H'
    0x34,0x01, // CALL_FUNCTION 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xbc, // LOAD_FAST 12
    0xbd, // LOAD_FAST 13
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x2b,0x08, // BUILD_LIST 8
    0xb0, // LOAD_FAST 0
    0x18,0x43, // STORE_ATTR 'prog'
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x49, // STORE_ATTR 'wrap_used'
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR 'sideset_count'
    0x42,0x57, // JUMP 23
    0x12,0x5e, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0x12,0x5f, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR 'sideset_count'
    0x42,0x48, // JUMP 8
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR 'sideset_count'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x08,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2_PIOASMEmit___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 144,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 22,
        .n_exc_stack = 0,
        .scope_flags = 8,
        .n_pos_args = 1,
        .n_kwonly_args = 10,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 68,
        .line_info = fun_data_rp2_PIOASMEmit___init__ + 18,
        .opcodes = fun_data_rp2_PIOASMEmit___init__ + 37,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_start_pass
static const byte fun_data_rp2_PIOASMEmit_start_pass[110] = {
    0x2a,0x22, // prelude
    0x4a,0x5d,0x40, // names: start_pass, self, pass_
    0x80,0x3f,0x26,0x2a,0x26,0x24,0x25,0x2a,0x25,0x2b,0x29,0x2b,0x24,0x24, // code info
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0xc7,0x80, // POP_JUMP_IF_FALSE 71
    0xb0, // LOAD_FAST 0
    0x13,0x49, // LOAD_ATTR 'wrap_used'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x14,0x23, // LOAD_METHOD 'wrap'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xb0, // LOAD_FAST 0
    0x18,0x3f, // STORE_ATTR 'delay_max'
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0x44,0x6e, // POP_JUMP_IF_FALSE 46
    0xb0, // LOAD_FAST 0
    0x13,0x42, // LOAD_ATTR 'num_sideset'
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0xdc, // BINARY_OP 5 __ne__
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'sideset_opt'
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'sideset_opt'
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x3d, // STORE_ATTR 'sideset_count'
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x3f, // LOAD_ATTR 'delay_max'
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0xe4, // BINARY_OP 13 __irshift__
    0x5a, // ROT_TWO
    0x18,0x3f, // STORE_ATTR 'delay_max'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x40, // STORE_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x41, // STORE_ATTR 'num_instr'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x42, // STORE_ATTR 'num_sideset'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_start_pass = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_PIOASMEmit_start_pass,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 110,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 74,
        .line_info = fun_data_rp2_PIOASMEmit_start_pass + 5,
        .opcodes = fun_data_rp2_PIOASMEmit_start_pass + 19,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit___getitem__
static const byte fun_data_rp2_PIOASMEmit___getitem__[14] = {
    0x22,0x0a, // prelude
    0x4b,0x5d,0x60, // names: __getitem__, self, key
    0x80,0x4e, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x4c, // LOAD_METHOD 'delay'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit___getitem__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_PIOASMEmit___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 75,
        .line_info = fun_data_rp2_PIOASMEmit___getitem__ + 5,
        .opcodes = fun_data_rp2_PIOASMEmit___getitem__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_delay
static const byte fun_data_rp2_PIOASMEmit_delay[48] = {
    0x32,0x12, // prelude
    0x4c,0x5d,0x4c, // names: delay, self, delay
    0x80,0x51,0x27,0x27,0x27,0x2e, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x5c, // POP_JUMP_IF_FALSE 28
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x3f, // LOAD_ATTR 'delay_max'
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_delay = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_PIOASMEmit_delay,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 76,
        .line_info = fun_data_rp2_PIOASMEmit_delay + 5,
        .opcodes = fun_data_rp2_PIOASMEmit_delay + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_side
static const byte fun_data_rp2_PIOASMEmit_side[89] = {
    0x42,0x1a, // prelude
    0x4d,0x5d,0x61, // names: side, self, value
    0x80,0x58,0x29,0x27,0x27,0x27,0x29,0x27,0x26,0x34, // code info
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x42, // LOAD_ATTR 'num_sideset'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x42, // STORE_ATTR 'num_sideset'
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x78, // POP_JUMP_IF_FALSE 56
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x10,0x4e, // LOAD_CONST_STRING 'no sideset'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0xf0, // BINARY_OP 25 __lshift__
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x8d, // LOAD_CONST_SMALL_INT 13
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0xf3, // BINARY_OP 28 __sub__
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'sideset_opt'
    0x8c, // LOAD_CONST_SMALL_INT 12
    0xf0, // BINARY_OP 25 __lshift__
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_side = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_PIOASMEmit_side,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 89,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 77,
        .line_info = fun_data_rp2_PIOASMEmit_side + 5,
        .opcodes = fun_data_rp2_PIOASMEmit_side + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wrap_target
static const byte fun_data_rp2_PIOASMEmit_wrap_target[22] = {
    0x29,0x08, // prelude
    0x22,0x5d, // names: wrap_target, self
    0x80,0x63, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0x87, // LOAD_CONST_SMALL_INT 7
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_wrap_target = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2_PIOASMEmit_wrap_target,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_rp2_PIOASMEmit_wrap_target + 4,
        .opcodes = fun_data_rp2_PIOASMEmit_wrap_target + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wrap
static const byte fun_data_rp2_PIOASMEmit_wrap[38] = {
    0x29,0x0c, // prelude
    0x23,0x5d, // names: wrap, self
    0x80,0x66,0x28,0x30, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x4f, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0x8c, // LOAD_CONST_SMALL_INT 12
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x49, // STORE_ATTR 'wrap_used'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_wrap = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2_PIOASMEmit_wrap,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 38,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_rp2_PIOASMEmit_wrap + 4,
        .opcodes = fun_data_rp2_PIOASMEmit_wrap + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_label
static const byte fun_data_rp2_PIOASMEmit_label[46] = {
    0x2a,0x10, // prelude
    0x24,0x5d,0x24, // names: label, self, label
    0x80,0x6b,0x27,0x27,0x2c, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR 'labels'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x14,0x50, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR 'labels'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_label = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_PIOASMEmit_label,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 36,
        .line_info = fun_data_rp2_PIOASMEmit_label + 5,
        .opcodes = fun_data_rp2_PIOASMEmit_label + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_word
static const byte fun_data_rp2_PIOASMEmit_word[82] = {
    0xb3,0x01,0x1c, // prelude
    0x25,0x5d,0x5b,0x24, // names: word, self, instr, label
    0x80,0x71,0x29,0x27,0x25,0x44,0x27,0x2c,0x26,0x2d, // code info
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x41, // LOAD_ATTR 'num_instr'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x41, // STORE_ATTR 'num_instr'
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x59, // JUMP 25
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR 'labels'
    0xdd, // BINARY_OP 6 <in>
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x14,0x50, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR 'labels'
    0xb2, // LOAD_FAST 2
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x14,0x51, // LOAD_METHOD 'append'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_word = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_word,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 82,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 37,
        .line_info = fun_data_rp2_PIOASMEmit_word + 7,
        .opcodes = fun_data_rp2_PIOASMEmit_word + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_nop
static const byte fun_data_rp2_PIOASMEmit_nop[16] = {
    0x19,0x08, // prelude
    0x26,0x5d, // names: nop, self
    0x80,0x7d, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x82,0xc0,0x42, // LOAD_CONST_SMALL_INT 41026
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_nop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2_PIOASMEmit_nop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_rp2_PIOASMEmit_nop + 4,
        .opcodes = fun_data_rp2_PIOASMEmit_nop + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_jmp
static const byte fun_data_rp2_PIOASMEmit_jmp[33] = {
    0xbb,0x01,0x12, // prelude
    0x27,0x5d,0x62,0x24, // names: jmp, self, cond, label
    0x80,0x80,0x25,0x22,0x22, // code info
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb1, // LOAD_FAST 1
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_jmp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_jmp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_rp2_PIOASMEmit_jmp + 7,
        .opcodes = fun_data_rp2_PIOASMEmit_jmp + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wait
static const byte fun_data_rp2_PIOASMEmit_wait[52] = {
    0xc0,0x04,0x16, // prelude
    0x28,0x5d,0x63,0x64,0x65, // names: wait, self, polarity, src, index
    0x80,0x86,0x25,0x24,0x25,0x24, // code info
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc2, // STORE_FAST 2
    0x42,0x49, // JUMP 9
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0xc2, // STORE_FAST 2
    0x42,0x40, // JUMP 0
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x80,0xc0,0x00, // LOAD_CONST_SMALL_INT 8192
    0xb1, // LOAD_FAST 1
    0x87, // LOAD_CONST_SMALL_INT 7
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb3, // LOAD_FAST 3
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_rp2_PIOASMEmit_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 52,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_rp2_PIOASMEmit_wait + 8,
        .opcodes = fun_data_rp2_PIOASMEmit_wait + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_in_
static const byte fun_data_rp2_PIOASMEmit_in_[55] = {
    0x3b,0x10, // prelude
    0x29,0x5d,0x64,0x66, // names: in_, self, src, data
    0x80,0x8d,0x2f,0x2c, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb2, // LOAD_FAST 2
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xd7, // BINARY_OP 0 __lt__
    0x46,0x04, // JUMP_IF_FALSE_OR_POP 4
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x14,0x50, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_in_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_in_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 55,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_rp2_PIOASMEmit_in_ + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_in_ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_out
static const byte fun_data_rp2_PIOASMEmit_out[64] = {
    0x3b,0x14, // prelude
    0x2a,0x5d,0x67,0x66, // names: out, self, dest, data
    0x80,0x92,0x25,0x22,0x2f,0x2c, // code info
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb2, // LOAD_FAST 2
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xd7, // BINARY_OP 0 __lt__
    0x46,0x04, // JUMP_IF_FALSE_OR_POP 4
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x14,0x50, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x81,0xc0,0x00, // LOAD_CONST_SMALL_INT 24576
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_out = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_out,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_rp2_PIOASMEmit_out + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_out + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_push
static const byte fun_data_rp2_PIOASMEmit_push[42] = {
    0xbb,0x80,0x01,0x12, // prelude
    0x2b,0x5d,0x61,0x68, // names: push, self, value, value2
    0x80,0x99,0x24,0x25,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x43,0x44, // POP_JUMP_IF_TRUE 4
    0xb1, // LOAD_FAST 1
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_push = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_push,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_rp2_PIOASMEmit_push + 8,
        .opcodes = fun_data_rp2_PIOASMEmit_push + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_pull
static const byte fun_data_rp2_PIOASMEmit_pull[42] = {
    0xbb,0x80,0x01,0x12, // prelude
    0x2c,0x5d,0x61,0x68, // names: pull, self, value, value2
    0x80,0x9f,0x24,0x25,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x43,0x44, // POP_JUMP_IF_TRUE 4
    0xb1, // LOAD_FAST 1
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x82,0x81,0x00, // LOAD_CONST_SMALL_INT 32896
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_pull = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_pull,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 44,
        .line_info = fun_data_rp2_PIOASMEmit_pull + 8,
        .opcodes = fun_data_rp2_PIOASMEmit_pull + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_mov
static const byte fun_data_rp2_PIOASMEmit_mov[33] = {
    0x3b,0x10, // prelude
    0x2d,0x5d,0x67,0x64, // names: mov, self, dest, src
    0x80,0xa5,0x25,0x22, // code info
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x84, // LOAD_CONST_SMALL_INT 4
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x82,0xc0,0x00, // LOAD_CONST_SMALL_INT 40960
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_mov = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_mov,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_rp2_PIOASMEmit_mov + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_mov + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_irq
static const byte fun_data_rp2_PIOASMEmit_irq[39] = {
    0xbb,0x01,0x12, // prelude
    0x2e,0x5d,0x69,0x65, // names: irq, self, mod, index
    0x80,0xaa,0x25,0x22,0x22, // code info
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb1, // LOAD_FAST 1
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x83,0x80,0x00, // LOAD_CONST_SMALL_INT 49152
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_irq = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_irq,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 39,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_rp2_PIOASMEmit_irq + 7,
        .opcodes = fun_data_rp2_PIOASMEmit_irq + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_set
static const byte fun_data_rp2_PIOASMEmit_set[24] = {
    0x3b,0x0c, // prelude
    0x2f,0x5d,0x67,0x66, // names: set, self, dest, data
    0x80,0xb0, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'word'
    0x22,0x83,0xc0,0x00, // LOAD_CONST_SMALL_INT 57344
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_PIOASMEmit_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_PIOASMEmit_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_rp2_PIOASMEmit_set + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_set + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_rp2_PIOASMEmit[] = {
    &raw_code_rp2_PIOASMEmit___init__,
    &raw_code_rp2_PIOASMEmit_start_pass,
    &raw_code_rp2_PIOASMEmit___getitem__,
    &raw_code_rp2_PIOASMEmit_delay,
    &raw_code_rp2_PIOASMEmit_side,
    &raw_code_rp2_PIOASMEmit_wrap_target,
    &raw_code_rp2_PIOASMEmit_wrap,
    &raw_code_rp2_PIOASMEmit_label,
    &raw_code_rp2_PIOASMEmit_word,
    &raw_code_rp2_PIOASMEmit_nop,
    &raw_code_rp2_PIOASMEmit_jmp,
    &raw_code_rp2_PIOASMEmit_wait,
    &raw_code_rp2_PIOASMEmit_in_,
    &raw_code_rp2_PIOASMEmit_out,
    &raw_code_rp2_PIOASMEmit_push,
    &raw_code_rp2_PIOASMEmit_pull,
    &raw_code_rp2_PIOASMEmit_mov,
    &raw_code_rp2_PIOASMEmit_irq,
    &raw_code_rp2_PIOASMEmit_set,
};

static const mp_raw_code_t raw_code_rp2_PIOASMEmit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_rp2_PIOASMEmit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 191,
    #endif
    .children = (void *)&children_rp2_PIOASMEmit,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 19,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_rp2_PIOASMEmit + 3,
        .opcodes = fun_data_rp2_PIOASMEmit + 40,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_
static const byte fun_data_rp2__lt_lambda_gt_[10] = {
    0x11,0x08, // prelude
    0x3a,0x0a, // names: <lambda>, x
    0x80,0xc4, // code info
    0xb0, // LOAD_FAST 0
    0x88, // LOAD_CONST_SMALL_INT 8
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2__lt_lambda_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2__lt_lambda_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_rp2__lt_lambda_gt_ + 4,
        .opcodes = fun_data_rp2__lt_lambda_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_2
static const byte fun_data_rp2__lt_lambda_gt_2[10] = {
    0x11,0x08, // prelude
    0x3a,0x0a, // names: <lambda>, x
    0x80,0xc5, // code info
    0xb0, // LOAD_FAST 0
    0x90, // LOAD_CONST_SMALL_INT 16
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2__lt_lambda_gt_2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2__lt_lambda_gt_2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_rp2__lt_lambda_gt_2 + 4,
        .opcodes = fun_data_rp2__lt_lambda_gt_2 + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_3
static const byte fun_data_rp2__lt_lambda_gt_3[10] = {
    0x11,0x08, // prelude
    0x3a,0x0a, // names: <lambda>, x
    0x80,0xd7, // code info
    0xb0, // LOAD_FAST 0
    0x90, // LOAD_CONST_SMALL_INT 16
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2__lt_lambda_gt_3 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rp2__lt_lambda_gt_3,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_rp2__lt_lambda_gt_3 + 4,
        .opcodes = fun_data_rp2__lt_lambda_gt_3 + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_asm_pio
static const byte fun_data_rp2_asm_pio[28] = {
    0xb0,0x80,0x40,0x0d, // prelude
    0x3b, // names: asm_pio
    0x80,0xeb,0x4a,0x85,0x22,0x02, // code info
    0x12,0x07, // LOAD_GLOBAL 'PIOASMEmit'
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x00, // CALL_FUNCTION_VAR_KW 256
    0x27,0x02, // STORE_DEREF 2
    0xb2, // LOAD_FAST 2
    0x20,0x00,0x01, // MAKE_CLOSURE 0
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
// child of rp2_asm_pio
// frozen bytecode for file rp2.py, scope rp2_asm_pio_dec
static const byte fun_data_rp2_asm_pio_dec[218] = {
    0x32,0x3c, // prelude
    0x52,0x02,0x6a, // names: dec, *, f
    0x80,0xee,0x40,0x23,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x48,0x28,0x28,0x49,0x28,0x44,0x28,0x44,0x28,0x49, // code info
    0x12,0x57, // LOAD_GLOBAL '_pio_funcs'
    0xc2, // STORE_FAST 2
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x22, // LOAD_ATTR 'wrap_target'
    0xb2, // LOAD_FAST 2
    0x10,0x22, // LOAD_CONST_STRING 'wrap_target'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x23, // LOAD_ATTR 'wrap'
    0xb2, // LOAD_FAST 2
    0x10,0x23, // LOAD_CONST_STRING 'wrap'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x24, // LOAD_ATTR 'label'
    0xb2, // LOAD_FAST 2
    0x10,0x24, // LOAD_CONST_STRING 'label'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x25, // LOAD_ATTR 'word'
    0xb2, // LOAD_FAST 2
    0x10,0x25, // LOAD_CONST_STRING 'word'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x26, // LOAD_ATTR 'nop'
    0xb2, // LOAD_FAST 2
    0x10,0x26, // LOAD_CONST_STRING 'nop'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x27, // LOAD_ATTR 'jmp'
    0xb2, // LOAD_FAST 2
    0x10,0x27, // LOAD_CONST_STRING 'jmp'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x28, // LOAD_ATTR 'wait'
    0xb2, // LOAD_FAST 2
    0x10,0x28, // LOAD_CONST_STRING 'wait'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x29, // LOAD_ATTR 'in_'
    0xb2, // LOAD_FAST 2
    0x10,0x29, // LOAD_CONST_STRING 'in_'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2a, // LOAD_ATTR 'out'
    0xb2, // LOAD_FAST 2
    0x10,0x2a, // LOAD_CONST_STRING 'out'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2b, // LOAD_ATTR 'push'
    0xb2, // LOAD_FAST 2
    0x10,0x2b, // LOAD_CONST_STRING 'push'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2c, // LOAD_ATTR 'pull'
    0xb2, // LOAD_FAST 2
    0x10,0x2c, // LOAD_CONST_STRING 'pull'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2d, // LOAD_ATTR 'mov'
    0xb2, // LOAD_FAST 2
    0x10,0x2d, // LOAD_CONST_STRING 'mov'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2e, // LOAD_ATTR 'irq'
    0xb2, // LOAD_FAST 2
    0x10,0x2e, // LOAD_CONST_STRING 'irq'
    0x56, // STORE_SUBSCR
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x2f, // LOAD_ATTR 'set'
    0xb2, // LOAD_FAST 2
    0x10,0x2f, // LOAD_CONST_STRING 'set'
    0x56, // STORE_SUBSCR
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '__globals__'
    0x14,0x54, // LOAD_METHOD 'copy'
    0x36,0x00, // CALL_METHOD 0
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '__globals__'
    0x14,0x20, // LOAD_METHOD 'clear'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '__globals__'
    0x14,0x55, // LOAD_METHOD 'update'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x4a, // LOAD_METHOD 'start_pass'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x4a, // LOAD_METHOD 'start_pass'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '__globals__'
    0x14,0x20, // LOAD_METHOD 'clear'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '__globals__'
    0x14,0x55, // LOAD_METHOD 'update'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x43, // LOAD_ATTR 'prog'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_asm_pio_dec = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_rp2_asm_pio_dec,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 218,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 82,
        .line_info = fun_data_rp2_asm_pio_dec + 5,
        .opcodes = fun_data_rp2_asm_pio_dec + 32,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_rp2_asm_pio[] = {
    &raw_code_rp2_asm_pio_dec,
};

static const mp_raw_code_t raw_code_rp2_asm_pio = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x02,
    .n_pos_args = 0,
    .fun_data = fun_data_rp2_asm_pio,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = (void *)&children_rp2_asm_pio,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_rp2_asm_pio + 5,
        .opcodes = fun_data_rp2_asm_pio + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_asm_pio_encode
static const byte fun_data_rp2_asm_pio_encode[177] = {
    0xbb,0x01,0x36, // prelude
    0x3c,0x5b,0x3d,0x3e, // names: asm_pio_encode, instr, sideset_count, sideset_opt
    0x90,0x14,0x25,0x24,0x26,0x2c,0x24,0x24,0x44,0x23,0x27,0x47,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x47,0x47,0x2d,0x27, // code info
    0x12,0x07, // LOAD_GLOBAL 'PIOASMEmit'
    0x34,0x00, // CALL_FUNCTION 0
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x18,0x3d, // STORE_ATTR 'sideset_count'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0xb3, // LOAD_FAST 3
    0x18,0x3e, // STORE_ATTR 'sideset_opt'
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xb3, // LOAD_FAST 3
    0x13,0x3d, // LOAD_ATTR 'sideset_count'
    0xb3, // LOAD_FAST 3
    0x13,0x3e, // LOAD_ATTR 'sideset_opt'
    0xf2, // BINARY_OP 27 __add__
    0xf1, // BINARY_OP 26 __rshift__
    0xb3, // LOAD_FAST 3
    0x18,0x3f, // STORE_ATTR 'delay_max'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb3, // LOAD_FAST 3
    0x18,0x40, // STORE_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x18,0x41, // STORE_ATTR 'num_instr'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x18,0x42, // STORE_ATTR 'num_sideset'
    0x12,0x57, // LOAD_GLOBAL '_pio_funcs'
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x13,0x25, // LOAD_ATTR 'word'
    0xb4, // LOAD_FAST 4
    0x10,0x25, // LOAD_CONST_STRING 'word'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x26, // LOAD_ATTR 'nop'
    0xb4, // LOAD_FAST 4
    0x10,0x26, // LOAD_CONST_STRING 'nop'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x28, // LOAD_ATTR 'wait'
    0xb4, // LOAD_FAST 4
    0x10,0x28, // LOAD_CONST_STRING 'wait'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x29, // LOAD_ATTR 'in_'
    0xb4, // LOAD_FAST 4
    0x10,0x29, // LOAD_CONST_STRING 'in_'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2a, // LOAD_ATTR 'out'
    0xb4, // LOAD_FAST 4
    0x10,0x2a, // LOAD_CONST_STRING 'out'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2b, // LOAD_ATTR 'push'
    0xb4, // LOAD_FAST 4
    0x10,0x2b, // LOAD_CONST_STRING 'push'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2c, // LOAD_ATTR 'pull'
    0xb4, // LOAD_FAST 4
    0x10,0x2c, // LOAD_CONST_STRING 'pull'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2d, // LOAD_ATTR 'mov'
    0xb4, // LOAD_FAST 4
    0x10,0x2d, // LOAD_CONST_STRING 'mov'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2e, // LOAD_ATTR 'irq'
    0xb4, // LOAD_FAST 4
    0x10,0x2e, // LOAD_CONST_STRING 'irq'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x13,0x2f, // LOAD_ATTR 'set'
    0xb4, // LOAD_FAST 4
    0x10,0x2f, // LOAD_CONST_STRING 'set'
    0x56, // STORE_SUBSCR
    0x12,0x12, // LOAD_GLOBAL 'exec'
    0xb0, // LOAD_FAST 0
    0xb4, // LOAD_FAST 4
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x13,0x43, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x13,0x43, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_rp2_asm_pio_encode = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_rp2_asm_pio_encode,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 177,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 60,
        .line_info = fun_data_rp2_asm_pio_encode + 7,
        .opcodes = fun_data_rp2_asm_pio_encode + 30,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_rp2__lt_module_gt_[] = {
    &raw_code_rp2_PIOASMError,
    &raw_code_rp2_PIOASMEmit,
    &raw_code_rp2__lt_lambda_gt_,
    &raw_code_rp2__lt_lambda_gt_2,
    &raw_code_rp2__lt_lambda_gt_3,
    &raw_code_rp2_asm_pio,
    &raw_code_rp2_asm_pio_encode,
};

static const mp_raw_code_t raw_code_rp2__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_rp2__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 284,
    #endif
    .children = (void *)&children_rp2__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_rp2__lt_module_gt_ + 3,
        .opcodes = fun_data_rp2__lt_module_gt_ + 57,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_rp2[107] = {
    MP_QSTR_rp2_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR__rp2,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_PIOASMError,
    MP_QSTR_PIOASMEmit,
    MP_QSTR_gpio,
    MP_QSTR_pins,
    MP_QSTR_x,
    MP_QSTR_y,
    MP_QSTR_null,
    MP_QSTR_pindirs,
    MP_QSTR_pc,
    MP_QSTR_status,
    MP_QSTR_isr,
    MP_QSTR_osr,
    MP_QSTR_exec,
    MP_QSTR_invert,
    MP_QSTR_reverse,
    MP_QSTR_not_x,
    MP_QSTR_x_dec,
    MP_QSTR_not_y,
    MP_QSTR_y_dec,
    MP_QSTR_x_not_y,
    MP_QSTR_pin,
    MP_QSTR_not_osre,
    MP_QSTR_noblock,
    MP_QSTR_block,
    MP_QSTR_iffull,
    MP_QSTR_ifempty,
    MP_QSTR_clear,
    MP_QSTR_rel,
    MP_QSTR_wrap_target,
    MP_QSTR_wrap,
    MP_QSTR_label,
    MP_QSTR_word,
    MP_QSTR_nop,
    MP_QSTR_jmp,
    MP_QSTR_wait,
    MP_QSTR_in_,
    MP_QSTR_out,
    MP_QSTR_push,
    MP_QSTR_pull,
    MP_QSTR_mov,
    MP_QSTR_irq,
    MP_QSTR_set,
    MP_QSTR_out_init,
    MP_QSTR_set_init,
    MP_QSTR_sideset_init,
    MP_QSTR_in_shiftdir,
    MP_QSTR_out_shiftdir,
    MP_QSTR_autopush,
    MP_QSTR_autopull,
    MP_QSTR_push_thresh,
    MP_QSTR_pull_thresh,
    MP_QSTR_fifo_join,
    MP_QSTR__lt_lambda_gt_,
    MP_QSTR_asm_pio,
    MP_QSTR_asm_pio_encode,
    MP_QSTR_sideset_count,
    MP_QSTR_sideset_opt,
    MP_QSTR_delay_max,
    MP_QSTR_pass_,
    MP_QSTR_num_instr,
    MP_QSTR_num_sideset,
    MP_QSTR_prog,
    MP_QSTR___init__,
    MP_QSTR_array,
    MP_QSTR_uarray,
    MP_QSTR_labels,
    MP_QSTR_H,
    MP_QSTR_wrap_used,
    MP_QSTR_start_pass,
    MP_QSTR___getitem__,
    MP_QSTR_delay,
    MP_QSTR_side,
    MP_QSTR_no_space_sideset,
    MP_QSTR_AssertionError,
    MP_QSTR_format,
    MP_QSTR_append,
    MP_QSTR_dec,
    MP_QSTR___globals__,
    MP_QSTR_copy,
    MP_QSTR_update,
    MP_QSTR_Exception,
    MP_QSTR__pio_funcs,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_instr,
    MP_QSTR_len,
    MP_QSTR_self,
    MP_QSTR_isinstance,
    MP_QSTR_int,
    MP_QSTR_key,
    MP_QSTR_value,
    MP_QSTR_cond,
    MP_QSTR_polarity,
    MP_QSTR_src,
    MP_QSTR_index,
    MP_QSTR_data,
    MP_QSTR_dest,
    MP_QSTR_value2,
    MP_QSTR_mod,
    MP_QSTR_f,
};

// constants
static const mp_obj_str_t const_obj_rp2_0 = {{&mp_type_str}, 13, 31, (const byte*)"\x65\x78\x70\x65\x63\x74\x69\x6e\x67\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x31\x20\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"};
static const mp_obj_int_t const_obj_rp2_1 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x0,0x4000}}};

// constant table
static const mp_rom_obj_t const_obj_table_data_rp2[7] = {
    MP_ROM_PTR(&const_obj_rp2_0),
    MP_ROM_PTR(&const_obj_rp2_1),
    MP_ROM_QSTR(MP_QSTR_delay_space_too_space_large),
    MP_ROM_QSTR(MP_QSTR_sideset_space_too_space_large),
    MP_ROM_QSTR(MP_QSTR_duplicate_space_label_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_unknown_space_label_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_invalid_space_bit_space_count_space__brace_open__brace_close_),
};

static const mp_frozen_module_t frozen_module_rp2 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_rp2,
        .obj_table = (mp_obj_t *)&const_obj_table_data_rp2,
    },
    .rc = &raw_code_rp2__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/_boot.mpy
// - frozen file name: _boot.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot.py, scope _boot__lt_module_gt_
static const byte fun_data__boot__lt_module_gt_[114] = {
    0x3c,0x14, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x40,0x28,0x22,0x53,0x31,0x33,0x4b, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'os'
    0x16,0x02, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'rp2'
    0x16,0x04, // STORE_NAME 'rp2'
    0x11,0x04, // LOAD_NAME 'rp2'
    0x14,0x05, // LOAD_METHOD 'Flash'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0b, // STORE_NAME 'bdev'
    0x48,0x12, // SETUP_EXCEPT 18
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x06, // LOAD_METHOD 'VfsLfs2'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x0c, // STORE_NAME 'vfs'
    0x4a,0x25, // POP_EXCEPT_JUMP 37
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x13,0x06, // LOAD_ATTR 'VfsLfs2'
    0x14,0x08, // LOAD_METHOD 'mkfs'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x06, // LOAD_METHOD 'VfsLfs2'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x0c, // STORE_NAME 'vfs'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x09, // LOAD_METHOD 'mount'
    0x11,0x0c, // LOAD_NAME 'vfs'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x19,0x02, // DELETE_NAME 'os'
    0x19,0x0b, // DELETE_NAME 'bdev'
    0x19,0x0c, // DELETE_NAME 'vfs'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code__boot__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data__boot__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 114,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot__lt_module_gt_ + 3,
        .opcodes = fun_data__boot__lt_module_gt_ + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data__boot[13] = {
    MP_QSTR__boot_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_os,
    MP_QSTR_machine,
    MP_QSTR_rp2,
    MP_QSTR_Flash,
    MP_QSTR_VfsLfs2,
    MP_QSTR_progsize,
    MP_QSTR_mkfs,
    MP_QSTR_mount,
    MP_QSTR__slash_,
    MP_QSTR_bdev,
    MP_QSTR_vfs,
};

static const mp_frozen_module_t frozen_module__boot = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot,
        .obj_table = NULL,
    },
    .rc = &raw_code__boot__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module main
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/main.mpy
// - frozen file name: main.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file main.py, scope main__lt_module_gt_
static const byte fun_data_main__lt_module_gt_[54] = {
    0x08,0x12, // prelude
    0x01, // names: <module>
    0x80,0x16,0x4c,0x24,0x43,0x20,0x27,0x27, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'sleep'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'utime'
    0x1c,0x02, // IMPORT_FROM 'sleep'
    0x16,0x02, // STORE_NAME 'sleep'
    0x59, // POP_TOP
    0x10,0x04, // LOAD_CONST_STRING 'foo'
    0x16,0x05, // STORE_NAME 'name'
    0xaa, // LOAD_CONST_SMALL_INT 42
    0x16,0x06, // STORE_NAME 'number'
    0x11,0x07, // LOAD_NAME 'print'
    0x11,0x05, // LOAD_NAME 'name'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x11,0x07, // LOAD_NAME 'print'
    0x11,0x06, // LOAD_NAME 'number'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'sleep'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x2a, // JUMP -22
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_main__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_main__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 54,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_main__lt_module_gt_ + 3,
        .opcodes = fun_data_main__lt_module_gt_ + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_main[8] = {
    MP_QSTR_main_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sleep,
    MP_QSTR_utime,
    MP_QSTR_foo,
    MP_QSTR_name,
    MP_QSTR_number,
    MP_QSTR_print,
};

static const mp_frozen_module_t frozen_module_main = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_main,
        .obj_table = NULL,
    },
    .rc = &raw_code_main__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio___init__
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/__init__.mpy
// - frozen file name: uasyncio/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init____lt_module_gt_
static const byte fun_data_uasyncio___init____lt_module_gt_[75] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'core'
    0x69, // IMPORT_STAR
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x0e, // STORE_NAME '__version__'
    0x2c,0x0a, // BUILD_MAP 10
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x05, // LOAD_CONST_STRING 'wait_for'
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x06, // LOAD_CONST_STRING 'gather'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x10,0x08, // LOAD_CONST_STRING 'Event'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x62, // STORE_MAP
    0x10,0x09, // LOAD_CONST_STRING 'lock'
    0x10,0x0a, // LOAD_CONST_STRING 'Lock'
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x62, // STORE_MAP
    0x16,0x0f, // STORE_NAME '_attrs'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio___init____lt_module_gt_
// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init_____getattr__
static const byte fun_data_uasyncio___init_____getattr__[48] = {
    0x49,0x04, // prelude
    0x0c,0x10, // names: __getattr__, attr
     // code info
    0x12,0x0f, // LOAD_GLOBAL '_attrs'
    0x14,0x0d, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x11, // LOAD_GLOBAL 'AttributeError'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x12, // LOAD_GLOBAL 'getattr'
    0x12,0x13, // LOAD_GLOBAL '__import__'
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x81, // LOAD_CONST_SMALL_INT 1
    0x34,0x05, // CALL_FUNCTION 5
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x14, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio___init_____getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio___init_____getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio___init_____getattr__ + 4,
        .opcodes = fun_data_uasyncio___init_____getattr__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio___init____lt_module_gt_[] = {
    &raw_code_uasyncio___init_____getattr__,
};

static const mp_raw_code_t raw_code_uasyncio___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 75,
    #endif
    .children = (void *)&children_uasyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio___init____lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio___init____lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio___init__[21] = {
    MP_QSTR_uasyncio_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR_core,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_lock,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR___getattr__,
    MP_QSTR_get,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_AttributeError,
    MP_QSTR_getattr,
    MP_QSTR___import__,
    MP_QSTR_globals,
};

// constants
static const mp_rom_obj_tuple_t const_obj_uasyncio___init___0 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(3),
    MP_ROM_INT(0),
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_uasyncio___init__[7] = {
    MP_ROM_PTR(&const_obj_uasyncio___init___0),
    MP_ROM_QSTR(MP_QSTR_wait_for_ms),
    MP_ROM_QSTR(MP_QSTR_ThreadSafeFlag),
    MP_ROM_QSTR(MP_QSTR_open_connection),
    MP_ROM_QSTR(MP_QSTR_start_server),
    MP_ROM_QSTR(MP_QSTR_StreamReader),
    MP_ROM_QSTR(MP_QSTR_StreamWriter),
};

static const mp_frozen_module_t frozen_module_uasyncio___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio___init__,
    },
    .rc = &raw_code_uasyncio___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_core
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/core.mpy
// - frozen file name: uasyncio/core.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt_
static const byte fun_data_uasyncio_core__lt_module_gt_[215] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'ticks_ms'
    0x10,0x03, // LOAD_CONST_STRING 'ticks_diff'
    0x10,0x04, // LOAD_CONST_STRING 'ticks_add'
    0x2a,0x03, // BUILD_TUPLE 3
    0x1b,0x05, // IMPORT_NAME 'time'
    0x1c,0x02, // IMPORT_FROM 'ticks_ms'
    0x16,0x47, // STORE_NAME 'ticks'
    0x1c,0x03, // IMPORT_FROM 'ticks_diff'
    0x16,0x03, // STORE_NAME 'ticks_diff'
    0x1c,0x04, // IMPORT_FROM 'ticks_add'
    0x16,0x04, // STORE_NAME 'ticks_add'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'sys'
    0x16,0x06, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'select'
    0x16,0x07, // STORE_NAME 'select'
    0x48,0x14, // SETUP_EXCEPT 20
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0a, // IMPORT_NAME '_uasyncio'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0b, // IMPORT_NAME 'task'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x11,0x48, // LOAD_NAME 'BaseException'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'CancelledError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x11,0x49, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'TimeoutError'
    0x2c,0x03, // BUILD_MAP 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x62, // STORE_MAP
    0x16,0x4a, // STORE_NAME '_exc_context'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x11, // STORE_NAME 'SingletonGenerator'
    0x11,0x11, // LOAD_NAME 'SingletonGenerator'
    0x34,0x00, // CALL_FUNCTION 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x14, // STORE_NAME 'sleep_ms'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x16, // STORE_NAME 'sleep'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x05, // MAKE_FUNCTION 5
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x12, // STORE_NAME 'IOQueue'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x17, // STORE_NAME '_promote_to_task'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x18, // STORE_NAME 'create_task'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x26, // STORE_NAME 'run'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x27, // STORE_NAME '_stopper'
    0x51, // LOAD_CONST_NONE
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x0b, // MAKE_FUNCTION 11
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x13, // STORE_NAME 'Loop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0c, // MAKE_FUNCTION_DEFARGS 12
    0x16,0x28, // STORE_NAME 'get_event_loop'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x29, // STORE_NAME 'current_task'
    0x32,0x0e, // MAKE_FUNCTION 14
    0x16,0x2a, // STORE_NAME 'new_event_loop'
    0x11,0x2a, // LOAD_NAME 'new_event_loop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_CancelledError
static const byte fun_data_uasyncio_core_CancelledError[13] = {
    0x00,0x02, // prelude
    0x0c, // names: CancelledError
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_CancelledError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_CancelledError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio_core_CancelledError + 3,
        .opcodes = fun_data_uasyncio_core_CancelledError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_TimeoutError
static const byte fun_data_uasyncio_core_TimeoutError[13] = {
    0x00,0x02, // prelude
    0x0d, // names: TimeoutError
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_TimeoutError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_TimeoutError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_core_TimeoutError + 3,
        .opcodes = fun_data_uasyncio_core_TimeoutError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator
static const byte fun_data_uasyncio_core_SingletonGenerator[25] = {
    0x00,0x02, // prelude
    0x11, // names: SingletonGenerator
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME '__iter__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME '__next__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___init__
static const byte fun_data_uasyncio_core_SingletonGenerator___init__[17] = {
    0x11,0x04, // prelude
    0x2b,0x60, // names: __init__, self
     // code info
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'exc'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___init__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___iter__
static const byte fun_data_uasyncio_core_SingletonGenerator___iter__[6] = {
    0x09,0x04, // prelude
    0x2d,0x60, // names: __iter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___iter__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___iter__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___next__
static const byte fun_data_uasyncio_core_SingletonGenerator___next__[42] = {
    0x21,0x04, // prelude
    0x2e,0x60, // names: __next__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x18,0x2f, // STORE_ATTR '__traceback__'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___next__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___next__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_core_SingletonGenerator[] = {
    &raw_code_uasyncio_core_SingletonGenerator___init__,
    &raw_code_uasyncio_core_SingletonGenerator___iter__,
    &raw_code_uasyncio_core_SingletonGenerator___next__,
};

static const mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = (void *)&children_uasyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_uasyncio_core_SingletonGenerator + 3,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_sleep_ms
static const byte fun_data_uasyncio_core_sleep_ms[25] = {
    0xb2,0x01,0x06, // prelude
    0x14,0x4f,0x50, // names: sleep_ms, t, sgen
     // code info
    0x12,0x04, // LOAD_GLOBAL 'ticks_add'
    0x12,0x47, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x51, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xb1, // LOAD_FAST 1
    0x18,0x15, // STORE_ATTR 'state'
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_sleep_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_sleep_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_core_sleep_ms + 6,
        .opcodes = fun_data_uasyncio_core_sleep_ms + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_sleep
static const byte fun_data_uasyncio_core_sleep[18] = {
    0x21,0x04, // prelude
    0x16,0x4f, // names: sleep, t
     // code info
    0x12,0x14, // LOAD_GLOBAL 'sleep_ms'
    0x12,0x52, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x22,0x87,0x68, // LOAD_CONST_SMALL_INT 1000
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_sleep = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_sleep,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_core_sleep + 4,
        .opcodes = fun_data_uasyncio_core_sleep + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue
static const byte fun_data_uasyncio_core_IOQueue[41] = {
    0x00,0x02, // prelude
    0x12, // names: IOQueue
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x32, // STORE_NAME '_enqueue'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x37, // STORE_NAME '_dequeue'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x39, // STORE_NAME 'queue_read'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3a, // STORE_NAME 'queue_write'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x3b, // STORE_NAME 'remove'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x1f, // STORE_NAME 'wait_io_event'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue___init__
static const byte fun_data_uasyncio_core_IOQueue___init__[20] = {
    0x11,0x04, // prelude
    0x2b,0x60, // names: __init__, self
     // code info
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x14,0x30, // LOAD_METHOD 'poll'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x31, // STORE_ATTR 'poller'
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x1e, // STORE_ATTR 'map'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_IOQueue___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_uasyncio_core_IOQueue___init__ + 4,
        .opcodes = fun_data_uasyncio_core_IOQueue___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue__enqueue
static const byte fun_data_uasyncio_core_IOQueue__enqueue[105] = {
    0x4b,0x08, // prelude
    0x32,0x60,0x61,0x62, // names: _enqueue, self, s, idx
     // code info
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb1, // LOAD_FAST 1
    0x2b,0x03, // BUILD_LIST 3
    0xc3, // STORE_FAST 3
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x33, // LOAD_METHOD 'register'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x42,0x44, // JUMP 4
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb4, // LOAD_FAST 4
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb1, // LOAD_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xed, // BINARY_OP 22 __or__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0x18,0x21, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue__enqueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_core_IOQueue__enqueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 105,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_uasyncio_core_IOQueue__enqueue + 6,
        .opcodes = fun_data_uasyncio_core_IOQueue__enqueue + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue__dequeue
static const byte fun_data_uasyncio_core_IOQueue__dequeue[27] = {
    0x22,0x06, // prelude
    0x37,0x60,0x61, // names: _dequeue, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x53, // LOAD_NULL
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x38, // LOAD_METHOD 'unregister'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue__dequeue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue__dequeue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_uasyncio_core_IOQueue__dequeue + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue__dequeue + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_queue_read
static const byte fun_data_uasyncio_core_IOQueue_queue_read[15] = {
    0x2a,0x06, // prelude
    0x39,0x60,0x61, // names: queue_read, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue_queue_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_queue_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_uasyncio_core_IOQueue_queue_read + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_queue_read + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_queue_write
static const byte fun_data_uasyncio_core_IOQueue_queue_write[15] = {
    0x2a,0x06, // prelude
    0x3a,0x60,0x61, // names: queue_write, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue_queue_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_queue_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_uasyncio_core_IOQueue_queue_write + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_queue_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_remove
static const byte fun_data_uasyncio_core_IOQueue_remove[65] = {
    0x6a,0x06, // prelude
    0x3b,0x60,0x0b, // names: remove, self, task
     // code info
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x5f, // GET_ITER_STACK
    0x4b,0x1f, // FOR_ITER 31
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb5, // LOAD_FAST 5
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb6, // LOAD_FAST 6
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x1f, // JUMP -33
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x42, // JUMP 2
    0x42,0x06, // JUMP -58
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 65,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_uasyncio_core_IOQueue_remove + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_remove + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_wait_io_event
static const byte fun_data_uasyncio_core_IOQueue_wait_io_event[156] = {
    0x62,0x06, // prelude
    0x1f,0x60,0x64, // names: wait_io_event, self, dt
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x3c, // LOAD_METHOD 'ipoll'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x89,0x01, // FOR_ITER 137
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc2, // STORE_FAST 2
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0xf4,0x7e, // JUMP -140
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_IOQueue_wait_io_event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_wait_io_event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 156,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_uasyncio_core_IOQueue_wait_io_event + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_wait_io_event + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_core_IOQueue[] = {
    &raw_code_uasyncio_core_IOQueue___init__,
    &raw_code_uasyncio_core_IOQueue__enqueue,
    &raw_code_uasyncio_core_IOQueue__dequeue,
    &raw_code_uasyncio_core_IOQueue_queue_read,
    &raw_code_uasyncio_core_IOQueue_queue_write,
    &raw_code_uasyncio_core_IOQueue_remove,
    &raw_code_uasyncio_core_IOQueue_wait_io_event,
};

static const mp_raw_code_t raw_code_uasyncio_core_IOQueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = (void *)&children_uasyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_core_IOQueue + 3,
        .opcodes = fun_data_uasyncio_core_IOQueue + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__promote_to_task
static const byte fun_data_uasyncio_core__promote_to_task[21] = {
    0x19,0x04, // prelude
    0x17,0x53, // names: _promote_to_task, aw
     // code info
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb0, // LOAD_FAST 0
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core__promote_to_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__promote_to_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_uasyncio_core__promote_to_task + 4,
        .opcodes = fun_data_uasyncio_core__promote_to_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_create_task
static const byte fun_data_uasyncio_core_create_task[40] = {
    0x21,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x55, // LOAD_GLOBAL 'hasattr'
    0xb0, // LOAD_FAST 0
    0x10,0x19, // LOAD_CONST_STRING 'send'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x56, // LOAD_GLOBAL 'TypeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0xb0, // LOAD_FAST 0
    0x12,0x57, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc1, // STORE_FAST 1
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_uasyncio_core_create_task + 4,
        .opcodes = fun_data_uasyncio_core_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_run_until_complete
static const byte fun_data_uasyncio_core_run_until_complete[297] = {
    0xf1,0x03,0x04, // prelude
    0x1b,0x59, // names: run_until_complete, main_task
     // code info
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x49, // LOAD_GLOBAL 'Exception'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc1, // STORE_FAST 1
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc2, // STORE_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc3, // STORE_FAST 3
    0x42,0x6f, // JUMP 47
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xc3, // STORE_FAST 3
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x51, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x03, // LOAD_GLOBAL 'ticks_diff'
    0xb4, // LOAD_FAST 4
    0x13,0x1d, // LOAD_ATTR 'ph_key'
    0x12,0x47, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc3, // STORE_FAST 3
    0x42,0x48, // JUMP 8
    0x12,0x5b, // LOAD_GLOBAL '_io_queue'
    0x13,0x1e, // LOAD_ATTR 'map'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x5b, // LOAD_GLOBAL '_io_queue'
    0x14,0x1f, // LOAD_METHOD 'wait_io_event'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x0c, // POP_JUMP_IF_TRUE -52
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x17,0x5c, // STORE_GLOBAL 'cur_task'
    0x48,0x22, // SETUP_EXCEPT 34
    0xb4, // LOAD_FAST 4
    0x13,0x21, // LOAD_ATTR 'data'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x19, // LOAD_METHOD 'send'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x23, // LOAD_METHOD 'throw'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0xab,0x01, // POP_EXCEPT_JUMP 171
    0x57, // DUP_TOP
    0xb1, // LOAD_FAST 1
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0xa4,0x81, // POP_JUMP_IF_FALSE 164
    0xc6, // STORE_FAST 6
    0x49,0x99,0x01, // SETUP_FINALLY 153
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb6, // LOAD_FAST 6
    0x13,0x24, // LOAD_ATTR 'value'
    0x63, // RETURN_VALUE
    0xb6, // LOAD_FAST 6
    0x65, // RAISE_OBJ
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x44,0xe0,0x80, // POP_JUMP_IF_FALSE 96
    0x50, // LOAD_CONST_FALSE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x42,0x78, // JUMP 56
    0x12,0x5d, // LOAD_GLOBAL 'callable'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'state'
    0xb4, // LOAD_FAST 4
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0x42,0x5f, // JUMP 31
    0x42,0x50, // JUMP 16
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb7, // LOAD_FAST 7
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0x42,0x5e, // JUMP 30
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0xb5, // LOAD_FAST 5
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x56, // STORE_SUBSCR
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x14,0x25, // LOAD_METHOD 'call_exception_handler'
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xec,0x7d, // JUMP -276
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 297,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_uasyncio_core_run_until_complete + 5,
        .opcodes = fun_data_uasyncio_core_run_until_complete + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_run
static const byte fun_data_uasyncio_core_run[14] = {
    0x19,0x04, // prelude
    0x26,0x22, // names: run, coro
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_uasyncio_core_run + 4,
        .opcodes = fun_data_uasyncio_core_run + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__stopper
static const byte fun_data_uasyncio_core__stopper[6] = {
    0x80,0x40,0x02, // prelude
    0x27, // names: _stopper
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core__stopper = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__stopper,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_core__stopper + 4,
        .opcodes = fun_data_uasyncio_core__stopper + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop
static const byte fun_data_uasyncio_core_Loop[52] = {
    0x00,0x02, // prelude
    0x13, // names: Loop
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x41, // STORE_NAME '_exc_handler'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x18, // STORE_NAME 'create_task'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x3d, // STORE_NAME 'run_forever'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x3e, // STORE_NAME 'stop'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3f, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x40, // STORE_NAME 'set_exception_handler'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x42, // STORE_NAME 'get_exception_handler'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x43, // STORE_NAME 'default_exception_handler'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x25, // STORE_NAME 'call_exception_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_create_task
static const byte fun_data_uasyncio_core_Loop_create_task[10] = {
    0x11,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_uasyncio_core_Loop_create_task + 4,
        .opcodes = fun_data_uasyncio_core_Loop_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_run_forever
static const byte fun_data_uasyncio_core_Loop_run_forever[26] = {
    0x10,0x02, // prelude
    0x3d, // names: run_forever
     // code info
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x12,0x27, // LOAD_GLOBAL '_stopper'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x57, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_run_forever = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_run_forever,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_uasyncio_core_Loop_run_forever + 3,
        .opcodes = fun_data_uasyncio_core_Loop_run_forever + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_run_until_complete
static const byte fun_data_uasyncio_core_Loop_run_until_complete[14] = {
    0x19,0x04, // prelude
    0x1b,0x53, // names: run_until_complete, aw
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x17, // LOAD_GLOBAL '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_uasyncio_core_Loop_run_until_complete + 4,
        .opcodes = fun_data_uasyncio_core_Loop_run_until_complete + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_stop
static const byte fun_data_uasyncio_core_Loop_stop[24] = {
    0x10,0x02, // prelude
    0x3e, // names: stop
     // code info
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_stop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_stop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 62,
        .line_info = fun_data_uasyncio_core_Loop_stop + 3,
        .opcodes = fun_data_uasyncio_core_Loop_stop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_close
static const byte fun_data_uasyncio_core_Loop_close[5] = {
    0x00,0x02, // prelude
    0x3f, // names: close
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 5,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_uasyncio_core_Loop_close + 3,
        .opcodes = fun_data_uasyncio_core_Loop_close + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_set_exception_handler
static const byte fun_data_uasyncio_core_Loop_set_exception_handler[11] = {
    0x11,0x04, // prelude
    0x40,0x65, // names: set_exception_handler, handler
     // code info
    0xb0, // LOAD_FAST 0
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x18,0x41, // STORE_ATTR '_exc_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_set_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_set_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_uasyncio_core_Loop_set_exception_handler + 4,
        .opcodes = fun_data_uasyncio_core_Loop_set_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_get_exception_handler
static const byte fun_data_uasyncio_core_Loop_get_exception_handler[8] = {
    0x00,0x02, // prelude
    0x42, // names: get_exception_handler
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_get_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_get_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_uasyncio_core_Loop_get_exception_handler + 3,
        .opcodes = fun_data_uasyncio_core_Loop_get_exception_handler + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_default_exception_handler
static const byte fun_data_uasyncio_core_Loop_default_exception_handler[46] = {
    0x3a,0x06, // prelude
    0x43,0x66,0x67, // names: default_exception_handler, loop, context
     // code info
    0x12,0x68, // LOAD_GLOBAL 'print'
    0xb1, // LOAD_FAST 1
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x68, // LOAD_GLOBAL 'print'
    0x10,0x44, // LOAD_CONST_STRING 'future:'
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x10,0x45, // LOAD_CONST_STRING 'coro='
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x13,0x22, // LOAD_ATTR 'coro'
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x14,0x46, // LOAD_METHOD 'print_exception'
    0xb1, // LOAD_FAST 1
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_default_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_Loop_default_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_uasyncio_core_Loop_default_exception_handler + 5,
        .opcodes = fun_data_uasyncio_core_Loop_default_exception_handler + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_call_exception_handler
static const byte fun_data_uasyncio_core_Loop_call_exception_handler[22] = {
    0x19,0x04, // prelude
    0x25,0x67, // names: call_exception_handler, context
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x45,0x04, // JUMP_IF_TRUE_OR_POP 4
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x43, // LOAD_ATTR 'default_exception_handler'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_Loop_call_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_call_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 37,
        .line_info = fun_data_uasyncio_core_Loop_call_exception_handler + 4,
        .opcodes = fun_data_uasyncio_core_Loop_call_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_core_Loop[] = {
    &raw_code_uasyncio_core_Loop_create_task,
    &raw_code_uasyncio_core_Loop_run_forever,
    &raw_code_uasyncio_core_Loop_run_until_complete,
    &raw_code_uasyncio_core_Loop_stop,
    &raw_code_uasyncio_core_Loop_close,
    &raw_code_uasyncio_core_Loop_set_exception_handler,
    &raw_code_uasyncio_core_Loop_get_exception_handler,
    &raw_code_uasyncio_core_Loop_default_exception_handler,
    &raw_code_uasyncio_core_Loop_call_exception_handler,
};

static const mp_raw_code_t raw_code_uasyncio_core_Loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 52,
    #endif
    .children = (void *)&children_uasyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 9,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_core_Loop + 3,
        .opcodes = fun_data_uasyncio_core_Loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_get_event_loop
static const byte fun_data_uasyncio_core_get_event_loop[10] = {
    0x92,0x80,0x01,0x06, // prelude
    0x28,0x5e,0x5f, // names: get_event_loop, runq_len, waitq_len
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_get_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_get_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_core_get_event_loop + 7,
        .opcodes = fun_data_uasyncio_core_get_event_loop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_current_task
static const byte fun_data_uasyncio_core_current_task[6] = {
    0x00,0x02, // prelude
    0x29, // names: current_task
     // code info
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_current_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_current_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_core_current_task + 3,
        .opcodes = fun_data_uasyncio_core_current_task + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_new_event_loop
static const byte fun_data_uasyncio_core_new_event_loop[18] = {
    0x00,0x02, // prelude
    0x2a, // names: new_event_loop
     // code info
    0x12,0x08, // LOAD_GLOBAL 'TaskQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x58, // STORE_GLOBAL '_task_queue'
    0x12,0x12, // LOAD_GLOBAL 'IOQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5b, // STORE_GLOBAL '_io_queue'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_core_new_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_new_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_uasyncio_core_new_event_loop + 3,
        .opcodes = fun_data_uasyncio_core_new_event_loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_core__lt_module_gt_[] = {
    &raw_code_uasyncio_core_CancelledError,
    &raw_code_uasyncio_core_TimeoutError,
    &raw_code_uasyncio_core_SingletonGenerator,
    &raw_code_uasyncio_core_sleep_ms,
    &raw_code_uasyncio_core_sleep,
    &raw_code_uasyncio_core_IOQueue,
    &raw_code_uasyncio_core__promote_to_task,
    &raw_code_uasyncio_core_create_task,
    &raw_code_uasyncio_core_run_until_complete,
    &raw_code_uasyncio_core_run,
    &raw_code_uasyncio_core__stopper,
    &raw_code_uasyncio_core_Loop,
    &raw_code_uasyncio_core_get_event_loop,
    &raw_code_uasyncio_core_current_task,
    &raw_code_uasyncio_core_new_event_loop,
};

static const mp_raw_code_t raw_code_uasyncio_core__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 215,
    #endif
    .children = (void *)&children_uasyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 15,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_core__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_core__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio_core[105] = {
    MP_QSTR_uasyncio_slash_core_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_ticks_ms,
    MP_QSTR_ticks_diff,
    MP_QSTR_ticks_add,
    MP_QSTR_time,
    MP_QSTR_sys,
    MP_QSTR_select,
    MP_QSTR_TaskQueue,
    MP_QSTR_Task,
    MP_QSTR__uasyncio,
    MP_QSTR_task,
    MP_QSTR_CancelledError,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR_sleep_ms,
    MP_QSTR_state,
    MP_QSTR_sleep,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_send,
    MP_QSTR_push,
    MP_QSTR_run_until_complete,
    MP_QSTR_peek,
    MP_QSTR_ph_key,
    MP_QSTR_map,
    MP_QSTR_wait_io_event,
    MP_QSTR_pop,
    MP_QSTR_data,
    MP_QSTR_coro,
    MP_QSTR_throw,
    MP_QSTR_value,
    MP_QSTR_call_exception_handler,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR___init__,
    MP_QSTR_exc,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR___traceback__,
    MP_QSTR_poll,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR_register,
    MP_QSTR_POLLIN,
    MP_QSTR_POLLOUT,
    MP_QSTR_modify,
    MP_QSTR__dequeue,
    MP_QSTR_unregister,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_remove,
    MP_QSTR_ipoll,
    MP_QSTR_run_forever,
    MP_QSTR_stop,
    MP_QSTR_close,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_print_exception,
    MP_QSTR_ticks,
    MP_QSTR_BaseException,
    MP_QSTR_Exception,
    MP_QSTR__exc_context,
    MP_QSTR__stop_task,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_max,
    MP_QSTR_int,
    MP_QSTR_aw,
    MP_QSTR_isinstance,
    MP_QSTR_hasattr,
    MP_QSTR_TypeError,
    MP_QSTR_globals,
    MP_QSTR__task_queue,
    MP_QSTR_main_task,
    MP_QSTR_StopIteration,
    MP_QSTR__io_queue,
    MP_QSTR_cur_task,
    MP_QSTR_callable,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_self,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_id,
    MP_QSTR_dt,
    MP_QSTR_handler,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_print,
};

// constants
static const mp_obj_str_t const_obj_uasyncio_core_0 = {{&mp_type_str}, 205, 31, (const byte*)"\x54\x61\x73\x6b\x20\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x20\x77\x61\x73\x6e\x27\x74\x20\x72\x65\x74\x72\x69\x65\x76\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_uasyncio_core[2] = {
    MP_ROM_PTR(&const_obj_uasyncio_core_0),
    MP_ROM_QSTR(MP_QSTR_coroutine_space_expected),
};

static const mp_frozen_module_t frozen_module_uasyncio_core = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_core,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_core,
    },
    .rc = &raw_code_uasyncio_core__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_event
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/event.mpy
// - frozen file name: uasyncio/event.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt_
static const byte fun_data_uasyncio_event__lt_module_gt_[59] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Event'
    0x48,0x15, // SETUP_EXCEPT 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'uio'
    0x16,0x05, // STORE_NAME 'uio'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x11,0x05, // LOAD_NAME 'uio'
    0x13,0x07, // LOAD_ATTR 'IOBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'ThreadSafeFlag'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x11,0x19, // LOAD_NAME 'ImportError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event__lt_module_gt_
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event
static const byte fun_data_uasyncio_event_Event[33] = {
    0x00,0x02, // prelude
    0x04, // names: Event
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'is_set'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event___init__
static const byte fun_data_uasyncio_event_Event___init__[19] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_Event___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_uasyncio_event_Event___init__ + 4,
        .opcodes = fun_data_uasyncio_event_Event___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_is_set
static const byte fun_data_uasyncio_event_Event_is_set[8] = {
    0x09,0x04, // prelude
    0x0c,0x1d, // names: is_set, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_Event_is_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_is_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio_event_Event_is_set + 4,
        .opcodes = fun_data_uasyncio_event_Event_is_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_set
static const byte fun_data_uasyncio_event_Event_set[37] = {
    0x21,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x42,0x50, // JUMP 16
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR '_task_queue'
    0x14,0x0f, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x10, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x11, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_Event_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_event_Event_set + 4,
        .opcodes = fun_data_uasyncio_event_Event_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_clear
static const byte fun_data_uasyncio_event_Event_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_Event_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_event_Event_clear + 4,
        .opcodes = fun_data_uasyncio_event_Event_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_wait
static const byte fun_data_uasyncio_event_Event_wait[36] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x0f, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x18,0x15, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_Event_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 36,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_event_Event_wait + 5,
        .opcodes = fun_data_uasyncio_event_Event_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_event_Event[] = {
    &raw_code_uasyncio_event_Event___init__,
    &raw_code_uasyncio_event_Event_is_set,
    &raw_code_uasyncio_event_Event_set,
    &raw_code_uasyncio_event_Event_clear,
    &raw_code_uasyncio_event_Event_wait,
};

static const mp_raw_code_t raw_code_uasyncio_event_Event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_event_Event + 3,
        .opcodes = fun_data_uasyncio_event_Event + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event__lt_module_gt_
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag
static const byte fun_data_uasyncio_event_ThreadSafeFlag[33] = {
    0x00,0x02, // prelude
    0x06, // names: ThreadSafeFlag
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x16, // STORE_NAME 'ioctl'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag___init__
static const byte fun_data_uasyncio_event_ThreadSafeFlag___init__[10] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag___init__ + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_ioctl
static const byte fun_data_uasyncio_event_ThreadSafeFlag_ioctl[19] = {
    0x23,0x08, // prelude
    0x16,0x1d,0x1e,0x1f, // names: ioctl, self, req, flags
     // code info
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_ioctl = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_ioctl,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_ioctl + 6,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_ioctl + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_set
static const byte fun_data_uasyncio_event_ThreadSafeFlag_set[10] = {
    0x11,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_set + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_clear
static const byte fun_data_uasyncio_event_ThreadSafeFlag_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_clear + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_wait
static const byte fun_data_uasyncio_event_ThreadSafeFlag_wait[27] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x17, // LOAD_ATTR '_io_queue'
    0x14,0x18, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_wait + 5,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_event_ThreadSafeFlag[] = {
    &raw_code_uasyncio_event_ThreadSafeFlag___init__,
    &raw_code_uasyncio_event_ThreadSafeFlag_ioctl,
    &raw_code_uasyncio_event_ThreadSafeFlag_set,
    &raw_code_uasyncio_event_ThreadSafeFlag_clear,
    &raw_code_uasyncio_event_ThreadSafeFlag_wait,
};

static const mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag + 3,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_event__lt_module_gt_[] = {
    &raw_code_uasyncio_event_Event,
    &raw_code_uasyncio_event_ThreadSafeFlag,
};

static const mp_raw_code_t raw_code_uasyncio_event__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = (void *)&children_uasyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_event__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_event__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio_event[32] = {
    MP_QSTR_uasyncio_slash_event_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Event,
    MP_QSTR_uio,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_IOBase,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_set,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_pop,
    MP_QSTR_peek,
    MP_QSTR_clear,
    MP_QSTR_wait,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_ioctl,
    MP_QSTR__io_queue,
    MP_QSTR_queue_read,
    MP_QSTR_ImportError,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_req,
    MP_QSTR_flags,
};

static const mp_frozen_module_t frozen_module_uasyncio_event = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_event,
        .obj_table = NULL,
    },
    .rc = &raw_code_uasyncio_event__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_funcs
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/funcs.mpy
// - frozen file name: uasyncio/funcs.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt_
static const byte fun_data_uasyncio_funcs__lt_module_gt_[56] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_run'
    0x11,0x02, // LOAD_NAME 'core'
    0x13,0x04, // LOAD_ATTR 'sleep'
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'wait_for'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x12, // STORE_NAME 'wait_for_ms'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME '_Remove'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x50, // LOAD_CONST_FALSE
    0x10,0x06, // LOAD_CONST_STRING 'return_exceptions'
    0x62, // STORE_MAP
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x14, // STORE_NAME 'gather'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__run
static const byte fun_data_uasyncio_funcs__run[66] = {
    0xd2,0x42,0x06, // prelude
    0x07,0x1b,0x1c, // names: _run, waiter, aw
     // code info
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0xc2, // STORE_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xc3, // STORE_FAST 3
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x57, // DUP_TOP
    0x12,0x1d, // LOAD_GLOBAL 'BaseException'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xc4, // STORE_FAST 4
    0x49,0x05, // SETUP_FINALLY 5
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb4, // LOAD_FAST 4
    0xc3, // STORE_FAST 3
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'CancelledError'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_funcs__run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_funcs__run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_uasyncio_funcs__run + 6,
        .opcodes = fun_data_uasyncio_funcs__run + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_wait_for
static const byte fun_data_uasyncio_funcs_wait_for[119] = {
    0xdb,0x43,0x08, // prelude
    0x0b,0x1c,0x1e,0x04, // names: wait_for, aw, timeout, sleep
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0d, // LOAD_METHOD 'create_task'
    0x12,0x07, // LOAD_GLOBAL '_run'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x48,0x0a, // SETUP_EXCEPT 10
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x32, // POP_EXCEPT_JUMP 50
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x69, // POP_JUMP_IF_FALSE 41
    0xc4, // STORE_FAST 4
    0x49,0x1f, // SETUP_FINALLY 31
    0xb4, // LOAD_FAST 4
    0x13,0x0f, // LOAD_ATTR 'value'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb4, // LOAD_FAST 4
    0x13,0x10, // LOAD_ATTR 'args'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x11, // LOAD_ATTR 'TimeoutError'
    0x65, // RAISE_OBJ
};
static const mp_raw_code_t raw_code_uasyncio_funcs_wait_for = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_funcs_wait_for,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 119,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_uasyncio_funcs_wait_for + 7,
        .opcodes = fun_data_uasyncio_funcs_wait_for + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_wait_for_ms
static const byte fun_data_uasyncio_funcs_wait_for_ms[16] = {
    0x2a,0x06, // prelude
    0x12,0x1c,0x1e, // names: wait_for_ms, aw, timeout
     // code info
    0x12,0x0b, // LOAD_GLOBAL 'wait_for'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x13, // LOAD_ATTR 'sleep_ms'
    0x34,0x03, // CALL_FUNCTION 3
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_funcs_wait_for_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_funcs_wait_for_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_funcs_wait_for_ms + 5,
        .opcodes = fun_data_uasyncio_funcs_wait_for_ms + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__Remove
static const byte fun_data_uasyncio_funcs__Remove[21] = {
    0x08,0x02, // prelude
    0x05, // names: _Remove
     // code info
    0x11,0x1f, // LOAD_NAME '__name__'
    0x16,0x20, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x16,0x21, // STORE_NAME '__qualname__'
    0x11,0x22, // LOAD_NAME 'staticmethod'
    0x32,0x00, // MAKE_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x16, // STORE_NAME 'remove'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs__Remove
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__Remove_remove
static const byte fun_data_uasyncio_funcs__Remove_remove[6] = {
    0x09,0x04, // prelude
    0x16,0x27, // names: remove, t
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_funcs__Remove_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_funcs__Remove_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_funcs__Remove_remove + 4,
        .opcodes = fun_data_uasyncio_funcs__Remove_remove + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_funcs__Remove[] = {
    &raw_code_uasyncio_funcs__Remove_remove,
};

static const mp_raw_code_t raw_code_uasyncio_funcs__Remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_uasyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_funcs__Remove + 3,
        .opcodes = fun_data_uasyncio_funcs__Remove + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather
static const byte fun_data_uasyncio_funcs_gather[220] = {
    0xf0,0xca,0x80,0xc0,0x40,0x85,0x01, // prelude
    0x14,0x06, // names: gather, return_exceptions
    0x00,0x07,0x08, // code info
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x2b,0x00, // BUILD_LIST 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x20,0x00,0x03, // MAKE_CLOSURE 0
    0xc2, // STORE_FAST 2
    0x32,0x01, // MAKE_FUNCTION 1
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5b, // JUMP 27
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x24, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x20, // POP_JUMP_IF_TRUE -32
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0x27,0x07, // STORE_DEREF 7
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x27,0x08, // STORE_DEREF 8
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0x25,0x07, // LOAD_DEREF 7
    0x18,0x08, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xc6, // STORE_FAST 6
    0x49,0x06, // SETUP_FINALLY 6
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0xb6, // LOAD_FAST 6
    0x27,0x08, // STORE_DEREF 8
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc1,0x80, // JUMP 65
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xde, // BINARY_OP 7 <is>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x52, // LOAD_CONST_TRUE
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0xb5, // LOAD_FAST 5
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0x12,0x25, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x26, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x13,0x0f, // LOAD_ATTR 'value'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x48, // JUMP 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb9,0x7f, // POP_JUMP_IF_TRUE -71
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x25,0x08, // LOAD_DEREF 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x25,0x08, // LOAD_DEREF 8
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs_gather
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather_done
static const byte fun_data_uasyncio_funcs_gather_done[64] = {
    0xb9,0x04,0x0c, // prelude
    0x17,0x28,0x28,0x28,0x27,0x29, // names: done, *, *, *, t, er
     // code info
    0x25,0x01, // LOAD_DEREF 1
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0x12,0x25, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x26, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb4, // LOAD_FAST 4
    0x27,0x02, // STORE_DEREF 2
    0x42,0x4c, // JUMP 12
    0x25,0x02, // LOAD_DEREF 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0x27,0x02, // STORE_DEREF 2
    0x25,0x02, // LOAD_DEREF 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_task_queue'
    0x14,0x19, // LOAD_METHOD 'push'
    0x25,0x01, // LOAD_DEREF 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_funcs_gather_done = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_uasyncio_funcs_gather_done,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_uasyncio_funcs_gather_done + 9,
        .opcodes = fun_data_uasyncio_funcs_gather_done + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs_gather
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather__lt_listcomp_gt_
static const byte fun_data_uasyncio_funcs_gather__lt_listcomp_gt_[23] = {
    0x49,0x04, // prelude
    0x1a,0x28, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0c, // FOR_ITER 12
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x32, // JUMP -14
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_funcs_gather__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_funcs_gather[] = {
    &raw_code_uasyncio_funcs_gather_done,
    &raw_code_uasyncio_funcs_gather__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_uasyncio_funcs_gather = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x0d,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 220,
    #endif
    .children = (void *)&children_uasyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 13,
        .n_pos_args = 0,
        .n_kwonly_args = 1,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_funcs_gather + 9,
        .opcodes = fun_data_uasyncio_funcs_gather + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_funcs__lt_module_gt_[] = {
    &raw_code_uasyncio_funcs__run,
    &raw_code_uasyncio_funcs_wait_for,
    &raw_code_uasyncio_funcs_wait_for_ms,
    &raw_code_uasyncio_funcs__Remove,
    &raw_code_uasyncio_funcs_gather,
};

static const mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 56,
    #endif
    .children = (void *)&children_uasyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio_funcs[42] = {
    MP_QSTR_uasyncio_slash_funcs_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_sleep,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_data,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_wait_for,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_cur_task,
    MP_QSTR_value,
    MP_QSTR_args,
    MP_QSTR_TimeoutError,
    MP_QSTR_wait_for_ms,
    MP_QSTR_sleep_ms,
    MP_QSTR_gather,
    MP_QSTR_state,
    MP_QSTR_remove,
    MP_QSTR_done,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_waiter,
    MP_QSTR_aw,
    MP_QSTR_BaseException,
    MP_QSTR_timeout,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_staticmethod,
    MP_QSTR_len,
    MP_QSTR_RuntimeError,
    MP_QSTR_isinstance,
    MP_QSTR_StopIteration,
    MP_QSTR_t,
    MP_QSTR__star_,
    MP_QSTR_er,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_uasyncio_funcs[1] = {
    MP_ROM_QSTR(MP_QSTR_can_squot_t_space_gather),
};

static const mp_frozen_module_t frozen_module_uasyncio_funcs = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_funcs,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_funcs,
    },
    .rc = &raw_code_uasyncio_funcs__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_lock
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/lock.mpy
// - frozen file name: uasyncio/lock.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt_
static const byte fun_data_uasyncio_lock__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Lock'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_lock__lt_module_gt_
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock
static const byte fun_data_uasyncio_lock_Lock[37] = {
    0x00,0x02, // prelude
    0x04, // names: Lock
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'locked'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'release'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0f, // STORE_NAME 'acquire'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME '__aenter__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME '__aexit__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___init__
static const byte fun_data_uasyncio_lock_Lock___init__[19] = {
    0x11,0x04, // prelude
    0x05,0x18, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x07, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_lock_Lock___init__ + 4,
        .opcodes = fun_data_uasyncio_lock_Lock___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_locked
static const byte fun_data_uasyncio_lock_Lock_locked[10] = {
    0x11,0x04, // prelude
    0x09,0x18, // names: locked, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock_locked = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_locked,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_uasyncio_lock_Lock_locked + 4,
        .opcodes = fun_data_uasyncio_lock_Lock_locked + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_release
static const byte fun_data_uasyncio_lock_Lock_release[57] = {
    0x19,0x04, // prelude
    0x0a,0x18, // names: release, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x19, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0b, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0c, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0d, // LOAD_ATTR '_task_queue'
    0x14,0x0e, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x44, // JUMP 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock_release = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_release,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 57,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_uasyncio_lock_Lock_release + 4,
        .opcodes = fun_data_uasyncio_lock_Lock_release + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_acquire
static const byte fun_data_uasyncio_lock_Lock_acquire[88] = {
    0xb9,0x42,0x04, // prelude
    0x0f,0x18, // names: acquire, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0xc5,0x80, // POP_JUMP_IF_FALSE 69
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0e, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x18,0x11, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x29, // POP_EXCEPT_JUMP 41
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x12, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0xc1, // STORE_FAST 1
    0x49,0x16, // SETUP_FINALLY 22
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc1, // STORE_FAST 1
    0x28,0x01, // DELETE_FAST 1
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock_acquire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_acquire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_uasyncio_lock_Lock_acquire + 5,
        .opcodes = fun_data_uasyncio_lock_Lock_acquire + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___aenter__
static const byte fun_data_uasyncio_lock_Lock___aenter__[14] = {
    0x91,0x40,0x04, // prelude
    0x13,0x18, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'acquire'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_lock_Lock___aenter__ + 5,
        .opcodes = fun_data_uasyncio_lock_Lock___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___aexit__
static const byte fun_data_uasyncio_lock_Lock___aexit__[14] = {
    0xa8,0x44,0x0a, // prelude
    0x14,0x18,0x1a,0x1b,0x1c, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_lock_Lock___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_lock_Lock___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_lock_Lock___aexit__ + 8,
        .opcodes = fun_data_uasyncio_lock_Lock___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_lock_Lock[] = {
    &raw_code_uasyncio_lock_Lock___init__,
    &raw_code_uasyncio_lock_Lock_locked,
    &raw_code_uasyncio_lock_Lock_release,
    &raw_code_uasyncio_lock_Lock_acquire,
    &raw_code_uasyncio_lock_Lock___aenter__,
    &raw_code_uasyncio_lock_Lock___aexit__,
};

static const mp_raw_code_t raw_code_uasyncio_lock_Lock = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_uasyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_lock_Lock + 3,
        .opcodes = fun_data_uasyncio_lock_Lock + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_lock__lt_module_gt_[] = {
    &raw_code_uasyncio_lock_Lock,
};

static const mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_uasyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_lock__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio_lock[29] = {
    MP_QSTR_uasyncio_slash_lock_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Lock,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_locked,
    MP_QSTR_release,
    MP_QSTR_peek,
    MP_QSTR_pop,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_acquire,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_CancelledError,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_RuntimeError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_uasyncio_lock[1] = {
    MP_ROM_QSTR(MP_QSTR_Lock_space_not_space_acquired),
};

static const mp_frozen_module_t frozen_module_uasyncio_lock = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_lock,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_lock,
    },
    .rc = &raw_code_uasyncio_lock__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_stream
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/uasyncio/stream.mpy
// - frozen file name: uasyncio/stream.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt_
static const byte fun_data_uasyncio_stream__lt_module_gt_[84] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Stream'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x34, // STORE_NAME 'StreamReader'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x35, // STORE_NAME 'StreamWriter'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0a, // STORE_NAME 'open_connection'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME 'Server'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x16, // STORE_NAME 'start_server'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x1f, // STORE_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x13,0x06, // LOAD_ATTR 'wait_closed'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x07, // STORE_ATTR 'aclose'
    0x11,0x1f, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x08, // STORE_ATTR 'awrite'
    0x11,0x1f, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x09, // STORE_ATTR 'awritestr'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream
static const byte fun_data_uasyncio_stream_Stream[70] = {
    0x08,0x02, // prelude
    0x04, // names: Stream
     // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x2c,0x00, // BUILD_MAP 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x22, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x26, // STORE_NAME 'get_extra_info'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x27, // STORE_NAME '__aenter__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x28, // STORE_NAME '__aexit__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x29, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x2a, // STORE_NAME 'read'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x2c, // STORE_NAME 'readinto'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x2d, // STORE_NAME 'readexactly'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x2e, // STORE_NAME 'readline'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x20, // STORE_NAME 'write'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x21, // STORE_NAME 'drain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___init__
static const byte fun_data_uasyncio_stream_Stream___init__[22] = {
    0xa3,0x01,0x08, // prelude
    0x22,0x3e,0x23,0x24, // names: __init__, self, s, e
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x23, // STORE_ATTR 's'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x24, // STORE_ATTR 'e'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream_Stream___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_uasyncio_stream_Stream___init__ + 7,
        .opcodes = fun_data_uasyncio_stream_Stream___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_get_extra_info
static const byte fun_data_uasyncio_stream_Stream_get_extra_info[11] = {
    0x1a,0x06, // prelude
    0x26,0x3e,0x44, // names: get_extra_info, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x24, // LOAD_ATTR 'e'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_get_extra_info = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_get_extra_info,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_uasyncio_stream_Stream_get_extra_info + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_get_extra_info + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___aenter__
static const byte fun_data_uasyncio_stream_Stream___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x27,0x3e, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 7,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_stream_Stream___aenter__ + 5,
        .opcodes = fun_data_uasyncio_stream_Stream___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___aexit__
static const byte fun_data_uasyncio_stream_Stream___aexit__[19] = {
    0xa8,0x44,0x0a, // prelude
    0x28,0x3e,0x45,0x46,0x47, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_Stream___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_stream_Stream___aexit__ + 8,
        .opcodes = fun_data_uasyncio_stream_Stream___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_close
static const byte fun_data_uasyncio_stream_Stream_close[6] = {
    0x09,0x04, // prelude
    0x29,0x3e, // names: close, self
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_stream_Stream_close + 4,
        .opcodes = fun_data_uasyncio_stream_Stream_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_wait_closed
static const byte fun_data_uasyncio_stream_Stream_wait_closed[15] = {
    0x91,0x40,0x04, // prelude
    0x06,0x3e, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_stream_Stream_wait_closed + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_read
static const byte fun_data_uasyncio_stream_Stream_read[61] = {
    0xb2,0x41,0x06, // prelude
    0x2a,0x3e,0x48, // names: read, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2a, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0x42,0x0e, // JUMP -50
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 61,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_uasyncio_stream_Stream_read + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_read + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readinto
static const byte fun_data_uasyncio_stream_Stream_readinto[28] = {
    0xa2,0x40,0x06, // prelude
    0x2c,0x3e,0x3f, // names: readinto, self, buf
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2c, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 44,
        .line_info = fun_data_uasyncio_stream_Stream_readinto + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_readinto + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readexactly
static const byte fun_data_uasyncio_stream_Stream_readexactly[66] = {
    0xb2,0x40,0x06, // prelude
    0x2d,0x3e,0x48, // names: readexactly, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x42,0x72, // JUMP 50
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2a, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x49, // LOAD_GLOBAL 'EOFError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xe6, // BINARY_OP 15 __isub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x0b, // POP_JUMP_IF_TRUE -53
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_readexactly = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_readexactly,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_uasyncio_stream_Stream_readexactly + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_readexactly + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readline
static const byte fun_data_uasyncio_stream_Stream_readline[49] = {
    0xa9,0x40,0x04, // prelude
    0x2e,0x3e, // names: readline, self
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2e, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x8a, // LOAD_CONST_SMALL_INT 10
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
    0x42,0x19, // JUMP -39
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_readline = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_readline,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 49,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_uasyncio_stream_Stream_readline + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_readline + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_write
static const byte fun_data_uasyncio_stream_Stream_write[54] = {
    0x2a,0x06, // prelude
    0x20,0x3e,0x3f, // names: write, self, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x43,0x61, // POP_JUMP_IF_TRUE 33
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0xb1, // LOAD_FAST 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 54,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 32,
        .line_info = fun_data_uasyncio_stream_Stream_write + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_drain
static const byte fun_data_uasyncio_stream_Stream_drain[86] = {
    0xc1,0x40,0x04, // prelude
    0x21,0x3e, // names: drain, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x2f, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x42, // LOAD_GLOBAL 'memoryview'
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x65, // JUMP 37
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x15, // LOAD_METHOD 'queue_write'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x12, // POP_JUMP_IF_TRUE -46
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Stream_drain = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_drain,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 86,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_uasyncio_stream_Stream_drain + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_drain + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_stream_Stream[] = {
    &raw_code_uasyncio_stream_Stream___init__,
    &raw_code_uasyncio_stream_Stream_get_extra_info,
    &raw_code_uasyncio_stream_Stream___aenter__,
    &raw_code_uasyncio_stream_Stream___aexit__,
    &raw_code_uasyncio_stream_Stream_close,
    &raw_code_uasyncio_stream_Stream_wait_closed,
    &raw_code_uasyncio_stream_Stream_read,
    &raw_code_uasyncio_stream_Stream_readinto,
    &raw_code_uasyncio_stream_Stream_readexactly,
    &raw_code_uasyncio_stream_Stream_readline,
    &raw_code_uasyncio_stream_Stream_write,
    &raw_code_uasyncio_stream_Stream_drain,
};

static const mp_raw_code_t raw_code_uasyncio_stream_Stream = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = (void *)&children_uasyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_stream_Stream + 3,
        .opcodes = fun_data_uasyncio_stream_Stream + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_open_connection
static const byte fun_data_uasyncio_stream_open_connection[120] = {
    0xea,0x42,0x06, // prelude
    0x0a,0x39,0x3a, // names: open_connection, host, port
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0b, // LOAD_CONST_STRING 'EINPROGRESS'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'uerrno'
    0x1c,0x0b, // IMPORT_FROM 'EINPROGRESS'
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'usocket'
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x13,0x0f, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x14,0x10, // LOAD_METHOD 'socket'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0xc6, // STORE_FAST 6
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb5, // LOAD_FAST 5
    0x14,0x12, // LOAD_METHOD 'connect'
    0xb4, // LOAD_FAST 4
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x1b, // POP_EXCEPT_JUMP 27
    0x57, // DUP_TOP
    0x12,0x3b, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc7, // STORE_FAST 7
    0x49,0x0a, // SETUP_FINALLY 10
    0xb7, // LOAD_FAST 7
    0x13,0x13, // LOAD_ATTR 'errno'
    0xb2, // LOAD_FAST 2
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb7, // LOAD_FAST 7
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x15, // LOAD_METHOD 'queue_write'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb6, // LOAD_FAST 6
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_open_connection = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_open_connection,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 120,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_uasyncio_stream_open_connection + 6,
        .opcodes = fun_data_uasyncio_stream_open_connection + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server
static const byte fun_data_uasyncio_stream_Server[33] = {
    0x00,0x02, // prelude
    0x05, // names: Server
     // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x27, // STORE_NAME '__aenter__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x28, // STORE_NAME '__aexit__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x29, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x1d, // STORE_NAME '_serve'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server___aenter__
static const byte fun_data_uasyncio_stream_Server___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x27,0x3e, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Server___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 7,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_stream_Server___aenter__ + 5,
        .opcodes = fun_data_uasyncio_stream_Server___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server___aexit__
static const byte fun_data_uasyncio_stream_Server___aexit__[25] = {
    0xa8,0x44,0x0a, // prelude
    0x28,0x3e,0x45,0x46,0x47, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'wait_closed'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Server___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_Server___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_stream_Server___aexit__ + 8,
        .opcodes = fun_data_uasyncio_stream_Server___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server_close
static const byte fun_data_uasyncio_stream_Server_close[14] = {
    0x11,0x04, // prelude
    0x29,0x3e, // names: close, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'task'
    0x14,0x30, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Server_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_stream_Server_close + 4,
        .opcodes = fun_data_uasyncio_stream_Server_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server_wait_closed
static const byte fun_data_uasyncio_stream_Server_wait_closed[14] = {
    0x91,0x40,0x04, // prelude
    0x06,0x3e, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'task'
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Server_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_stream_Server_wait_closed + 5,
        .opcodes = fun_data_uasyncio_stream_Server_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server__serve
static const byte fun_data_uasyncio_stream_Server__serve[94] = {
    0xdf,0x40,0x08, // prelude
    0x1d,0x3e,0x23,0x3c, // names: _serve, self, s, cb
     // code info
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x12, // POP_EXCEPT_JUMP 18
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x31, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb1, // LOAD_FAST 1
    0x14,0x32, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc4, // STORE_FAST 4
    0x4a,0x05, // POP_EXCEPT_JUMP 5
    0x59, // POP_TOP
    0x40,0x61,0x01, // UNWIND_JUMP 33
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb3, // LOAD_FAST 3
    0x2c,0x01, // BUILD_MAP 1
    0xb4, // LOAD_FAST 4
    0x10,0x33, // LOAD_CONST_STRING 'peername'
    0x62, // STORE_MAP
    0x34,0x02, // CALL_FUNCTION 2
    0xc5, // STORE_FAST 5
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x1c, // LOAD_METHOD 'create_task'
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xb5, // LOAD_FAST 5
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xab,0x7f, // JUMP -85
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_Server__serve = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream_Server__serve,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 94,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 1,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_uasyncio_stream_Server__serve + 7,
        .opcodes = fun_data_uasyncio_stream_Server__serve + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_stream_Server[] = {
    &raw_code_uasyncio_stream_Server___aenter__,
    &raw_code_uasyncio_stream_Server___aexit__,
    &raw_code_uasyncio_stream_Server_close,
    &raw_code_uasyncio_stream_Server_wait_closed,
    &raw_code_uasyncio_stream_Server__serve,
};

static const mp_raw_code_t raw_code_uasyncio_stream_Server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_stream_Server + 3,
        .opcodes = fun_data_uasyncio_stream_Server + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_start_server
static const byte fun_data_uasyncio_stream_start_server[88] = {
    0xe0,0x45,0x0a, // prelude
    0x16,0x3c,0x39,0x3a,0x3d, // names: start_server, cb, host, port, backlog
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'usocket'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb4, // LOAD_FAST 4
    0x14,0x10, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x17, // LOAD_METHOD 'setsockopt'
    0xb4, // LOAD_FAST 4
    0x13,0x18, // LOAD_ATTR 'SOL_SOCKET'
    0xb4, // LOAD_FAST 4
    0x13,0x19, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x1a, // LOAD_METHOD 'bind'
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x1b, // LOAD_METHOD 'listen'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x05, // LOAD_GLOBAL 'Server'
    0x34,0x00, // CALL_FUNCTION 0
    0xc6, // STORE_FAST 6
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x1c, // LOAD_METHOD 'create_task'
    0xb6, // LOAD_FAST 6
    0x14,0x1d, // LOAD_METHOD '_serve'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x36,0x02, // CALL_METHOD 2
    0x36,0x01, // CALL_METHOD 1
    0xb6, // LOAD_FAST 6
    0x18,0x1e, // STORE_ATTR 'task'
    0xb6, // LOAD_FAST 6
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_start_server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_start_server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_stream_start_server + 8,
        .opcodes = fun_data_uasyncio_stream_start_server + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_stream_awrite
static const byte fun_data_uasyncio_stream_stream_awrite[63] = {
    0xb8,0xc4,0x01,0x0a, // prelude
    0x1f,0x3e,0x3f,0x40,0x41, // names: stream_awrite, self, buf, off, sz
     // code info
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x12,0x42, // LOAD_GLOBAL 'memoryview'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf2, // BINARY_OP 27 __add__
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x21, // LOAD_METHOD 'drain'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_uasyncio_stream_stream_awrite = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_stream_awrite,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_uasyncio_stream_stream_awrite + 9,
        .opcodes = fun_data_uasyncio_stream_stream_awrite + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_uasyncio_stream__lt_module_gt_[] = {
    &raw_code_uasyncio_stream_Stream,
    &raw_code_uasyncio_stream_open_connection,
    &raw_code_uasyncio_stream_Server,
    &raw_code_uasyncio_stream_start_server,
    &raw_code_uasyncio_stream_stream_awrite,
};

static const mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 84,
    #endif
    .children = (void *)&children_uasyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_stream__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio_stream[74] = {
    MP_QSTR_uasyncio_slash_stream_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_open_connection,
    MP_QSTR_EINPROGRESS,
    MP_QSTR_uerrno,
    MP_QSTR_usocket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_setblocking,
    MP_QSTR_connect,
    MP_QSTR_errno,
    MP_QSTR__io_queue,
    MP_QSTR_queue_write,
    MP_QSTR_start_server,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_create_task,
    MP_QSTR__serve,
    MP_QSTR_task,
    MP_QSTR_stream_awrite,
    MP_QSTR_write,
    MP_QSTR_drain,
    MP_QSTR___init__,
    MP_QSTR_s,
    MP_QSTR_e,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR_close,
    MP_QSTR_read,
    MP_QSTR_queue_read,
    MP_QSTR_readinto,
    MP_QSTR_readexactly,
    MP_QSTR_readline,
    MP_QSTR_sleep_ms,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_accept,
    MP_QSTR_peername,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_OSError,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_self,
    MP_QSTR_buf,
    MP_QSTR_off,
    MP_QSTR_sz,
    MP_QSTR_memoryview,
    MP_QSTR_len,
    MP_QSTR_v,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
    MP_QSTR_n,
    MP_QSTR_EOFError,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_uasyncio_stream[1] = {
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
};

static const mp_frozen_module_t frozen_module_uasyncio_stream = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_stream,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_stream,
    },
    .rc = &raw_code_uasyncio_stream__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module onewire
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/onewire.mpy
// - frozen file name: onewire.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt_
static const byte fun_data_onewire__lt_module_gt_[31] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME '_onewire'
    0x16,0x17, // STORE_NAME '_ow'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x11,0x18, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x03, // STORE_NAME 'OneWireError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'OneWire'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWireError
static const byte fun_data_onewire_OneWireError[13] = {
    0x00,0x02, // prelude
    0x03, // names: OneWireError
     // code info
    0x11,0x19, // LOAD_NAME '__name__'
    0x16,0x1a, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x16,0x1b, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWireError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWireError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_onewire_OneWireError + 3,
        .opcodes = fun_data_onewire_OneWireError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWire
static const byte fun_data_onewire_OneWire[80] = {
    0x08,0x02, // prelude
    0x04, // names: OneWire
     // code info
    0x11,0x19, // LOAD_NAME '__name__'
    0x16,0x1a, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x16,0x1b, // STORE_NAME '__qualname__'
    0x22,0x81,0x70, // LOAD_CONST_SMALL_INT 240
    0x16,0x15, // STORE_NAME 'SEARCH_ROM'
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0x16,0x12, // STORE_NAME 'MATCH_ROM'
    0x22,0x81,0x4c, // LOAD_CONST_SMALL_INT 204
    0x16,0x1c, // STORE_NAME 'SKIP_ROM'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0a, // STORE_NAME 'reset'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0b, // STORE_NAME 'readbit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'readbyte'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0d, // STORE_NAME 'readinto'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0e, // STORE_NAME 'writebit'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x0f, // STORE_NAME 'writebyte'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x10, // STORE_NAME 'write'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x11, // STORE_NAME 'select_rom'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x13, // STORE_NAME 'scan'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x14, // STORE_NAME '_search_rom'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x16, // STORE_NAME 'crc8'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire___init__
static const byte fun_data_onewire_OneWire___init__[25] = {
    0x2a,0x06, // prelude
    0x05,0x1d,0x06, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'pin'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x14,0x07, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x08, // LOAD_ATTR 'OPEN_DRAIN'
    0xb1, // LOAD_FAST 1
    0x13,0x09, // LOAD_ATTR 'PULL_UP'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_onewire_OneWire___init__ + 5,
        .opcodes = fun_data_onewire_OneWire___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_reset
static const byte fun_data_onewire_OneWire_reset[27] = {
    0xaa,0x01,0x06, // prelude
    0x0a,0x1d,0x1e, // names: reset, self, required
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x03, // LOAD_GLOBAL 'OneWireError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_onewire_OneWire_reset + 6,
        .opcodes = fun_data_onewire_OneWire_reset + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbit
static const byte fun_data_onewire_OneWire_readbit[14] = {
    0x19,0x04, // prelude
    0x0b,0x1d, // names: readbit, self
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readbit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_onewire_OneWire_readbit + 4,
        .opcodes = fun_data_onewire_OneWire_readbit + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbyte
static const byte fun_data_onewire_OneWire_readbyte[14] = {
    0x19,0x04, // prelude
    0x0c,0x1d, // names: readbyte, self
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readbyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_onewire_OneWire_readbyte + 4,
        .opcodes = fun_data_onewire_OneWire_readbyte + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readinto
static const byte fun_data_onewire_OneWire_readinto[38] = {
    0x3a,0x06, // prelude
    0x0d,0x1d,0x1f, // names: readinto, self, buf
     // code info
    0x12,0x20, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x50, // JUMP 16
    0x57, // DUP_TOP
    0xc2, // STORE_FAST 2
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x2b, // POP_JUMP_IF_TRUE -21
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 38,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_onewire_OneWire_readinto + 5,
        .opcodes = fun_data_onewire_OneWire_readinto + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebit
static const byte fun_data_onewire_OneWire_writebit[16] = {
    0x2a,0x06, // prelude
    0x0e,0x1d,0x21, // names: writebit, self, value
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0e, // LOAD_METHOD 'writebit'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_writebit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_onewire_OneWire_writebit + 5,
        .opcodes = fun_data_onewire_OneWire_writebit + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebyte
static const byte fun_data_onewire_OneWire_writebyte[16] = {
    0x2a,0x06, // prelude
    0x0f,0x1d,0x21, // names: writebyte, self, value
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_writebyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_onewire_OneWire_writebyte + 5,
        .opcodes = fun_data_onewire_OneWire_writebyte + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_write
static const byte fun_data_onewire_OneWire_write[25] = {
    0x52,0x06, // prelude
    0x10,0x1d,0x1f, // names: write, self, buf
     // code info
    0xb1, // LOAD_FAST 1
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc2, // STORE_FAST 2
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x30, // JUMP -16
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_onewire_OneWire_write + 5,
        .opcodes = fun_data_onewire_OneWire_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_select_rom
static const byte fun_data_onewire_OneWire_select_rom[29] = {
    0x22,0x06, // prelude
    0x11,0x1d,0x22, // names: select_rom, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'MATCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_select_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_select_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_onewire_OneWire_select_rom + 5,
        .opcodes = fun_data_onewire_OneWire_select_rom + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_scan
static const byte fun_data_onewire_OneWire_scan[57] = {
    0x49,0x04, // prelude
    0x13,0x1d, // names: scan, self
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xc1, // STORE_FAST 1
    0x22,0x80,0x41, // LOAD_CONST_SMALL_INT 65
    0xc2, // STORE_FAST 2
    0x50, // LOAD_CONST_FALSE
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5f, // JUMP 31
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD '_search_rom'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x2b,0x01, // BUILD_LIST 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x49, // JUMP 9
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1a, // POP_JUMP_IF_TRUE -38
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 57,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_onewire_OneWire_scan + 4,
        .opcodes = fun_data_onewire_OneWire_scan + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire__search_rom
static const byte fun_data_onewire_OneWire__search_rom[154] = {
    0x73,0x08, // prelude
    0x14,0x1d,0x23,0x24, // names: _search_rom, self, l_rom, diff
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'SEARCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x12,0x25, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x12,0x25, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc4, // STORE_FAST 4
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0xc5, // STORE_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xdc,0x80, // JUMP 92
    0x57, // DUP_TOP
    0xc6, // STORE_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc7, // STORE_FAST 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc7,0x80, // JUMP 71
    0x57, // DUP_TOP
    0xc8, // STORE_FAST 8
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb9, // LOAD_FAST 9
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0x42,0x5a, // JUMP 26
    0xb9, // LOAD_FAST 9
    0x43,0x57, // POP_JUMP_IF_TRUE 23
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0xb1, // LOAD_FAST 1
    0xb6, // LOAD_FAST 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xef, // BINARY_OP 24 __and__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc9, // STORE_FAST 9
    0xb5, // LOAD_FAST 5
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x0e, // LOAD_METHOD 'writebit'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb9, // LOAD_FAST 9
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0xc7, // STORE_FAST 7
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0xc5, // STORE_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb3,0x7f, // POP_JUMP_IF_TRUE -77
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xb6, // LOAD_FAST 6
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x9e,0x7f, // POP_JUMP_IF_TRUE -98
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire__search_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_onewire_OneWire__search_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 154,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_onewire_OneWire__search_rom + 6,
        .opcodes = fun_data_onewire_OneWire__search_rom + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_crc8
static const byte fun_data_onewire_OneWire_crc8[13] = {
    0x22,0x06, // prelude
    0x16,0x1d,0x26, // names: crc8, self, data
     // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x16, // LOAD_METHOD 'crc8'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_onewire_OneWire_crc8 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_crc8,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_onewire_OneWire_crc8 + 5,
        .opcodes = fun_data_onewire_OneWire_crc8 + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_onewire_OneWire[] = {
    &raw_code_onewire_OneWire___init__,
    &raw_code_onewire_OneWire_reset,
    &raw_code_onewire_OneWire_readbit,
    &raw_code_onewire_OneWire_readbyte,
    &raw_code_onewire_OneWire_readinto,
    &raw_code_onewire_OneWire_writebit,
    &raw_code_onewire_OneWire_writebyte,
    &raw_code_onewire_OneWire_write,
    &raw_code_onewire_OneWire_select_rom,
    &raw_code_onewire_OneWire_scan,
    &raw_code_onewire_OneWire__search_rom,
    &raw_code_onewire_OneWire_crc8,
};

static const mp_raw_code_t raw_code_onewire_OneWire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 80,
    #endif
    .children = (void *)&children_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_onewire_OneWire + 3,
        .opcodes = fun_data_onewire_OneWire + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_onewire__lt_module_gt_[] = {
    &raw_code_onewire_OneWireError,
    &raw_code_onewire_OneWire,
};

static const mp_raw_code_t raw_code_onewire__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 31,
    #endif
    .children = (void *)&children_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_onewire__lt_module_gt_ + 3,
        .opcodes = fun_data_onewire__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_onewire[39] = {
    MP_QSTR_onewire_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__onewire,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_init,
    MP_QSTR_OPEN_DRAIN,
    MP_QSTR_PULL_UP,
    MP_QSTR_reset,
    MP_QSTR_readbit,
    MP_QSTR_readbyte,
    MP_QSTR_readinto,
    MP_QSTR_writebit,
    MP_QSTR_writebyte,
    MP_QSTR_write,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_scan,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_crc8,
    MP_QSTR__ow,
    MP_QSTR_Exception,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_self,
    MP_QSTR_required,
    MP_QSTR_buf,
    MP_QSTR_len,
    MP_QSTR_value,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_bytearray,
    MP_QSTR_data,
};

// constants
static const mp_rom_obj_tuple_t const_obj_onewire_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_NONE,
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_onewire[1] = {
    MP_ROM_PTR(&const_obj_onewire_0),
};

static const mp_frozen_module_t frozen_module_onewire = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_onewire,
        .obj_table = (mp_obj_t *)&const_obj_table_data_onewire,
    },
    .rc = &raw_code_onewire__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ds18x20
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/ds18x20.mpy
// - frozen file name: ds18x20.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ds18x20.py, scope ds18x20__lt_module_gt_
static const byte fun_data_ds18x20__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'micropython'
    0x1c,0x02, // IMPORT_FROM 'const'
    0x16,0x02, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'DS18X20'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20__lt_module_gt_
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20
static const byte fun_data_ds18x20_DS18X20[37] = {
    0x00,0x02, // prelude
    0x04, // names: DS18X20
     // code info
    0x11,0x16, // LOAD_NAME '__name__'
    0x16,0x17, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x16,0x18, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x08, // STORE_NAME 'scan'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x09, // STORE_NAME 'convert_temp'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'read_scratch'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME 'write_scratch'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME 'read_temp'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20___init__
static const byte fun_data_ds18x20_DS18X20___init__[19] = {
    0x1a,0x06, // prelude
    0x05,0x19,0x1a, // names: __init__, self, onewire
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'ow'
    0x12,0x1b, // LOAD_GLOBAL 'bytearray'
    0x89, // LOAD_CONST_SMALL_INT 9
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_ds18x20_DS18X20___init__ + 5,
        .opcodes = fun_data_ds18x20_DS18X20___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan
static const byte fun_data_ds18x20_DS18X20_scan[16] = {
    0x19,0x04, // prelude
    0x08,0x19, // names: scan, self
     // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x08, // LOAD_METHOD 'scan'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20_scan
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan__lt_listcomp_gt_
static const byte fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_[25] = {
    0x41,0x04, // prelude
    0x15,0x1e, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x35, // POP_JUMP_IF_FALSE -11
    0xb1, // LOAD_FAST 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x30, // JUMP -16
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20_DS18X20_scan[] = {
    &raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_,
};

static const mp_raw_code_t raw_code_ds18x20_DS18X20_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = (void *)&children_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_ds18x20_DS18X20_scan + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_convert_temp
static const byte fun_data_ds18x20_DS18X20_convert_temp[39] = {
    0x19,0x04, // prelude
    0x09,0x19, // names: convert_temp, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x13,0x0c, // LOAD_ATTR 'SKIP_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x44, // LOAD_CONST_SMALL_INT 68
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_convert_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_convert_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 39,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .opcodes = fun_data_ds18x20_DS18X20_convert_temp + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_scratch
static const byte fun_data_ds18x20_DS18X20_read_scratch[68] = {
    0x22,0x06, // prelude
    0x0d,0x19,0x1c, // names: read_scratch, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0e, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x81,0x3e, // LOAD_CONST_SMALL_INT 190
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x10, // LOAD_METHOD 'crc8'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1d, // LOAD_GLOBAL 'Exception'
    0x10,0x11, // LOAD_CONST_STRING 'CRC error'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_read_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 68,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_scratch + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_write_scratch
static const byte fun_data_ds18x20_DS18X20_write_scratch[46] = {
    0x2b,0x08, // prelude
    0x12,0x19,0x1c,0x07, // names: write_scratch, self, rom, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0e, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x4e, // LOAD_CONST_SMALL_INT 78
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x13, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_write_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_ds18x20_DS18X20_write_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .opcodes = fun_data_ds18x20_DS18X20_write_scratch + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_temp
static const byte fun_data_ds18x20_DS18X20_read_temp[103] = {
    0x3a,0x06, // prelude
    0x14,0x19,0x1c, // names: read_temp, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0d, // LOAD_METHOD 'read_scratch'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x90, // LOAD_CONST_SMALL_INT 16
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xd2, // UNARY_OP 2 __invert__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xf7, // BINARY_OP 32 __truediv__
    0xf2, // BINARY_OP 27 __add__
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xef, // BINARY_OP 24 __and__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0x22,0x83,0xff,0x7f, // LOAD_CONST_SMALL_INT 65535
    0xee, // BINARY_OP 23 __xor__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf7, // BINARY_OP 32 __truediv__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_ds18x20_DS18X20_read_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 103,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_ds18x20_DS18X20_read_temp + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_temp + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20_DS18X20[] = {
    &raw_code_ds18x20_DS18X20___init__,
    &raw_code_ds18x20_DS18X20_scan,
    &raw_code_ds18x20_DS18X20_convert_temp,
    &raw_code_ds18x20_DS18X20_read_scratch,
    &raw_code_ds18x20_DS18X20_write_scratch,
    &raw_code_ds18x20_DS18X20_read_temp,
};

static const mp_raw_code_t raw_code_ds18x20_DS18X20 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_ds18x20_DS18X20 + 3,
        .opcodes = fun_data_ds18x20_DS18X20 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_ds18x20__lt_module_gt_[] = {
    &raw_code_ds18x20_DS18X20,
};

static const mp_raw_code_t raw_code_ds18x20__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ds18x20__lt_module_gt_ + 3,
        .opcodes = fun_data_ds18x20__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_ds18x20[31] = {
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_DS18X20,
    MP_QSTR___init__,
    MP_QSTR_ow,
    MP_QSTR_buf,
    MP_QSTR_scan,
    MP_QSTR_convert_temp,
    MP_QSTR_reset,
    MP_QSTR_writebyte,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_read_scratch,
    MP_QSTR_select_rom,
    MP_QSTR_readinto,
    MP_QSTR_crc8,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_write,
    MP_QSTR_read_temp,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_onewire,
    MP_QSTR_bytearray,
    MP_QSTR_rom,
    MP_QSTR_Exception,
    MP_QSTR__star_,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_ds18x20_0 = {{&mp_type_float}, (mp_float_t)0.25};
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&const_obj_ds18x20_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbf000002))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbfd4000000000000))
#endif
static const mp_rom_obj_tuple_t const_obj_ds18x20_1 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(16),
    MP_ROM_INT(34),
    MP_ROM_INT(40),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_ds18x20[2] = {
    const_obj_ds18x20_0_macro,
    MP_ROM_PTR(&const_obj_ds18x20_1),
};

static const mp_frozen_module_t frozen_module_ds18x20 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ds18x20,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ds18x20,
    },
    .rc = &raw_code_ds18x20__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module dht
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/dht.mpy
// - frozen file name: dht.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file dht.py, scope dht__lt_module_gt_
static const byte fun_data_dht__lt_module_gt_[150] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x14,0x04, // LOAD_METHOD 'startswith'
    0x10,0x05, // LOAD_CONST_STRING 'esp'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'esp'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0xd1,0x80, // JUMP 81
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x07, // LOAD_CONST_STRING 'mimxrt'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x07, // IMPORT_NAME 'mimxrt'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x7a, // JUMP 58
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x08, // LOAD_CONST_STRING 'rp2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'rp2'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x09, // LOAD_CONST_STRING 'pyboard'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'pyb'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x4c, // JUMP 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0b, // IMPORT_NAME 'machine'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'DHTBase'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0c, // STORE_NAME 'DHTBase'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'DHT11'
    0x11,0x0c, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'DHT11'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x0e, // LOAD_CONST_STRING 'DHT22'
    0x11,0x0c, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0e, // STORE_NAME 'DHT22'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHTBase
static const byte fun_data_dht_DHTBase[21] = {
    0x00,0x02, // prelude
    0x0c, // names: DHTBase
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'DHTBase'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0f, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x12, // STORE_NAME 'measure'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase___init__
static const byte fun_data_dht_DHTBase___init__[19] = {
    0x1a,0x06, // prelude
    0x0f,0x18,0x10, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'pin'
    0x12,0x19, // LOAD_GLOBAL 'bytearray'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x11, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHTBase___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_dht_DHTBase___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_dht_DHTBase___init__ + 5,
        .opcodes = fun_data_dht_DHTBase___init__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase_measure
static const byte fun_data_dht_DHTBase_measure[51] = {
    0x21,0x04, // prelude
    0x12,0x18, // names: measure, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0xc1, // STORE_FAST 1
    0x12,0x06, // LOAD_GLOBAL 'dht_readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xb1, // LOAD_FAST 1
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1a, // LOAD_GLOBAL 'Exception'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHTBase_measure = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHTBase_measure,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHTBase_measure + 4,
        .opcodes = fun_data_dht_DHTBase_measure + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHTBase[] = {
    &raw_code_dht_DHTBase___init__,
    &raw_code_dht_DHTBase_measure,
};

static const mp_raw_code_t raw_code_dht_DHTBase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_dht_DHTBase + 3,
        .opcodes = fun_data_dht_DHTBase + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT11
static const byte fun_data_dht_DHT11[21] = {
    0x00,0x02, // prelude
    0x0d, // names: DHT11
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'DHT11'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x13, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x14, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_humidity
static const byte fun_data_dht_DHT11_humidity[10] = {
    0x11,0x04, // prelude
    0x13,0x18, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT11_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT11_humidity + 4,
        .opcodes = fun_data_dht_DHT11_humidity + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_temperature
static const byte fun_data_dht_DHT11_temperature[10] = {
    0x11,0x04, // prelude
    0x14,0x18, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT11_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_dht_DHT11_temperature + 4,
        .opcodes = fun_data_dht_DHT11_temperature + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHT11[] = {
    &raw_code_dht_DHT11_humidity,
    &raw_code_dht_DHT11_temperature,
};

static const mp_raw_code_t raw_code_dht_DHT11 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_dht_DHT11 + 3,
        .opcodes = fun_data_dht_DHT11 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT22
static const byte fun_data_dht_DHT22[21] = {
    0x00,0x02, // prelude
    0x0e, // names: DHT22
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0e, // LOAD_CONST_STRING 'DHT22'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x13, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x14, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_humidity
static const byte fun_data_dht_DHT22_humidity[21] = {
    0x19,0x04, // prelude
    0x13,0x18, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT22_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT22_humidity + 4,
        .opcodes = fun_data_dht_DHT22_humidity + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_temperature
static const byte fun_data_dht_DHT22_temperature[41] = {
    0x21,0x04, // prelude
    0x14,0x18, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xf4, // BINARY_OP 29 __mul__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xef, // BINARY_OP 24 __and__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb1, // LOAD_FAST 1
    0xd1, // UNARY_OP 1 __neg__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_dht_DHT22_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_dht_DHT22_temperature + 4,
        .opcodes = fun_data_dht_DHT22_temperature + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht_DHT22[] = {
    &raw_code_dht_DHT22_humidity,
    &raw_code_dht_DHT22_temperature,
};

static const mp_raw_code_t raw_code_dht_DHT22 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_dht_DHT22 + 3,
        .opcodes = fun_data_dht_DHT22 + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_dht__lt_module_gt_[] = {
    &raw_code_dht_DHTBase,
    &raw_code_dht_DHT11,
    &raw_code_dht_DHT22,
};

static const mp_raw_code_t raw_code_dht__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 150,
    #endif
    .children = (void *)&children_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_dht__lt_module_gt_ + 3,
        .opcodes = fun_data_dht__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_dht[27] = {
    MP_QSTR_dht_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_platform,
    MP_QSTR_startswith,
    MP_QSTR_esp,
    MP_QSTR_dht_readinto,
    MP_QSTR_mimxrt,
    MP_QSTR_rp2,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_machine,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_buf,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_dht_1 = {{&mp_type_float}, (mp_float_t)0.1};
#define const_obj_dht_1_macro MP_ROM_PTR(&const_obj_dht_1)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_dht_1_macro ((mp_rom_obj_t)(0xbe4cccce))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_dht_1_macro ((mp_rom_obj_t)(0xbfbd99999999999a))
#endif

// constant table
static const mp_rom_obj_t const_obj_table_data_dht[2] = {
    MP_ROM_QSTR(MP_QSTR_checksum_space_error),
    const_obj_dht_1_macro,
};

static const mp_frozen_module_t frozen_module_dht = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_dht,
        .obj_table = (mp_obj_t *)&const_obj_table_data_dht,
    },
    .rc = &raw_code_dht__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module neopixel
// - original source file: /Users/developer/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/frozen_mpy/neopixel.mpy
// - frozen file name: neopixel.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file neopixel.py, scope neopixel__lt_module_gt_
static const byte fun_data_neopixel__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'bitstream'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x1c,0x02, // IMPORT_FROM 'bitstream'
    0x16,0x02, // STORE_NAME 'bitstream'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'NeoPixel'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel__lt_module_gt_
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel
static const byte fun_data_neopixel_NeoPixel[46] = {
    0x08,0x02, // prelude
    0x04, // names: NeoPixel
     // code info
    0x11,0x14, // LOAD_NAME '__name__'
    0x16,0x15, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x16,0x16, // STORE_NAME '__qualname__'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x0f, // STORE_NAME 'ORDER'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0d, // STORE_NAME '__len__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0e, // STORE_NAME '__setitem__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x10, // STORE_NAME '__getitem__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x11, // STORE_NAME 'fill'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x12, // STORE_NAME 'write'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___init__
static const byte fun_data_neopixel_NeoPixel___init__[69] = {
    0xb9,0x84,0x01,0x0c, // prelude
    0x05,0x17,0x06,0x07,0x08,0x0c, // names: __init__, self, pin, n, bpp, timing
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'n'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'bpp'
    0x12,0x18, // LOAD_GLOBAL 'bytearray'
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'buf'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x14,0x0a, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x0b, // LOAD_ATTR 'OUT'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x19, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x1a, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0xb4, // LOAD_FAST 4
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x42,0x42, // JUMP 2
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x42,0x41, // JUMP 1
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x0c, // STORE_ATTR 'timing'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_neopixel_NeoPixel___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 69,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_neopixel_NeoPixel___init__ + 10,
        .opcodes = fun_data_neopixel_NeoPixel___init__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___len__
static const byte fun_data_neopixel_NeoPixel___len__[8] = {
    0x09,0x04, // prelude
    0x0d,0x17, // names: __len__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'n'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___len__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_neopixel_NeoPixel___len__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_neopixel_NeoPixel___len__ + 4,
        .opcodes = fun_data_neopixel_NeoPixel___len__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___setitem__
static const byte fun_data_neopixel_NeoPixel___setitem__[45] = {
    0x53,0x08, // prelude
    0x0e,0x17,0x1b,0x1c, // names: __setitem__, self, i, v
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'bpp'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x52, // JUMP 18
    0x57, // DUP_TOP
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'buf'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'ORDER'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x29, // POP_JUMP_IF_TRUE -23
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___setitem__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_neopixel_NeoPixel___setitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 45,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_neopixel_NeoPixel___setitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___setitem__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem__
static const byte fun_data_neopixel_NeoPixel___getitem__[37] = {
    0x32,0x86,0x01, // prelude
    0x10,0x17,0x1b, // names: __getitem__, self, i
    0x00,0x02, // code info
    0xb1, // LOAD_FAST 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x08, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0x27,0x02, // STORE_DEREF 2
    0x12,0x1d, // LOAD_GLOBAL 'tuple'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x20,0x00,0x02, // MAKE_CLOSURE 0
    0x12,0x1e, // LOAD_GLOBAL 'range'
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x08, // LOAD_ATTR 'bpp'
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel___getitem__
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem____lt_genexpr_gt_
static const byte fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_[34] = {
    0xdb,0x40,0x08, // prelude
    0x13,0x20,0x20,0x20, // names: <genexpr>, *, *, *
     // code info
    0x53, // LOAD_NULL
    0xb2, // LOAD_FAST 2
    0x53, // LOAD_NULL
    0x53, // LOAD_NULL
    0x4b,0x13, // FOR_ITER 19
    0xc3, // STORE_FAST 3
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x09, // LOAD_ATTR 'buf'
    0x25,0x01, // LOAD_DEREF 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x0f, // LOAD_ATTR 'ORDER'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x55, // LOAD_SUBSCR
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x42,0x2b, // JUMP -21
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel___getitem____lt_genexpr_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 34,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
        .opcodes = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel_NeoPixel___getitem__[] = {
    &raw_code_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
};

static const mp_raw_code_t raw_code_neopixel_NeoPixel___getitem__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_neopixel_NeoPixel___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_neopixel_NeoPixel___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_neopixel_NeoPixel___getitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___getitem__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_fill
static const byte fun_data_neopixel_NeoPixel_fill[63] = {
    0x62,0x06, // prelude
    0x11,0x17,0x1c, // names: fill, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'buf'
    0xc2, // STORE_FAST 2
    0x12,0x1f, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'bpp'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5d, // JUMP 29
    0x57, // DUP_TOP
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'ORDER'
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc7, // STORE_FAST 7
    0x42,0x48, // JUMP 8
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb7, // LOAD_FAST 7
    0xb4, // LOAD_FAST 4
    0xe5, // BINARY_OP 14 __iadd__
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x33, // POP_JUMP_IF_TRUE -13
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1e, // POP_JUMP_IF_TRUE -34
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel_fill = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_neopixel_NeoPixel_fill,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_neopixel_NeoPixel_fill + 5,
        .opcodes = fun_data_neopixel_NeoPixel_fill + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_write
static const byte fun_data_neopixel_NeoPixel_write[21] = {
    0x29,0x04, // prelude
    0x12,0x17, // names: write, self
     // code info
    0x12,0x02, // LOAD_GLOBAL 'bitstream'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x13,0x0c, // LOAD_ATTR 'timing'
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'buf'
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_neopixel_NeoPixel_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_neopixel_NeoPixel_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_neopixel_NeoPixel_write + 4,
        .opcodes = fun_data_neopixel_NeoPixel_write + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel_NeoPixel[] = {
    &raw_code_neopixel_NeoPixel___init__,
    &raw_code_neopixel_NeoPixel___len__,
    &raw_code_neopixel_NeoPixel___setitem__,
    &raw_code_neopixel_NeoPixel___getitem__,
    &raw_code_neopixel_NeoPixel_fill,
    &raw_code_neopixel_NeoPixel_write,
};

static const mp_raw_code_t raw_code_neopixel_NeoPixel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_neopixel_NeoPixel,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = (void *)&children_neopixel_NeoPixel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_neopixel_NeoPixel + 3,
        .opcodes = fun_data_neopixel_NeoPixel + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_neopixel__lt_module_gt_[] = {
    &raw_code_neopixel_NeoPixel,
};

static const mp_raw_code_t raw_code_neopixel__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_neopixel__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_neopixel__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_neopixel__lt_module_gt_ + 3,
        .opcodes = fun_data_neopixel__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_neopixel[33] = {
    MP_QSTR_neopixel_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_bitstream,
    MP_QSTR_machine,
    MP_QSTR_NeoPixel,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_n,
    MP_QSTR_bpp,
    MP_QSTR_buf,
    MP_QSTR_init,
    MP_QSTR_OUT,
    MP_QSTR_timing,
    MP_QSTR___len__,
    MP_QSTR___setitem__,
    MP_QSTR_ORDER,
    MP_QSTR___getitem__,
    MP_QSTR_fill,
    MP_QSTR_write,
    MP_QSTR__lt_genexpr_gt_,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_isinstance,
    MP_QSTR_int,
    MP_QSTR_i,
    MP_QSTR_v,
    MP_QSTR_tuple,
    MP_QSTR_range,
    MP_QSTR_len,
    MP_QSTR__star_,
};

// constants
static const mp_rom_obj_tuple_t const_obj_neopixel_0 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(1),
    MP_ROM_INT(0),
    MP_ROM_INT(2),
    MP_ROM_INT(3),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_1 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(400),
    MP_ROM_INT(850),
    MP_ROM_INT(800),
    MP_ROM_INT(450),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_2 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(800),
    MP_ROM_INT(1700),
    MP_ROM_INT(1600),
    MP_ROM_INT(900),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_neopixel[3] = {
    MP_ROM_PTR(&const_obj_neopixel_0),
    MP_ROM_PTR(&const_obj_neopixel_1),
    MP_ROM_PTR(&const_obj_neopixel_2),
};

static const mp_frozen_module_t frozen_module_neopixel = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_neopixel,
        .obj_table = (mp_obj_t *)&const_obj_table_data_neopixel,
    },
    .rc = &raw_code_neopixel__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// collection of all frozen modules

const char mp_frozen_names[] = {
    #ifdef MP_FROZEN_STR_NAMES
    MP_FROZEN_STR_NAMES
    #endif
    "_boot_fat.py\0"
    "rp2.py\0"
    "_boot.py\0"
    "main.py\0"
    "uasyncio/__init__.py\0"
    "uasyncio/core.py\0"
    "uasyncio/event.py\0"
    "uasyncio/funcs.py\0"
    "uasyncio/lock.py\0"
    "uasyncio/stream.py\0"
    "onewire.py\0"
    "ds18x20.py\0"
    "dht.py\0"
    "neopixel.py\0"
    "\0"
};

const mp_frozen_module_t *const mp_frozen_mpy_content[] = {
    &frozen_module__boot_fat,
    &frozen_module_rp2,
    &frozen_module__boot,
    &frozen_module_main,
    &frozen_module_uasyncio___init__,
    &frozen_module_uasyncio_core,
    &frozen_module_uasyncio_event,
    &frozen_module_uasyncio_funcs,
    &frozen_module_uasyncio_lock,
    &frozen_module_uasyncio_stream,
    &frozen_module_onewire,
    &frozen_module_ds18x20,
    &frozen_module_dht,
    &frozen_module_neopixel,
};

#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("_boot_fat", "_boot_fat.py")
MICROPY_FROZEN_LIST_ITEM("rp2", "rp2.py")
MICROPY_FROZEN_LIST_ITEM("_boot", "_boot.py")
MICROPY_FROZEN_LIST_ITEM("main", "main.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio", "uasyncio/__init__.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/core", "uasyncio/core.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/event", "uasyncio/event.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/funcs", "uasyncio/funcs.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/lock", "uasyncio/lock.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/stream", "uasyncio/stream.py")
MICROPY_FROZEN_LIST_ITEM("onewire", "onewire.py")
MICROPY_FROZEN_LIST_ITEM("ds18x20", "ds18x20.py")
MICROPY_FROZEN_LIST_ITEM("dht", "dht.py")
MICROPY_FROZEN_LIST_ITEM("neopixel", "neopixel.py")
#endif

/*
byte sizes:
qstr content: 227 unique, 2479 bytes
bc content: 7631
const str content: 62
const int content: 4
const obj content: 72
const table qstr content: 0 entries, 0 bytes
const table ptr content: 27 entries, 108 bytes
raw code content: 164 * 4 = 2624
mp_frozen_mpy_names_content: 189
mp_frozen_mpy_content_size: 56
total: 13225
*/
