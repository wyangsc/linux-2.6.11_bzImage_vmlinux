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
	{ 0x1a1a4f09, "__request_region" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0x814e8407, "release_resource" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xeba0214c, "snd_rawmidi_transmit_peek" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x735255fe, "snd_rawmidi_transmit_ack" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x5271af5d, "request_irq" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x5d89bbb7, "snd_rawmidi_transmit" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd";


MODULE_INFO(srcversion, "BD1A1DF3E1CD71520620B42");
