cmd_init/built-in.o :=  ld -m elf_x86_64  -r -o init/built-in.o init/main.o init/version.o init/mounts.o init/initramfs.o init/calibrate.o
