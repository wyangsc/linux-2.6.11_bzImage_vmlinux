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
	{ 0x868acba5, "get_options" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe914e41e, "strcpy" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc3e0a985, "scsi_bios_ptable" },
	{ 0x6067a146, "memcpy" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xdd132261, "printk" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xd49501d4, "__release_region" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x72b243d4, "free_dma" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x5271af5d, "request_irq" },
	{ 0x61651be, "strcat" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xf1d0cdab, "__check_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x3fa03a97, "memset" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5A24F109E1D4E56927110AB");
