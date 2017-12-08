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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x900b315c, "get_zeroed_page" },
	{ 0x8f9567d4, "videocodec_attach" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbcc2974f, "single_open" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x45b85be9, "video_usercopy" },
	{ 0xeafa8c92, "single_release" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x66eaa8a9, "param_set_ulong" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x806d5133, "param_array_get" },
	{ 0x604cf294, "seq_printf" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x996d9199, "seq_read" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x306df07, "video_register_device" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x3fa03a97, "memset" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x80569122, "video_unregister_device" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0x85abc85f, "strncmp" },
	{ 0x905ff570, "i2c_bit_del_bus" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xdc14eda7, "pci_pci_problems" },
	{ 0x9b4bbef3, "videocodec_detach" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xffa8e969, "remap_pfn_range" },
	{ 0x6067a146, "memcpy" },
	{ 0x98adfde2, "request_module" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0xedc03953, "iounmap" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x4a285f2b, "i2c_bit_add_bus" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=videocodec,videodev,i2c-algo-bit";

MODULE_ALIAS("pci:v000011DEd00006057sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "19CE9542A8912FB08169613");
