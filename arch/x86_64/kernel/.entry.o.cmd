cmd_arch/x86_64/kernel/entry.o := gcc -Wp,-MD,arch/x86_64/kernel/.entry.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional   -c -o arch/x86_64/kernel/entry.o arch/x86_64/kernel/entry.S

deps_arch/x86_64/kernel/entry.o := \
  arch/x86_64/kernel/entry.S \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/info.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/mce.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/smp.h \
    $(wildcard include/config/x86/io/apic.h) \
  include/asm/thread_info.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/types.h \
  include/asm/pda.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/dwarf2.h \
  include/asm/calling.h \
    $(wildcard include/config/frame/pointer.h) \
  include/asm/offset.h \
  include/asm/msr.h \
  include/asm/unistd.h \
  include/asm/hw_irq.h \

arch/x86_64/kernel/entry.o: $(deps_arch/x86_64/kernel/entry.o)

$(deps_arch/x86_64/kernel/entry.o):
