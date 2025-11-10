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

KSYMTAB_FUNC(intel_vsec_add_aux, "_gpl", "INTEL_VSEC");
KSYMTAB_FUNC(intel_vsec_register, "_gpl", "INTEL_VSEC");
KSYMTAB_FUNC(intel_vsec_set_mapping, "_gpl", "INTEL_VSEC");
KSYMTAB_FUNC(intel_vsec_get_mapping, "_gpl", "INTEL_VSEC");

SYMBOL_CRC(intel_vsec_add_aux, 0x953fc36f, "_gpl");
SYMBOL_CRC(intel_vsec_register, 0x01b4c46e, "_gpl");
SYMBOL_CRC(intel_vsec_set_mapping, 0xc21b7e36, "_gpl");
SYMBOL_CRC(intel_vsec_get_mapping, 0x67982251, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb5c2145, "pci_save_state" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9cd1e773, "devm_kmalloc" },
	{ 0x356f771, "pci_enable_device" },
	{ 0xf86d5e4a, "auxiliary_device_init" },
	{ 0x40fc868d, "dev_set_name" },
	{ 0xc98eb1a5, "__pci_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0d61faa, "__dynamic_dev_dbg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x45cbd83, "pci_unregister_driver" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7cb4a73a, "pci_read_config_dword" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe6db6723, "put_device" },
	{ 0xf61eab93, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x84158fd7, "_dev_err" },
	{ 0x73be3b6b, "__auxiliary_device_add" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe80a9a32, "devm_release_action" },
	{ 0x71345c31, "pci_restore_state" },
	{ 0x1b332682, "device_del" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x745a981, "xa_erase" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x2ecbc0be, "pci_find_next_ext_capability" },
	{ 0xd5eb6a0, "pci_disable_device" },
	{ 0x3e72186e, "pci_match_id" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0x6a22ea16, "__devm_add_action" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe85bac18, "pci_read_config_byte" },
	{ 0x77358855, "iomem_resource" },
	{ 0x676b5be5, "pcim_enable_device" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec1c846c, "device_link_add" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "xe-compat");

MODULE_ALIAS("pci:v00008086d0000467Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000490Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000AD0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A77Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000647Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000B07Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9EFF5072AE2A31953DD1D26");
