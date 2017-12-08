cmd_arch/x86_64/boot/bootsect := ld -m elf_x86_64  -Ttext 0x0 -s --oformat binary arch/x86_64/boot/bootsect.o -o arch/x86_64/boot/bootsect 
