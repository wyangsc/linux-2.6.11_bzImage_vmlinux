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
	{ 0xc81bffce, "gameport_unregister_device" },
	{ 0x3a09104, "gameport_register_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf150130, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x64d481a9, "gameport_close" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4a30ed9, "gameport_open" },
	{ 0xdd132261, "printk" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x61651be, "strcat" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4af9e110, "del_timer" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656f63b5, "input_event" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gameport";


MODULE_INFO(srcversion, "667DC397BD119BBCCDA6EF7");
