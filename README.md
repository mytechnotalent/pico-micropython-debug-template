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



<br>

## License
[MIT License](https://raw.githubusercontent.com/mytechnotalent/pico-micropython-debug-template/main/LICENSE)
