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
	{ 0x6067a146, "memcpy" },
	{ 0xaf25400d, "snprintf" },
	{ 0x672144bd, "strlcpy" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3fa03a97, "memset" },
	{ 0x5271af5d, "request_irq" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xdd132261, "printk" },
	{ 0xe63ef99d, "alloc_etherdev" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "C107A9C044068BF92EC098A");
