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

KSYMTAB_FUNC(drm_gem_ttm_print_info, "", "");
KSYMTAB_FUNC(drm_gem_ttm_vmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_mmap, "", "");
KSYMTAB_FUNC(drm_gem_ttm_dumb_map_offset, "", "");

SYMBOL_CRC(drm_gem_ttm_print_info, 0x0a27f689, "");
SYMBOL_CRC(drm_gem_ttm_vmap, 0x29366c44, "");
SYMBOL_CRC(drm_gem_ttm_vunmap, 0xf280b3d1, "");
SYMBOL_CRC(drm_gem_ttm_mmap, 0x7b0e2cc5, "");
SYMBOL_CRC(drm_gem_ttm_dumb_map_offset, 0x5cda3e49, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4ab072fc, "drm_gem_object_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3f608844, "ttm_bo_vunmap" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x32a0cc37, "drm_print_bits" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x28779e52, "drm_printf" },
	{ 0x3bd5c760, "ttm_bo_mmap_obj" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x4febefba, "ttm_bo_vmap" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "ttm");


MODULE_INFO(srcversion, "0922B46F6B7866C89BB2699");
