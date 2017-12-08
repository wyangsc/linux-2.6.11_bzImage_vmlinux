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
	{ 0x3c6218fe, "_spin_trylock" },
	{ 0xa6fd27b, "snd_info_get_line" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xea51db76, "snd_register_device" },
	{ 0x672d68ac, "snd_device_register" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x19cc2ce3, "snd_free_pages" },
	{ 0x4af9e110, "del_timer" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x24d11b39, "snd_card_file_remove" },
	{ 0xebbd4a0d, "snd_dma_alloc_pages" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x8ced8d79, "snd_power_wait" },
	{ 0x76f826aa, "_write_unlock_irq" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf0474c54, "_read_unlock_irq" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb6e38969, "snd_ctl_unregister_ioctl" },
	{ 0x926d701, "default_wake_function" },
	{ 0xd1986f0d, "snd_dma_get_reserved_buf" },
	{ 0x3fa03a97, "memset" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x4bc3ca36, "snd_timer_new" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xa811205, "snd_unregister_device" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x3a2e7fa8, "snd_malloc_pages" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x672144bd, "strlcpy" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0xcec83301, "_read_unlock_irqrestore" },
	{ 0x3d130f90, "__up_write" },
	{ 0xe27eee88, "fput" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc15cd12d, "_read_lock_irqsave" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xbb6ecb55, "snd_card_file_add" },
	{ 0x38f007e7, "snd_ctl_register_ioctl" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc35c3f64, "_read_lock_irq" },
	{ 0xaa27f890, "__get_user_8" },
	{ 0xd01c9506, "snd_dma_free_pages" },
	{ 0x7de30230, "_write_lock_irq" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x61e0549, "snd_dma_reserve_buf" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0xb213fe8b, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0xffa8e969, "remap_pfn_range" },
	{ 0x6067a146, "memcpy" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x85af2f64, "snd_timer_interrupt" },
	{ 0x83067c36, "fget" },
	{ 0x82328328, "kill_fasync" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x8563ec3c, "snd_timer_notify" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e25e7ec, "snd_info_create_module_entry" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0x4e193abf, "snd_info_register" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-page-alloc,snd-timer";


MODULE_INFO(srcversion, "063289F91C292F606B86676");
