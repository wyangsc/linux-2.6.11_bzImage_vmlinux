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
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x5271af5d, "request_irq" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x85abc85f, "strncmp" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x954cbb26, "vsprintf" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x61651be, "strcat" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3fa03a97, "memset" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x756e6992, "strnicmp" },
	{ 0x25ec1b28, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001014d0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000001BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000250sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B03B9930798EDFE9633CBD");
