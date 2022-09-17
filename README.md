![image](https://github.com/mytechnotalent/pico-micropython-debug-template/blob/main/Pico%20MicroPython%20Debug%20Template-1.png?raw=true)

A Raspberry Pi Pico RP2040 debug template repo with step-by-step instructions on how to freeze your MicroPython files into C firmware and reverse engineer the binary with OpenOCD and GDB.

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

## STEP 1: Clone MicroPython Repo
```bash
mkdir pico
cd pico
git clone -b master https://github.com/micropython/micropython.git
cd micropython
make -C ports/rp2 submodules
make -C mpy-cross
rm -rf .g*
```

## STEP 2: Create `main.py` & Populate
```python
from utime import sleep

name = foo
number = 42

while True:
    print(name)
    print(number)
    sleep(5)
```

## STEP 3: Flash Firmware
```bash
./flash.sh
```

## STEP 4: Install Dependencies [Raspberry Pi 4 (32-bit)]
```bash
sudo apt install automake autoconf build-essential texinfo libtool libftdi-dev libusb-1.0-0-dev gdb-multiarch
```

## STEP 5: OpenOCD [Raspberry Pi 4 (32-bit)]
```bash
mkdir pico
cd pico
git clone https://github.com/raspberrypi/openocd.git --recursive--branch rp2040 --depth=1
cd openocd
./bootstrap
./configure –enable-ftdi –enable-sysfsgpio –enable-bcm2835gpio
make -j4
sudo make install
```

## STEP 6: Run OpenOCD Terminal 1 [Raspberry Pi 4 (32-bit)]
```bash
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg
```

## STEP 7: Copy `firmware.elf` From PC To Raspberry Pi 4
```bash
firmware.elf
```

## STEP 8: Run GDB Multiarch Terminal 2 [Raspberry Pi 4 (32-bit)]
```bash
gdb-multiarch firmware.elf
(gdb) target remote localhost:3333
(gdb) load
(gdb) monitor reset init
(gdb) continu
```

<br>

## License
[MIT License](https://raw.githubusercontent.com/mytechnotalent/pico-micropython-debug-template/main/LICENSE)
