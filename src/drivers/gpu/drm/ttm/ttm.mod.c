#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ttm_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_fini, "", "");
KSYMTAB_FUNC(ttm_sg_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_restore, "", "");
KSYMTAB_FUNC(ttm_kmap_iter_tt_init, "", "");
KSYMTAB_FUNC(ttm_tt_pages_limit, "", "");
KSYMTAB_FUNC(ttm_tt_setup_backup, "", "");
KSYMTAB_FUNC(ttm_bo_move_to_lru_tail, "", "");
KSYMTAB_FUNC(ttm_bo_set_bulk_move, "", "");
KSYMTAB_FUNC(ttm_bo_put, "", "");
KSYMTAB_FUNC(ttm_bo_eviction_valuable, "", "");
KSYMTAB_FUNC(ttm_bo_pin, "", "");
KSYMTAB_FUNC(ttm_bo_unpin, "", "");
KSYMTAB_FUNC(ttm_bo_mem_space, "", "");
KSYMTAB_FUNC(ttm_bo_validate, "", "");
KSYMTAB_FUNC(ttm_bo_init_reserved, "", "");
KSYMTAB_FUNC(ttm_bo_init_validate, "", "");
KSYMTAB_FUNC(ttm_bo_unmap_virtual, "", "");
KSYMTAB_FUNC(ttm_bo_wait_ctx, "", "");
KSYMTAB_FUNC(ttm_bo_populate, "", "");
KSYMTAB_FUNC(ttm_move_memcpy, "", "");
KSYMTAB_FUNC(ttm_bo_move_memcpy, "", "");
KSYMTAB_FUNC(ttm_io_prot, "", "");
KSYMTAB_FUNC(ttm_bo_kmap_try_from_panic, "", "");
KSYMTAB_FUNC(ttm_bo_kmap, "", "");
KSYMTAB_FUNC(ttm_bo_kunmap, "", "");
KSYMTAB_FUNC(ttm_bo_vmap, "", "");
KSYMTAB_FUNC(ttm_bo_vunmap, "", "");
KSYMTAB_FUNC(ttm_bo_move_accel_cleanup, "", "");
KSYMTAB_FUNC(ttm_bo_move_sync_cleanup, "", "");
KSYMTAB_FUNC(ttm_lru_walk_for_evict, "", "");
KSYMTAB_FUNC(ttm_bo_lru_cursor_fini, "", "");
KSYMTAB_FUNC(ttm_bo_lru_cursor_init, "", "");
KSYMTAB_FUNC(ttm_bo_lru_cursor_next, "", "");
KSYMTAB_FUNC(ttm_bo_lru_cursor_first, "", "");
KSYMTAB_FUNC(ttm_bo_shrink, "", "");
KSYMTAB_FUNC(ttm_bo_shrink_suitable, "", "");
KSYMTAB_FUNC(ttm_bo_shrink_avoid_wait, "", "");
KSYMTAB_FUNC(ttm_bo_vm_reserve, "", "");
KSYMTAB_FUNC(ttm_bo_vm_fault_reserved, "", "");
KSYMTAB_FUNC(ttm_bo_vm_dummy_page, "", "");
KSYMTAB_FUNC(ttm_bo_vm_fault, "", "");
KSYMTAB_FUNC(ttm_bo_vm_open, "", "");
KSYMTAB_FUNC(ttm_bo_vm_close, "", "");
KSYMTAB_FUNC(ttm_bo_access, "", "");
KSYMTAB_FUNC(ttm_bo_vm_access, "", "");
KSYMTAB_FUNC(ttm_bo_mmap_obj, "", "");
KSYMTAB_FUNC(ttm_eu_backoff_reservation, "", "");
KSYMTAB_FUNC(ttm_eu_reserve_buffers, "", "");
KSYMTAB_FUNC(ttm_eu_fence_buffer_objects, "", "");
KSYMTAB_FUNC(ttm_range_man_init_nocheck, "", "");
KSYMTAB_FUNC(ttm_range_man_fini_nocheck, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_init, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_fini, "", "");
KSYMTAB_FUNC(ttm_lru_bulk_move_tail, "", "");
KSYMTAB_FUNC(ttm_resource_init, "", "");
KSYMTAB_FUNC(ttm_resource_fini, "", "");
KSYMTAB_FUNC(ttm_resource_free, "", "");
KSYMTAB_FUNC(ttm_resource_manager_init, "", "");
KSYMTAB_FUNC(ttm_resource_manager_evict_all, "", "");
KSYMTAB_FUNC(ttm_resource_manager_usage, "", "");
KSYMTAB_FUNC(ttm_resource_manager_debug, "", "");
KSYMTAB_FUNC(ttm_kmap_iter_iomap_init, "", "");
KSYMTAB_FUNC(ttm_resource_manager_create_debugfs, "", "");
KSYMTAB_FUNC(ttm_pool_alloc, "", "");
KSYMTAB_FUNC(ttm_pool_free, "", "");
KSYMTAB_FUNC(ttm_pool_init, "", "");
KSYMTAB_FUNC(ttm_pool_fini, "", "");
KSYMTAB_FUNC(ttm_pool_debugfs, "", "");
KSYMTAB_DATA(ttm_glob, "", "");
KSYMTAB_FUNC(ttm_device_prepare_hibernation, "", "");
KSYMTAB_FUNC(ttm_device_swapout, "", "");
KSYMTAB_FUNC(ttm_device_init, "", "");
KSYMTAB_FUNC(ttm_device_fini, "", "");
KSYMTAB_FUNC(ttm_device_clear_dma_mappings, "", "");
KSYMTAB_FUNC(ttm_backup_bytes_avail, "_gpl", "");
KSYMTAB_FUNC(ttm_agp_bind, "", "");
KSYMTAB_FUNC(ttm_agp_unbind, "", "");
KSYMTAB_FUNC(ttm_agp_is_bound, "", "");
KSYMTAB_FUNC(ttm_agp_destroy, "", "");
KSYMTAB_FUNC(ttm_agp_tt_create, "", "");

