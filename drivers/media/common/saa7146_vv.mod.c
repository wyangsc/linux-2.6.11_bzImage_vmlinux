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
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0xcbdde77, "videobuf_mmap_mapper" },
	{ 0xbe521a75, "video_device_release" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x45b85be9, "video_usercopy" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x37912898, "videobuf_mmap_setup" },
	{ 0x32f1b673, "videobuf_queue_cancel" },
	{ 0xefc9308e, "videobuf_streamon" },
	{ 0xe4f32143, "videobuf_iolock" },
	{ 0x439e3502, "saa7146_pgtable_free" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0x306df07, "video_register_device" },
	{ 0x3fa03a97, "memset" },
	{ 0x25d9939d, "saa7146_pgtable_alloc" },
	{ 0xc223286a, "videobuf_read_one" },
	{ 0x65661721, "video_device_alloc" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xba391a22, "videobuf_qbuf" },
	{ 0x80569122, "video_unregister_device" },
	{ 0x6e455bf4, "saa7146_pgtable_build_single" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x9c3029ec, "videobuf_querybuf" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x509c4573, "videobuf_read_stream" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xa021ef50, "v4l2_field_names" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x2595473b, "videobuf_queue_init" },
	{ 0x1000e51, "schedule" },
	{ 0x33b3b664, "v4l2_video_std_construct" },
	{ 0xcf683cf2, "saa7146_devices" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xe3cd9b5c, "saa7146_debug" },
	{ 0x163a91f7, "videobuf_dqbuf" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x43369224, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8678c7e, "v4l_compat_translate_ioctl" },
	{ 0xe6304a17, "videobuf_reqbufs" },
	{ 0x5485e615, "videobuf_dma_free" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xeaa8e7, "videobuf_dma_pci_unmap" },
	{ 0x3ca51d59, "saa7146_devices_lock" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x152fcba9, "videobuf_poll_stream" },
	{ 0xabb517eb, "videobuf_streamoff" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=video-buf,videodev,saa7146,v4l2-common,v4l1-compat";


MODULE_INFO(srcversion, "89C4A001EAB9FDF21649DEB");
