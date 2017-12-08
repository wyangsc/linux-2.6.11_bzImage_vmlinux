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
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xedc03953, "iounmap" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xcb2e1047, "blk_queue_max_phys_segments" },
	{ 0x56738020, "blk_queue_max_hw_segments" },
	{ 0x6040646c, "blk_queue_bounce_limit" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0x5271af5d, "request_irq" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x42c2e14e, "put_disk" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xf4cad9f9, "blk_start_queue" },
	{ 0x397be676, "complete" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xac14755b, "bio_endio" },
	{ 0x7bd90016, "blk_stop_queue" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xf629fa6a, "blk_rq_map_sg" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x2626ca37, "blk_queue_hardsect_size" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf116d4b5, "copy_in_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x4888a014, "__get_user_2" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0xb3d2bf12, "find_first_zero_bit" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xa5fc33a3, "proc_root_driver" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x25ec1b28, "strlen" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xd54b74ac, "scsi_device_types" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xdd132261, "printk" },
	{ 0x3fa03a97, "memset" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000B060sv00000E11sd00004070bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004080bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004082bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B178sv00000E11sd00004083bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Abc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Bbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Cbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd0000409Dbc*sc*i*");
MODULE_ALIAS("pci:v00000E11d00000046sv00000E11sd00004091bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003220sv0000103Csd00003225bc*sc*i*");

MODULE_INFO(srcversion, "D23303348AAA279B268D68C");
