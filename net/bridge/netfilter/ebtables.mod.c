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
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf471e393, "nf_unregister_sockopt" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5de78d62, "nf_register_sockopt" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BB368455FEE17C81D907789");
