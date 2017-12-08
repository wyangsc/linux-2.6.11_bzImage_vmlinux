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
	{ 0x17f63147, "register_qdisc" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xd6caef04, "__rta_fill" },
	{ 0x821a0545, "qdisc_put_rtab" },
	{ 0xcfc6d5f, "qdisc_unlock_tree" },
	{ 0xff102880, "qdisc_lock_tree" },
	{ 0xe1a9b863, "noop_qdisc" },
	{ 0x3adce61c, "qdisc_get_rtab" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x15dc4bdb, "qdisc_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xcd227ef, "qdisc_create_dflt" },
	{ 0x517122a0, "bfifo_qdisc_ops" },
	{ 0x4af9e110, "del_timer" },
	{ 0x2bfc003b, "qdisc_reset" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xfc395a02, "__kfree_skb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4CD9AE860ECF11992EFE6DF");
