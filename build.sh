#!/bin/sh

cp main.py pico/micropython/ports/rp2/modules
cd pico/micropython/ports/rp2 && make clean
make
cp build-PICO/firmware.elf ../../../../
cp build-PICO/firmware.uf2 ../../../../
cd ../../../../
