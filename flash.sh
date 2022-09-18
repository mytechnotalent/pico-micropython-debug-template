#!/bin/sh

cp main.py pico/micropython/ports/rp2/modules
cd pico/micropython/ports/rp2 && make clean
make
cp build-PICO/firmware.elf ../../../../
cp build-PICO/firmware.uf2 ../../../../
cp build-PICO/firmware.uf2 /Volumes/RPI-RP2 > /dev/null 2>&1
cd ../../../../
