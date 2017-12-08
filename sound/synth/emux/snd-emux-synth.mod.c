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
	{ 0xa1a118c4, "snd_util_mem_avail" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x672d68ac, "snd_device_register" },
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x4af9e110, "del_timer" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x5dd3bf69, "snd_kmalloc_strdup" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x789db613, "snd_midi_process_event" },
	{ 0x47b31274, "snd_hwdep_new" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x10121a16, "snd_midi_channel_set_clear" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0xaafc738a, "snd_virmidi_new" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x204ddab6, "snd_seq_event_port_attach" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi";


MODULE_INFO(srcversion, "453A0E6427481CC84D4FD19");
