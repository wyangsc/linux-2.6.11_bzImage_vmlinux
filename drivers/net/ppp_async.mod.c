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
	{ 0x68530daf, "stop_tty" },
	{ 0x3a66ba33, "start_tty" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5d075433, "ppp_output_wakeup" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xb2ff89e3, "ppp_input" },
	{ 0x1b7479e5, "ppp_input_error" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xdd132261, "printk" },
	{ 0xd5255c28, "tty_register_ldisc" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x90bd2c3a, "n_tty_ioctl" },
	{ 0x11358d0e, "ppp_unit_number" },
	{ 0x5fccd839, "ppp_channel_index" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x3c89bff8, "ppp_unregister_channel" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x76f826aa, "_write_unlock_irq" },
	{ 0x7de30230, "_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f2bb69c, "ppp_register_channel" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "CFC2B5C1DB87585B1AF734D");
