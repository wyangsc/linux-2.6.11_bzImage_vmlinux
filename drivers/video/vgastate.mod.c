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
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B7728055E8D7D0ACB8F02FE");
