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
	{ 0x89b301d4, "param_get_int" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x7bb4de17, "scnprintf" },
	{ 0xaf25400d, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "28E4CEDAA57177855C42A1A");
