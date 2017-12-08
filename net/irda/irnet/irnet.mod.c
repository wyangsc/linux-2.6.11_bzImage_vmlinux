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
	{ 0xedd521c2, "irlmp_get_discoveries" },
	{ 0xb9394173, "irias_delete_value" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x349cba85, "strchr" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x11358d0e, "ppp_unit_number" },
	{ 0x763e54a4, "irlmp_unregister_client" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x4c378b56, "proc_irda" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1935ed67, "irttp_close_tsap" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe5c7885d, "irttp_connect_request" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x5f21691e, "irttp_data_request" },
	{ 0xc1e786b7, "irias_delete_object" },
	{ 0x3c89bff8, "ppp_unregister_channel" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x81f06c9f, "irias_insert_object" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8d5f69f0, "iriap_getvaluebyclass_request" },
	{ 0x7042bc54, "irlmp_register_client" },
	{ 0x926d701, "default_wake_function" },
	{ 0x5d075433, "ppp_output_wakeup" },
	{ 0xe2193e8c, "misc_register" },
	{ 0xf6c1dc5a, "hashbin_find" },
	{ 0xfdb3d3b9, "irttp_disconnect_request" },
	{ 0x275e3db8, "hashbin_new" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x97f54628, "hashbin_delete" },
	{ 0xdd132261, "printk" },
	{ 0x14240450, "hashbin_get_next" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x85abc85f, "strncmp" },
	{ 0x672144bd, "strlcpy" },
	{ 0x7d3647c, "irlmp_register_service" },
	{ 0x7dceceac, "capable" },
	{ 0x7af639a0, "irttp_connect_response" },
	{ 0x52cc026f, "irttp_dup" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x78224cad, "irias_add_integer_attrib" },
	{ 0x1000e51, "schedule" },
	{ 0x42a3b5c7, "hashbin_get_first" },
	{ 0xb433ad54, "iriap_close" },
	{ 0x1b7479e5, "ppp_input_error" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5eabd31a, "irda_notify_init" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x51300990, "iriap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x3def0f6f, "irttp_open_tsap" },
	{ 0x7957f728, "irlmp_update_client" },
	{ 0xb2ff89e3, "ppp_input" },
	{ 0x46c1c4a2, "irlmp_unregister_service" },
	{ 0x3f2bb69c, "ppp_register_channel" },
	{ 0xafe9d04e, "irias_new_object" },
	{ 0x5fccd839, "ppp_channel_index" },
	{ 0xe847f34a, "hashbin_remove_this" },
	{ 0xde4c6b3c, "irlmp_service_to_hint" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x83e7b376, "hashbin_insert" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda,ppp_generic";


MODULE_INFO(srcversion, "8E51C6A80B8EAB4BE6341EC");
