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
	{ 0x7186f1c6, "hdlcdrv_unregister" },
	{ 0xfd6727c0, "hdlcdrv_register" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x61651be, "strcat" },
	{ 0x349cba85, "strchr" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xdd132261, "printk" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd49501d4, "__release_region" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x5aa78688, "hdlcdrv_receiver" },
	{ 0x15d3b2e3, "hdlcdrv_transmitter" },
	{ 0xcfcb89a3, "hdlcdrv_arbitrate" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=hdlcdrv";


MODULE_INFO(srcversion, "D39B701929D6B533510FE8F");
