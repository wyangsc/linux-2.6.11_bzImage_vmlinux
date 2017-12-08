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
	{ 0x802305c9, "put_tty_driver" },
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0xa30aea4a, "usb_register" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0x4bdf5f79, "usb_driver_release_interface" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xe24e33a0, "usb_buffer_free" },
	{ 0x6a7538b6, "tty_register_device" },
	{ 0xe0c0c61b, "usb_driver_claim_interface" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xd3987aac, "usb_buffer_alloc" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x4c81edd2, "usb_ifnum_to_if" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0xffbdc8f0, "tty_unregister_device" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xa3a5be95, "memmove" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xdd132261, "printk" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0x328c7ee9, "usb_control_msg" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0870p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip02*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip03*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip04*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip05*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc02ip06*");

MODULE_INFO(srcversion, "9452E61D3DE96871BC8BA52");
