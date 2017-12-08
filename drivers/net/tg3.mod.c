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
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x63b77250, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x977fef0c, "pci_save_state" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xf1b44169, "pci_dev_put" },
	{ 0x400de8a1, "pci_get_slot" },
	{ 0xaa7b63ae, "pci_find_capability" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xcfadd12, "ethtool_op_get_tso" },
	{ 0xa273231b, "ethtool_op_set_sg" },
	{ 0x9426e65e, "ethtool_op_get_sg" },
	{ 0x7503549, "ethtool_op_get_tx_csum" },
	{ 0xc8ce2eee, "ethtool_op_get_link" },
	{ 0x7dceceac, "capable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xed69112a, "ethtool_op_set_tso" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5271af5d, "request_irq" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x82624104, "pci_restore_state" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fa03a97, "memset" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x3c6218fe, "_spin_trylock" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x79312f78, "mod_timer" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0x6067a146, "memcpy" },
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0x47636033, "swiotlb" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xae1f9417, "netif_receive_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x1ea4fc2d, "__netdev_watchdog_up" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0xdd132261, "printk" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B09FCC131E8B888882B37EF");
