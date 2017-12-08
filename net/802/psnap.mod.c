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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xdd132261, "printk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xa7eba7a, "llc_sap_open" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x11de5132, "llc_sap_close" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xf81b8d3f, "llc_build_and_send_ui_pkt" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "1528F395001677D550D61D5");
