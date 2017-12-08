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
	{ 0xf310118b, "pcmcia_unregister_driver" },
	{ 0xf2e87eeb, "pcmcia_register_driver" },
	{ 0x3c59abff, "pcmcia_release_irq" },
	{ 0xe0b01898, "pcmcia_release_io" },
	{ 0xb22885c6, "pcmcia_release_configuration" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbe59d13a, "pcmcia_request_configuration" },
	{ 0x18d2d83d, "pcmcia_request_irq" },
	{ 0xbe4b7c7c, "pcmcia_request_io" },
	{ 0x6f0f72c7, "pcmcia_get_configuration_info" },
	{ 0x49752b7f, "pcmcia_get_next_tuple" },
	{ 0xcae989e0, "pcmcia_get_first_tuple" },
	{ 0x5adcd17f, "pcmcia_parse_tuple" },
	{ 0x93ca42f2, "pcmcia_get_tuple_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ffce613, "pcmcia_deregister_client" },
	{ 0x1cf5e143, "cs_error" },
	{ 0x2aa078d4, "pcmcia_register_client" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x797976f6, "hci_unregister_dev" },
	{ 0xfbcbe92, "hci_free_dev" },
	{ 0x20fd144, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x29468c7, "hci_alloc_dev" },
	{ 0x6067a146, "memcpy" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x5facaf26, "skb_queue_head" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "269CDE469A53FC3C2A8D706");
