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
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbaa6844c, "register_netdevice" },
	{ 0xc49c3553, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5271af5d, "request_irq" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x79312f78, "mod_timer" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x1000e51, "schedule" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x3fa03a97, "memset" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdd132261, "printk" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000100Bd00000022sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B4D43565DFEE84C3FFF9468");
