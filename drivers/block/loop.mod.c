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
	{ 0xc0014b1a, "module_refcount" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0xebe2197b, "bio_alloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x16cd6910, "invalidate_bdev" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x1774a212, "set_device_ro" },
	{ 0x3fa03a97, "memset" },
	{ 0xedc6d321, "blk_alloc_queue" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xe27eee88, "fput" },
	{ 0xac14755b, "bio_endio" },
	{ 0x4145a9cb, "bio_put" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x7dceceac, "capable" },
	{ 0xada7561d, "bd_set_size" },
	{ 0x1e59de66, "blk_queue_make_request" },
	{ 0x42c2e14e, "put_disk" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x2fcaa545, "set_user_nice" },
	{ 0x83067c36, "fget" },
	{ 0x5344b0b0, "put_page" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x397be676, "complete" },
	{ 0x2d0ea5b9, "set_blocksize" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x619b769b, "vfs_getattr" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9706B647AB4F53998DFA97F");
