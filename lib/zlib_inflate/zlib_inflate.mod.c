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
	{ 0x6067a146, "memcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ED29BFFB663F65F8CDD8A81");