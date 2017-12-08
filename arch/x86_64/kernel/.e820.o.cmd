cmd_arch/x86_64/kernel/e820.o := gcc -Wp,-MD,arch/x86_64/kernel/.e820.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=e820 -DKBUILD_MODNAME=e820 -c -o arch/x86_64/kernel/.tmp_e820.o arch/x86_64/kernel/e820.c

deps_arch/x86_64/kernel/e820.o := \
  arch/x86_64/kernel/e820.c \
    $(wildcard include/config/blk/dev/initrd.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/linux/bitops.h \
  include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/bug.h \
  include/linux/stringify.h \
  include/asm-generic/bug.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/bootmem.h \
    $(wildcard include/config/have/arch/bootmem/node.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ia64.h) \
  include/asm/pgtable.h \
  include/asm/processor.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/sigcontext.h \
  include/asm/cpufeature.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  include/asm/msr.h \
  include/asm/current.h \
  include/asm/pda.h \
  include/linux/cache.h \
  include/asm/system.h \
    $(wildcard include/config/unordered/io.h) \
  include/asm/mmsegment.h \
  include/asm/percpu.h \
  include/linux/personality.h \
  include/asm/fixmap.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
  include/asm/apicdef.h \
  include/asm/vsyscall.h \
  include/linux/seqlock.h \
  include/linux/spinlock.h \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/lockmeter.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  include/linux/thread_info.h \
  include/asm/thread_info.h \
  include/asm/spinlock.h \
    $(wildcard include/config/x86/oostore.h) \
    $(wildcard include/config/x86/ppro/fence.h) \
  include/asm/atomic.h \
  include/asm/rwlock.h \
  include/asm/vsyscall32.h \
  include/asm-generic/pgtable.h \
  include/asm/dma.h \
    $(wildcard include/config/pci.h) \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm/mmzone.h \
  include/asm/smp.h \
  include/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
  include/asm/string.h \
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
  include/linux/delay.h \
  include/asm/delay.h \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
  include/linux/wait.h \
  include/linux/numa.h \
  include/asm/numnodes.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
  include/linux/smp.h \
  include/asm/topology.h \
    $(wildcard include/config/acpi/numa.h) \
  include/asm-generic/topology.h \
  include/linux/ioport.h \
  include/asm/e820.h \
  include/asm/proto.h \
  include/asm/ldt.h \
  include/asm/bootsetup.h \

arch/x86_64/kernel/e820.o: $(deps_arch/x86_64/kernel/e820.o)

$(deps_arch/x86_64/kernel/e820.o):
