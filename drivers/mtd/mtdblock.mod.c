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
	{ 0x3b1da778, "deregister_mtd_blktrans" },
	{ 0xb096b29f, "register_mtd_blktrans" },
	{ 0x42953c8c, "del_mtd_blktrans_dev" },
	{ 0xb46feed0, "add_mtd_blktrans_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6067a146, "memcpy" },
	{ 0x1000e51, "schedule" },
	{ 0xdd132261, "printk" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0x46bdd8d1, "__wake_up" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs";


MODULE_INFO(srcversion, "FFD0B5DF4FCB286500ABA8E");
