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
	{ 0x89b301d4, "param_get_int" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x814e8407, "release_resource" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x77cf8b63, "pci_bus_alloc_resource" },
	{ 0xb859c3d0, "allocate_resource" },
	{ 0xfd05bd8a, "adjust_resource" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x32adc185, "pcmcia_socket_list_rwsem" },
	{ 0xdd132261, "printk" },
	{ 0xde7d2481, "destroy_cis_cache" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xdda64b56, "pccard_validate_cis" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x212db8d2, "pcmcia_socket_list" },
	{ 0xeba8f054, "release_cis_mem" },
	{ 0x7411acf5, "pci_find_parent_resource" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xb203e760, "__down_read" },
	{ 0x41685cfb, "request_resource" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "42E1CB26CE241D62F675BD8");
