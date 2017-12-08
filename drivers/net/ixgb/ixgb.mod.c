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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x9426e65e, "ethtool_op_get_sg" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x63f2f9e, "pci_dev_driver" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdd132261, "printk" },
	{ 0xc8ce2eee, "ethtool_op_get_link" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0x63b77250, "free_netdev" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x94950963, "pci_enable_msi" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xa273231b, "ethtool_op_set_sg" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x9382ccd4, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xa121a96f, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xcfadd12, "ethtool_op_get_tso" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x977fef0c, "pci_save_state" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001B48sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F387281997DA4C60D722D61");
