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
	{ 0xcd6152f7, "ebt_unregister_match" },
	{ 0x175eaa94, "ebt_register_match" },
	{ 0xdd132261, "printk" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "D97B010A9AB1B9A8EBACF46");
