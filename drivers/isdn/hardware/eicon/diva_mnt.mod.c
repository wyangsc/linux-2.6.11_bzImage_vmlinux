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
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x25ec1b28, "strlen" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x85abc85f, "strncmp" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x954cbb26, "vsprintf" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=divadidd";


MODULE_INFO(srcversion, "D0C007D6F3A91B840374AEC");
