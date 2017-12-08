#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xa7eba7a, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x11de5132, "llc_sap_close" },
	{ 0xf81b8d3f, "llc_build_and_send_ui_pkt" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "C11797786A8957706783E1E");
