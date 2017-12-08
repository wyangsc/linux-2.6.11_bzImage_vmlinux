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
	{ 0x99b31a1b, "proc_dointvec_minmax" },
	{ 0x5facaf26, "skb_queue_head" },
	{ 0xbd5bf3aa, "release_sock" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xe2ead6c2, "security_ops" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x2612425c, "sock_init_data" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0xfa516c41, "skb_append" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x4af9e110, "del_timer" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x9ccbf418, "send_sig" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0xd72e3480, "dev_get_by_name" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x604cf294, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xe28c0c91, "skb_recv_datagram" },
	{ 0x32f1ba53, "sock_rfree" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x996d9199, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x318964b9, "sock_no_sendpage" },
	{ 0x13031d9f, "sock_get_timestamp" },
	{ 0xcabe2628, "sock_no_mmap" },
	{ 0x926d701, "default_wake_function" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x455342a3, "sock_no_socketpair" },
	{ 0x5edb55b4, "proc_net" },
	{ 0x26542c35, "sk_alloc" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x90cb0ad, "sysctl_intvec" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x8940db49, "sk_free" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc6792e7, "lock_sock" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0x40e53e4, "arp_find" },
	{ 0xaed56bb9, "datagram_poll" },
	{ 0x74585fdd, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xaa27f890, "__get_user_8" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x3673daaa, "sock_alloc_send_skb" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x71dc558c, "skb_copy_datagram_iovec" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x7f1446fa, "arp_rcv" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x6e57e831, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x36139a51, "memcpy_fromiovec" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0x245b0ca0, "seq_release" },
	{ 0x387c78a5, "dev_ioctl" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x7dd4a7a7, "sock_wfree" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x5eae25b6, "ip_rcv" },
	{ 0x85c8ff99, "skb_free_datagram" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3455DE7A6B6B680282570C9");
