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
	{ 0xfdbcb144, "class_register" },
	{ 0x5934392b, "fb_register_client" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x672144bd, "strlcpy" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7764c051, "class_device_remove_file" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc36f32e, "fb_unregister_client" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A19A67F073A70936425969A");
