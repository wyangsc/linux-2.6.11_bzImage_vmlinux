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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0xed4a2cc1, "usb_deregister_dev" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0xe24e33a0, "usb_buffer_free" },
	{ 0xd172ef1c, "usb_register_dev" },
	{ 0xd3987aac, "usb_buffer_alloc" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x9733232, "usb_find_interface" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xdd132261, "printk" },
	{ 0x328c7ee9, "usb_control_msg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*dl*dh*dc07dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc07dsc01dp02ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc07dsc01dp03ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic07isc01ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic07isc01ip02*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic07isc01ip03*");

MODULE_INFO(srcversion, "AB4A5E0A6FF7C79DB9CEA39");
