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
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x6067a146, "memcpy" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x25ec1b28, "strlen" },
	{ 0x3fa03a97, "memset" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xaf25400d, "snprintf" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0xdd132261, "printk" },
	{ 0x1d26aa98, "sprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000013C1d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C1d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1927C42E1EB066915A4D41B");
