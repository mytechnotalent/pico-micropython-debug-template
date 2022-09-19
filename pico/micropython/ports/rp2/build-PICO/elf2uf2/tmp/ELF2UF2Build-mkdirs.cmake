# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/lib/pico-sdk/tools/elf2uf2"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2/tmp"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2/src/ELF2UF2Build-stamp"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2/src"
  "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2/src/ELF2UF2Build-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/kevinthomas/Documents/pico-micropython-debug-template/pico/micropython/ports/rp2/build-PICO/elf2uf2/src/ELF2UF2Build-stamp/${subDir}")
endforeach()
