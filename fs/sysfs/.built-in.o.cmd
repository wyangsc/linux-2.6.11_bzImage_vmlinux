cmd_fs/sysfs/built-in.o :=  ld -m elf_x86_64  -r -o fs/sysfs/built-in.o fs/sysfs/inode.o fs/sysfs/file.o fs/sysfs/dir.o fs/sysfs/symlink.o fs/sysfs/mount.o fs/sysfs/bin.o fs/sysfs/group.o
