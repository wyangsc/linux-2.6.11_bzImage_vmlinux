cmd_fs/fat/fat.o := ld -m elf_x86_64  -r -o fs/fat/fat.o fs/fat/cache.o fs/fat/dir.o fs/fat/file.o fs/fat/inode.o fs/fat/misc.o
