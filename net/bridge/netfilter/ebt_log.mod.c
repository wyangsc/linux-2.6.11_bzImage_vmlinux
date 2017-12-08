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
	{ 0x11d10051, "ebt_unregister_watcher" },
	{ 0x6a1f6d0c, "ebt_register_watcher" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "0C0E7061518B0C2E30986D5");
