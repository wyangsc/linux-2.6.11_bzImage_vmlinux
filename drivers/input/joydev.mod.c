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
	{ 0xdea64789, "input_unregister_handler" },
	{ 0x6680c9f2, "input_register_handler" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0x7bb732ed, "input_class" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0x25ec1b28, "strlen" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xaa27f890, "__get_user_8" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xa11284fc, "input_open_device" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xba22afab, "input_close_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x82328328, "kill_fasync" },
	{ 0x6067a146, "memcpy" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BEB32DAC4A78C0BE124DA26");
