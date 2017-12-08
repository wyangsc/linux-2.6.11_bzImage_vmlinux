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
	{ 0x5facaf26, "skb_queue_head" },
	{ 0xbd5bf3aa, "release_sock" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xe2ead6c2, "security_ops" },
	{ 0x2612425c, "sock_init_data" },
	{ 0xfdbcb144, "class_register" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x4af9e110, "del_timer" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xe28c0c91, "skb_recv_datagram" },
	{ 0x32f1ba53, "sock_rfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x42359cad, "class_device_put" },
	{ 0xcabe2628, "sock_no_mmap" },
	{ 0x926d701, "default_wake_function" },
	{ 0x6b589adf, "class_device_del" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fa03a97, "memset" },
	{ 0x455342a3, "sock_no_socketpair" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0x26542c35, "sk_alloc" },
	{ 0x28846962, "notifier_call_chain" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xdd132261, "printk" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7b240798, "sock_no_listen" },
	{ 0x672144bd, "strlcpy" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xa8c8c780, "sock_no_accept" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x8940db49, "sk_free" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x79312f78, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xdeefa591, "sock_no_shutdown" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xc6792e7, "lock_sock" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xaed56bb9, "datagram_poll" },
	{ 0x74585fdd, "sock_register" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x3673daaa, "sock_alloc_send_skb" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x43ec913a, "put_cmsg" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0x71dc558c, "skb_copy_datagram_iovec" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x667d2ded, "sock_no_connect" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6e57e831, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x36139a51, "memcpy_fromiovec" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0xf099679c, "notifier_chain_unregister" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x60cec3b9, "notifier_chain_register" },
	{ 0xe914e41e, "strcpy" },
	{ 0x85c8ff99, "skb_free_datagram" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3FEBC9A3FB9A6503D061E5");
