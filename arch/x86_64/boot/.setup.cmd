cmd_arch/x86_64/boot/setup := ld -m elf_x86_64  -Ttext 0x0 -s --oformat binary -e begtext arch/x86_64/boot/setup.o -o arch/x86_64/boot/setup 
