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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc54f2452, "proc_symlink" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xe811ce73, "sound_class" },
	{ 0xccc38c89, "register_sound_special" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x926d701, "default_wake_function" },
	{ 0x82624104, "pci_restore_state" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x498dc803, "init_rwsem" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x1075bf0, "panic" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x85abc85f, "strncmp" },
	{ 0x672144bd, "strlcpy" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x61651be, "strcat" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xb12cdfe7, "system_utsname" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xf666cbb3, "__memcpy_fromio" },
	{ 0xbaa9c06, "proc_root" },
	{ 0x283a7119, "_write_unlock" },
	{ 0x2099274a, "pm_register" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x82328328, "kill_fasync" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xe3b0192b, "vscnprintf" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x977fef0c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=soundcore";


MODULE_INFO(srcversion, "E8628B950AF660054DE7C29");
