cmd_arch/x86_64/ia32/ia32_ioctl.o := gcc -Wp,-MD,arch/x86_64/ia32/.ia32_ioctl.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow    -Ifs/  -DKBUILD_BASENAME=ia32_ioctl -DKBUILD_MODNAME=ia32_ioctl -c -o arch/x86_64/ia32/.tmp_ia32_ioctl.o arch/x86_64/ia32/ia32_ioctl.c

deps_arch/x86_64/ia32/ia32_ioctl.o := \
  arch/x86_64/ia32/ia32_ioctl.c \
  include/linux/syscalls.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/v850.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/types.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/linux/aio_abi.h \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/linux/capability.h \
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
  include/linux/sem.h \
    $(wildcard include/config/sysvipc.h) \
  include/linux/ipc.h \
  include/asm/ipcbuf.h \
  include/asm/sembuf.h \
  include/asm/semaphore.h \
  include/linux/wait.h \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/asm/siginfo.h \
  include/asm-generic/siginfo.h \
  include/linux/resource.h \
  include/linux/time.h \
  include/linux/seqlock.h \
  include/asm/resource.h \
  include/asm-generic/resource.h \
  include/linux/string.h \
  include/asm/string.h \
  include/asm/signal.h \
  include/linux/quota.h \
  include/linux/errno.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/key.h \
    $(wildcard include/config/keys.h) \
  include/linux/rbtree.h \
  fs/compat_ioctl.c \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/vt.h) \
    $(wildcard include/config/ncp/fs.h) \
    $(wildcard include/config/ncp/fs/module.h) \
  include/linux/compat.h \
    $(wildcard include/config/compat.h) \
  include/linux/stat.h \
  include/asm/stat.h \
  include/linux/param.h \
  include/asm/param.h \
  include/asm/compat.h \
  include/linux/sched.h \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/magic/sysrq.h) \
    $(wildcard include/config/pm.h) \
  include/linux/timex.h \
    $(wildcard include/config/time/interpolation.h) \
  include/asm/timex.h \
  include/asm/8253pit.h \
  include/asm/vsyscall.h \
  include/asm/hpet.h \
    $(wildcard include/config/hpet/emulate/rtc.h) \
  include/linux/jiffies.h \
  include/asm/div64.h \
  include/asm-generic/div64.h \
  include/linux/cpumask.h \
  include/linux/bitmap.h \
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
  include/linux/signal.h \
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
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/kmalloc_sizes.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/large/allocs.h) \
  include/linux/timer.h \
  include/linux/aio.h \
  include/linux/workqueue.h \
  include/linux/smp_lock.h \
    $(wildcard include/config/lock/kernel.h) \
    $(wildcard include/config/preempt/bkl.h) \
  include/linux/ioctl.h \
  include/asm/ioctl.h \
  include/linux/if.h \
  include/linux/socket.h \
  include/asm/socket.h \
  include/asm/sockios.h \
  include/linux/sockios.h \
  include/linux/uio.h \
  include/linux/hdlc/ioctl.h \
  include/linux/if_bridge.h \
  include/linux/netdevice.h \
    $(wildcard include/config/ax25.h) \
    $(wildcard include/config/ax25/module.h) \
    $(wildcard include/config/tr.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/ipv6/module.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/net/divert.h) \
    $(wildcard include/config/netpoll/trap.h) \
    $(wildcard include/config/sysctl.h) \
  include/linux/if_ether.h \
  include/linux/skbuff.h \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/vlan/8021q/module.h) \
    $(wildcard include/config/netfilter/debug.h) \
    $(wildcard include/config/hippi.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/have/arch/dev/alloc/skb.h) \
    $(wildcard include/config/highmem.h) \
  include/linux/mm.h \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/debug/pagealloc.h) \
  include/linux/prio_tree.h \
  include/linux/fs.h \
    $(wildcard include/config/dnotify.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/auditsyscall.h) \
  include/linux/limits.h \
  include/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rcupdate.h \
  include/linux/kobject.h \
  include/linux/sysfs.h \
    $(wildcard include/config/sysfs.h) \
  include/linux/kref.h \
  include/linux/kobject_uevent.h \
    $(wildcard include/config/kobject/uevent.h) \
  include/linux/radix-tree.h \
  include/linux/audit.h \
    $(wildcard include/config/audit.h) \
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
  include/linux/highmem.h \
  include/asm/cacheflush.h \
  include/linux/poll.h \
  include/asm/poll.h \
  include/asm/uaccess.h \
  include/linux/net.h \
  include/net/checksum.h \
  include/asm/checksum.h \
  include/linux/if_packet.h \
  include/linux/device.h \
  include/linux/ioport.h \
  include/linux/module.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/kallsyms.h) \
  include/linux/kmod.h \
    $(wildcard include/config/kmod.h) \
  include/linux/elf.h \
  include/asm/elf.h \
  include/asm/user.h \
  include/linux/moduleparam.h \
  include/asm/local.h \
  include/asm/module.h \
  include/linux/interrupt.h \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/generic/irq/probe.h) \
  include/linux/hardirq.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
  include/asm/hardirq.h \
  include/linux/irq.h \
    $(wildcard include/config/arch/s390.h) \
  include/asm/irq.h \
  include/asm/hw_irq.h \
  include/linux/profile.h \
    $(wildcard include/config/profiling.h) \
  include/linux/irq_cpustat.h \
  include/linux/notifier.h \
  include/linux/hdreg.h \
  include/linux/ata.h \
  include/linux/raid/md.h \
  include/linux/blkdev.h \
    $(wildcard include/config/lbd.h) \
  include/linux/major.h \
  include/linux/genhd.h \
    $(wildcard include/config/solaris/x86/partition.h) \
    $(wildcard include/config/bsd/disklabel.h) \
    $(wildcard include/config/unixware/disklabel.h) \
    $(wildcard include/config/minix/subpartition.h) \
  include/linux/pagemap.h \
  include/linux/backing-dev.h \
  include/linux/mempool.h \
  include/linux/bio.h \
  include/asm/io.h \
  include/linux/vmalloc.h \
  include/asm-generic/iomap.h \
  include/asm/scatterlist.h \
  include/linux/elevator.h \
  include/linux/proc_fs.h \
    $(wildcard include/config/proc/devicetree.h) \
    $(wildcard include/config/proc/kcore.h) \
  include/linux/seq_file.h \
  include/linux/delay.h \
  include/asm/delay.h \
  include/linux/random.h \
  include/linux/kernel_stat.h \
  include/linux/reboot.h \
  include/linux/blkpg.h \
  include/linux/raid/md_p.h \
  include/linux/raid/md_u.h \
  include/linux/raid/md_k.h \
  include/linux/kd.h \
  include/linux/dirent.h \
  include/linux/route.h \
  include/linux/in6.h \
  include/linux/ipv6_route.h \
  include/linux/netlink.h \
  include/linux/vt.h \
  include/linux/file.h \
  include/linux/fd.h \
  include/linux/ppp_defs.h \
  include/linux/crc-ccitt.h \
  include/linux/if_ppp.h \
  include/linux/if_pppox.h \
  include/linux/ppp_channel.h \
  include/linux/mtio.h \
  include/linux/qic117.h \
    $(wildcard include/config/rate/mask.h) \
    $(wildcard include/config/rate/shift.h) \
    $(wildcard include/config/rate/250.h) \
    $(wildcard include/config/rate/500.h) \
    $(wildcard include/config/rate/1000.h) \
    $(wildcard include/config/rate/2000.h) \
    $(wildcard include/config/rate/4000.h) \
    $(wildcard include/config/long.h) \
    $(wildcard include/config/80.h) \
  include/linux/cdrom.h \
  include/linux/loop.h \
  include/linux/auto_fs.h \
  include/linux/auto_fs4.h \
  include/linux/devfs_fs.h \
  include/linux/tty.h \
    $(wildcard include/config/legacy/pty/count.h) \
  include/linux/termios.h \
  include/asm/termios.h \
  include/asm/termbits.h \
  include/asm/ioctls.h \
  include/linux/tty_driver.h \
  include/linux/cdev.h \
  include/linux/tty_ldisc.h \
  include/linux/vt_kern.h \
    $(wildcard include/config/vga/console.h) \
  include/linux/console_struct.h \
  include/linux/fb.h \
    $(wildcard include/config/fb/tileblitting.h) \
  include/linux/devfs_fs_kernel.h \
    $(wildcard include/config/devfs/fs.h) \
  include/linux/ext2_fs.h \
  include/linux/ext2_fs_sb.h \
  include/linux/blockgroup_lock.h \
  include/linux/percpu_counter.h \
  include/linux/videodev.h \
  include/linux/version.h \
  include/linux/videodev2.h \
  include/linux/raw.h \
    $(wildcard include/config/max/raw/devs.h) \
  include/linux/smb_fs.h \
  include/linux/smb.h \
  include/linux/smb_fs_i.h \
  include/linux/smb_fs_sb.h \
  include/linux/smb_mount.h \
  include/asm/unaligned.h \
  include/linux/rtc.h \
  include/linux/pci.h \
    $(wildcard include/config/pci/names.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/eisa.h) \
    $(wildcard include/config/pci/domains.h) \
  include/linux/mod_devicetable.h \
  include/linux/pci_ids.h \
  include/linux/dmapool.h \
  include/asm/pci.h \
    $(wildcard include/config/gart/iommu.h) \
  include/asm-generic/pci-dma-compat.h \
  include/linux/dma-mapping.h \
  include/asm/dma-mapping.h \
  include/asm/swiotlb.h \
    $(wildcard include/config/swiotlb.h) \
  include/asm-generic/pci.h \
  include/linux/serial.h \
  include/linux/reiserfs_fs.h \
    $(wildcard include/config/reiserfs/check.h) \
    $(wildcard include/config/reiserfs/proc/info.h) \
  include/linux/buffer_head.h \
  include/linux/reiserfs_fs_i.h \
  include/linux/reiserfs_fs_sb.h \
  include/linux/if_tun.h \
  include/linux/ctype.h \
  include/linux/ioctl32.h \
  include/linux/ncp_fs.h \
    $(wildcard include/config/ncpfs/smalldos.h) \
    $(wildcard include/config/ncpfs/os2/ns.h) \
    $(wildcard include/config/ncpfs/nfs/ns.h) \
  include/linux/in.h \
  include/linux/ncp_fs_i.h \
  include/linux/ncp_fs_sb.h \
  include/linux/ncp_mount.h \
  include/linux/ncp.h \
  include/linux/ipx.h \
  include/linux/ncp_no.h \
  include/linux/i2c.h \
  include/linux/i2c-id.h \
  include/linux/i2c-dev.h \
  include/linux/wireless.h \
  include/linux/atalk.h \
  include/net/sock.h \
  include/linux/security.h \
    $(wildcard include/config/security/network.h) \
  include/linux/binfmts.h \
  include/linux/shm.h \
  include/asm/shmparam.h \
  include/asm/shmbuf.h \
  include/linux/msg.h \
  include/asm/msgbuf.h \
  include/linux/filter.h \
  include/net/dst.h \
    $(wildcard include/config/net/cls/route.h) \
    $(wildcard include/config/xfrm.h) \
  include/linux/rtnetlink.h \
  include/net/neighbour.h \
  include/linux/sysctl.h \
  include/net/bluetooth/bluetooth.h \
  include/net/bluetooth/hci.h \
  include/net/bluetooth/rfcomm.h \
  include/linux/capi.h \
  include/scsi/scsi.h \
  include/scsi/scsi_ioctl.h \
  include/scsi/sg.h \
  include/linux/ethtool.h \
  include/linux/mii.h \
  include/linux/if_bonding.h \
  include/linux/watchdog.h \
  include/linux/dm-ioctl.h \
  include/linux/soundcard.h \
  include/linux/lp.h \
  include/linux/ppdev.h \
  include/linux/atm.h \
  include/linux/atmapi.h \
  include/linux/atmsap.h \
  include/linux/atmioc.h \
  include/linux/atmarp.h \
  include/linux/atmclip.h \
  include/linux/atmdev.h \
  include/linux/atmlec.h \
  include/linux/atmmpc.h \
  include/linux/atmsvc.h \
  include/linux/atm_tcp.h \
  include/linux/sonet.h \
  include/linux/atm_suni.h \
  include/linux/mtd/mtd.h \
    $(wildcard include/config/mtd/partitions.h) \
    $(wildcard include/config/mtd/debug.h) \
    $(wildcard include/config/mtd/debug/verbose.h) \
  include/linux/mtd/compatmac.h \
  include/mtd/mtd-abi.h \
  include/linux/usb.h \
  include/linux/usb_ch9.h \
    $(wildcard include/config/size.h) \
    $(wildcard include/config/att/one.h) \
    $(wildcard include/config/att/selfpower.h) \
    $(wildcard include/config/att/wakeup.h) \
  include/linux/usbdevice_fs.h \
  include/linux/nbd.h \
  include/linux/msdos_fs.h \
  include/linux/nls.h \
  include/linux/pktcdvd.h \
    $(wildcard include/config/cdrom/pktcdvd/wcache.h) \
  include/linux/hiddev.h \
    $(wildcard include/config/usb/hiddev.h) \
  include/asm/mtrr.h \
    $(wildcard include/config/mtrr.h) \
  include/asm/ia32.h \
    $(wildcard include/config/ia32/emulation.h) \
    $(wildcard include/config/ia32/support.h) \
  include/asm/sigcontext32.h \
  include/linux/compat_ioctl.h \

arch/x86_64/ia32/ia32_ioctl.o: $(deps_arch/x86_64/ia32/ia32_ioctl.o)

$(deps_arch/x86_64/ia32/ia32_ioctl.o):
