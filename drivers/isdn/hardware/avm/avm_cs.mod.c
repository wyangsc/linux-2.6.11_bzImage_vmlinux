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
	{ 0xb22885c6, "pcmcia_release_configuration" },
	{ 0x29562993, "b1pcmcia_delcard" },
	{ 0xf14bf8b1, "b1pcmcia_addcard_b1" },
	{ 0xea620116, "b1pcmcia_addcard_m2" },
	{ 0xaec3240e, "b1pcmcia_addcard_m1" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9f984513, "strrchr" },
	{ 0x3c59abff, "pcmcia_release_irq" },
	{ 0xbe59d13a, "pcmcia_request_configuration" },
	{ 0xe0b01898, "pcmcia_release_io" },
	{ 0x18d2d83d, "pcmcia_request_irq" },
	{ 0xbe4b7c7c, "pcmcia_request_io" },
	{ 0xdd132261, "printk" },
	{ 0x672144bd, "strlcpy" },
	{ 0x49752b7f, "pcmcia_get_next_tuple" },
	{ 0xcae989e0, "pcmcia_get_first_tuple" },
	{ 0x5adcd17f, "pcmcia_parse_tuple" },
	{ 0x93ca42f2, "pcmcia_get_tuple_data" },
	{ 0x6ffce613, "pcmcia_deregister_client" },
	{ 0x37a0cba, "kfree" },
	{ 0x1cf5e143, "cs_error" },
	{ 0x2aa078d4, "pcmcia_register_client" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=b1pcmcia";


MODULE_INFO(srcversion, "9FB5FFCD53F5FEC5DA8416A");
