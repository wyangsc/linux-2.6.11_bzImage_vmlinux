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
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x17c3bdf6, "mpt_device_driver_deregister" },
	{ 0x51600573, "mpt_device_driver_register" },
	{ 0x729bb149, "mpt_reset_register" },
	{ 0x3b4f162e, "mpt_lan_index" },
	{ 0x286a895a, "mpt_register" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xbbfbfbbb, "alloc_fcdev" },
	{ 0x118e26a3, "mpt_free_msg_frame" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0x1075bf0, "panic" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0x47636033, "swiotlb" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x73fec4bb, "mpt_event_deregister" },
	{ 0x6dd452a8, "mpt_put_msg_frame" },
	{ 0x78c18f1b, "mpt_get_msg_frame" },
	{ 0x37a0cba, "kfree" },
	{ 0x2511118f, "mpt_event_register" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4FE34CD7A9A99DB8A88064D");
