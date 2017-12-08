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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xb887523b, "kref_put" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7dcae935, "ib_register_mad_agent" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xa0b2e926, "ib_free_recv_mad" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x6830b9a, "ib_pack" },
	{ 0x59a2ac08, "ib_destroy_ah" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x3fa03a97, "memset" },
	{ 0x8c7a3e90, "ib_get_dma_mr" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x339f0d7f, "ib_get_client_data" },
	{ 0x107206e8, "ib_query_port" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x692871a6, "ib_set_client_data" },
	{ 0xcc7ef4e5, "ib_post_send_mad" },
	{ 0x640e124e, "idr_remove" },
	{ 0xdb127f7b, "ib_unregister_mad_agent" },
	{ 0x18e2fd83, "idr_pre_get" },
	{ 0x3519f459, "ib_register_client" },
	{ 0xe3fd10ea, "ib_create_ah" },
	{ 0xd42753c2, "ib_unregister_event_handler" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xc5144b2f, "ib_register_event_handler" },
	{ 0x1fdda1fd, "ib_cancel_mad" },
	{ 0x21f5223f, "ib_dereg_mr" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xf96fc9de, "ib_unpack" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xfa9e797c, "idr_find" },
	{ 0xf00ab5e7, "idr_get_new" },
	{ 0x9104fe6e, "ib_unregister_client" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";


MODULE_INFO(srcversion, "84A15401BECDC67FEB692FE");
