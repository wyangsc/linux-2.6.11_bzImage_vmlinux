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
	{ 0x4250ce8f, "xdr_shift_buf" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xc1fb931, "rpc_create_client" },
	{ 0xb25d309a, "set_anon_super" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xd813646, "rpcauth_create" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0xf6ee619f, "__set_page_dirty_nobuffers" },
	{ 0x25ec1b28, "strlen" },
	{ 0xe8fd2649, "filemap_fdatawait" },
	{ 0x17a05dda, "iget5_locked" },
	{ 0x291b187d, "kill_anon_super" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x122ec523, "seq_escape" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0xb3930fb0, "put_rpccred" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x86ebf54b, "generic_file_aio_read" },
	{ 0x827ad9ec, "dput" },
	{ 0x604cf294, "seq_printf" },
	{ 0x84895b7b, "rpc_call_setup" },
	{ 0xe007de87, "mempool_destroy" },
	{ 0x41115d48, "xdr_inline_pages" },
	{ 0x43f1d62, "invalidate_inode_pages2" },
	{ 0xd2d41c1c, "rpc_restart_call" },
	{ 0x3018dd9e, "have_submounts" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x4cfd8d0d, "igrab" },
	{ 0xf2c42bb, "xprt_create_proto" },
	{ 0xabfa232d, "redirty_page_for_writepage" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x370c5340, "generic_file_aio_write" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x7d11c268, "jiffies" },
	{ 0x77c28b0c, "rpcauth_lookupcred" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x40dd050a, "rpc_clnt_sigunmask" },
	{ 0xd3f2eb5e, "xprt_destroy" },
	{ 0x375492a4, "rpciod_up" },
	{ 0x9365b8de, "rpc_killall_tasks" },
	{ 0x7bc6ac2c, "end_page_writeback" },
	{ 0xdbd4d387, "rpc_execute" },
	{ 0x52d94821, "d_delete" },
	{ 0x3ede031a, "__mod_page_state" },
	{ 0x25eb7cd5, "mempool_alloc_slab" },
	{ 0x3fa03a97, "memset" },
	{ 0x438e1d2f, "rpc_call_sync" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0xc9ed17b2, "sget" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x254e3e9, "mpage_writepages" },
	{ 0x5bd26000, "rpc_proc_unregister" },
	{ 0x41d2c3b4, "d_move" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x9a8e0124, "dcache_lock" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa881286d, "rpc_clone_client" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0x3d130f90, "__up_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x952bd755, "radix_tree_delete" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x9d25f700, "rpc_clnt_sigmask" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x5b663a29, "rpc_setbufsize" },
	{ 0x44573a8c, "posix_lock_file_wait" },
	{ 0x8bb38c24, "radix_tree_gang_lookup" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x8a2dd628, "mempool_alloc" },
	{ 0xe29b2b53, "xdr_encode_pages" },
	{ 0xc4a59166, "generic_file_sendfile" },
	{ 0x9680de2c, "generic_file_mmap" },
	{ 0xb96eb133, "d_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0x6056ebf3, "mempool_create" },
	{ 0xbacd519e, "do_sync_read" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0xaf74d51a, "deactivate_super" },
	{ 0xd7c31f1d, "rpc_init_task" },
	{ 0xdd96b47, "shrink_dcache_parent" },
	{ 0xc1ba657a, "rpc_sleep_on" },
	{ 0x5da3698a, "mempool_free" },
	{ 0x14f0bb0b, "read_cache_pages" },
	{ 0xe9e79d5, "xdr_encode_opaque" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x35513eea, "d_lookup" },
	{ 0x86763418, "iput" },
	{ 0x86440b02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c92ab3d, "d_instantiate_unique" },
	{ 0x8b669bf1, "generic_permission" },
	{ 0xcb7ca10f, "do_sync_write" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x80611056, "vmtruncate" },
	{ 0xdf86fde4, "invalidate_inode_pages" },
	{ 0xcd9c35cb, "generic_readlink" },
	{ 0xf6933c48, "lockd_up" },
	{ 0x5344b0b0, "put_page" },
	{ 0xa7b91a7b, "lockd_down" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x87e0ed19, "radix_tree_lookup" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xaf25400d, "snprintf" },
	{ 0x3755bef0, "lookup_one_len" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xb4b474e0, "rpc_shutdown_client" },
	{ 0x585a7f17, "rpc_wake_up_task" },
	{ 0x7f9ac77e, "rpc_proc_register" },
	{ 0x264ca98, "radix_tree_insert" },
	{ 0x8c4c9af7, "remote_llseek" },
	{ 0xa3c9670, "clear_inode" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0x760a0f4f, "yield" },
	{ 0x51d8640b, "generic_fillattr" },
	{ 0xeae699e1, "nlmclnt_proc" },
	{ 0x25b33815, "filemap_fdatawrite" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc3315cf8, "posix_test_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc,lockd";


MODULE_INFO(srcversion, "4E26CED7D09BB58F6BF43F7");
