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
	{ 0x6a7d43ca, "unregister_qdisc" },
	{ 0x63b77250, "free_netdev" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x17f63147, "register_qdisc" },
	{ 0x672144bd, "strlcpy" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x3c6218fe, "_spin_trylock" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xe9f8ac5c, "__neigh_event_send" },
	{ 0x7d11c268, "jiffies" },
	{ 0x82e2da2c, "neigh_create" },
	{ 0x8b0c0169, "neigh_lookup" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x2bfc003b, "qdisc_reset" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xc9cbe4b1, "neigh_destroy" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xfc395a02, "__kfree_skb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B6447A2C973C0F3F09B5BFF");
