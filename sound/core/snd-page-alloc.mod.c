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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x806d5133, "param_array_get" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdd132261, "printk" },
	{ 0xef84b357, "vmap" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B6213B27B51C8CFF2F727EC");
