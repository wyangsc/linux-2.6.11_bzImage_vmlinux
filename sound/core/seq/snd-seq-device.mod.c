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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x672144bd, "strlcpy" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x986f872a, "snd_seq_root" },
	{ 0x98adfde2, "request_module" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e25e7ec, "snd_info_create_module_entry" },
	{ 0x4e193abf, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "22C0F3B9EC863CFDD819480");
