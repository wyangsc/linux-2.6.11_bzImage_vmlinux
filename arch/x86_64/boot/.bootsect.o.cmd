cmd_arch/x86_64/boot/bootsect.o := gcc -Wp,-MD,arch/x86_64/boot/.bootsect.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional -DSVGA_MODE=NORMAL_VGA  -D__BIG_KERNEL__   -c -o arch/x86_64/boot/bootsect.o arch/x86_64/boot/bootsect.S

deps_arch/x86_64/boot/bootsect.o := \
  arch/x86_64/boot/bootsect.S \
  include/asm/boot.h \

arch/x86_64/boot/bootsect.o: $(deps_arch/x86_64/boot/bootsect.o)

$(deps_arch/x86_64/boot/bootsect.o):
