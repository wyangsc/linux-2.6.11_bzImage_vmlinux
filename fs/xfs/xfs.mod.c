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
	{ 0x99b31a1b, "proc_dointvec_minmax" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0xd73b81c0, "test_clear_page_dirty" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd47af918, "sb_min_blocksize" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0xebe2197b, "bio_alloc" },
	{ 0x86e670a4, "generic_write_checks" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xe8fd2649, "filemap_fdatawait" },
	{ 0x9c6a6c4f, "bdev_read_only" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xd9e7830d, "block_invalidatepage" },
	{ 0x7119d9c9, "__down_read_trylock" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0xd503383a, "node_data" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0x77b0ebde, "test_set_page_writeback" },
	{ 0xaaf64f57, "__lock_page" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x215073d1, "cpu_callout_map" },
	{ 0xf988399d, "__lock_buffer" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x827ad9ec, "dput" },
	{ 0x604cf294, "seq_printf" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x4e6c9acd, "queue_work" },
	{ 0xb26146e5, "dentry_open" },
	{ 0x85df9b6c, "strsep" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x4cfd8d0d, "igrab" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xc288edae, "unlock_buffer" },
	{ 0xabfa232d, "redirty_page_for_writepage" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xa90cfb42, "cpu_pda" },
	{ 0xd54e8c49, "blk_get_backing_dev_info" },
	{ 0xa14f6e44, "remove_suid" },
	{ 0x7bc6ac2c, "end_page_writeback" },
	{ 0xcbab6423, "block_prepare_write" },
	{ 0x16cd6910, "invalidate_bdev" },
	{ 0x857bf0a1, "__downgrade_write" },
	{ 0x1fc5daf3, "__create_workqueue" },
	{ 0x6705563c, "_atomic_dec_and_lock" },
	{ 0x926d701, "default_wake_function" },
	{ 0xed79db91, "inode_update_time" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x8c3376cf, "mpage_readpages" },
	{ 0x759cc431, "set_shrinker" },
	{ 0x3fa03a97, "memset" },
	{ 0x318d1f27, "filemap_nopage" },
	{ 0xb56717cf, "xtime" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0x9e4e0212, "mpage_readpage" },
	{ 0x99bfbe39, "get_unused_fd" },
	{ 0x3cada27, "files_stat" },
	{ 0x498dc803, "init_rwsem" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0xcb40bac0, "bio_add_page" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0xef84b357, "vmap" },
	{ 0x1075bf0, "panic" },
	{ 0xf255d872, "end_buffer_async_write" },
	{ 0x76d3cd60, "laptop_mode" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xe61756e2, "open_bdev_excl" },
	{ 0x85abc85f, "strncmp" },
	{ 0x90cb0ad, "sysctl_intvec" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0xf1c9363f, "wait_on_sync_kiocb" },
	{ 0xf3eca202, "remove_shrinker" },
	{ 0x60a5cd2d, "destroy_workqueue" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x97ef380c, "thaw_bdev" },
	{ 0x1d17e4bd, "blk_congestion_wait" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0x3d130f90, "__up_write" },
	{ 0x6da0cf9e, "path_release" },
	{ 0xad8429e9, "__user_walk" },
	{ 0xe27eee88, "fput" },
	{ 0xbb97c738, "generic_file_direct_write" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x864f6cdb, "flush_workqueue" },
	{ 0x4145a9cb, "bio_put" },
	{ 0xb252588d, "find_trylock_page" },
	{ 0xe3c2ccf6, "mark_page_accessed" },
	{ 0x61651be, "strcat" },
	{ 0xd3383cf6, "kmem_cache_size" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xf246f661, "mark_buffer_async_write" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0x918b752a, "submit_bio" },
	{ 0x7dceceac, "capable" },
	{ 0x4b59f12b, "init_task" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x76780904, "ilookup" },
	{ 0xc4a59166, "generic_file_sendfile" },
	{ 0xfbcdf82a, "kmem_cache_shrink" },
	{ 0x612a103a, "bdevname" },
	{ 0xcefec9c9, "sync_blockdev" },
	{ 0xcb510e2, "create_empty_buffers" },
	{ 0x5c4768ce, "try_to_free_buffers" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0xc83d6754, "filemap_populate" },
	{ 0x2264b3af, "generic_commit_write" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8607fe00, "refrigerator" },
	{ 0xbacd519e, "do_sync_read" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x31ebadcd, "in_group_p" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x453187cf, "generic_file_buffered_write" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xf910d88d, "submit_bh" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xb2f96253, "__generic_file_aio_read" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0xcaebc495, "freeze_bdev" },
	{ 0xc3ff6c3c, "default_backing_dev_info" },
	{ 0x86763418, "iput" },
	{ 0x79995c5b, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0xcb7ca10f, "do_sync_write" },
	{ 0x6067a146, "memcpy" },
	{ 0x2641a1ef, "fd_install" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xd57ba29d, "d_splice_alias" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x80611056, "vmtruncate" },
	{ 0x26c5f6ce, "add_wait_queue_exclusive" },
	{ 0x83067c36, "fget" },
	{ 0xe2fa961d, "block_truncate_page" },
	{ 0xcd9c35cb, "generic_readlink" },
	{ 0x5344b0b0, "put_page" },
	{ 0xce4b8574, "__blockdev_direct_IO" },
	{ 0xc3346daf, "block_sync_page" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x3d327acd, "mark_buffer_dirty" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7c24bcf0, "mapping_tagged" },
	{ 0x4d6d4af3, "sync_page_range" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xb4a87549, "__down_write_trylock" },
	{ 0xf9e15fb, "new_inode" },
	{ 0xa3a5be95, "memmove" },
	{ 0xec5b8587, "vmalloc_to_page" },
	{ 0x2d0ea5b9, "set_blocksize" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x40c8a7ff, "d_alloc_anon" },
	{ 0x525496ee, "close_bdev_excl" },
	{ 0xb203e760, "__down_read" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0xdbe01365, "filemap_flush" },
	{ 0xe3bf423c, "generic_block_bmap" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x1984a870, "find_exported_dentry" },
	{ 0xd1dcf01, "iget_locked" },
	{ 0x51d8640b, "generic_fillattr" },
	{ 0x25b33815, "filemap_fdatawrite" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe3535ebc, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=exportfs";


MODULE_INFO(srcversion, "9074EF4212D0DA421DF7CA9");
