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
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x952d77fb, "usb_put_dev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x39a9f4c5, "usb_get_dev" },
	{ 0x7dceceac, "capable" },
	{ 0x923462d0, "mii_link_ok" },
	{ 0x319622ee, "mii_nway_restart" },
	{ 0xe378efbd, "mii_ethtool_sset" },
	{ 0xf999c34, "mii_ethtool_gset" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x926d701, "default_wake_function" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xdd132261, "printk" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("usb:v0506p4601dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p110Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4104dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4102dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p4002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p400Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p400Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8pABC1dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p200Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap1046dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap5046dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8511dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8513dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p8515dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p0986dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07A6p07C2dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3334p1701dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C9pB100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0121dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0986dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0987dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v049Fp8511dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp0988dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp8511dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp000Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4102dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p400Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p200Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p4003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001pABC1dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB7p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0304dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05CCp3000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p8002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p400Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p811Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0904dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0913dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0951p000Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep4002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep400Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056EpABC1dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep200Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2202dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2203dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2204dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp2206dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp400Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Bp200Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v045Ep007Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1020dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0109dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0901dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08D1p0003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0200dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0707p0201dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15E8p9100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15E8p9110dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Cp1001dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "7416DC11CC3868154148816");
