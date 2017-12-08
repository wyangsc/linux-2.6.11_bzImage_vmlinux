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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x448b8aaa, "irda_qos_bits_to_value" },
	{ 0x6b043eba, "irda_init_max_qos_capabilies" },
	{ 0x3fa03a97, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0x77217db1, "usb_reset_configuration" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0x7d60add0, "alloc_irdadev" },
	{ 0xcb402824, "irda_device_set_media_busy" },
	{ 0x7dceceac, "capable" },
	{ 0xbdc7ddda, "irlap_close" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0xd18eaf76, "irlap_open" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x6067a146, "memcpy" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xa7ed457a, "pskb_expand_head" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xdd132261, "printk" },
	{ 0x10b3c308, "usb_submit_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda";

MODULE_ALIAS("usb:v09C4p0011dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4428p0012dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Fp0180dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08E9p0100dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*icFEisc02ip*");

MODULE_INFO(srcversion, "51D5D36288B6CA178073FB2");
