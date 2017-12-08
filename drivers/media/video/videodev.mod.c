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
	{ 0xfdbcb144, "class_register" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x1075bf0, "panic" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "946427F0A7908563C331329");
