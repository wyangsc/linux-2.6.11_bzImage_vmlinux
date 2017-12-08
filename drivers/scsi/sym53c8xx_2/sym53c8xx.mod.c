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
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x1a11d7d5, "spi_dv_device" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x400de8a1, "pci_get_slot" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x9e9c8876, "spi_attach_transport" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xdd132261, "printk" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x1075bf0, "panic" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x672144bd, "strlcpy" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xf465b72a, "param_get_byte" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x94766452, "pci_set_mwi" },
	{ 0x5418d52a, "param_get_ushort" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x5271af5d, "request_irq" },
	{ 0x5ad53dbc, "param_set_byte" },
	{ 0x3593d6f4, "spi_release_transport" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x6067a146, "memcpy" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xedc03953, "iounmap" },
	{ 0xf1b44169, "pci_dev_put" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x397be676, "complete" },
	{ 0x93304684, "param_get_string" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x954cbb26, "vsprintf" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xc4c5509d, "param_set_ushort" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "04BB0F59121271FAAEB5E34");
