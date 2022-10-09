![image](https://github.com/mytechnotalent/pico-micropython-debug-template/blob/main/Pico%20MicroPython%20Debug%20Template-1.png?raw=true)

## FREE Reverse Engineering Self-Study Course [HERE](https://github.com/mytechnotalent/Reverse-Engineering-Tutorial)

<br>

## Join DC540 Discord [HERE](https://discord.gg/TC9V9RCr5U)

<br>

## Schematic
![image](https://github.com/mytechnotalent/pico-micropython-debug-template/blob/main/schematic.png?raw=true)

## Parts
[Raspberry Pi 4](https://www.amazon.com/Argon-Raspberry-Model-Case-AR_NEO_RPi4_2Gig_32GigSD/dp/B08BWNJLJ4) <br>
[Raspberry Pi Pico](https://www.amazon.com/Raspberry-Pre-Soldered-Microcontroller-Development-Dual-Core/dp/B08X7HN2VG) <br>
[Breadboard](https://www.amazon.com/DaFuRui-Solderless-Breadboard-Super-Plug/dp/B081YNHZF5) <br>
[Breadboard Jumper Wires](https://www.amazon.com/IZOKEE-Solderless-Breadboard-Arduino-Project/dp/B08151TQHG) <br>

## STEP 1: Install Dependencies [Raspberry Pi 4 (32-bit)]
```bash
wget https://raw.githubusercontent.com/raspberrypi/pico-setup/master/pico_setup.sh
chmod +x pico_setup.sh
./pico_setup.sh
cd ~/
wget https://raw.githubusercontent.com/cyrus-and/gdb-dashboard/master/.gdbinit
sudo reboot
```

## STEP 2: Clone Repo [Raspberry Pi 4 (32-bit)]
```bash
git clone https://github.com/mytechnotalent/pico-micropython-debug-template.git
```

## STEP 3: Edit `main.py` & Populate [Raspberry Pi 4 (32-bit)]
```python
from utime import sleep
from machine import Pin 

led = Pin(25, Pin.OUT)

while True:
    led.toggle()
    sleep(5)
```

## STEP 4: Build Firmware [Raspberry Pi 4 (32-bit)]
```bash
./build.sh
```

## STEP 5: Flash Firmware [Raspberry Pi 4 (32-bit)]
```bash
./flash.sh
```

## STEP 6: Run OpenOCD [Raspberry Pi 4 (32-bit)]
### Terminal 1 [Raspberry Pi 4 (32-bit)]
```bash
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg
```

## STEP 7: Debugging Hardware w/ `.elf` [Raspberry Pi 4 (32-bit)]
### Terminal 2 [Raspberry Pi 4 (32-bit)]
```bash
gdb-multiarch firmware.elf
(gdb) target remote localhost:3333
(gdb) load
(gdb) monitor reset init
(gdb) b main
(gdb) b *(main+98)
(gdb) c
(gdb) x/s $r0  # boot.py
(gdb) b *(main+146)
(gdb) c
(gdb) x/s $r0  # main.py
(gdb) x/s 0x1004239d  # 0x1004239d <mp_frozen_names+29> "main.py"
```

## STEP 8: Debugging RAW Hardware [Raspberry Pi 4 (32-bit)]
### Terminal 2 [Raspberry Pi 4 (32-bit)]
```bash
gdb-multiarch
(gdb) target remote localhost:3333
(gdb) mon reset
(gdb) c
CTRL+C
(gdb) x/x $pc  # location of the program counter
(gdb) x /8i $pc-8  # examine 4 instructions before and after the program counter
(gdb) x/xw $pc  # examine bytes (word) inside current instruction
(gdb) x/4w $sp  # examine bytes (4 words) on the stack
(gdb) x/s $sp  # examine string at the top of the stack
(gdb) i r  # examine register
```

<br>

## 10/09/22
### PROJECT IS UNDER DEVELOPMENT AND WILL HAVE UPDATED CONTENT OVER THE COMING DAYS 

<br>

## License
[MIT License](https://raw.githubusercontent.com/mytechnotalent/pico-micropython-debug-template/main/LICENSE)
