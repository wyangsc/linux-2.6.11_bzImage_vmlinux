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
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xa468b848, "class_simple_create" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x2a70cfe4, "filp_close" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3d9f10ed, "vfs_read" },
	{ 0xdd132261, "printk" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x61651be, "strcat" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xf662d646, "filp_open" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E11490DC3F523551C4C2A6D");
