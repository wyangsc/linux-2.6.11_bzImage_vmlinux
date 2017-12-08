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
	{ 0x604cf294, "seq_printf" },
	{ 0xac14755b, "bio_endio" },
	{ 0xa55e09ee, "bio_pair_release" },
	{ 0x468d8cb3, "generic_make_request" },
	{ 0xa173d11c, "bio_split" },
	{ 0xffa646cf, "bio_split_pool" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdfb19ada, "blk_sync_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xb971f847, "blk_queue_merge_bvec" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xabce7a5f, "blk_queue_segment_boundary" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xfd9925c6, "blk_queue_stack_limits" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xdd132261, "printk" },
	{ 0x612a103a, "bdevname" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "81BD69C5850FEC2E5D85554");
