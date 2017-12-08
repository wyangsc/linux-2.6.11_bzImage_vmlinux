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
	{ 0xfdbcb144, "class_register" },
	{ 0xd43fde1, "agp_backend_release" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x95e0a76b, "init_level4_pgt" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x31a3c38a, "boot_cpu_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xcafd5d91, "agp_copy_info" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x35d54bc5, "pci_dev_get" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xa2487e0, "unblock_all_signals" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x926d701, "default_wake_function" },
	{ 0x3205dbc9, "agp_unbind_memory" },
	{ 0xad55144e, "agp_allocate_memory" },
	{ 0x3fa03a97, "memset" },
	{ 0x620a70c4, "pci_get_subsys" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdd132261, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xef84b357, "vmap" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x674c8362, "agp_free_memory" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x18819ea8, "class_create_file" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb3d2bf12, "find_first_zero_bit" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xb027d79c, "do_mmap_pgoff" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x4edd72f7, "block_all_signals" },
	{ 0xfda71904, "agp_backend_acquire" },
	{ 0x35b0650f, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0xffa8e969, "remap_pfn_range" },
	{ 0x6067a146, "memcpy" },
	{ 0x4581968d, "send_sig_info" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x50eb8453, "agp_enable" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xf1b44169, "pci_dev_put" },
	{ 0xaf25400d, "snprintf" },
	{ 0xec5b8587, "vmalloc_to_page" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xac444a5f, "agp_bind_memory" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2BAB2A81E962020AD015CDA");
