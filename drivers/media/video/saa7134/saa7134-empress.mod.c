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
	{ 0xcf1251fe, "saa7134_ts_unregister" },
	{ 0x36db2893, "saa7134_ts_register" },
	{ 0x80569122, "video_unregister_device" },
	{ 0x2595473b, "videobuf_queue_init" },
	{ 0x12e2178d, "saa7134_ts_qops" },
	{ 0x306df07, "video_register_device" },
	{ 0xaf25400d, "snprintf" },
	{ 0xbe521a75, "video_device_release" },
	{ 0x65661721, "video_device_alloc" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x45b85be9, "video_usercopy" },
	{ 0xb7310fd8, "saa7134_common_ioctl" },
	{ 0xefc9308e, "videobuf_streamon" },
	{ 0x163a91f7, "videobuf_dqbuf" },
	{ 0xba391a22, "videobuf_qbuf" },
	{ 0x9c3029ec, "videobuf_querybuf" },
	{ 0xe6304a17, "videobuf_reqbufs" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x672144bd, "strlcpy" },
	{ 0x84437ca1, "saa7134_boards" },
	{ 0x3fa03a97, "memset" },
	{ 0x1fd65780, "saa7134_print_ioctl" },
	{ 0xcbdde77, "videobuf_mmap_mapper" },
	{ 0x152fcba9, "videobuf_poll_stream" },
	{ 0x509c4573, "videobuf_read_stream" },
	{ 0xd310ef3a, "videobuf_read_stop" },
	{ 0xabb517eb, "videobuf_streamoff" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x1211df5d, "saa7134_devlist" },
	{ 0xab26a9b7, "saa7134_i2c_call_clients" },
	{ 0xf9a482f9, "msleep" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=saa7134,videodev,video-buf";


MODULE_INFO(srcversion, "027CE4329C7A32F513A6AB9");
