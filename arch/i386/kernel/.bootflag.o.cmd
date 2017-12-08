cmd_arch/x86_64/kernel/../../i386/kernel/bootflag.o := gcc -Wp,-MD,arch/x86_64/kernel/../../i386/kernel/.bootflag.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=bootflag -DKBUILD_MODNAME=bootflag -c -o arch/x86_64/kernel/../../i386/kernel/.tmp_bootflag.o arch/x86_64/kernel/../../i386/kernel/bootflag.c

deps_arch/x86_64/kernel/../../i386/kernel/bootflag.o := \
  arch/i386/kernel/bootflag.c \
    $(wildcard include/config/isapnp.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
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
  include/linux/string.h \
  include/asm/string.h \
  include/linux/slab.h \
    $(wildcard include/config/.h) \
    $(wildcard include/config/numa.h) \
  include/linux/gfp.h \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/discontigmem.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/lockmeter.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  include/linux/thread_info.h \
  include/asm/thread_info.h \
  include/asm/page.h \
  include/asm/pda.h \
  include/linux/cache.h \
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
  include/linux/list.h \
  include/linux/prefetch.h \
  include/linux/wait.h \
  include/linux/numa.h \
  include/asm/numnodes.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/bitmap.h \
  include/linux/smp.h \
  include/asm/smp.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
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
  include/asm/topology.h \
    $(wildcard include/config/acpi/numa.h) \
  include/asm-generic/topology.h \
  include/asm/mmzone.h \
  include/linux/kmalloc_sizes.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/large/allocs.h) \
  include/linux/acpi.h \
    $(wildcard include/config/acpi/hotplug/cpu.h) \
    $(wildcard include/config/acpi/deallocate/irq.h) \
    $(wildcard include/config/acpi/pci.h) \
    $(wildcard include/config/acpi/ec.h) \
    $(wildcard include/config/acpi/interpreter.h) \
    $(wildcard include/config/acpi.h) \
  include/acpi/acpi.h \
  include/acpi/acconfig.h \
  include/acpi/platform/acenv.h \
  include/acpi/platform/aclinux.h \
  include/linux/ctype.h \
  include/asm/div64.h \
  include/asm-generic/div64.h \
  include/asm/acpi.h \
    $(wildcard include/config/acpi/sleep.h) \
  include/acpi/platform/acgcc.h \
  include/acpi/actypes.h \
  include/acpi/acexcep.h \
  include/acpi/acmacros.h \
  include/acpi/actbl.h \
  include/acpi/actbl1.h \
  include/acpi/actbl2.h \
  include/acpi/aclocal.h \
  include/acpi/acoutput.h \
  include/acpi/acpiosxf.h \
  include/acpi/acpixf.h \
  include/acpi/acobject.h \
  include/acpi/acstruct.h \
  include/acpi/acglobal.h \
  include/acpi/achware.h \
  include/acpi/acutils.h \
  include/acpi/acpi_bus.h \
    $(wildcard include/config/acpi/bus.h) \
  include/linux/kobject.h \
  include/linux/sysfs.h \
    $(wildcard include/config/sysfs.h) \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/linux/kref.h \
  include/linux/kobject_uevent.h \
    $(wildcard include/config/kobject/uevent.h) \
  include/linux/proc_fs.h \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/proc/devicetree.h) \
    $(wildcard include/config/proc/kcore.h) \
  include/linux/fs.h \
    $(wildcard include/config/dnotify.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/security.h) \
  include/linux/limits.h \
  include/linux/ioctl.h \
  include/asm/ioctl.h \
  include/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rcupdate.h \
  include/linux/percpu.h \
  include/linux/stat.h \
  include/asm/stat.h \
  include/linux/time.h \
  include/linux/radix-tree.h \
  include/linux/prio_tree.h \
  include/linux/audit.h \
    $(wildcard include/config/audit.h) \
  include/asm/semaphore.h \
  include/linux/quota.h \
  include/linux/errno.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/nfs_fs_i.h \
  include/linux/nfs.h \
  include/linux/sunrpc/msg_prot.h \
  include/linux/fcntl.h \
  include/asm/fcntl.h \
  include/linux/err.h \
  include/acpi/acpi_drivers.h \
    $(wildcard include/config/acpi/power.h) \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm-generic/iomap.h \
  include/linux/mc146818rtc.h \
  include/linux/rtc.h \
  include/asm/mc146818rtc.h \

arch/x86_64/kernel/../../i386/kernel/bootflag.o: $(deps_arch/x86_64/kernel/../../i386/kernel/bootflag.o)

$(deps_arch/x86_64/kernel/../../i386/kernel/bootflag.o):