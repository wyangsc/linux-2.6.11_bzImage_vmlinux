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
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xb88c0884, "generic_mii_ioctl" },
	{ 0x7dceceac, "capable" },
	{ 0x923462d0, "mii_link_ok" },
	{ 0x319622ee, "mii_nway_restart" },
	{ 0xe378efbd, "mii_ethtool_sset" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf999c34, "mii_ethtool_gset" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x6067a146, "memcpy" },
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0x47636033, "swiotlb" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5271af5d, "request_irq" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x63b77250, "free_netdev" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xdd132261, "printk" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001318d00000911sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EB6BA3FB84A5FCD1CA6D026");
