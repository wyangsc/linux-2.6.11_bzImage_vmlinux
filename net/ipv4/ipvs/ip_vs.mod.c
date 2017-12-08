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
	{ 0xbd5bf3aa, "release_sock" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xba8d9a09, "kernel_sendmsg" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0xbcc2974f, "single_open" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x4af9e110, "del_timer" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x2c2fa4b6, "ip_route_output_key" },
	{ 0x2124ec5f, "seq_open" },
	{ 0xed606400, "seq_release_private" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xeafa8c92, "single_release" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xac3fa0a8, "proc_dointvec" },
	{ 0xc65ca1ae, "sock_release" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x53d5e16f, "icmp_send" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa37b7441, "ip_send_check" },
	{ 0x604cf294, "seq_printf" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0x68ebedfc, "sock_create_kern" },
	{ 0x86aea614, "nf_register_hook" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x996d9199, "seq_read" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3a1f4bb7, "nf_hook_slow" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x94c60c29, "ip_defrag" },
	{ 0x979bdf32, "skb_checksum" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xe8cf3ae7, "inet_addr_type" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xf4022424, "inet_select_addr" },
	{ 0xb8fc307e, "ip_mc_join_group" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xfa4fc616, "seq_putc" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x79312f78, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xd82e8044, "loopback_dev" },
	{ 0x61651be, "strcat" },
	{ 0xc6792e7, "lock_sock" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1c66f64c, "net_random" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0xf471e393, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xa7ed457a, "pskb_expand_head" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0x4a2211d2, "__dev_get_by_name" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0x68e83444, "kernel_recvmsg" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xabdbbad8, "nf_unregister_hook" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5de78d62, "nf_register_sockopt" },
	{ 0x397be676, "complete" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xa3a5be95, "memmove" },
	{ 0xf1e29eae, "csum_partial" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x7dd4a7a7, "sock_wfree" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x5274f725, "__ip_select_ident" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9A751B65BF3D0A2BE8A7F66");
