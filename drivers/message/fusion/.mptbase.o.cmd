cmd_drivers/message/fusion/mptbase.o := gcc -Wp,-MD,drivers/message/fusion/.mptbase.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=mptbase -DKBUILD_MODNAME=mptbase -c -o drivers/message/fusion/.tmp_mptbase.o drivers/message/fusion/mptbase.c

deps_drivers/message/fusion/mptbase.o := \
  drivers/message/fusion/mptbase.c \
    $(wildcard include/config/mtrr.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/error.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/pagetype/lan.h) \
    $(wildcard include/config/action/page/header.h) \
    $(wildcard include/config/action/page/read/current.h) \
    $(wildcard include/config/pagetype/fc/port.h) \
    $(wildcard include/config/pagetype/io/unit.h) \
    $(wildcard include/config/pagetype/scsi/port.h) \
    $(wildcard include/config/action/page/read/nvram.h) \
    $(wildcard include/config/pagetype/scsi/device.h) \
    $(wildcard include/config/pagetype/ioc.h) \
    $(wildcard include/config/action/page/write/current.h) \
    $(wildcard include/config/action/page/write/nvram.h) \
    $(wildcard include/config/pagetype/mask.h) \
    $(wildcard include/config/checksum/fail.h) \
    $(wildcard include/config/invalid/action.h) \
    $(wildcard include/config/invalid/type.h) \
    $(wildcard include/config/invalid/page.h) \
    $(wildcard include/config/invalid/data.h) \
    $(wildcard include/config/no/defaults.h) \
    $(wildcard include/config/cant/commit.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/version.h \
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
  include/linux/module.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/kallsyms.h) \
  include/linux/sched.h \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/magic/sysrq.h) \
  include/asm/param.h \
  include/linux/capability.h \
  include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/lockmeter.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  include/linux/thread_info.h \
  include/asm/thread_info.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
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
  include/linux/timex.h \
    $(wildcard include/config/time/interpolation.h) \
  include/linux/time.h \
  include/linux/seqlock.h \
  include/asm/timex.h \
  include/asm/8253pit.h \
  include/asm/vsyscall.h \
  include/asm/hpet.h \
    $(wildcard include/config/hpet/emulate/rtc.h) \
  include/linux/jiffies.h \
  include/asm/div64.h \
  include/asm-generic/div64.h \
  include/linux/rbtree.h \
  include/linux/cpumask.h \
  include/linux/bitmap.h \
  include/linux/string.h \
  include/asm/string.h \
  include/linux/errno.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/semaphore.h \
  include/linux/wait.h \
  include/linux/list.h \
  include/linux/prefetch.h \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/asm/ptrace.h \
  include/asm/mmu.h \
  include/asm/cputime.h \
  include/asm-generic/cputime.h \
  include/linux/smp.h \
  include/asm/smp.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/x86/io/apic.h) \
  include/asm/fixmap.h \
  include/asm/apicdef.h \
  include/asm/vsyscall32.h \
  include/asm/mpspec.h \
    $(wildcard include/config/acpi/boot.h) \
  include/asm/io_apic.h \
    $(wildcard include/config/pci/msi.h) \
  include/asm/apic.h \
    $(wildcard include/config/x86/good/apic.h) \
  include/linux/pm.h \
  include/linux/sem.h \
    $(wildcard include/config/sysvipc.h) \
  include/linux/ipc.h \
  include/asm/ipcbuf.h \
  include/asm/sembuf.h \
  include/linux/signal.h \
  include/asm/signal.h \
  include/asm/siginfo.h \
  include/asm-generic/siginfo.h \
  include/linux/resource.h \
  include/asm/resource.h \
  include/asm-generic/resource.h \
  include/linux/securebits.h \
  include/linux/fs_struct.h \
  include/linux/completion.h \
  include/linux/pid.h \
  include/linux/percpu.h \
  include/linux/slab.h \
    $(wildcard include/config/.h) \
  include/linux/gfp.h \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
  include/linux/numa.h \
  include/asm/numnodes.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
  include/asm/topology.h \
    $(wildcard include/config/acpi/numa.h) \
  include/asm-generic/topology.h \
  include/asm/mmzone.h \
  include/linux/init.h \
    $(wildcard include/config/hotplug.h) \
  include/linux/kmalloc_sizes.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/large/allocs.h) \
  include/linux/param.h \
  include/linux/timer.h \
  include/linux/aio.h \
  include/linux/workqueue.h \
  include/linux/aio_abi.h \
  include/linux/stat.h \
  include/asm/stat.h \
  include/linux/kmod.h \
    $(wildcard include/config/kmod.h) \
  include/linux/elf.h \
  include/asm/elf.h \
  include/asm/user.h \
  include/linux/kobject.h \
  include/linux/sysfs.h \
    $(wildcard include/config/sysfs.h) \
  include/linux/kref.h \
  include/linux/kobject_uevent.h \
    $(wildcard include/config/kobject/uevent.h) \
  include/linux/moduleparam.h \
  include/asm/local.h \
  include/asm/module.h \
  include/linux/pci.h \
    $(wildcard include/config/pci/names.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/eisa.h) \
    $(wildcard include/config/pci/domains.h) \
  include/linux/mod_devicetable.h \
  include/linux/pci_ids.h \
  include/linux/ioport.h \
  include/linux/device.h \
  include/linux/dmapool.h \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm-generic/iomap.h \
  include/asm/scatterlist.h \
  include/asm/pci.h \
    $(wildcard include/config/gart/iommu.h) \
  include/linux/mm.h \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/debug/pagealloc.h) \
  include/linux/prio_tree.h \
  include/linux/fs.h \
    $(wildcard include/config/dnotify.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/auditsyscall.h) \
  include/linux/limits.h \
  include/linux/ioctl.h \
  include/asm/ioctl.h \
  include/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rcupdate.h \
  include/linux/radix-tree.h \
  include/linux/audit.h \
    $(wildcard include/config/audit.h) \
  include/linux/quota.h \
  include/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/nfs_fs_i.h \
  include/linux/nfs.h \
  include/linux/sunrpc/msg_prot.h \
  include/linux/fcntl.h \
  include/asm/fcntl.h \
  include/linux/err.h \
  include/asm/pgtable.h \
  include/asm-generic/pgtable.h \
  include/linux/page-flags.h \
    $(wildcard include/config/swap.h) \
  include/asm-generic/pci-dma-compat.h \
  include/linux/dma-mapping.h \
  include/asm/dma-mapping.h \
  include/asm/swiotlb.h \
    $(wildcard include/config/swiotlb.h) \
  include/asm-generic/pci.h \
  include/linux/blkdev.h \
    $(wildcard include/config/lbd.h) \
  include/linux/major.h \
  include/linux/genhd.h \
    $(wildcard include/config/solaris/x86/partition.h) \
    $(wildcard include/config/bsd/disklabel.h) \
    $(wildcard include/config/unixware/disklabel.h) \
    $(wildcard include/config/minix/subpartition.h) \
  include/linux/pagemap.h \
  include/linux/highmem.h \
  include/asm/cacheflush.h \
  include/asm/uaccess.h \
  include/linux/backing-dev.h \
  include/linux/mempool.h \
  include/linux/bio.h \
  include/linux/elevator.h \
  include/linux/delay.h \
  include/asm/delay.h \
  include/linux/interrupt.h \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/generic/irq/probe.h) \
  include/linux/hardirq.h \
    $(wildcard include/config/preempt/bkl.h) \
    $(wildcard include/config/virt/cpu/accounting.h) \
  include/linux/smp_lock.h \
    $(wildcard include/config/lock/kernel.h) \
  include/asm/hardirq.h \
  include/linux/irq.h \
    $(wildcard include/config/arch/s390.h) \
  include/asm/irq.h \
  include/asm/hw_irq.h \
  include/linux/profile.h \
    $(wildcard include/config/profiling.h) \
  include/linux/irq_cpustat.h \
  include/asm/mtrr.h \
  drivers/message/fusion/mptbase.h \
    $(wildcard include/config/fusion/max/sge.h) \
    $(wildcard include/config/good.h) \
  drivers/message/fusion/lsi/mpi_type.h \
  drivers/message/fusion/lsi/mpi.h \
  drivers/message/fusion/lsi/mpi_ioc.h \
    $(wildcard include/config/invalid.h) \
  drivers/message/fusion/lsi/mpi_cnfg.h \
    $(wildcard include/config/pagetype/scsi/lun.h) \
    $(wildcard include/config/pagetype/raid/volume.h) \
    $(wildcard include/config/page/fc/port/8.h) \
    $(wildcard include/config/page/fc/port/9.h) \
    $(wildcard include/config/page/fc/port/3.h) \
    $(wildcard include/config/pageattr/ro/persistent.h) \
    $(wildcard include/config/page/scsi/port/1.h) \
    $(wildcard include/config/page/lan/1.h) \
    $(wildcard include/config/pagetype/raid/physdisk.h) \
    $(wildcard include/config/page/ioc/1.h) \
    $(wildcard include/config/page/ioc/2/raid/vol.h) \
    $(wildcard include/config/page/ioc/5.h) \
    $(wildcard include/config/page/fc/port/0.h) \
    $(wildcard include/config/page/fc/port/1.h) \
    $(wildcard include/config/page/fc/port/10.h) \
    $(wildcard include/config/page/scsi/device/3.h) \
    $(wildcard include/config/page/scsi/port/0.h) \
    $(wildcard include/config/page/fc/device/0.h) \
    $(wildcard include/config/page/scsi/port/2.h) \
    $(wildcard include/config/page/header.h) \
    $(wildcard include/config/page/header/union.h) \
    $(wildcard include/config/extended/page/header.h) \
    $(wildcard include/config/pageattr/read/only.h) \
    $(wildcard include/config/pageattr/changeable.h) \
    $(wildcard include/config/pageattr/persistent.h) \
    $(wildcard include/config/pageattr/mask.h) \
    $(wildcard include/config/pagetype/bios.h) \
    $(wildcard include/config/pagetype/fc/device.h) \
    $(wildcard include/config/pagetype/manufacturing.h) \
    $(wildcard include/config/pagetype/inband.h) \
    $(wildcard include/config/pagetype/extended.h) \
    $(wildcard include/config/typenum/mask.h) \
    $(wildcard include/config/extpagetype/sas/io/unit.h) \
    $(wildcard include/config/extpagetype/sas/expander.h) \
    $(wildcard include/config/extpagetype/sas/device.h) \
    $(wildcard include/config/extpagetype/sas/phy.h) \
    $(wildcard include/config/action/page/default.h) \
    $(wildcard include/config/action/page/read/default.h) \
    $(wildcard include/config/reply.h) \
    $(wildcard include/config/page/manufacturing/0.h) \
    $(wildcard include/config/page/manufacturing/1.h) \
    $(wildcard include/config/page/manufacturing/2.h) \
    $(wildcard include/config/page/manufacturing/3.h) \
    $(wildcard include/config/page/manufacturing/4.h) \
    $(wildcard include/config/page/manufacturing/5.h) \
    $(wildcard include/config/page/manufacturing/6.h) \
    $(wildcard include/config/page/io/unit/0.h) \
    $(wildcard include/config/page/io/unit/1.h) \
    $(wildcard include/config/page/io/unit/2.h) \
    $(wildcard include/config/page/io/unit/3.h) \
    $(wildcard include/config/page/ioc/0.h) \
    $(wildcard include/config/page/ioc/2.h) \
    $(wildcard include/config/page/ioc/3.h) \
    $(wildcard include/config/page/ioc/4.h) \
    $(wildcard include/config/page/bios/1.h) \
    $(wildcard include/config/targ/only.h) \
    $(wildcard include/config/init/targ.h) \
    $(wildcard include/config/page/scsi/device/0.h) \
    $(wildcard include/config/page/scsi/device/1.h) \
    $(wildcard include/config/page/scsi/device/2.h) \
    $(wildcard include/config/speed/mask.h) \
    $(wildcard include/config/speed/1gig.h) \
    $(wildcard include/config/speed/2gig.h) \
    $(wildcard include/config/speed/4gig.h) \
    $(wildcard include/config/speed/10gig.h) \
    $(wildcard include/config/speed/auto.h) \
    $(wildcard include/config/page/fc/port/2.h) \
    $(wildcard include/config/page/fc/port/4.h) \
    $(wildcard include/config/page/fc/port/5/alias/info.h) \
    $(wildcard include/config/page/fc/port/5.h) \
    $(wildcard include/config/page/fc/port/6.h) \
    $(wildcard include/config/page/fc/port/7.h) \
    $(wildcard include/config/page/fc/port/10/base/sfp/data.h) \
    $(wildcard include/config/page/fc/port/10/extended/sfp/data.h) \
    $(wildcard include/config/page/raid/vol/0.h) \
    $(wildcard include/config/page/raid/phys/disk/0.h) \
    $(wildcard include/config/page/lan/0.h) \
    $(wildcard include/config/page/inband/0.h) \
    $(wildcard include/config/page/sas/io/unit/0.h) \
    $(wildcard include/config/page/sas/io/unit/1.h) \
    $(wildcard include/config/page/sas/io/unit/2.h) \
    $(wildcard include/config/page/sas/io/unit/3.h) \
    $(wildcard include/config/page/sas/expander/0.h) \
    $(wildcard include/config/in/progress.h) \
    $(wildcard include/config/page/sas/device/0.h) \
    $(wildcard include/config/page/sas/device/1.h) \
    $(wildcard include/config/page/sas/phy/0.h) \
    $(wildcard include/config/page/sas/phy/1.h) \
  drivers/message/fusion/lsi/mpi_init.h \
  drivers/message/fusion/lsi/mpi_lan.h \
  drivers/message/fusion/lsi/mpi_raid.h \
  drivers/message/fusion/lsi/mpi_fc.h \
  drivers/message/fusion/lsi/mpi_targ.h \
  drivers/message/fusion/lsi/mpi_tool.h \
  drivers/message/fusion/lsi/fc_log.h \
  include/linux/proc_fs.h \
    $(wildcard include/config/proc/devicetree.h) \
    $(wildcard include/config/proc/kcore.h) \

drivers/message/fusion/mptbase.o: $(deps_drivers/message/fusion/mptbase.o)

$(deps_drivers/message/fusion/mptbase.o):
