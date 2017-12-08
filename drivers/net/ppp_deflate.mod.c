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
	{ 0xfb2904c6, "ppp_unregister_compressor" },
	{ 0x5f109f41, "ppp_register_compressor" },
	{ 0x6d9e4435, "zlib_inflateIncomp" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0xf56a3962, "zlib_inflateReset" },
	{ 0x7d94391d, "zlib_inflateInit2_" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0xdd132261, "printk" },
	{ 0x46bc0adc, "zlib_deflate" },
	{ 0x2b619e9d, "zlib_deflateReset" },
	{ 0xdc6fabd4, "zlib_deflateInit2_" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf0caf44b, "zlib_deflate_workspacesize" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x53dbeea6, "zlib_deflateEnd" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ppp_generic,zlib_inflate,zlib_deflate";


MODULE_INFO(srcversion, "4A4121528C2435AB7E73298");
