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
	{ 0xffdfe686, "ipmi_smi_watcher_unregister" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xa856ec9d, "ipmi_smi_watcher_register" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x9f20ac6b, "ipmi_get_my_LUN" },
	{ 0x24b44f6e, "ipmi_set_my_LUN" },
	{ 0xfec0d176, "ipmi_get_my_address" },
	{ 0x36a2e6c8, "ipmi_set_my_address" },
	{ 0x4936040c, "ipmi_set_gets_events" },
	{ 0x671d1403, "ipmi_unregister_for_cmd" },
	{ 0x543b3101, "ipmi_register_for_cmd" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x1d5efc0c, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x99dca307, "ipmi_destroy_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x62a8a584, "ipmi_create_user" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x82328328, "kill_fasync" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "B5DC3E1D555E0B693BA38C3");
