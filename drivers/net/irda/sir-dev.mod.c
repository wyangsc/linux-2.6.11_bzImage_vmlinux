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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x6b043eba, "irda_init_max_qos_capabilies" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x735a0aa9, "async_wrap_skb" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xcb402824, "irda_device_set_media_busy" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbdc7ddda, "irlap_close" },
	{ 0x22769182, "async_unwrap_char" },
	{ 0x7dceceac, "capable" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8607fe00, "refrigerator" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x448b8aaa, "irda_qos_bits_to_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x397be676, "complete" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd18eaf76, "irlap_open" },
	{ 0x7d60add0, "alloc_irdadev" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "DCB41B54B00BABEDDD49C17");
