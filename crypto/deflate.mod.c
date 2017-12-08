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
	{ 0x4aa5c6f6, "crypto_unregister_alg" },
	{ 0x9849d352, "crypto_register_alg" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0xf56a3962, "zlib_inflateReset" },
	{ 0x46bc0adc, "zlib_deflate" },
	{ 0x2b619e9d, "zlib_deflateReset" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d94391d, "zlib_inflateInit2_" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xdc6fabd4, "zlib_deflateInit2_" },
	{ 0x3fa03a97, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf0caf44b, "zlib_deflate_workspacesize" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=zlib_inflate,zlib_deflate";


MODULE_INFO(srcversion, "77A4D56C9B095399432349D");
