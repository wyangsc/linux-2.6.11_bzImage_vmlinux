cmd_arch/x86_64/kernel/head.o := gcc -Wp,-MD,arch/x86_64/kernel/.head.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional   -c -o arch/x86_64/kernel/head.o arch/x86_64/kernel/head.S

deps_arch/x86_64/kernel/head.o := \
  arch/x86_64/kernel/head.S \
    $(wildcard include/config/acpi/sleep.h) \
    $(wildcard include/config/smp.h) \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  include/asm/desc.h \
  include/asm/ldt.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/msr.h \

arch/x86_64/kernel/head.o: $(deps_arch/x86_64/kernel/head.o)

$(deps_arch/x86_64/kernel/head.o):
