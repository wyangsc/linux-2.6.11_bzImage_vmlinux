cmd_drivers/i2c/built-in.o :=  ld -m elf_x86_64  -r -o drivers/i2c/built-in.o drivers/i2c/i2c-core.o drivers/i2c/busses/built-in.o drivers/i2c/chips/built-in.o drivers/i2c/algos/built-in.o
