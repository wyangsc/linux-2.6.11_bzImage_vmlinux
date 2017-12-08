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
	{ 0xf9a482f9, "msleep" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x80569122, "video_unregister_device" },
	{ 0xd49501d4, "__release_region" },
	{ 0x306df07, "video_register_device" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xdd132261, "printk" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x45b85be9, "video_usercopy" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x1e95c17e, "video_devdata" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf5d3e859, "video_exclusive_release" },
	{ 0x91d215a4, "video_exclusive_open" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("pci:v00005046d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B806784697CA85DF35A75BE");
