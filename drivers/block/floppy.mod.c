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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xa78a95ad, "platform_device_unregister" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x42c2e14e, "put_disk" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0xb18034f7, "platform_device_register" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50924458, "blk_register_region" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x4b64c886, "get_disk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x868acba5, "get_options" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x99cdcf8b, "generic_unplug_device" },
	{ 0x918b752a, "submit_bio" },
	{ 0x8ccc0acb, "bio_init" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x397be676, "complete" },
	{ 0x76537939, "permission" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xc57f9693, "rtc_lock" },
	{ 0x25ec1b28, "strlen" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x1c442a3d, "__invalidate_device" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x7dceceac, "capable" },
	{ 0x87a20dfd, "check_disk_change" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x6067a146, "memcpy" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0xcbc29c03, "add_disk_randomness" },
	{ 0xfe5de48a, "end_that_request_first" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34771cce, "dma_spin_lock" },
	{ 0x9c7077bd, "enable_hlt" },
	{ 0x794487ee, "disable_hlt" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4af9e110, "del_timer" },
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xdd132261, "printk" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x5271af5d, "request_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5732FDF791B54A799770933");
