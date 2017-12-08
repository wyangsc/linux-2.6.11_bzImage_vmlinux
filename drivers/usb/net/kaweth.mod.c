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
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0xe24e33a0, "usb_buffer_free" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xd3987aac, "usb_buffer_alloc" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbfe8f887, "skb_copy_expand" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x672144bd, "strlcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03E8p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0901dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0506p03E8dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0506p11F8dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p4000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0565p0005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E9p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05E9p0009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2202dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E1p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06E1p0009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v085Ap0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v085Ap0009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v087Dp5704dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0951p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v095Ap3003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v10BDp1427dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0204dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D2p0400dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1485p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1485p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p0005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1645p8005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4000dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "CAE7AC536A48676FCE04080");
