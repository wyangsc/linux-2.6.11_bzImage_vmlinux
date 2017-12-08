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
	{ 0x1c24867, "arpt_unregister_target" },
	{ 0x6825e1e9, "arpt_register_target" },
	{ 0x6067a146, "memcpy" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x7dd4a7a7, "sock_wfree" },
	{ 0xc7df16b6, "skb_copy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=arp_tables";


MODULE_INFO(srcversion, "8F3AD78B4248A6164E409DB");
