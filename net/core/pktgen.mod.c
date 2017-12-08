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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x20267f8c, "cpu_online_map" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3fa03a97, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xd715c451, "set_cpus_allowed" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x25ec1b28, "strlen" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x1c66f64c, "net_random" },
	{ 0x1000e51, "schedule" },
	{ 0x27cbbea7, "do_softirq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xfde5a107, "in_dev_finish_destroy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xd72e3480, "dev_get_by_name" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6067a146, "memcpy" },
	{ 0x83e0a162, "in_aton" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xdd132261, "printk" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7dceceac, "capable" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x1d26aa98, "sprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C4918D871B63942FFDC8DF8");
