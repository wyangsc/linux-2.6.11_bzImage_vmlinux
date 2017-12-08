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
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x39a9f4c5, "usb_get_dev" },
	{ 0x952d77fb, "usb_put_dev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xf42c5b31, "usb_clear_halt" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xbfe8f887, "skb_copy_expand" },
	{ 0xa3a5be95, "memmove" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x73dd4bd9, "usb_string" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xdd132261, "printk" },
	{ 0x4bdf5f79, "usb_driver_release_interface" },
	{ 0xe0c0c61b, "usb_driver_claim_interface" },
	{ 0x4c81edd2, "usb_ifnum_to_if" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0402p5632dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2720dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2727dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Cp8100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525p9901dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525p2888dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E3p0502dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525p1080dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06D0p0622dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Fp0190dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v049Fp505Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E7Ep1001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v8086p07D3dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA4A2dl0203dh0203dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DDp8004dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v07B4p0F02dl*dh*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic02isc06ip00*");

MODULE_INFO(srcversion, "FF3B2F438B5C7E08641B914");
