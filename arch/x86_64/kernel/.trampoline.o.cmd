cmd_arch/x86_64/kernel/trampoline.o := gcc -Wp,-MD,arch/x86_64/kernel/.trampoline.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional   -c -o arch/x86_64/kernel/trampoline.o arch/x86_64/kernel/trampoline.S

deps_arch/x86_64/kernel/trampoline.o := \
  arch/x86_64/kernel/trampoline.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \

arch/x86_64/kernel/trampoline.o: $(deps_arch/x86_64/kernel/trampoline.o)

$(deps_arch/x86_64/kernel/trampoline.o):
