cmd_drivers/parport/parport.o := ld -m elf_x86_64  -r -o drivers/parport/parport.o drivers/parport/share.o drivers/parport/ieee1284.o drivers/parport/ieee1284_ops.o drivers/parport/procfs.o drivers/parport/daisy.o drivers/parport/probe.o
