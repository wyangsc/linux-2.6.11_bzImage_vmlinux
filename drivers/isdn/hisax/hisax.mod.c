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
	{ 0xdd977210, "register_isdn" },
	{ 0x5facaf26, "skb_queue_head" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x349cba85, "strchr" },
	{ 0xca09a9af, "per_cpu__kstat" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x215073d1, "cpu_callout_map" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x806d5133, "param_array_get" },
	{ 0x75811312, "crc_ccitt_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa90cfb42, "cpu_pda" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fa03a97, "memset" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x61651be, "strcat" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x5271af5d, "request_irq" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xd49501d4, "__release_region" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=isdn";

MODULE_ALIAS("pci:v00001244d00000A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001267d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000675d00001702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74B32D6EFF37A5A7C5C01BB");
