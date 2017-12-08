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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xea51db76, "snd_register_device" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x24d11b39, "snd_card_file_remove" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb6e38969, "snd_ctl_unregister_ioctl" },
	{ 0x926d701, "default_wake_function" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0xa811205, "snd_unregister_device" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xbb6ecb55, "snd_card_file_add" },
	{ 0x38f007e7, "snd_ctl_register_ioctl" },
	{ 0x1000e51, "schedule" },
	{ 0x26c8c0aa, "snd_register_oss_device" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc97d2ec1, "snd_unregister_oss_device" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e25e7ec, "snd_info_create_module_entry" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x4e193abf, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "D805B463DFF8BF1A691ACA0");
