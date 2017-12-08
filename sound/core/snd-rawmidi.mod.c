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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xea51db76, "snd_register_device" },
	{ 0x672d68ac, "snd_device_register" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x24d11b39, "snd_card_file_remove" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb6e38969, "snd_ctl_unregister_ioctl" },
	{ 0x926d701, "default_wake_function" },
	{ 0x3fa03a97, "memset" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xa811205, "snd_unregister_device" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xbb6ecb55, "snd_card_file_add" },
	{ 0x38f007e7, "snd_ctl_register_ioctl" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x26c8c0aa, "snd_register_oss_device" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc97d2ec1, "snd_unregister_oss_device" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x8479d154, "snd_seq_device_new" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device";


MODULE_INFO(srcversion, "369751590D49DE40DD78029");
