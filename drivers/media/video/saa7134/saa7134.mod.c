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
	{ 0xdf3b9f70, "i2c_master_send" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0x59d696b6, "register_module_notifier" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x10c4d69d, "ir_input_keydown" },
	{ 0x4af9e110, "del_timer" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0xcbdde77, "videobuf_mmap_mapper" },
	{ 0xbe521a75, "video_device_release" },
	{ 0x45b85be9, "video_usercopy" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x76ba9a9a, "v4l2_prio_open" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xefc9308e, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe4f32143, "videobuf_iolock" },
	{ 0x3faeb143, "videobuf_dma_init_kernel" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf7cb40e2, "register_sound_mixer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xac937ff8, "i2c_add_adapter" },
	{ 0x30e0aa15, "ir_input_nokey" },
	{ 0x71363cd1, "i2c_clients_command" },
	{ 0xcd083b10, "unregister_sound_dsp" },
	{ 0x926d701, "default_wake_function" },
	{ 0x306df07, "video_register_device" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0x89c6cea2, "videobuf_dma_init" },
	{ 0xc223286a, "videobuf_read_one" },
	{ 0x65661721, "video_device_alloc" },
	{ 0xdd132261, "printk" },
	{ 0xbecd2858, "v4l2_prio_init" },
	{ 0xba391a22, "videobuf_qbuf" },
	{ 0x80569122, "video_unregister_device" },
	{ 0x95284709, "v4l2_prio_close" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x2da149f7, "ir_input_init" },
	{ 0x9c3029ec, "videobuf_querybuf" },
	{ 0x672144bd, "strlcpy" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x509c4573, "videobuf_read_stream" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x1cb148f5, "ir_extract_bits" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x2f639468, "v4l2_prio_check" },
	{ 0xa021ef50, "v4l2_field_names" },
	{ 0x57b02a20, "v4l2_type_names" },
	{ 0x7dceceac, "capable" },
	{ 0x25b5d1a9, "i2c_del_adapter" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x968ec5ad, "register_sound_dsp" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x2595473b, "videobuf_queue_init" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x33b3b664, "v4l2_video_std_construct" },
	{ 0xd49501d4, "__release_region" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x9fb98c7d, "i2c_master_recv" },
	{ 0x163a91f7, "videobuf_dqbuf" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xdc14eda7, "pci_pci_problems" },
	{ 0x7afc9d8a, "unregister_sound_mixer" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x43369224, "videobuf_waiton" },
	{ 0x953b423d, "videobuf_dma_pci_map" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8678c7e, "v4l_compat_translate_ioctl" },
	{ 0xaf150130, "input_unregister_device" },
	{ 0x98adfde2, "request_module" },
	{ 0x40f77e22, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0xe6304a17, "videobuf_reqbufs" },
	{ 0x9c7de443, "v4l2_prio_change" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x5485e615, "videobuf_dma_free" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xeaa8e7, "videobuf_dma_pci_unmap" },
	{ 0x1dcaa0c8, "v4l2_prio_max" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xd310ef3a, "videobuf_read_stop" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x152fcba9, "videobuf_poll_stream" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
	{ 0xabb517eb, "videobuf_streamoff" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ir-common,video-buf,videodev,v4l2-common,soundcore,v4l1-compat";

MODULE_ALIAS("pci:v00001131d00007134sv00001131sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv00001131sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001131sd00006752bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001131sd00004E85bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv0000153Bsd00001142bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv0000153Bsd00001143bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv0000153Bsd00001162bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00005168sd00000138bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00004E42sd00000138bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00005168sd00000138bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007135sv00005168sd00000212bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv000016BEsd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001048sd0000226Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001048sd0000226Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001043sd00004842bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001043sd00004830bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv00001043sd00004843bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001043sd00004840bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001131sd0000FE01bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001894sd0000FE01bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001894sd0000A006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001131sd00007133bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001131sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv0000185Bsd0000C100bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv0000185Bsd0000C100bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv0000102Bsd000048D0bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001461sd0000A70Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001461sd00002115bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001461sd000010FFbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001461sd0000D6EEbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001461sd0000050Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv000011BDsd0000002Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv000011BDsd0000002Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001019sd00004CB4bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv00001019sd00004CB5bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv000012ABsd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv0000153Bsd00001152bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv0000185Bsd0000C100bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001461sd00009715bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv00001131sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv00001131sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007133sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007134sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007135sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "20D1DAC70C7B30D8FC79683");
