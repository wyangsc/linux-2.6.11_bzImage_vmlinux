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
	{ 0x7b36fb19, "unregister_binfmt" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0xd0d24387, "register_binfmt" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x9defeaca, "kill_litter_super" },
	{ 0xf3b0d552, "get_sb_single" },
	{ 0x8b92ead9, "simple_fill_super" },
	{ 0x7dfe4f9a, "simple_statfs" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0x86763418, "iput" },
	{ 0x4256d5b6, "simple_pin_fs" },
	{ 0x3755bef0, "lookup_one_len" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x101c2dbe, "simple_release_fs" },
	{ 0x827ad9ec, "dput" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x9a8e0124, "dcache_lock" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0x820a0d3a, "current_fs_time" },
	{ 0xf9e15fb, "new_inode" },
	{ 0x25ec1b28, "strlen" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x349cba85, "strchr" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xdcb0349b, "sys_close" },
	{ 0x761614dd, "steal_locks" },
	{ 0xada53fe4, "search_binary_handler" },
	{ 0x751903f0, "prepare_binprm" },
	{ 0x2933282a, "kernel_read" },
	{ 0x966f80e8, "open_exec" },
	{ 0xc9e65daf, "copy_strings_kernel" },
	{ 0xe27eee88, "fput" },
	{ 0x76537939, "permission" },
	{ 0x2641a1ef, "fd_install" },
	{ 0x99bfbe39, "get_unused_fd" },
	{ 0xc92776c7, "put_files_struct" },
	{ 0x4a20170, "unshare_files" },
	{ 0x190150f, "remove_arg_zero" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x672144bd, "strlcpy" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "27CFC389352DE49DABA78E0");
