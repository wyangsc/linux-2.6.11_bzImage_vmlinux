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
	{ 0xe65baace, "snd_midi_event_reset_decode" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x1e46fc9a, "snd_midi_event_reset_encode" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x437b0211, "snd_rawmidi_kernel_release" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0xd8caaa98, "snd_rawmidi_kernel_open" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x553adaaf, "snd_midi_event_decode" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x179c06ed, "snd_rawmidi_input_params" },
	{ 0x362247ca, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x14e8a6ad, "snd_rawmidi_drain_output" },
	{ 0x672144bd, "strlcpy" },
	{ 0x677de447, "snd_midi_event_free" },
	{ 0x8f81cec7, "snd_rawmidi_kernel_write" },
	{ 0x2f0e66f9, "snd_seq_device_register_driver" },
	{ 0x8d320cdb, "snd_rawmidi_kernel_read" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0xc2d760c8, "snd_seq_dump_var_event" },
	{ 0xa84daa51, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x6df4f1dd, "snd_midi_event_encode" },
	{ 0x2f65ee4, "snd_seq_kernel_client_dispatch" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x1ae25b0, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";


MODULE_INFO(srcversion, "12B424B9446A7D5F3EEAF9F");
