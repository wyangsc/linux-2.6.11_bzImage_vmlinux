cmd_fs/proc/proc.o := ld -m elf_x86_64  -r -o fs/proc/proc.o fs/proc/mmu.o fs/proc/task_mmu.o fs/proc/inode.o fs/proc/root.o fs/proc/base.o fs/proc/generic.o fs/proc/array.o fs/proc/kmsg.o fs/proc/proc_tty.o fs/proc/proc_misc.o fs/proc/kcore.o
