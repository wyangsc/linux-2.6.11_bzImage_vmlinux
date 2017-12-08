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
	{ 0xe007de87, "mempool_destroy" },
	{ 0xc7b451f3, "md_register_thread" },
	{ 0x6056ebf3, "mempool_create" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1917dffd, "md_check_recovery" },
	{ 0xad036394, "synchronize_kernel" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xfd9925c6, "blk_queue_stack_limits" },
	{ 0x604cf294, "seq_printf" },
	{ 0x468d8cb3, "generic_make_request" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x8a2dd628, "mempool_alloc" },
	{ 0x612a103a, "bdevname" },
	{ 0xad3cfc79, "md_error" },
	{ 0x5da3698a, "mempool_free" },
	{ 0xac14755b, "bio_endio" },
	{ 0x488cbe8a, "md_wakeup_thread" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA69D11F00D18699976BF50");
