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
	{ 0xb6e8051d, "_write_unlock_irqrestore" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x2124ec5f, "seq_open" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x604cf294, "seq_printf" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x996d9199, "seq_read" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xcec83301, "_read_unlock_irqrestore" },
	{ 0xc15cd12d, "_read_lock_irqsave" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xec034e5, "_read_unlock" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xa3a5be95, "memmove" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x954cbb26, "vsprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38B0C8F3FEC7C06510FA1F5");
