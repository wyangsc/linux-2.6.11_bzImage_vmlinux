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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x857bf0a1, "__downgrade_write" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xdd132261, "printk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xd5eeb25, "panic_notifier_list" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xbaa9c06, "proc_root" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0xf099679c, "notifier_chain_unregister" },
	{ 0x60cec3b9, "notifier_chain_register" },
	{ 0xb203e760, "__down_read" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8CF6F87B4E3FD31902FB0FB");
