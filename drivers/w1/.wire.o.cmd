cmd_drivers/w1/wire.o := ld -m elf_x86_64  -r -o drivers/w1/wire.o drivers/w1/w1.o drivers/w1/w1_int.o drivers/w1/w1_family.o drivers/w1/w1_netlink.o drivers/w1/w1_io.o
