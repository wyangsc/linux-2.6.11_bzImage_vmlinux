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
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xd49501d4, "__release_region" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x5271af5d, "request_irq" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x6067a146, "memcpy" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xdd132261, "printk" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001101d00001060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5A842B5EF7ADB597EC0638");
