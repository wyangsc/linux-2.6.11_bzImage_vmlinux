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
	{ 0xd3080dda, "unregister_framebuffer" },
	{ 0xedc03953, "iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xb41bea8b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xb1000df8, "screen_info" },
	{ 0xdd132261, "printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x780f6f0a, "soft_cursor" },
	{ 0x89cd642e, "cfb_imageblit" },
	{ 0x3cbe7903, "cfb_copyarea" },
	{ 0x8bca8531, "cfb_fillrect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x686de290, "restore_vga" },
	{ 0xe7a2620e, "save_vga" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=vgastate";


MODULE_INFO(srcversion, "8579985BD2A45AA6C2EDADC");
