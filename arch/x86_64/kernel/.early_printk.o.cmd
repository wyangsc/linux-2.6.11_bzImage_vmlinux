cmd_arch/x86_64/kernel/early_printk.o := gcc -Wp,-MD,arch/x86_64/kernel/.early_printk.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=early_printk -DKBUILD_MODNAME=early_printk -c -o arch/x86_64/kernel/.tmp_early_printk.o arch/x86_64/kernel/early_printk.c

deps_arch/x86_64/kernel/early_printk.o := \
  arch/x86_64/kernel/early_printk.c \
  include/linux/console.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/linux/spinlock.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/lockmeter.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/thread_info.h \
  include/linux/bitops.h \
  include/asm/bitops.h \
  include/asm/thread_info.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/bug.h \
  include/linux/stringify.h \
  include/asm-generic/bug.h \
  include/asm/pda.h \
  include/linux/cache.h \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/mmsegment.h \
  include/asm/processor.h \
  include/asm/segment.h \
  include/asm/sigcontext.h \
  include/asm/cpufeature.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  include/asm/msr.h \
  include/asm/current.h \
  include/asm/system.h \
    $(wildcard include/config/unordered/io.h) \
  include/asm/percpu.h \
  include/linux/personality.h \
  include/asm/spinlock.h \
    $(wildcard include/config/x86/oostore.h) \
    $(wildcard include/config/x86/ppro/fence.h) \
  include/asm/atomic.h \
  include/asm/rwlock.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/string.h \
  include/asm/string.h \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm/mmzone.h \
  include/asm/smp.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/bitmap.h \
  include/asm/fixmap.h \
  include/asm/apicdef.h \
  include/asm/vsyscall.h \
  include/linux/seqlock.h \
  include/asm/vsyscall32.h \
  include/asm/mpspec.h \
    $(wildcard include/config/acpi/boot.h) \
  include/asm/io_apic.h \
    $(wildcard include/config/pci/msi.h) \
  include/asm/apic.h \
    $(wildcard include/config/x86/good/apic.h) \
  include/linux/pm.h \
    $(wildcard include/config/pm.h) \
  include/linux/list.h \
  include/linux/prefetch.h \
  include/asm-generic/iomap.h \

arch/x86_64/kernel/early_printk.o: $(deps_arch/x86_64/kernel/early_printk.o)

$(deps_arch/x86_64/kernel/early_printk.o):
