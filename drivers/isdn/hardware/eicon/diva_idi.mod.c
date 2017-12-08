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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x926d701, "default_wake_function" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x79312f78, "mod_timer" },
	{ 0x1000e51, "schedule" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x794186c, "proc_net_eicon" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=divadidd";


MODULE_INFO(srcversion, "62DABB4E75F84E8AF89A71E");
