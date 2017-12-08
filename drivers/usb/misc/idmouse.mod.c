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
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0xed4a2cc1, "usb_deregister_dev" },
	{ 0xd172ef1c, "usb_register_dev" },
	{ 0xdd132261, "printk" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x9733232, "usb_find_interface" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x8ad422b5, "usb_bulk_msg" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x6067a146, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0681p0005dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5480E946667FA89DFB0934E");
