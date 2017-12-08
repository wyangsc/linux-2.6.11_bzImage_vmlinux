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
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xdd132261, "printk" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "478A883EFD10B65922A7361");
