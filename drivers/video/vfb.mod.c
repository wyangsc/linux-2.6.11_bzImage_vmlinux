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
	{ 0xa78a95ad, "platform_device_unregister" },
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0xb18034f7, "platform_device_register" },
	{ 0x343ef03f, "driver_register" },
	{ 0x77d9374a, "platform_bus_type" },
	{ 0xd3080dda, "unregister_framebuffer" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8872d41d, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xdd132261, "printk" },
	{ 0xb41bea8b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xd606c849, "fb_find_mode" },
	{ 0xb862b38a, "framebuffer_alloc" },
	{ 0x3fa03a97, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x85df9b6c, "strsep" },
	{ 0x85abc85f, "strncmp" },
	{ 0x780f6f0a, "soft_cursor" },
	{ 0x89cd642e, "cfb_imageblit" },
	{ 0x3cbe7903, "cfb_copyarea" },
	{ 0x8bca8531, "cfb_fillrect" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "50C018E5A5DE41A966BD21E");
