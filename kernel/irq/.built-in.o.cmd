cmd_kernel/irq/built-in.o :=  ld -m elf_x86_64  -r -o kernel/irq/built-in.o kernel/irq/handle.o kernel/irq/manage.o kernel/irq/spurious.o kernel/irq/autoprobe.o kernel/irq/proc.o
