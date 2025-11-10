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

KSYMTAB_FUNC(drm_gpuvm_range_valid, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_resv_object_alloc, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_init, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_put, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_prepare_vm, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_prepare_objects, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_prepare_range, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_exec_lock, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_exec_lock_array, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_exec_lock_range, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_validate, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_resv_add_fence, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_put, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_find, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_obtain, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_obtain_prealloc, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_extobj_add, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_evict, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_insert, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_remove, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_link, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_unlink, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_find_first, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_find, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_find_prev, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_find_next, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_interval_empty, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_map, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_remap, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_unmap, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_map, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_unmap, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_map_exec_lock, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_unmap_exec_lock, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_map_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_unmap_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_prefetch_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_bo_unmap_ops_create, "_gpl", "");
KSYMTAB_FUNC(backport_drm_gpuva_ops_free, "_gpl", "");

SYMBOL_CRC(drm_gpuvm_range_valid, 0xf0f7fae9, "_gpl");
SYMBOL_CRC(drm_gpuvm_resv_object_alloc, 0x0d248079, "_gpl");
SYMBOL_CRC(drm_gpuvm_init, 0xffcdabb8, "_gpl");
SYMBOL_CRC(drm_gpuvm_put, 0x19fb29f6, "_gpl");
SYMBOL_CRC(drm_gpuvm_prepare_vm, 0xf2ca48f7, "_gpl");
SYMBOL_CRC(drm_gpuvm_prepare_objects, 0x96bdaa75, "_gpl");
SYMBOL_CRC(drm_gpuvm_prepare_range, 0x624334fe, "_gpl");
SYMBOL_CRC(drm_gpuvm_exec_lock, 0x20f75661, "_gpl");
SYMBOL_CRC(drm_gpuvm_exec_lock_array, 0x3313ede0, "_gpl");
SYMBOL_CRC(drm_gpuvm_exec_lock_range, 0x4942ff9d, "_gpl");
SYMBOL_CRC(drm_gpuvm_validate, 0xf8853efa, "_gpl");
SYMBOL_CRC(drm_gpuvm_resv_add_fence, 0xf1839afd, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_create, 0x56b7ba08, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_put, 0xcf675e04, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_find, 0x9e8c90f2, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_obtain, 0x3f1dcad7, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_obtain_prealloc, 0xb13d92a7, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_extobj_add, 0x8a8b11f9, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_evict, 0xc5f385b4, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_insert, 0x2a38c2af, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_remove, 0x6b0efe28, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_link, 0xfd187e21, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_unlink, 0x68f85500, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_find_first, 0x86ce4f76, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_find, 0x2ce0bdc0, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_find_prev, 0x83d5ab33, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_find_next, 0xb8c9be21, "_gpl");
SYMBOL_CRC(drm_gpuvm_interval_empty, 0x14f7f50f, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_map, 0x464db318, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_remap, 0xb7ce8853, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_unmap, 0x655b0b95, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_map, 0x058d2a81, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_unmap, 0x81d417d5, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_map_exec_lock, 0xbc92d4b9, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_unmap_exec_lock, 0x554c4a1e, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_map_ops_create, 0x9dbc93d0, "_gpl");
SYMBOL_CRC(drm_gpuvm_sm_unmap_ops_create, 0x55e329eb, "_gpl");
SYMBOL_CRC(drm_gpuvm_prefetch_ops_create, 0xf7d965e8, "_gpl");
SYMBOL_CRC(drm_gpuvm_bo_unmap_ops_create, 0x263f53b0, "_gpl");
SYMBOL_CRC(backport_drm_gpuva_ops_free, 0x0e76732d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb5273abd, "dma_resv_add_fence" },
	{ 0xeb70ada, "drm_exec_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61134f2d, "dev_driver_string" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4ae6f729, "drm_exec_prepare_obj" },
	{ 0x7ac84137, "drm_gem_private_object_init" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xeb04d613, "drm_exec_cleanup" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x8244f3e5, "drm_gem_object_release" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x31cddd8f, "drm_exec_prepare_array" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd3a79432, "drm_exec_fini" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x14e04d87, "drm_exec_lock_obj" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "drm_exec");


MODULE_INFO(srcversion, "EE3CCAA8CA4DB260062B904");
