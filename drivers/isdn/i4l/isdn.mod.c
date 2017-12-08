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
	{ 0x5facaf26, "skb_queue_head" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x2bfc003b, "qdisc_reset" },
	{ 0x9ccbf418, "send_sig" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0x6df93d86, "tty_hung_up_p" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2e0e927f, "slhc_init" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xbc55868, "slhc_remember" },
	{ 0x3bc1319e, "slhc_uncompress" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x802305c9, "put_tty_driver" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x53c0767c, "sk_chk_filter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x926d701, "default_wake_function" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fa03a97, "memset" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x12698c80, "tty_ldisc_flush" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x85abc85f, "strncmp" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2894cfb0, "slhc_free" },
	{ 0x61651be, "strcat" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9cbd6990, "tty_wait_until_sent" },
	{ 0x40e53e4, "arp_find" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xaa27f890, "__get_user_8" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6e57e831, "sk_run_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xb32c505b, "tty_check_change" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x76135e6c, "slhc_compress" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xa3a5be95, "memmove" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "15FAC78A6D1ECD2D6FE76A1");
