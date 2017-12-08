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
	{ 0xf113231d, "usb_serial_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x1d065a66, "usb_serial_register" },
	{ 0x61651be, "strcat" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6067a146, "memcpy" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x3fa03a97, "memset" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0D46p2011dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2012dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p0078dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p0081dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "082A98E2959E643200A1409");
