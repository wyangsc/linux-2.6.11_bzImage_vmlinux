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
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xa5fc33a3, "proc_root_driver" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7dceceac, "capable" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x9fddc895, "kthread_stop" },
	{ 0xe007de87, "mempool_destroy" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0xedc6d321, "blk_alloc_queue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x6056ebf3, "mempool_create" },
	{ 0xe2ec9a2b, "ioctl_by_bdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xb3eaa9e7, "kthread_create" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0xeafa8c92, "single_release" },
	{ 0x996d9199, "seq_read" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0xbcc2974f, "single_open" },
	{ 0x604cf294, "seq_printf" },
	{ 0xb971f847, "blk_queue_merge_bvec" },
	{ 0x2626ca37, "blk_queue_hardsect_size" },
	{ 0x1e59de66, "blk_queue_make_request" },
	{ 0xa55e09ee, "bio_pair_release" },
	{ 0xa173d11c, "bio_split" },
	{ 0xffa646cf, "bio_split_pool" },
	{ 0x529e5555, "blk_queue_bounce" },
	{ 0x8a2dd628, "mempool_alloc" },
	{ 0xb3d4c717, "bio_clone" },
	{ 0x612a103a, "bdevname" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x2d0ea5b9, "set_blocksize" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xcc56a621, "blkdev_put" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xada7561d, "bd_set_size" },
	{ 0xbb79617, "blkdev_get" },
	{ 0x28aa7e1e, "bdget" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x6314e42c, "flush_signals" },
	{ 0x8607fe00, "refrigerator" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0x2fcaa545, "set_user_nice" },
	{ 0xac14755b, "bio_endio" },
	{ 0x5da3698a, "mempool_free" },
	{ 0x7ee8c5cb, "rb_erase" },
	{ 0xf6c3815e, "rb_first" },
	{ 0xcb40bac0, "bio_add_page" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x468d8cb3, "generic_make_request" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x4f476e96, "init_cdrom_command" },
	{ 0xdd132261, "printk" },
	{ 0x495cebb5, "blk_put_request" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x99cdcf8b, "generic_unplug_device" },
	{ 0xc82b27fe, "elv_add_request" },
	{ 0x6067a146, "memcpy" },
	{ 0xe9e5b498, "blk_get_request" },
	{ 0x7ec51f67, "rb_insert_color" },
	{ 0x44ba0f42, "rb_next" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0x4145a9cb, "bio_put" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x8ccc0acb, "bio_init" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x46bdd8d1, "__wake_up" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9B5A94530FA491F61BE87EF");
