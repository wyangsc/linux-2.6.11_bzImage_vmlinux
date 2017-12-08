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
	{ 0x5418d52a, "param_get_ushort" },
	{ 0xc4c5509d, "param_set_ushort" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xf113231d, "usb_serial_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x1d065a66, "usb_serial_register" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x6067a146, "memcpy" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v082Dp0100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0200dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v082Dp0300dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0020dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0080dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0040dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0050dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0060dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0031dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0061dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0830p0070dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0038dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0066dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0095dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp009Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00DAdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp00E9dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0144dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0169dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p6601dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v091Ep0004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4766p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p0021dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p0021dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "BDABDA2A1D988E361790179");
