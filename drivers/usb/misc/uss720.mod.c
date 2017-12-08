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
	{ 0x65778afa, "parport_put_port" },
	{ 0x87f34852, "parport_remove_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1231b51, "parport_announce_port" },
	{ 0x615093c7, "parport_register_port" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0x81e7558, "parport_ieee1284_read_byte" },
	{ 0xfb9188b4, "parport_ieee1284_read_nibble" },
	{ 0x8ad422b5, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x7d11c268, "jiffies" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x94f45aa3, "parport_ieee1284_interrupt" },
	{ 0xdd132261, "printk" },
	{ 0x328c7ee9, "usb_control_msg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("usb:v047Ep1001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0729p1284dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1293p0002dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "E97275D1CC847337ED11CEE");
