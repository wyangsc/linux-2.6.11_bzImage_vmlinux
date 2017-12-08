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
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x98adfde2, "request_module" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "03FA8E63EFA3DFFFF6452A8");
