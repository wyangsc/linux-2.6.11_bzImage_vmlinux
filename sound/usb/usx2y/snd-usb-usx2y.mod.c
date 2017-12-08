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
	{ 0x89b301d4, "param_get_int" },
	{ 0x19cc2ce3, "snd_free_pages" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x9a402abd, "snd_card_free_in_thread" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x806d5133, "param_array_get" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x7d401409, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf116e020, "snd_card_disconnect" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x3fa03a97, "memset" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xdd132261, "printk" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xb9f9c4e2, "usb_set_interface" },
	{ 0x3a2e7fa8, "snd_malloc_pages" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x47b31274, "snd_hwdep_new" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x8ad422b5, "usb_bulk_msg" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x65e34900, "snd_pcm_hw_constraint_minmax" },
	{ 0xc88286a6, "snd_pcm_stop" },
	{ 0x5fc01f29, "snd_usb_create_midi_interface" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x4c81edd2, "usb_ifnum_to_if" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xd42721a6, "usb_get_current_frame_number" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-usb-lib,snd-page-alloc,snd-pcm,snd,snd-hwdep";

MODULE_ALIAS("usb:v1604p8001dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1604p8007dl*dh*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1604p8005dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "B8AAF5F70BCB51EF14D4E6A");
