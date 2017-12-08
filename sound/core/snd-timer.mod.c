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
	{ 0x408d4f3, "__mod_timer" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xea51db76, "snd_register_device" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x267fc65b, "__tasklet_hi_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x5dd3bf69, "snd_kmalloc_strdup" },
	{ 0x926d701, "default_wake_function" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xa811205, "snd_unregister_device" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x82328328, "kill_fasync" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e25e7ec, "snd_info_create_module_entry" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "190420149D483B48D372E09");
