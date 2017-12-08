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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x23fe9907, "ax25_rebuild_header" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x651c2313, "crc_ccitt" },
	{ 0x6067a146, "memcpy" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x7fe7d33a, "ax25_encapsulate" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "535B8C378ED59D634105D95");
