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
	{ 0x32183bad, "snd_emux_new" },
	{ 0xca0208b1, "snd_emu10k1_synth_alloc" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf915bd82, "snd_emux_register" },
	{ 0x5223597c, "snd_emu10k1_memblk_map" },
	{ 0xff7bb32f, "snd_emu10k1_voice_alloc" },
	{ 0x194383db, "snd_emu10k1_synth_bzero" },
	{ 0xc622fb29, "snd_seq_device_unregister_driver" },
	{ 0x8bf91be, "snd_emux_free" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xebc5949c, "snd_emu10k1_ptr_write" },
	{ 0x860118cf, "snd_emu10k1_synth_free" },
	{ 0x2f0e66f9, "snd_seq_device_register_driver" },
	{ 0x7a36aaba, "snd_emu10k1_voice_free" },
	{ 0x22f0e31a, "snd_emu10k1_synth_copy_from_user" },
	{ 0x889af29d, "snd_emu10k1_ptr_read" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";


MODULE_INFO(srcversion, "D48F70AAC836C49F6D257AF");
