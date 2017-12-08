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
	{ 0x3c6218fe, "_spin_trylock" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x4af9e110, "del_timer" },
	{ 0x814e8407, "release_resource" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0xeba0214c, "snd_rawmidi_transmit_peek" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x735255fe, "snd_rawmidi_transmit_ack" },
	{ 0x5271af5d, "request_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf25400d, "snprintf" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-rawmidi";


MODULE_INFO(srcversion, "D43EBC12C353E9B84DC3CA6");
