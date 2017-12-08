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
	{ 0x37a0cba, "kfree" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x63b77250, "free_netdev" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0x6067a146, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "80F0E584C7AA21B5701EDFD");
