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
	{ 0x4c95198d, "unregister_md_personality" },
	{ 0xc76f2005, "register_md_personality" },
	{ 0xdfb19ada, "blk_sync_queue" },
	{ 0x87164382, "md_unregister_thread" },
	{ 0xc7b451f3, "md_register_thread" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xcb40bac0, "bio_add_page" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6056ebf3, "mempool_create" },
	{ 0x7c35d639, "md_handle_safemode" },
	{ 0x1917dffd, "md_check_recovery" },
	{ 0xb0278243, "md_done_sync" },
	{ 0xad036394, "synchronize_kernel" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xfd9925c6, "blk_queue_stack_limits" },
	{ 0xe007de87, "mempool_destroy" },
	{ 0x604cf294, "seq_printf" },
	{ 0x2ef3741c, "md_write_start" },
	{ 0x468d8cb3, "generic_make_request" },
	{ 0xb3d4c717, "bio_clone" },
	{ 0x8a2dd628, "mempool_alloc" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x8d7f4141, "md_write_end" },
	{ 0xdd132261, "printk" },
	{ 0x612a103a, "bdevname" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0xad3cfc79, "md_error" },
	{ 0x5da3698a, "mempool_free" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xac14755b, "bio_endio" },
	{ 0x488cbe8a, "md_wakeup_thread" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x4145a9cb, "bio_put" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0xebe2197b, "bio_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ce16b3f, "__kmalloc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0952A82B993F3F822758C3B");
