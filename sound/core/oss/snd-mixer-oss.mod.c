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
	{ 0xa6fd27b, "snd_info_get_line" },
	{ 0xd0ac23fb, "snd_ctl_find_numid" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x24d11b39, "snd_card_file_remove" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5dd3bf69, "snd_kmalloc_strdup" },
	{ 0xdd132261, "printk" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x83ce8b18, "snd_cards" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xddc8d7fd, "snd_mixer_oss_notify_callback" },
	{ 0xbb6ecb55, "snd_card_file_add" },
	{ 0x26c8c0aa, "snd_register_oss_device" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x9da34ad5, "snd_ctl_find_id" },
	{ 0xc97d2ec1, "snd_unregister_oss_device" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xb203e760, "__down_read" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "6730C97278B3E1E67695D19");
