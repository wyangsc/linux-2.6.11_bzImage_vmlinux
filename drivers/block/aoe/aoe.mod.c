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
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x3fa913da, "strspn" },
	{ 0x529e5555, "blk_queue_bounce" },
	{ 0xa468b848, "class_simple_create" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xb2f7a1cc, "dev_base_lock" },
	{ 0xe007de87, "mempool_destroy" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xafe82e10, "strcspn" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x25eb7cd5, "mempool_alloc_slab" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xb5ec86a8, "dev_base" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x626dbbe3, "sysfs_remove_link" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xac14755b, "bio_endio" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x8a2dd628, "mempool_alloc" },
	{ 0x1e59de66, "blk_queue_make_request" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x6056ebf3, "mempool_create" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x1edc4e5e, "sysfs_create_file" },
	{ 0x5da3698a, "mempool_free" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xec034e5, "_read_unlock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x39a53491, "__skb_linearize" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf99c9f6a, "class_simple_device_add" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF4C8C3EDF716DAE31114BB");
