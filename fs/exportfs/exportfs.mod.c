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
	{ 0x896e98ad, "vfs_readdir" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x827ad9ec, "dput" },
	{ 0x46bafd1b, "dget_locked" },
	{ 0xb26146e5, "dentry_open" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x9a8e0124, "dcache_lock" },
	{ 0xe27eee88, "fput" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x86763418, "iput" },
	{ 0x6067a146, "memcpy" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x3755bef0, "lookup_one_len" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x40c8a7ff, "d_alloc_anon" },
	{ 0xd1dcf01, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "55F020593E47969760466BC");
