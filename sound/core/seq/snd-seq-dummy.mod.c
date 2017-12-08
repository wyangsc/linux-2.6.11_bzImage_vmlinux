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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x2d257677, "snd_seq_create_kernel_client" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x3a57f235, "snd_seq_autoload_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f65ee4, "snd_seq_kernel_client_dispatch" },
	{ 0xb90668b2, "snd_seq_autoload_lock" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq,snd-seq-device";


MODULE_INFO(srcversion, "9FFC84BEC1EB3F98B90EB47");
