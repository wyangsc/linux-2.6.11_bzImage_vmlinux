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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xa468b848, "class_simple_create" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2e0e927f, "slhc_init" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xbc55868, "slhc_remember" },
	{ 0x3bc1319e, "slhc_uncompress" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x53c0767c, "sk_chk_filter" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0x926d701, "default_wake_function" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fa03a97, "memset" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0x498dc803, "init_rwsem" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2894cfb0, "slhc_free" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6e57e831, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x76135e6c, "slhc_compress" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0xf89e3455, "slhc_toss" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "62341D936F15AD720B84EAB");
