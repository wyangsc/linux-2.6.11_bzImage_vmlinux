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
	{ 0xf62ebf13, "irttp_udata_request" },
	{ 0x15160215, "irias_add_string_attrib" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x763e54a4, "irlmp_unregister_client" },
	{ 0x6a3ee58, "irias_new_integer_value" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x4c378b56, "proc_irda" },
	{ 0x90b5b24, "seq_puts" },
	{ 0x1935ed67, "irttp_close_tsap" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe095afae, "rtnl_sem" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x604cf294, "seq_printf" },
	{ 0xe5c7885d, "irttp_connect_request" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x5f21691e, "irttp_data_request" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x996d9199, "seq_read" },
	{ 0x81f06c9f, "irias_insert_object" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8d5f69f0, "iriap_getvaluebyclass_request" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x7042bc54, "irlmp_register_client" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xfdb3d3b9, "irttp_disconnect_request" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xfa4fc616, "seq_putc" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x6a6aaa4c, "arp_send" },
	{ 0x79312f78, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7d3647c, "irlmp_register_service" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x7af639a0, "irttp_connect_response" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x78224cad, "irias_add_integer_attrib" },
	{ 0x1000e51, "schedule" },
	{ 0xb433ad54, "iriap_close" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xbe40ace9, "irlmp_discovery_request" },
	{ 0xbcd3ef13, "irias_object_change_attribute" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5eabd31a, "irda_notify_init" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x51300990, "iriap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x3def0f6f, "irttp_open_tsap" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x46c1c4a2, "irlmp_unregister_service" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xafe9d04e, "irias_new_object" },
	{ 0xbd911b60, "irias_find_object" },
	{ 0xde4c6b3c, "irlmp_service_to_hint" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "6F267B2C37C3652ACFFF209");
