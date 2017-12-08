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
	{ 0x1a1a4f09, "__request_region" },
	{ 0x5ab182b8, "parport_ieee1284_ecp_write_data" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x1c99791b, "parport_ieee1284_ecp_write_addr" },
	{ 0x615093c7, "parport_register_port" },
	{ 0x87f34852, "parport_remove_port" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x72b243d4, "free_dma" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x814e8407, "release_resource" },
	{ 0x8a581cb0, "parport_ieee1284_epp_write_addr" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x65778afa, "parport_put_port" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x94f45aa3, "parport_ieee1284_interrupt" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x40536eab, "pnp_unregister_driver" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xcc70e713, "parport_ieee1284_epp_write_data" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0xfd27a696, "parport_ieee1284_write_compat" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xd1231b51, "parport_announce_port" },
	{ 0x85abc85f, "strncmp" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0x3ddca155, "pnp_register_driver" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xfa43534, "parport_ieee1284_epp_read_addr" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd49501d4, "__release_region" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f4dcfea, "pci_match_device" },
	{ 0x81e7558, "parport_ieee1284_read_byte" },
	{ 0xfb9188b4, "parport_ieee1284_read_nibble" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xaaaec2d, "parport_ieee1284_epp_read_data" },
	{ 0x2eeb30ae, "parport_ieee1284_ecp_read_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004078bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004085bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004088bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004089bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004095bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004096bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005078bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005085bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00006079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00007079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00008079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00009079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000A079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000B079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000C079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000D079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv00001000sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("pnp:dPNP0401*");

MODULE_INFO(srcversion, "A0EC1947CBA3DCE9A881A0A");
