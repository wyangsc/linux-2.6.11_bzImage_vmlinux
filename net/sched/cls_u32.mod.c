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
	{ 0x6ce08373, "unregister_tcf_proto_ops" },
	{ 0x79d0c1db, "register_tcf_proto_ops" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xfeaaa197, "tcf_exts_dump_stats" },
	{ 0xd7297d41, "tcf_exts_dump" },
	{ 0xd6caef04, "__rta_fill" },
	{ 0x6067a146, "memcpy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xbfd8affc, "tcf_exts_change" },
	{ 0x83230e05, "rtattr_strlcpy" },
	{ 0x48fadf8, "tcf_exts_validate" },
	{ 0xcfc6d5f, "qdisc_unlock_tree" },
	{ 0xff102880, "qdisc_lock_tree" },
	{ 0xa695b861, "tcf_exts_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2d5255a, "strcmp" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FC3353BF0E588714F4ABD1A");
