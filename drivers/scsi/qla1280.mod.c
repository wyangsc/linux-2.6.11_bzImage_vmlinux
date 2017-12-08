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
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x5271af5d, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x85abc85f, "strncmp" },
	{ 0x349cba85, "strchr" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6067a146, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x397be676, "complete" },
	{ 0xdd132261, "printk" },
	{ 0x3fa03a97, "memset" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x900b315c, "get_zeroed_page" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001077d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "703D135F8799ADE70B0E92E");
