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
	{ 0x6067a146, "memcpy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xf42c5b31, "usb_clear_halt" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0x14d84261, "usb_serial_disconnect" },
	{ 0x3ead4e91, "usb_serial_probe" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v067Bp2303dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp04BBdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA2dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA0dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0A03dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EBAp1080dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF7p0620dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0584pB000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2478p2008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1453p4026dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0731p0528dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p2068dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F7p02DFdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0003dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "60EC772721E5DD781E70897");
