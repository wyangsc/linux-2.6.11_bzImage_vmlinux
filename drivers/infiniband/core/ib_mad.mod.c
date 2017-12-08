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
	{ 0xbf2549d2, "ib_dealloc_pd" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2f27ec41, "ib_destroy_qp" },
	{ 0x44809893, "find_next_bit" },
	{ 0x4e6c9acd, "queue_work" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0x59a2ac08, "ib_destroy_ah" },
	{ 0x2fad342d, "ib_modify_qp" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x1fc5daf3, "__create_workqueue" },
	{ 0xec2c6481, "ib_create_qp" },
	{ 0x34b1030, "ib_alloc_pd" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x8c7a3e90, "ib_get_dma_mr" },
	{ 0xdd132261, "printk" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x60a5cd2d, "destroy_workqueue" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x864f6cdb, "flush_workqueue" },
	{ 0xf3b14f7e, "ib_destroy_cq" },
	{ 0x3519f459, "ib_register_client" },
	{ 0xe3fd10ea, "ib_create_ah" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0x21f5223f, "ib_dereg_mr" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x2274556d, "find_first_bit" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x685104b5, "ib_create_cq" },
	{ 0xaf25400d, "snprintf" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x9104fe6e, "ib_unregister_client" },
	{ 0x61ff6b21, "queue_delayed_work" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_core";


MODULE_INFO(srcversion, "8CDBE25C908E389985793A2");
