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
	{ 0x1ba45dcb, "snd_usbmidi_disconnect" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xedd5b5bd, "snd_pcm_format_name" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0x9a402abd, "snd_card_free_in_thread" },
	{ 0x806d5133, "param_array_get" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x77217db1, "usb_reset_configuration" },
	{ 0x7d401409, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0xf116e020, "snd_card_disconnect" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x1f53ffb2, "usb_get_descriptor" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xb11fa1ce, "strlcat" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x73dd4bd9, "usb_string" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x672144bd, "strlcpy" },
	{ 0xe0c0c61b, "usb_driver_claim_interface" },
	{ 0x29e772a7, "snd_pcm_new_stream" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x89e1d460, "snd_pcm_hw_rule_add" },
	{ 0x9d27756, "snd_component_add" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x9da34ad5, "snd_ctl_find_id" },
	{ 0xb21d0eb2, "snd_ctl_free_one" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xa8edfa41, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x65e34900, "snd_pcm_hw_constraint_minmax" },
	{ 0xc88286a6, "snd_pcm_stop" },
	{ 0x5fc01f29, "snd_usb_create_midi_interface" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x4c81edd2, "usb_ifnum_to_if" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-usb-lib,snd-pcm,snd";

MODULE_ALIAS("usb:v0499p1000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1004dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0499p1005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1006dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Adl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0499p100Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p100Fdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1010dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1011dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1012dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1013dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1014dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1015dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1017dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1018dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1019dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p101Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1020dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1021dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1022dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1023dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1024dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1025dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1026dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1027dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1028dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1029dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p102Edl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1030dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1031dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1032dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1033dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1034dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1035dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1036dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1037dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1038dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p1039dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p103Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p2002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5006dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p5008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Adl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p500Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p7000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0499p7010dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0000dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0002dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0003dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0004dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0005dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0008dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0009dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p000Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p000Cdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0010dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0012dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0014dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0016dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p001Bdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p001Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0023dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0025dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0027dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0029dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p002Bdl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p002Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p002Fdl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0033dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0037dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p003Bdl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0582p0040dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0044dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0048dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p004Ddl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0065dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0050dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0052dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0582p0074dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1002dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1011dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1015dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1021dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1031dl0100dh0109dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0763p1033dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p1041dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2001dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2003dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p2008dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v0763p200Ddl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v07FDp0001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v041Ep3010dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CCDp0013dl*dh*dc*dsc*dp*icFFisc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic01isc03ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic01isc01ip*");

MODULE_INFO(srcversion, "40D0F541BF72E9247594904");
