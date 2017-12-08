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
	{ 0x2a62ab56, "snd_trident_free_voice" },
	{ 0x7b6f0fa7, "snd_midi_channel_alloc_set" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xebbd4a0d, "snd_dma_alloc_pages" },
	{ 0x52d09e43, "snd_seq_instr_list_new" },
	{ 0x9596ac1c, "snd_seq_simple_init" },
	{ 0x545c87fa, "snd_trident_synth_copy_from_user" },
	{ 0xaf0b15de, "snd_seq_instr_list_free_cond" },
	{ 0xcfb054f4, "snd_midi_channel_free_set" },
	{ 0xe724b900, "snd_trident_stop_voice" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x4436a2d2, "snd_seq_instr_find" },
	{ 0x6d409c67, "snd_seq_instr_list_free" },
	{ 0x75019fd8, "snd_trident_synth_alloc" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xc008b379, "snd_trident_write_voice_regs" },
	{ 0xd1e09b72, "snd_seq_instr_free_use" },
	{ 0x2f0e66f9, "snd_seq_device_register_driver" },
	{ 0xd01c9506, "snd_dma_free_pages" },
	{ 0x3510af7b, "snd_seq_instr_event" },
	{ 0x73b2cc74, "snd_trident_start_voice" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x204ddab6, "snd_seq_event_port_attach" },
	{ 0x5c7b976d, "snd_trident_synth_free" },
	{ 0x700f6dc9, "snd_trident_alloc_voice" },
	{ 0x945bc6a7, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-trident,snd-seq-midi-emul,snd-seq,snd-page-alloc,snd-seq-instr,snd-ainstr-simple,snd-seq-device";


MODULE_INFO(srcversion, "C4A96B4868F01F9745FA50C");
