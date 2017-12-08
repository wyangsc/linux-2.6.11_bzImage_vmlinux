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
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x7dceceac, "capable" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x25ec1b28, "strlen" },
	{ 0x1620a668, "sleep_on_timeout" },
	{ 0x85abc85f, "strncmp" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe914e41e, "strcpy" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x397be676, "complete" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xfe5de48a, "end_that_request_first" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xf629fa6a, "blk_rq_map_sg" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xcb2e1047, "blk_queue_max_phys_segments" },
	{ 0x56738020, "blk_queue_max_hw_segments" },
	{ 0x6040646c, "blk_queue_bounce_limit" },
	{ 0xdd132261, "printk" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x61651be, "strcat" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6067a146, "memcpy" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2f6ba17, "dma_pool_alloc" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x10c4c1d7, "dma_pool_free" },
	{ 0x589da517, "dma_pool_destroy" },
	{ 0x75b74ee6, "dma_pool_create" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x3fa03a97, "memset" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x87a20dfd, "check_disk_change" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001069d0000BA56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00001065sv00001069sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3DB409010A2EC083EE69DEF");
