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
	{ 0x8bdee2d0, "drm_release" },
	{ 0x7f7bbd82, "drm_core_reclaim_buffers" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x95e0a76b, "init_level4_pgt" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x9eb5be48, "drm_ati_pcigart_cleanup" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x3074f033, "drm_order" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x5e798b2, "drm_mmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xf89f130f, "drm_ati_pcigart_init" },
	{ 0x7d11c268, "jiffies" },
	{ 0x926d701, "default_wake_function" },
	{ 0xea5e65c6, "drm_vbl_send_signals" },
	{ 0xdd132261, "printk" },
	{ 0xef84b357, "vmap" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x2d94fd0c, "drm_init" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xf39c3bb7, "drm_core_get_map_ofs" },
	{ 0x20645642, "drm_debug" },
	{ 0xa849474b, "drm_exit" },
	{ 0x1dfe1a78, "drm_ioctl" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc46881a9, "drm_irq_uninstall" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xc3143cd8, "drm_core_get_reg_ofs" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x11133687, "drm_poll" },
	{ 0xa5d9827f, "drm_fasync" },
	{ 0x6ac38763, "drm_open" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "5B785CFCD7E3E08FA857180");
