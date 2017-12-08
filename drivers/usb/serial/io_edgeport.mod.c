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
	{ 0x7d11c268, "jiffies" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x3fa03a97, "memset" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6067a146, "memcpy" },
	{ 0x25ec1b28, "strlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1f53ffb2, "usb_get_descriptor" },
	{ 0xdd132261, "printk" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1608p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p1403dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0006dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p000Fdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0010dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0011dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0012dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p001Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0019dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0013dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0014dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1608p0018dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "653E1537F64FFA56AFC038B");
