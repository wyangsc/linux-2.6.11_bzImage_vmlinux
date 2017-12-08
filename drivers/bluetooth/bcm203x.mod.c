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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ef56f31, "release_firmware" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x1166731b, "request_firmware" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A5Cp2033dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5B7E6957B2304052C8C00CC");
