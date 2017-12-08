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
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x4af9e110, "del_timer" },
	{ 0x63b77250, "free_netdev" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5edb55b4, "proc_net" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x23fe9907, "ax25_rebuild_header" },
	{ 0x7fe7d33a, "ax25_encapsulate" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x7dceceac, "capable" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd49501d4, "__release_region" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x245b0ca0, "seq_release" },
	{ 0x996d9199, "seq_read" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x604cf294, "seq_printf" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x6067a146, "memcpy" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "7E8FC90369FAF991565903E");