SYMBOL_CRC(ttm_tt_init, 0xeec0ead2, "");
SYMBOL_CRC(ttm_tt_fini, 0x400543c9, "");
SYMBOL_CRC(ttm_sg_tt_init, 0x00e1a33a, "");
SYMBOL_CRC(ttm_tt_restore, 0x863d2c88, "");
SYMBOL_CRC(ttm_kmap_iter_tt_init, 0x45695306, "");
SYMBOL_CRC(ttm_tt_pages_limit, 0x69cc2943, "");
SYMBOL_CRC(ttm_tt_setup_backup, 0xe22d201b, "");
SYMBOL_CRC(ttm_bo_move_to_lru_tail, 0xa8b73156, "");
SYMBOL_CRC(ttm_bo_set_bulk_move, 0x21c357e2, "");
SYMBOL_CRC(ttm_bo_put, 0x1ad82298, "");
SYMBOL_CRC(ttm_bo_eviction_valuable, 0xbc2a8c4d, "");
SYMBOL_CRC(ttm_bo_pin, 0xf2b91c9d, "");
SYMBOL_CRC(ttm_bo_unpin, 0x476569df, "");
SYMBOL_CRC(ttm_bo_mem_space, 0x2863b109, "");
SYMBOL_CRC(ttm_bo_validate, 0x0e5e5fad, "");
SYMBOL_CRC(ttm_bo_init_reserved, 0x0c698dea, "");
SYMBOL_CRC(ttm_bo_init_validate, 0xabf90da4, "");
SYMBOL_CRC(ttm_bo_unmap_virtual, 0xcb170689, "");
SYMBOL_CRC(ttm_bo_wait_ctx, 0xd69c4929, "");
SYMBOL_CRC(ttm_bo_populate, 0x965e4799, "");
SYMBOL_CRC(ttm_move_memcpy, 0x1a71d30c, "");
SYMBOL_CRC(ttm_bo_move_memcpy, 0x9c39f463, "");
SYMBOL_CRC(ttm_io_prot, 0x4773f7b0, "");
SYMBOL_CRC(ttm_bo_kmap_try_from_panic, 0x86a75e43, "");
SYMBOL_CRC(ttm_bo_kmap, 0x3cb49f88, "");
SYMBOL_CRC(ttm_bo_kunmap, 0xc37d41e9, "");
SYMBOL_CRC(ttm_bo_vmap, 0x4febefba, "");
SYMBOL_CRC(ttm_bo_vunmap, 0x3f608844, "");
SYMBOL_CRC(ttm_bo_move_accel_cleanup, 0x2a01d20c, "");
SYMBOL_CRC(ttm_bo_move_sync_cleanup, 0x060c4766, "");
SYMBOL_CRC(ttm_lru_walk_for_evict, 0x409b572e, "");
SYMBOL_CRC(ttm_bo_lru_cursor_fini, 0x3751a1c1, "");
SYMBOL_CRC(ttm_bo_lru_cursor_init, 0x29c4f8aa, "");
SYMBOL_CRC(ttm_bo_lru_cursor_next, 0x45c931f4, "");
SYMBOL_CRC(ttm_bo_lru_cursor_first, 0xdd0f3815, "");
SYMBOL_CRC(ttm_bo_shrink, 0x96a69232, "");
SYMBOL_CRC(ttm_bo_shrink_suitable, 0xb23bb29a, "");
SYMBOL_CRC(ttm_bo_shrink_avoid_wait, 0x8832bf37, "");
SYMBOL_CRC(ttm_bo_vm_reserve, 0xcfc83933, "");
SYMBOL_CRC(ttm_bo_vm_fault_reserved, 0xa7b671a5, "");
SYMBOL_CRC(ttm_bo_vm_dummy_page, 0x21c26729, "");
SYMBOL_CRC(ttm_bo_vm_fault, 0xe7cd1cad, "");
SYMBOL_CRC(ttm_bo_vm_open, 0x668494ae, "");
SYMBOL_CRC(ttm_bo_vm_close, 0xeddd0df9, "");
SYMBOL_CRC(ttm_bo_access, 0xe1d576b7, "");
SYMBOL_CRC(ttm_bo_vm_access, 0x62a58d60, "");
SYMBOL_CRC(ttm_bo_mmap_obj, 0x3bd5c760, "");
SYMBOL_CRC(ttm_eu_backoff_reservation, 0x58a5e181, "");
SYMBOL_CRC(ttm_eu_reserve_buffers, 0x378286ed, "");
SYMBOL_CRC(ttm_eu_fence_buffer_objects, 0x4ec4f595, "");
SYMBOL_CRC(ttm_range_man_init_nocheck, 0xba2328dd, "");
SYMBOL_CRC(ttm_range_man_fini_nocheck, 0xde9f27c8, "");
SYMBOL_CRC(ttm_lru_bulk_move_init, 0x12e98481, "");
SYMBOL_CRC(ttm_lru_bulk_move_fini, 0xea6f63ef, "");
SYMBOL_CRC(ttm_lru_bulk_move_tail, 0x916486d8, "");
SYMBOL_CRC(ttm_resource_init, 0x6e0bbda4, "");
SYMBOL_CRC(ttm_resource_fini, 0xf33a571f, "");
SYMBOL_CRC(ttm_resource_free, 0xfde7dfe6, "");
SYMBOL_CRC(ttm_resource_manager_init, 0x33cc2cf8, "");
SYMBOL_CRC(ttm_resource_manager_evict_all, 0x213cd72c, "");
SYMBOL_CRC(ttm_resource_manager_usage, 0xb9bb55ab, "");
SYMBOL_CRC(ttm_resource_manager_debug, 0x7600f5f1, "");
SYMBOL_CRC(ttm_kmap_iter_iomap_init, 0x6a847134, "");
SYMBOL_CRC(ttm_resource_manager_create_debugfs, 0xa15c046c, "");
SYMBOL_CRC(ttm_pool_alloc, 0x00d86aa4, "");
SYMBOL_CRC(ttm_pool_free, 0x6363d586, "");
SYMBOL_CRC(ttm_pool_init, 0xe67edf4f, "");
SYMBOL_CRC(ttm_pool_fini, 0xeac87ab1, "");
SYMBOL_CRC(ttm_pool_debugfs, 0x0f05f997, "");
SYMBOL_CRC(ttm_glob, 0x21c5c4bb, "");
SYMBOL_CRC(ttm_device_prepare_hibernation, 0x018051d1, "");
SYMBOL_CRC(ttm_device_swapout, 0x30690e59, "");
SYMBOL_CRC(ttm_device_init, 0xa6fdba61, "");
SYMBOL_CRC(ttm_device_fini, 0x7b729ce1, "");
SYMBOL_CRC(ttm_device_clear_dma_mappings, 0x2021a1e0, "");
SYMBOL_CRC(ttm_backup_bytes_avail, 0xba5188c9, "_gpl");
SYMBOL_CRC(ttm_agp_bind, 0x56d68383, "");
SYMBOL_CRC(ttm_agp_unbind, 0xefb2b7dd, "");
SYMBOL_CRC(ttm_agp_is_bound, 0xcf17c988, "");
SYMBOL_CRC(ttm_agp_destroy, 0xddbc0d20, "");
SYMBOL_CRC(ttm_agp_tt_create, 0xda28d7a9, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb3b1c0ba, "ww_mutex_lock_interruptible" },
	{ 0x78ee464, "drm_dev_enter" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xec5839e4, "param_ops_ulong" },
	{ 0x3806f8ef, "dma_resv_reserve_fences" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xedaa703f, "shmem_read_folio_gfp" },
	{ 0xad95374e, "agp_bind_memory" },
	{ 0xe0525533, "folio_unlock" },
	{ 0xe2313f1f, "vmalloc_to_page" },
	{ 0x602ab7bd, "dma_resv_init" },
	{ 0x722b640a, "dma_resv_wait_timeout" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xfa666974, "queue_work_node" },
	{ 0xc7bcd355, "dma_unmap_page_attrs" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x190e299a, "ww_mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0xe8699914, "debugfs_create_atomic_t" },
	{ 0x1110f9d2, "register_shrinker" },
	{ 0x2e471cb4, "unmap_mapping_range" },
	{ 0xb5273abd, "dma_resv_add_fence" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdf59ce7, "pcpu_hot" },
	{ 0xf2ce525d, "seq_lseek" },
	{ 0x29a56c2b, "__put_devmap_managed_page_refs" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0x4d924f20, "memremap" },
	{ 0x5e601eee, "folio_clear_dirty_for_io" },
	{ 0x5c6f3034, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9493fc86, "node_states" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0x718eead6, "set_pages_wb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf8ff3b2a, "dma_map_page_attrs" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0xbc4bacd4, "ww_mutex_trylock" },
	{ 0xe13d397a, "__drmm_add_action_or_reset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf1e2b8d0, "set_pages_array_wb" },
	{ 0x33b84f74, "copy_page" },
	{ 0x58e0db65, "unregister_shrinker" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x183fef8c, "__free_pages" },
	{ 0xf61eab93, "_dev_info" },
	{ 0x6e439d9e, "folio_mark_dirty" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2657d8a, "split_page" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xf99c68ad, "mark_page_accessed" },
	{ 0xdbbfcaa0, "shmem_file_setup" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x9db97799, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x2b33ed47, "agp_free_memory" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0xc6816300, "folio_mark_accessed" },
	{ 0x395dbb70, "dma_resv_fini" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x77f6d6f8, "dma_alloc_attrs" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x9e2e262a, "debugfs_remove" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x61834003, "ww_mutex_lock" },
	{ 0x81715bf5, "shmem_read_mapping_page_gfp" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf53d4091, "vmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x23fbaa17, "vmf_insert_pfn_prot" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xfe8f0ef8, "__alloc_pages" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xde683283, "agp_allocate_memory" },
	{ 0x6c78241e, "agp_unbind_memory" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xf6f9d58d, "init_on_free" },
	{ 0x668b19a1, "down_read" },
	{ 0xf515558b, "dma_resv_copy_fences" },
	{ 0x6ecc4f77, "set_page_dirty" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x772186ce, "seq_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xff912768, "shmem_truncate_range" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4e1b7166, "debugfs_create_file" },
	{ 0xa38c4c94, "drm_memcpy_from_wc" },
	{ 0x7c2d03a6, "dma_fence_enable_sw_signaling" },
	{ 0x93e5620b, "set_pages_array_wc" },
	{ 0x8904d016, "dma_free_attrs" },
	{ 0x28779e52, "drm_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2af1a2c9, "dma_resv_iter_next_unlocked" },
	{ 0x82dd6e3e, "alloc_pages" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x8333c276, "__folio_put" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x56470118, "__warn_printk" },
	{ 0x16b16037, "seq_printf" },
	{ 0x54651e9, "__mmap_lock_do_trace_released" },
	{ 0xa0d3456d, "nr_swap_pages" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x5b9af587, "dma_resv_iter_first_unlocked" },
	{ 0x1ca96e70, "__folio_lock" },
	{ 0xaff12a85, "boot_cpu_data" },
	{ 0xcba5c029, "seq_puts" },
	{ 0xb6ca2ec2, "single_release" },
	{ 0xb1237b07, "set_pages_array_uc" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0x3eab050c, "dma_resv_test_signaled" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xfbb929bf, "single_open" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xd8b0135a, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xabdc439, "cc_platform_has" },
	{ 0x53b954a2, "up_read" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9EA22065D3CCE80E1192357");
