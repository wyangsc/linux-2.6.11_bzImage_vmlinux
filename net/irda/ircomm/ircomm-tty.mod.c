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
	{ 0xb9394173, "irias_delete_value" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x91815586, "irda_param_pack" },
	{ 0x4af9e110, "del_timer" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x763e54a4, "irlmp_unregister_client" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0x6df93d86, "tty_hung_up_p" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xc1e786b7, "irias_delete_object" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0x802305c9, "put_tty_driver" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf94e5ca2, "ircomm_connect_response" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x81f06c9f, "irias_insert_object" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x8d5f69f0, "iriap_getvaluebyclass_request" },
	{ 0x7042bc54, "irlmp_register_client" },
	{ 0x926d701, "default_wake_function" },
	{ 0x275e3db8, "hashbin_new" },
	{ 0x97f54628, "hashbin_delete" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xeca3506c, "ircomm_disconnect_request" },
	{ 0x14240450, "hashbin_get_next" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x672144bd, "strlcpy" },
	{ 0x993ad14b, "irda_param_extract_all" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d3647c, "irlmp_register_service" },
	{ 0xe7688024, "ircomm_connect_request" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9cbd6990, "tty_wait_until_sent" },
	{ 0x78224cad, "irias_add_integer_attrib" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x42a3b5c7, "hashbin_get_first" },
	{ 0xb433ad54, "iriap_close" },
	{ 0xbe40ace9, "irlmp_discovery_request" },
	{ 0x5eabd31a, "irda_notify_init" },
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0xa7001580, "irias_add_octseq_attrib" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xe44cb108, "ircomm_control_request" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x51300990, "iriap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xe54d7700, "ircomm_close" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x27c68ea7, "ircomm_open" },
	{ 0xff8be3cd, "hashbin_lock_find" },
	{ 0x46c1c4a2, "irlmp_unregister_service" },
	{ 0xafe9d04e, "irias_new_object" },
	{ 0x1780452d, "ircomm_flow_request" },
	{ 0xa0bdfc1c, "ircomm_data_request" },
	{ 0xde4c6b3c, "irlmp_service_to_hint" },
	{ 0x83e7b376, "hashbin_insert" },
	{ 0x2036ad06, "irda_param_insert" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda,ircomm";


MODULE_INFO(srcversion, "D40C5EAEC2E3852FFF941DD");
