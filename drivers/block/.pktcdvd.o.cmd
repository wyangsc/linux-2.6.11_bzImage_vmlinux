cmd_drivers/block/pktcdvd.o := gcc -Wp,-MD,drivers/block/.pktcdvd.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow     -DMODULE -DKBUILD_BASENAME=pktcdvd -DKBUILD_MODNAME=pktcdvd -c -o drivers/block/.tmp_pktcdvd.o drivers/block/pktcdvd.c

deps_drivers/block/pktcdvd.o := \
  drivers/block/pktcdvd.c \
    $(wildcard include/config/cdrom/pktcdvd/buffers.h) \
  include/linux/pktcdvd.h \
    $(wildcard include/config/cdrom/pktcdvd/wcache.h) \
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
  include/linux/blkdev.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/lbd.h) \
  include/linux/major.h \
  include/linux/genhd.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/solaris/x86/partition.h) \
    $(wildcard include/config/bsd/disklabel.h) \
    $(wildcard include/config/unixware/disklabel.h) \
    $(wildcard include/config/minix/subpartition.h) \
  include/linux/device.h \
  include/linux/ioport.h \
  include/linux/kobject.h \
    $(wildcard include/config/hotplug.h) \
  include/linux/list.h \
  include/linux/prefetch.h \
  include/asm/processor.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/bug.h \
  include/linux/stringify.h \
  include/asm-generic/bug.h \
  include/asm/sigcontext.h \
  include/asm/cpufeature.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  include/asm/msr.h \
  include/asm/current.h \
  include/asm/pda.h \
  include/linux/cache.h \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/bitops.h \
  include/asm/bitops.h \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/system.h \
    $(wildcard include/config/unordered/io.h) \
  include/asm/mmsegment.h \
  include/asm/percpu.h \
  include/linux/personality.h \
  include/linux/sysfs.h \
    $(wildcard include/config/sysfs.h) \
  include/asm/atomic.h \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
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
  include/asm/rwlock.h \
  include/linux/kref.h \
  include/linux/kobject_uevent.h \
    $(wildcard include/config/kobject/uevent.h) \
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
    $(wildcard include/config/magic/sysrq.h) \
    $(wildcard include/config/pm.h) \
  include/asm/param.h \
  include/linux/capability.h \
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
  include/linux/kmalloc_sizes.h \
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
  include/linux/moduleparam.h \
  include/asm/local.h \
  include/asm/module.h \
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
  include/linux/prio_tree.h \
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
  include/linux/pagemap.h \
  include/linux/mm.h \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/debug/pagealloc.h) \
  include/asm/pgtable.h \
  include/asm-generic/pgtable.h \
  include/linux/page-flags.h \
    $(wildcard include/config/swap.h) \
  include/linux/highmem.h \
  include/asm/cacheflush.h \
  include/asm/uaccess.h \
  include/linux/backing-dev.h \
  include/linux/mempool.h \
  include/linux/bio.h \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm-generic/iomap.h \
  include/asm/scatterlist.h \
  include/linux/elevator.h \
  include/linux/cdrom.h \
  include/linux/kthread.h \
  include/linux/file.h \
  include/linux/proc_fs.h \
    $(wildcard include/config/proc/devicetree.h) \
    $(wildcard include/config/proc/kcore.h) \
  include/linux/seq_file.h \
  include/linux/miscdevice.h \
  include/linux/suspend.h \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/frv.h) \
  include/asm/suspend.h \
    $(wildcard include/config/acpi/sleep.h) \
  include/asm/desc.h \
  include/asm/ldt.h \
  include/asm/i387.h \
  include/linux/swap.h \
  include/linux/notifier.h \
  include/scsi/scsi_cmnd.h \
  include/linux/dma-mapping.h \
  include/asm/dma-mapping.h \
    $(wildcard include/config/gart/iommu.h) \
  include/asm/swiotlb.h \
    $(wildcard include/config/swiotlb.h) \
  include/scsi/scsi_ioctl.h \

drivers/block/pktcdvd.o: $(deps_drivers/block/pktcdvd.o)

$(deps_drivers/block/pktcdvd.o):
