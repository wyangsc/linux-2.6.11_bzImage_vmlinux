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
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xdd132261, "printk" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x583ac8a7, "usb_unlock_device" },
	{ 0x65f5f115, "usb_reset_device" },
	{ 0x53949f82, "usb_lock_device_for_reset" },
	{ 0x2fd13df7, "usb_kill_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04CEp0300dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp0094dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp0099dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp009Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00A0dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00A3dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp80A3dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp80ACdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DAp00B6dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "2683D9798669C1CECDAE889");
