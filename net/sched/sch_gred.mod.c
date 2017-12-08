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
	{ 0x6a7d43ca, "unregister_qdisc" },
	{ 0x17f63147, "register_qdisc" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fa03a97, "memset" },
	{ 0xd6caef04, "__rta_fill" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x1c66f64c, "net_random" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "74D895592CE000A99BDB829");
