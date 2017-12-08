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
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x797976f6, "hci_unregister_dev" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xfbcbe92, "hci_free_dev" },
	{ 0x20fd144, "hci_register_dev" },
	{ 0x29468c7, "hci_alloc_dev" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x82328328, "kill_fasync" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x6067a146, "memcpy" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xdd132261, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x29956b63, "skb_queue_purge" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "186FA28D82883C43A453503");
