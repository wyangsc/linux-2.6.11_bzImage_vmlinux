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
	{ 0x6a7d43ca, "unregister_qdisc" },
	{ 0x17f63147, "register_qdisc" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xd6caef04, "__rta_fill" },
	{ 0x15dc4bdb, "qdisc_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xcd227ef, "qdisc_create_dflt" },
	{ 0x30f6395d, "pfifo_qdisc_ops" },
	{ 0x3fa03a97, "memset" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x312d383a, "tc_classify" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0xcfc6d5f, "qdisc_unlock_tree" },
	{ 0x2bfc003b, "qdisc_reset" },
	{ 0xff102880, "qdisc_lock_tree" },
	{ 0xe1a9b863, "noop_qdisc" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F68F246680DA46B8990C8CF");
