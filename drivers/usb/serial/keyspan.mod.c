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
	{ 0x37a0cba, "kfree" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x255c5fc3, "ezusb_writememory" },
	{ 0xa65f350, "ezusb_set_reset" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf42c5b31, "usb_clear_halt" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x6067a146, "memcpy" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xf113231d, "usb_serial_deregister" },
	{ 0xdd132261, "printk" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x1d065a66, "usb_serial_register" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v06CDp0105dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0103dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0106dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp010Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0118dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp011Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0101dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0102dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0114dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0113dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0109dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp011Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0112dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0107dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0108dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp010Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0119dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0121dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp011Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp010Fdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0110dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0115dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp0110dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp010Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CDp012Adl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "3C8B32DFE2C76C341C57D40");
