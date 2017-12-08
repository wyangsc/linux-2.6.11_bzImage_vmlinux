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
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x3c6218fe, "_spin_trylock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x9426e65e, "ethtool_op_get_sg" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x9c082505, "linkwatch_fire_event" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x595eee6b, "pci_enable_wake" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
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
	{ 0x82624104, "pci_restore_state" },
	{ 0xc16fe12d, "__memcpy" },
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
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x94766452, "pci_set_mwi" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xa273231b, "ethtool_op_set_sg" },
	{ 0x47636033, "swiotlb" },
	{ 0x5271af5d, "request_irq" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9382ccd4, "pci_set_power_state" },
	{ 0x2ad07895, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xcfadd12, "ethtool_op_get_tso" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x977fef0c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001075sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E2BB255CCCC1022F3B4C3DB");
