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
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0x47636033, "swiotlb" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5271af5d, "request_irq" },
	{ 0x6067a146, "memcpy" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x63b77250, "free_netdev" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xdd132261, "printk" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001186d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2CB705C6B963232B47F0B5F");
