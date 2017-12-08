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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xf113231d, "usb_serial_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x1d065a66, "usb_serial_register" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0xf42c5b31, "usb_clear_halt" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x8ad422b5, "usb_bulk_msg" },
	{ 0x6067a146, "memcpy" },
	{ 0x3fa03a97, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1608p0215dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0240dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0241dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0301dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0302dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0303dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0304dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0305dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0306dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0307dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0308dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0309dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p030Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0205dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0207dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p020Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0217dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0201dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0206dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p021Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0242dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "66E794E655CE9E6216DD3B0");
