target remote 192.168.1.60:12
symbol-file doom.elf
layout src
layout asm
layout split
list main
b r_data.c:463
c
