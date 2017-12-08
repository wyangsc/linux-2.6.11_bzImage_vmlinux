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
	{ 0x3fc21455, "scsi_unregister" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x6067a146, "memcpy" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x5271af5d, "request_irq" },
	{ 0xe51ce92f, "scsi_register" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D51D3727E64F625BB1EC7BD");
