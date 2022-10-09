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
>>> target remote localhost:3333
>>> load
>>> monitor reset init
>>> b main
>>> b *0xXXXXXXXX  # replace X's with actual address of where pyexec_frozen_module is called
>>> b *0xXXXXXXXX  # replace X's with actual address of where pyexec_frozen_module is called
>>> c
```

## STEP 8: Debugging RAW Hardware [Raspberry Pi 4 (32-bit)]
### Terminal 2 [Raspberry Pi 4 (32-bit)]
```bash
gdb-multiarch
>>> target remote localhost:3333
>>> monitor reset init
>>> b *0xXXXXXXXX  # replace X's with actual address of main which you can find in Radare2 (1st push to r0, r1, r2, r4, r5, lr followed by 2 bl's to functions
>>> b *0xXXXXXXXX  # replace X's with actual address of where pyexec_frozen_module is called (manual no shortcut here)
>>> c
```

<br>

## 10/09/22
### PROJECT IS UNDER DEVELOPMENT AND WILL HAVE UPDATED CONTENT OVER THE COMING DAYS 

<br>

## License
[MIT License](https://raw.githubusercontent.com/mytechnotalent/pico-micropython-debug-template/main/LICENSE)
