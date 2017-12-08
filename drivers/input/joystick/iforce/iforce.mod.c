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
	{ 0x814e8407, "release_resource" },
	{ 0x85c5d31b, "serio_unregister_driver" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0xb859c3d0, "allocate_resource" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x656f63b5, "input_event" },
	{ 0x926d701, "default_wake_function" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xdd132261, "printk" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x511bb155, "serio_close" },
	{ 0x2ed93855, "serio_open" },
	{ 0x1f0f3b67, "serio_register_driver" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x235e11b7, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xaf150130, "input_unregister_device" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v044FpA01Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046DpC281dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v046DpC291dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05EFp020Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05EFp8884dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05EFp8888dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v061CpC0A4dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8p0004dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "D64AFEDFE262390D7458DC0");
