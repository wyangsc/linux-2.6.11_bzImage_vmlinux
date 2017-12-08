#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x267fc65b, "__tasklet_hi_schedule" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0xdd132261, "printk" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0xeba0214c, "snd_rawmidi_transmit_peek" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x735255fe, "snd_rawmidi_transmit_ack" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xaf25400d, "snprintf" },
	{ 0xbbea2ad8, "snd_rawmidi_transmit_empty" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";


MODULE_INFO(srcversion, "3D67E3FE2AB454FEBA63D90");
