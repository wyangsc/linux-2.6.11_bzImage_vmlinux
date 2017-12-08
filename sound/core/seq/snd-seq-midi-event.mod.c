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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x970a9fb0, "snd_seq_expand_var_event" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-seq";


MODULE_INFO(srcversion, "C96EEA8DCA8CA69728A416E");
