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
	{ 0x85c5d31b, "serio_unregister_driver" },
	{ 0x1f0f3b67, "serio_register_driver" },
	{ 0x511bb155, "serio_close" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x2ed93855, "serio_open" },
	{ 0xaf25400d, "snprintf" },
	{ 0xdd132261, "printk" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x82328328, "kill_fasync" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x37a0cba, "kfree" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x9b89634b, "fasync_helper" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A7F00BEF15517C7E9F1F3DB");
