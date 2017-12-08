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
	{ 0x1a1a4f09, "__request_region" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x814e8407, "release_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x672144bd, "strlcpy" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x9d27756, "snd_component_add" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xb21d0eb2, "snd_ctl_free_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "5E6EC4946A3D22A2BB6E5DA");
