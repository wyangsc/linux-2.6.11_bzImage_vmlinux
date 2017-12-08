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
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x5271af5d, "request_irq" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0xabce7a5f, "blk_queue_segment_boundary" },
	{ 0xcb2e1047, "blk_queue_max_phys_segments" },
	{ 0x56738020, "blk_queue_max_hw_segments" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xf4cad9f9, "blk_start_queue" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xfe5de48a, "end_that_request_first" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xf629fa6a, "blk_rq_map_sg" },
	{ 0x7bd90016, "blk_stop_queue" },
	{ 0xcd19c232, "blk_requeue_request" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x3fa03a97, "memset" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x8863c7a3, "blk_insert_request" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xe9e5b498, "blk_get_request" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "176651A09FC64E2676110B2");
