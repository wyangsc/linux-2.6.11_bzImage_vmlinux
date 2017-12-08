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
	{ 0x199f8774, "scsi_scan_host" },
	{ 0xeffd1eb3, "sysfs_create_bin_file" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x7b99cb7a, "sysfs_remove_bin_file" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x5271af5d, "request_irq" },
	{ 0x977fef0c, "pci_save_state" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xd2f6ba17, "dma_pool_alloc" },
	{ 0x75b74ee6, "dma_pool_create" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x589da517, "dma_pool_destroy" },
	{ 0x10c4c1d7, "dma_pool_free" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x82624104, "pci_restore_state" },
	{ 0xdbda4cc3, "scsi_block_requests" },
	{ 0xe8a787c0, "scsi_unblock_requests" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3fa03a97, "memset" },
	{ 0x1675606f, "bad_dma_address" },
	{ 0xaaeb10d3, "swiotlb_dma_mapping_error" },
	{ 0x47636033, "swiotlb" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd48b9afa, "blk_queue_free_tags" },
	{ 0x18596ab5, "blk_queue_init_tags" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x3ae831b6, "kref_init" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x6ef56f31, "release_firmware" },
	{ 0x1166731b, "request_firmware" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7dceceac, "capable" },
	{ 0x25ec1b28, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xaf25400d, "snprintf" },
	{ 0x42c1f421, "scsi_device_put" },
	{ 0x478feb0a, "scsi_remove_device" },
	{ 0x364960cd, "scsi_device_get" },
	{ 0xc9f128ee, "__scsi_add_device" },
	{ 0xb887523b, "kref_put" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x76dbab37, "scsi_report_bus_reset" },
	{ 0x6067a146, "memcpy" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x397be676, "complete" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x4af9e110, "del_timer" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0xdd132261, "printk" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xaa7b63ae, "pci_find_capability" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x7d11c268, "jiffies" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd000002BDbc*sc*i*");

MODULE_INFO(srcversion, "9E74903D4973AD412EEEE31");
