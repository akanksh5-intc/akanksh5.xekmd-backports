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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xea6f63ef, "ttm_lru_bulk_move_fini" },
	{ 0x9970af1c, "pci_disable_sriov" },
	{ 0x21c26729, "ttm_bo_vm_dummy_page" },
	{ 0x745a981, "xa_erase" },
	{ 0xc20c9643, "config_group_find_item" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xba5188c9, "ttm_backup_bytes_avail" },
	{ 0x67284e92, "dma_resv_iter_first" },
	{ 0x999e8297, "vfree" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x602ab7bd, "dma_resv_init" },
	{ 0xdd0f3815, "ttm_bo_lru_cursor_first" },
	{ 0xe2964344, "__wake_up" },
	{ 0x8a3039b4, "anon_inode_getfile" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3806f8ef, "dma_resv_reserve_fences" },
	{ 0x2a6f811d, "drm_gem_dmabuf_vmap" },
	{ 0x96bdaa75, "drm_gpuvm_prepare_objects" },
	{ 0xdd9c3522, "drm_suballoc_manager_fini" },
	{ 0xc3d010df, "bus_register_notifier" },
	{ 0x40e85808, "configfs_register_subsystem" },
	{ 0xab4d87d5, "platform_device_unregister" },
	{ 0x6e0bbda4, "ttm_resource_init" },
	{ 0x7fecd8bd, "dma_resv_replace_fences" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x5d8ec3e2, "__mmdrop" },
	{ 0x7c1d85a, "pci_dev_put" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x63ec9876, "fwnode_create_software_node" },
	{ 0x60bbb124, "dma_fence_signal_locked" },
	{ 0xa9733adf, "pci_read_config_word" },
	{ 0x29c4f8aa, "ttm_bo_lru_cursor_init" },
	{ 0x292a803f, "kmem_cache_free" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x190e299a, "ww_mutex_unlock" },
	{ 0x87865691, "sysfs_create_group" },
	{ 0xbc97e30d, "pci_set_master" },
	{ 0xa136288d, "drm_gem_dmabuf_mmap" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2d9e9583, "drm_buddy_print" },
	{ 0xcfc83933, "ttm_bo_vm_reserve" },
	{ 0xfdab54db, "i2c_verify_adapter" },
	{ 0xca9360b5, "rb_next" },
	{ 0x5da083b7, "perf_pmu_migrate_context" },
	{ 0x5c6f3034, "__tracepoint_mmap_lock_released" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c8240f7, "generic_file_llseek" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcd507d18, "drm_sched_resume_timeout" },
	{ 0xd5eb6a0, "pci_disable_device" },
	{ 0xccecbecb, "bpf_trace_run6" },
	{ 0xf1839afd, "drm_gpuvm_resv_add_fence" },
	{ 0x25bf6b7f, "kmem_cache_destroy" },
	{ 0xeb496345, "bpf_trace_run5" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2b7c6499, "__put_task_struct" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x4fb06351, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xa537f00f, "bpf_trace_run2" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfe98691d, "bpf_trace_run1" },
	{ 0xd69c4929, "ttm_bo_wait_ctx" },
	{ 0x70daa11e, "dma_fence_remove_callback" },
	{ 0x465c47d5, "dma_resv_iter_next" },
	{ 0xa792bf26, "dma_map_sgtable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x43d77026, "bpf_trace_run4" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x48d79d9, "drm_prime_gem_destroy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x668494ae, "ttm_bo_vm_open" },
	{ 0xd8b0135a, "debugfs_create_dir" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x8906c8b6, "component_add_typed" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3fd080a, "trace_raw_output_prep" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3da092b8, "dma_fence_get_stub" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3eab050c, "dma_resv_test_signaled" },
	{ 0x34ad8e24, "drm_gem_prime_export" },
	{ 0xe090e9de, "unregister_sysctl_table" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xc4976d8b, "drm_sched_entity_push_job" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0x2af1a2c9, "dma_resv_iter_next_unlocked" },
	{ 0x9cd1e773, "devm_kmalloc" },
	{ 0xbdf59ce7, "pcpu_hot" },
	{ 0x5421adbe, "perf_pmu_unregister" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x72f2ce3a, "perf_trace_run_bpf_submit" },
	{ 0x8236241a, "dma_buf_move_notify" },
	{ 0x82dd6e3e, "alloc_pages" },
	{ 0x8e4de091, "perf_event_sysfs_show" },
	{ 0xe364365d, "dma_map_resource" },
	{ 0x32b8c285, "_dev_warn" },
	{ 0xa6f92cb6, "mmu_interval_notifier_insert" },
	{ 0xfbb929bf, "single_open" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xe118d06c, "param_ops_int" },
	{ 0x5084c442, "request_firmware" },
	{ 0x4d18e3bf, "drm_sched_init" },
	{ 0xb61d6fc2, "down_read_interruptible" },
	{ 0xc698dea, "ttm_bo_init_reserved" },
	{ 0xedf4b30c, "__devm_regmap_init" },
	{ 0x1110f9d2, "register_shrinker" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x7cb4a73a, "pci_read_config_dword" },
	{ 0xbdef43f1, "pci_pme_capable" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x22481c93, "drm_sched_job_arm" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x62a58d60, "ttm_bo_vm_access" },
	{ 0xe1a3a740, "drm_sched_job_init" },
	{ 0x3f421971, "pci_pr3_present" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x32ae40a1, "pci_bus_type" },
	{ 0xbe29f81, "trace_event_reg" },
	{ 0xe9a5e67f, "intel_graphics_stolen_res" },
	{ 0x5a921311, "strncmp" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x61134f2d, "dev_driver_string" },
	{ 0xb4b1d270, "drm_gem_mmap" },
	{ 0xbc4bacd4, "ww_mutex_trylock" },
	{ 0xfbd93f5c, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x8244f3e5, "drm_gem_object_release" },
	{ 0x95186b75, "pci_p2pdma_distance_many" },
	{ 0xce09dc11, "drm_open" },
	{ 0xebbd4a24, "task_active_pid_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x722b640a, "dma_resv_wait_timeout" },
	{ 0x86bc6de1, "sysfs_remove_files" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x53b954a2, "up_read" },
	{ 0xacfd4f1a, "irq_create_mapping_affinity" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xae21d223, "config_group_init_type_name" },
	{ 0x84702d43, "drm_sched_wqueue_stop" },
	{ 0xeec0ead2, "ttm_tt_init" },
	{ 0x4538eca4, "__trace_trigger_soft_disabled" },
	{ 0x3437d61e, "dummy_irq_chip" },
	{ 0xdc0e4855, "timer_delete" },
	{ 0xce807a25, "up_write" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xa916b694, "strnlen" },
	{ 0xf33a571f, "ttm_resource_fini" },
	{ 0xbc2a8c4d, "ttm_bo_eviction_valuable" },
	{ 0xeca0634c, "pci_alloc_irq_vectors" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd085b116, "drm_dev_put" },
	{ 0x863d2c88, "ttm_tt_restore" },
	{ 0xfb3056b4, "sysfs_create_file_ns" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xbb74a8f2, "__drm_dev_dbg" },
	{ 0xabd6686f, "drm_sched_entity_init" },
	{ 0x2d702bf0, "dev_coredumpm" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0x22d53779, "drm_buddy_free_list" },
	{ 0xfb236f95, "drm_dev_wedged_event" },
	{ 0x28779e52, "drm_printf" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1040086f, "__tracepoint_mmap_lock_start_locking" },
	{ 0x2a25711a, "pci_sriov_get_totalvfs" },
	{ 0xe8d21a42, "pm_runtime_forbid" },
	{ 0x89bfd7b6, "drm_gem_handle_create" },
	{ 0x9f44c898, "drm_buddy_init" },
	{ 0x9daf5ed8, "drm_poll" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x66edfc78, "_find_next_or_bit" },
	{ 0xd86aa4, "ttm_pool_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xd642f3f6, "video_firmware_drivers_only" },
	{ 0x50674de7, "drm_timeout_abs_to_jiffies" },
	{ 0xbb84e95e, "i2c_bus_type" },
	{ 0xe5e5fad, "ttm_bo_validate" },
	{ 0xaa87cf19, "__cpuhp_state_add_instance" },
	{ 0xe1d576b7, "ttm_bo_access" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0x623ee053, "drm_dev_get" },
	{ 0x5055f0a, "drm_sched_wqueue_start" },
	{ 0x400543c9, "ttm_tt_fini" },
	{ 0x74afb9e1, "aperture_remove_conflicting_pci_devices" },
	{ 0xfde7dfe6, "ttm_resource_free" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x19ac0ff7, "__cpuhp_remove_state" },
	{ 0x8832bf37, "ttm_bo_shrink_avoid_wait" },
	{ 0xee8cd935, "drmm_kfree" },
	{ 0x8ad119aa, "drm_syncobj_add_point" },
	{ 0xb23bb29a, "ttm_bo_shrink_suitable" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xbac01c43, "debugfs_create_file_unsafe" },
	{ 0xb3b1c0ba, "ww_mutex_lock_interruptible" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa26452, "trace_event_raw_init" },
	{ 0xe6db6723, "put_device" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x33cc2cf8, "ttm_resource_manager_init" },
	{ 0x2863b109, "ttm_bo_mem_space" },
	{ 0xe995d9e, "__pm_runtime_resume" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaede35, "drm_show_fdinfo" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xeb04d613, "drm_exec_cleanup" },
	{ 0xe3d510dc, "pci_d3cold_enable" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5b9af587, "dma_resv_iter_first_unlocked" },
	{ 0x68c88fb, "kobject_init" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x7c2d03a6, "dma_fence_enable_sw_signaling" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x49a889a8, "drm_sched_stop" },
	{ 0x93410f5f, "mmput" },
	{ 0x61834003, "ww_mutex_lock" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xb8d0447e, "devm_ioremap_wc" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x3f4c7bb6, "pci_rebar_get_possible_sizes" },
	{ 0x1b4c46e, "intel_vsec_register" },
	{ 0x28a9a7d7, "trace_event_buffer_commit" },
	{ 0xea00fe81, "__drm_printfn_coredump" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb718eade, "drm_sched_tdr_queue_imm" },
	{ 0x14e04d87, "drm_exec_lock_obj" },
	{ 0x390b2d88, "drm_sched_job_cleanup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x21653281, "dma_buf_unmap_attachment" },
	{ 0x230bef91, "__drmm_mutex_release" },
	{ 0xff748b76, "drm_buddy_alloc_blocks" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x2a38c2af, "backport_drm_gpuva_insert" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2a01d20c, "ttm_bo_move_accel_cleanup" },
	{ 0xb37b0d38, "sysfs_create_files" },
	{ 0xdac259b9, "default_llseek" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd5790197, "component_del" },
	{ 0xffcdabb8, "drm_gpuvm_init" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9008764, "pci_msix_vec_count" },
	{ 0x60174cd7, "dma_set_mask" },
	{ 0xdb55706a, "drmm_kmalloc" },
	{ 0xa5f99a35, "config_group_init" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xb9bb55ab, "ttm_resource_manager_usage" },
	{ 0xc46808ce, "pid_task" },
	{ 0xd455bf0c, "kthread_use_mm" },
	{ 0x1ad82298, "ttm_bo_put" },
	{ 0x668b19a1, "down_read" },
	{ 0xe8f5465, "drm_debugfs_create_files" },
	{ 0x263f53b0, "drm_gpuvm_bo_unmap_ops_create" },
	{ 0xeddd0df9, "ttm_bo_vm_close" },
	{ 0xa6be2360, "__devm_drm_dev_alloc" },
	{ 0x3db8914b, "kobject_create_and_add" },
	{ 0x9ab14881, "drm_ioctl" },
	{ 0x3c37d713, "param_ops_charp" },
	{ 0x3751a1c1, "ttm_bo_lru_cursor_fini" },
	{ 0x3f608844, "ttm_bo_vunmap" },
	{ 0x99fd0c28, "bus_unregister_notifier" },
	{ 0x888e5969, "trace_event_buffer_reserve" },
	{ 0xef6c3f70, "round_jiffies_up_relative" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xf2ce525d, "seq_lseek" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xb2ab2422, "__mmap_lock_do_trace_start_locking" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xef2bffd0, "irq_work_queue" },
	{ 0x48a510f, "drm_suballoc_manager_init" },
	{ 0x97890409, "dma_buf_dynamic_attach" },
	{ 0x21c357e2, "ttm_bo_set_bulk_move" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x20978fb9, "idr_find" },
	{ 0x4527a3d5, "trace_output_call" },
	{ 0xcb3ffa3a, "mmu_interval_read_begin" },
	{ 0xae32f0b6, "access_remote_vm" },
	{ 0x98555a05, "dma_fence_chain_walk" },
	{ 0x3e7e3ce0, "platform_device_put" },
	{ 0x3b0e5e9c, "__drm_puts_coredump" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x135bb7ec, "hrtimer_forward" },
	{ 0x45cbd83, "pci_unregister_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a28062a, "param_ops_uint" },
	{ 0xcf675e04, "drm_gpuvm_bo_put" },
	{ 0x429881fc, "hmm_range_fault" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x19fb29f6, "drm_gpuvm_put" },
	{ 0x84158fd7, "_dev_err" },
	{ 0xdbaa2553, "irq_set_chip_and_handler_name" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x2e471cb4, "unmap_mapping_range" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xde8eff49, "kthread_unuse_mm" },
	{ 0xf8ff3b2a, "dma_map_page_attrs" },
	{ 0x465b167a, "drm_gem_dmabuf_release" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x772186ce, "seq_read" },
	{ 0xcb5c2145, "pci_save_state" },
	{ 0x78ee464, "drm_dev_enter" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xef272e56, "__pm_runtime_set_status" },
	{ 0x62c769b9, "noop_llseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x22c0307a, "drm_dev_unplug" },
	{ 0xe22d201b, "ttm_tt_setup_backup" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe80a9a32, "devm_release_action" },
	{ 0x96a69232, "ttm_bo_shrink" },
	{ 0xc98eb1a5, "__pci_register_driver" },
	{ 0x68f85500, "backport_drm_gpuva_unlink" },
	{ 0x75dd82ac, "i2c_new_client_device" },
	{ 0x58e0db65, "unregister_shrinker" },
	{ 0xb0a0795b, "hrtimer_setup" },
	{ 0xf61eab93, "_dev_info" },
	{ 0x8067c7e, "dma_unmap_sg_attrs" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc37d41e9, "ttm_bo_kunmap" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x4534b82d, "configfs_unregister_subsystem" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xf7d965e8, "drm_gpuvm_prefetch_ops_create" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x2e5ae00a, "param_ops_bool" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4bfd198, "pci_d3cold_disable" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa28402e4, "debugfs_attr_read" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x813541f8, "pci_ignore_hotplug" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x4ab072fc, "drm_gem_object_lookup" },
	{ 0x61c8c837, "dma_unmap_resource" },
	{ 0xc3714c84, "handle_simple_irq" },
	{ 0xdc5e961a, "pci_set_power_state" },
	{ 0xf2ca48f7, "drm_gpuvm_prepare_vm" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x3f1dcad7, "drm_gpuvm_bo_obtain" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8debd4c9, "drm_suballoc_free" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xab2e6491, "fd_install" },
	{ 0x7120a28d, "dma_fence_chain_init" },
	{ 0x902aff2d, "drm_gem_dmabuf_vunmap" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xf2b91c9d, "ttm_bo_pin" },
	{ 0x3432bf7c, "perf_pmu_register" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x916486d8, "ttm_lru_bulk_move_tail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2a15f636, "pm_runtime_get_if_active" },
	{ 0xb02b1425, "__pm_runtime_idle" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xfa150882, "drm_buddy_fini" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xf86d5e4a, "auxiliary_device_init" },
	{ 0xed53be7c, "kmem_cache_create" },
	{ 0x9bdfc3d8, "platform_device_add_resources" },
	{ 0xd248079, "drm_gpuvm_resv_object_alloc" },
	{ 0x29ada37e, "pci_iounmap" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0x23fbaa17, "vmf_insert_pfn_prot" },
	{ 0x5a2d3ee8, "pci_iomap" },
	{ 0xabb5a026, "drm_buddy_block_trim" },
	{ 0xcb5f80a, "pci_iov_vf_bar_set_size" },
	{ 0x7410aba2, "strreplace" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x3cb49f88, "ttm_bo_kmap" },
	{ 0xf5c4eb31, "dma_fence_array_create" },
	{ 0xe76732d, "backport_drm_gpuva_ops_free" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb836712d, "remap_pfn_range" },
	{ 0x39073297, "backport_ptrace_may_access" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x25087d23, "pm_runtime_get_if_in_use" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x4febefba, "ttm_bo_vmap" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x1b332682, "device_del" },
	{ 0x1000e51, "schedule" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xe2c4106c, "register_sysctl_sz" },
	{ 0xec1c846c, "device_link_add" },
	{ 0x5b123c8b, "dma_max_mapping_size" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x2fb33709, "trace_event_printf" },
	{ 0x86ce4f76, "backport_drm_gpuva_find_first" },
	{ 0xa6f69ea9, "sysfs_remove_group" },
	{ 0x6543db0b, "mmu_interval_notifier_remove" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xc5f385b4, "drm_gpuvm_bo_evict" },
	{ 0x71345c31, "pci_restore_state" },
	{ 0x2754dad8, "drm_mm_reserve_node" },
	{ 0xe13d397a, "__drmm_add_action_or_reset" },
	{ 0x1057a279, "bsearch" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x224d398a, "__dev_fwnode" },
	{ 0x55e329eb, "drm_gpuvm_sm_unmap_ops_create" },
	{ 0xa5e48c16, "kmem_cache_alloc" },
	{ 0x8b3494ff, "trace_handle_return" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xd175115a, "kobject_add" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x8fa8aca1, "__cpuhp_state_remove_instance" },
	{ 0x2ad12636, "pci_enable_sriov" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8607381d, "__irq_alloc_descs" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87c1770f, "simple_attr_open" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x356f771, "pci_enable_device" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb70ada, "drm_exec_init" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x122c3a7e, "_printk" },
	{ 0x79206b17, "pci_resize_resource" },
	{ 0xdebaac84, "fwnode_remove_software_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0xc7bcd355, "dma_unmap_page_attrs" },
	{ 0x510df1b, "find_pid_ns" },
	{ 0x2801a22f, "proc_dointvec_minmax" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x7b0e2cc5, "drm_gem_ttm_mmap" },
	{ 0x7eca494d, "simple_attr_release" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb5273abd, "dma_resv_add_fence" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x4e1b7166, "debugfs_create_file" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xa3087239, "__pm_runtime_use_autosuspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6fdba61, "ttm_device_init" },
	{ 0xe2313f1f, "vmalloc_to_page" },
	{ 0x81605d6b, "drm_sched_job_add_resv_dependencies" },
	{ 0x336f8608, "dma_set_coherent_mask" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x54651e9, "__mmap_lock_do_trace_released" },
	{ 0x3df5d30b, "debugfs_attr_write" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x819bd449, "pci_write_config_dword" },
	{ 0x7b729ce1, "ttm_device_fini" },
	{ 0x20f75661, "drm_gpuvm_exec_lock" },
	{ 0x3e75f19b, "pci_iov_vf_bar_get_sizes" },
	{ 0x708bfafc, "irq_domain_remove" },
	{ 0xfdf6817d, "simple_open" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9dbc93d0, "drm_gpuvm_sm_map_ops_create" },
	{ 0xff558eb6, "pci_get_domain_bus_and_slot" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x5cda3e49, "drm_gem_ttm_dumb_map_offset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6b0efe28, "backport_drm_gpuva_remove" },
	{ 0xea4829a3, "config_item_put" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7ac1254b, "local_clock" },
	{ 0x97fa317c, "__cpuhp_setup_state" },
	{ 0x22726ba7, "platform_device_add" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb1ffe9ae, "drm_sched_job_add_dependency" },
	{ 0x476569df, "ttm_bo_unpin" },
	{ 0xccc319a0, "sg_alloc_table_from_pages_segment" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa7b671a5, "ttm_bo_vm_fault_reserved" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a4be360, "pci_release_resource" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xcd364a37, "drm_dev_register" },
	{ 0x98973ca4, "drm_prime_pages_to_sg" },
	{ 0x6363d586, "ttm_pool_free" },
	{ 0xf14b1868, "pci_assign_unassigned_bus_resources" },
	{ 0x7ac84137, "drm_gem_private_object_init" },
	{ 0x183fef8c, "__free_pages" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x47600370, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f73892, "pci_sriov_set_totalvfs" },
	{ 0x676b5be5, "pcim_enable_device" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x985e7a13, "pci_iov_virtfn_devfn" },
	{ 0xb5b07f25, "anon_inode_getfd" },
	{ 0x4150b56b, "i2c_unregister_device" },
	{ 0xaada87e8, "pv_ops" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xcfea1bec, "drm_suballoc_dump_debug_info" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x73be3b6b, "__auxiliary_device_add" },
	{ 0x48a91171, "string_get_size" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x3cd3f7ad, "drm_sched_fini" },
	{ 0x6a22ea16, "__devm_add_action" },
	{ 0x12e98481, "ttm_lru_bulk_move_init" },
	{ 0xfd187e21, "backport_drm_gpuva_link" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xcebe0c0c, "drm_compat_ioctl" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xa15c046c, "ttm_resource_manager_create_debugfs" },
	{ 0x13a3e281, "drm_sched_entity_fini" },
	{ 0x81f755a0, "drm_read" },
	{ 0xa8b73156, "ttm_bo_move_to_lru_tail" },
	{ 0xce723676, "sysfs_remove_file_ns" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfd7ecc4c, "_dev_notice" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x81e2bdf4, "generic_handle_irq_safe" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbaf9f0dc, "dma_buf_map_attachment" },
	{ 0x16b809c8, "drm_print_memory_stats" },
	{ 0xf8853efa, "drm_gpuvm_validate" },
	{ 0x8a8b11f9, "drm_gpuvm_bo_extobj_add" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x87b809ac, "get_pid_task" },
	{ 0x77bbb252, "pm_runtime_allow" },
	{ 0x754d539c, "strlen" },
	{ 0xcfa5b847, "pci_bus_resource_n" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x24a2f432, "__drmm_workqueue_release" },
	{ 0x45c931f4, "ttm_bo_lru_cursor_next" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd8f20fa0, "drm_syncobj_replace_fence" },
	{ 0xd3a79432, "drm_exec_fini" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x289c09f9, "kobject_put" },
	{ 0x38956b94, "__irq_domain_add" },
	{ 0xf56c5e36, "pci_irq_vector" },
	{ 0x796c5c1d, "drm_syncobj_find" },
	{ 0x9269e6dd, "pci_num_vf" },
	{ 0xb6ca2ec2, "single_release" },
	{ 0xaff12a85, "boot_cpu_data" },
	{ 0xbad1988, "drm_suballoc_new" },
	{ 0x68a12ab8, "rep_movs_alternative" },
	{ 0x213cd72c, "ttm_resource_manager_evict_all" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9dc1d436, "devm_hwmon_device_register_with_info" },
	{ 0x521ad6d0, "drm_puts" },
	{ 0x85df9b6c, "strsep" },
	{ 0xab075007, "drm_release_noglobal" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xa1ce904e, "kobj_sysfs_ops" },
	{ 0x231913d0, "platform_device_alloc" },
	{ 0xbb5dd4a, "dma_fence_chain_find_seqno" },
	{ 0x689067dd, "dma_fence_chain_ops" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "ttm,drm_gpuvm,drm_suballoc_helper,drm_buddy,gpu-sched,xe-compat,drm_exec,intel-vsec,drm_ttm_helper");

MODULE_ALIAS("pci:v00008086d00009A60sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A68sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A70sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A49sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A78sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AD9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AF8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C80sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004680sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004682sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004688sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000468Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000468Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004690sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004692sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004693sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046AAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004628sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046D4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A721sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7ACsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7ADsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A720sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7A8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7AAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A7ABsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A780sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A781sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A782sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A783sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A788sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A789sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A78Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A78Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004905sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004907sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004909sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056C1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007DD1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D41sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D67sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B640sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BFsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005690sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005691sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005692sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BBsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BCsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056BDsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005693sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005694sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005695sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056A4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000056B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005696sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005697sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D45sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D55sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007D60sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00007DD5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00006420sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000064A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000064B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E202sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E209sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E20Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E20Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E20Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E210sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E211sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E212sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E216sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E220sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E221sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E222sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000E223sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B080sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B081sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B082sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B083sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B084sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B085sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B086sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B087sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B08Fsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B090sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B0A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000B0B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000FD80sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000FD81sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "3394937BBD1472E9F0CD23C");
