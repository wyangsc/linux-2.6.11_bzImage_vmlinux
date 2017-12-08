cmd_drivers/mtd/built-in.o :=  ld -m elf_x86_64  -r -o drivers/mtd/built-in.o drivers/mtd/chips/built-in.o drivers/mtd/maps/built-in.o drivers/mtd/devices/built-in.o drivers/mtd/nand/built-in.o
