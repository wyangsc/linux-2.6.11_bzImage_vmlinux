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
	{ 0x98bd6f46, "param_set_int" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2626ca37, "blk_queue_hardsect_size" },
	{ 0x1e59de66, "blk_queue_make_request" },
	{ 0xedc6d321, "blk_alloc_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xdd132261, "printk" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0xcc56a621, "blkdev_put" },
	{ 0x16cd6910, "invalidate_bdev" },
	{ 0x4cfd8d0d, "igrab" },
	{ 0xbb24b270, "default_unplug_io_fn" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe3535ebc, "truncate_inode_pages" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xac14755b, "bio_endio" },
	{ 0x5344b0b0, "put_page" },
	{ 0x6067a146, "memcpy" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0x9918ea6, "set_page_dirty" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x3fa03a97, "memset" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "326C537E56112EBD5AFE796");
