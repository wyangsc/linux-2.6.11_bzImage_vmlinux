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
	{ 0xd3efca7a, "xfrm_register_km" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x74585fdd, "sock_register" },
	{ 0x2394a062, "sock_unregister" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x616be958, "xfrm_unregister_km" },
	{ 0x8d03a393, "sock_i_uid" },
	{ 0xefe14b58, "sock_i_ino" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x318964b9, "sock_no_sendpage" },
	{ 0xcabe2628, "sock_no_mmap" },
	{ 0xe83b9497, "sock_no_getsockopt" },
	{ 0x6abea964, "sock_no_setsockopt" },
	{ 0xdeefa591, "sock_no_shutdown" },
	{ 0x7b240798, "sock_no_listen" },
	{ 0xc516b8ef, "sock_no_ioctl" },
	{ 0xaed56bb9, "datagram_poll" },
	{ 0x40f0db00, "sock_no_getname" },
	{ 0xa8c8c780, "sock_no_accept" },
	{ 0x455342a3, "sock_no_socketpair" },
	{ 0x667d2ded, "sock_no_connect" },
	{ 0x5b5f3936, "sock_no_bind" },
	{ 0x85c8ff99, "skb_free_datagram" },
	{ 0x43ec913a, "put_cmsg" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x71dc558c, "skb_copy_datagram_iovec" },
	{ 0xe28c0c91, "skb_recv_datagram" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x285b5372, "xfrm_cfg_sem" },
	{ 0x36139a51, "memcpy_fromiovec" },
	{ 0x492f2c74, "xfrm_policy_flush" },
	{ 0x10001f5c, "xfrm_policy_byid" },
	{ 0x51de9960, "xfrm_policy_bysel" },
	{ 0x169fc1aa, "__xfrm_policy_destroy" },
	{ 0xb7414d92, "xfrm_policy_insert" },
	{ 0x5f1263f, "xfrm_policy_alloc" },
	{ 0xe0cbe9db, "xfrm_policy_walk" },
	{ 0xa2000cf0, "xfrm_state_walk" },
	{ 0x6daf354f, "xfrm_state_flush" },
	{ 0x1ded3e3d, "xfrm_ealg_get_byidx" },
	{ 0x6c672417, "xfrm_aalg_get_byidx" },
	{ 0x9cb8037b, "xfrm_count_enc_supported" },
	{ 0x686c703f, "xfrm_count_auth_supported" },
	{ 0xdb121c07, "xfrm_state_delete" },
	{ 0xd55baf0c, "xfrm_state_update" },
	{ 0xf9becfb3, "xfrm_state_add" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x19e6d379, "km_waitq" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x50ebe037, "xfrm_alloc_spi" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x79219eb7, "xfrm_find_acq" },
	{ 0xa44affdc, "xfrm_find_acq_byseq" },
	{ 0xbab9bacf, "__xfrm_state_destroy" },
	{ 0x92cbb43e, "xfrm_get_type" },
	{ 0x6b7ca4c, "xfrm_ealg_get_byid" },
	{ 0x744690cc, "xfrm_calg_get_byid" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x5a16594c, "xfrm_aalg_get_byid" },
	{ 0xb009500a, "xfrm_state_alloc" },
	{ 0x6067a146, "memcpy" },
	{ 0x4c9bd9e3, "xfrm_calg_get_byname" },
	{ 0xfab4bbc9, "xfrm_ealg_get_byname" },
	{ 0x217ef805, "xfrm_aalg_get_byname" },
	{ 0x3fa03a97, "memset" },
	{ 0x743a435e, "xfrm_state_lookup" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x32f1ba53, "sock_rfree" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x8940db49, "sk_free" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0x2612425c, "sock_init_data" },
	{ 0x26542c35, "sk_alloc" },
	{ 0x7dceceac, "capable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x26c5f6ce, "add_wait_queue_exclusive" },
	{ 0x926d701, "default_wake_function" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd132261, "printk" },
	{ 0x29956b63, "skb_queue_purge" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D238F09ABDDAD3ADD9E1FAA");
