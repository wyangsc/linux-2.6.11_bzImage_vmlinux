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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xea51db76, "snd_register_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x806d5133, "param_array_get" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0x3fa03a97, "memset" },
	{ 0x498dc803, "init_rwsem" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xa811205, "snd_unregister_device" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x85abc85f, "strncmp" },
	{ 0x672144bd, "strlcpy" },
	{ 0xdad85b12, "snd_timer_pause" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xbfeac6c3, "snd_timer_resolution" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x83d0665, "snd_timer_start" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8a94975f, "snd_timer_open" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xacf861f7, "snd_timer_close" },
	{ 0x986f872a, "snd_seq_root" },
	{ 0x98adfde2, "request_module" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e25e7ec, "snd_info_create_module_entry" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x4195637c, "snd_timer_stop" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device,snd-timer";


MODULE_INFO(srcversion, "9C6383F6FD87622FEBCC82D");
