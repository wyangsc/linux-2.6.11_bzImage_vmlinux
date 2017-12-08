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
	{ 0x99b31a1b, "proc_dointvec_minmax" },
	{ 0xb6e8051d, "_write_unlock_irqrestore" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x349cba85, "strchr" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3fa03a97, "memset" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xbd02390, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8A1D02EFADECCBF641E1BC3");
