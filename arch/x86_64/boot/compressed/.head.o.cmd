cmd_arch/x86_64/boot/compressed/head.o := gcc -Wp,-MD,arch/x86_64/boot/compressed/.head.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional -m32   -c -o arch/x86_64/boot/compressed/head.o arch/x86_64/boot/compressed/head.S

deps_arch/x86_64/boot/compressed/head.o := \
  arch/x86_64/boot/compressed/head.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \

arch/x86_64/boot/compressed/head.o: $(deps_arch/x86_64/boot/compressed/head.o)

$(deps_arch/x86_64/boot/compressed/head.o):
