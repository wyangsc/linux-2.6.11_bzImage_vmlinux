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
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x3fa03a97, "memset" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x970a9fb0, "snd_seq_expand_var_event" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq";


MODULE_INFO(srcversion, "0CD1527604264B5C53C5D9E");
