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
	{ 0xcfc6d5f, "qdisc_unlock_tree" },
	{ 0x4af9e110, "del_timer" },
	{ 0xff102880, "qdisc_lock_tree" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1c66f64c, "net_random" },
	{ 0xfc395a02, "__kfree_skb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7ADC3E04A557D797442D446");
