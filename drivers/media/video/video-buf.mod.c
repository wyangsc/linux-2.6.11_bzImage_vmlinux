#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x5d5b82d, "__up_read" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x47636033, "swiotlb" },
	{ 0xb6329100, "get_user_pages" },
	{ 0x1000e51, "schedule" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a1573dc, "swiotlb_sync_sg_for_cpu" },
	{ 0x5344b0b0, "put_page" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x189c5fd1, "out_of_line_bug" },
	{ 0xec5b8587, "vmalloc_to_page" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xb203e760, "__down_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "55DD9FE9527BB293522A006");
