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
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd49501d4, "__release_region" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x5271af5d, "request_irq" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x1075bf0, "panic" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001191d00008081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C0548E0F96C463D224EF946");
