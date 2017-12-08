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
	{ 0x55eb2175, "snd_pcm_format_width" },
	{ 0xa6fd27b, "snd_info_get_line" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xdf124602, "snd_pcm_format_set_silence" },
	{ 0x24d11b39, "snd_card_file_remove" },
	{ 0xcefdfe9b, "snd_pcm_lib_write" },
	{ 0x8724f7f, "snd_pcm_release_substream" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xef4816e6, "snd_pcm_notify" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x93878ece, "snd_pcm_format_big_endian" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11af59ea, "snd_pcm_kernel_playback_ioctl" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x9ec83620, "snd_pcm_hw_refine" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf0474c54, "_read_unlock_irq" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb3a9a796, "snd_pcm_link_rwlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xef5655a6, "snd_pcm_hw_constraints_complete" },
	{ 0xe2c5f868, "snd_pcm_format_signed" },
	{ 0x5dd3bf69, "snd_kmalloc_strdup" },
	{ 0x2ed7e8ea, "snd_pcm_hw_param_mask" },
	{ 0x926d701, "default_wake_function" },
	{ 0xbeab9b1, "snd_pcm_build_linear_format" },
	{ 0x132c8ec7, "snd_pcm_hw_param_value_min" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x65890315, "snd_pcm_devices" },
	{ 0x474bf638, "snd_pcm_mmap_data" },
	{ 0x8733f967, "snd_pcm_format_linear" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xb6083647, "snd_task_name" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x56e5b56b, "snd_mixer_oss_ioctl_card" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xa3be0ddb, "_snd_pcm_hw_param_min" },
	{ 0x94f998f, "snd_pcm_lib_writev" },
	{ 0x2b8a9179, "snd_pcm_kernel_capture_ioctl" },
	{ 0xbb6ecb55, "snd_card_file_add" },
	{ 0x43ab6d9f, "_snd_pcm_hw_param_set" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc35c3f64, "_read_lock_irq" },
	{ 0xa93bc39a, "snd_pcm_lib_readv" },
	{ 0x26c8c0aa, "snd_register_oss_device" },
	{ 0xb9b18a5e, "snd_pcm_open_substream" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xda29bc77, "snd_pcm_format_silence_64" },
	{ 0xc5e7bd2e, "snd_pcm_hw_param_set" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x6d375137, "snd_pcm_hw_param_value_max" },
	{ 0xc97d2ec1, "snd_unregister_oss_device" },
	{ 0xa8edfa41, "snd_pcm_format_physical_width" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x6667da40, "_snd_pcm_hw_params_any" },
	{ 0x6067a146, "memcpy" },
	{ 0x95a60aa5, "snd_pcm_format_unsigned" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0xc88286a6, "snd_pcm_stop" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb9944ddc, "snd_pcm_kernel_ioctl" },
	{ 0x76564f78, "snd_pcm_hw_param_near" },
	{ 0xfe98f3f6, "_snd_pcm_hw_param_setinteger" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xa67892b9, "snd_pcm_hw_constraints_init" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0x3398c3c5, "snd_pcm_lib_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-mixer-oss";


MODULE_INFO(srcversion, "C764A705F7D4B566CBBAF37");
