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
	{ 0xd4f66d23, "irlmp_data_request" },
	{ 0xcc5d75cc, "irlmp_open_lsap" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x4c378b56, "proc_irda" },
	{ 0x1935ed67, "irttp_close_tsap" },
	{ 0x69f3ddbf, "irlmp_close_lsap" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x604cf294, "seq_printf" },
	{ 0xe5c7885d, "irttp_connect_request" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x5f21691e, "irttp_data_request" },
	{ 0x4a1fa4ae, "irlmp_connect_response" },
	{ 0x996d9199, "seq_read" },
	{ 0xd5dcd888, "irlmp_disconnect_request" },
	{ 0xfdb3d3b9, "irttp_disconnect_request" },
	{ 0x275e3db8, "hashbin_new" },
	{ 0x97f54628, "hashbin_delete" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x79ed1acd, "hashbin_remove" },
	{ 0x14240450, "hashbin_get_next" },
	{ 0xfa4fc616, "seq_putc" },
	{ 0x672144bd, "strlcpy" },
	{ 0x7af639a0, "irttp_connect_response" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x42a3b5c7, "hashbin_get_first" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5eabd31a, "irda_notify_init" },
	{ 0x2d350a5d, "irlmp_connect_request" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3def0f6f, "irttp_open_tsap" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xff8be3cd, "hashbin_lock_find" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xd30358ea, "irttp_flow_request" },
	{ 0x83e7b376, "hashbin_insert" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "E1D9FB161E955F08E2427D8");
