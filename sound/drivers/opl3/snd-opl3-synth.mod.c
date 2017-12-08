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
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7b6f0fa7, "snd_midi_channel_alloc_set" },
	{ 0x6fc0b1b3, "snd_opl3_reset" },
	{ 0x4af9e110, "del_timer" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x52d09e43, "snd_seq_instr_list_new" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xcfb054f4, "snd_midi_channel_free_set" },
	{ 0xa759f38d, "snd_seq_fm_init" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x4436a2d2, "snd_seq_instr_find" },
	{ 0x6d409c67, "snd_seq_instr_list_free" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x789db613, "snd_midi_process_event" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xd1e09b72, "snd_seq_instr_free_use" },
	{ 0x2f0e66f9, "snd_seq_device_register_driver" },
	{ 0x3510af7b, "snd_seq_instr_event" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x204ddab6, "snd_seq_event_port_attach" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-emul,snd-opl3-lib,snd-seq,snd-seq-instr,snd-ainstr-fm,snd-seq-device";


MODULE_INFO(srcversion, "3F1B0871A64A7D0675C2F3F");
