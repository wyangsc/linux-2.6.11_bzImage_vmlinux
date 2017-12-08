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
	{ 0x1e46fc9a, "snd_midi_event_reset_encode" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x553adaaf, "snd_midi_event_decode" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0x362247ca, "snd_midi_event_new" },
	{ 0xdd132261, "printk" },
	{ 0xeba0214c, "snd_rawmidi_transmit_peek" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x677de447, "snd_midi_event_free" },
	{ 0x735255fe, "snd_rawmidi_transmit_ack" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xec034e5, "_read_unlock" },
	{ 0xc2d760c8, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6df4f1dd, "snd_midi_event_encode" },
	{ 0x2f65ee4, "snd_seq_kernel_client_dispatch" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "438CA1720C1A9D089385392");
