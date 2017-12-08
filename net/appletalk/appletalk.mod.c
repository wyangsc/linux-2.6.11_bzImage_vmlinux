#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0xe2ead6c2, "security_ops" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x2612425c, "sock_init_data" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x2124ec5f, "seq_open" },
	{ 0xed606400, "seq_release_private" },
	{ 0x6abea964, "sock_no_setsockopt" },
	{ 0xe83b9497, "sock_no_getsockopt" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xac3fa0a8, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x604cf294, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xe28c0c91, "skb_recv_datagram" },
	{ 0x32f1ba53, "sock_rfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x996d9199, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x41779942, "dev_mc_add" },
	{ 0x318964b9, "sock_no_sendpage" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0x13031d9f, "sock_get_timestamp" },
	{ 0xcabe2628, "sock_no_mmap" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x455342a3, "sock_no_socketpair" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0x5edb55b4, "proc_net" },
	{ 0x26542c35, "sk_alloc" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7b240798, "sock_no_listen" },
	{ 0xa8c8c780, "sock_no_accept" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x8940db49, "sk_free" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0x79312f78, "mod_timer" },
	{ 0xfb19dc42, "sysctl_jiffies" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa14df6d9, "register_snap_client" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xdeefa591, "sock_no_shutdown" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0xaed56bb9, "datagram_poll" },
	{ 0x74585fdd, "sock_register" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x3673daaa, "sock_alloc_send_skb" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0x4a2211d2, "__dev_get_by_name" },
	{ 0x71dc558c, "skb_copy_datagram_iovec" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x6e57e831, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x2394a062, "sock_unregister" },
	{ 0xdf5878a9, "unregister_snap_client" },
	{ 0x36139a51, "memcpy_fromiovec" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0x245b0ca0, "seq_release" },
	{ 0x387c78a5, "dev_ioctl" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0xf8625dc3, "proc_dointvec_jiffies" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x85c8ff99, "skb_free_datagram" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "BA883D41B7A64AC892119EC");
