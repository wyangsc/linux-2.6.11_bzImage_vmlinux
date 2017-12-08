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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xdd132261, "printk" },
	{ 0xb5ec86a8, "dev_base" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0xb55a54e, "dev_queue_xmit" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7D57CFD6EFE1C49C0951E21");
