/* src/backport-include/backport/backport_auto.h.  Generated from backport_auto.h.in by configure.  */
/* src/backport-include/backport/backport_auto.h.in.  Generated from configure.ac by autoheader.  */

/* access_remote_vm() function is not exported */
#define BPM_ACCESS_REMOTE_VM_NOT_PRESENT 1

/* alloc_ordered_workqueue_lockdep_map not available */
#define BPM_ALLOC_ORDERED_WORKQUEUE_LOCKDEP_MAP_NOT_PRESENT 1

/* bin_attribute callbacks do not expect const parameter */
#define BPM_CONST_STRUCT_BIN_ATTRIBUTE_IS_NOT_PRESENT 1

/* dev_coredumpm_timeout() is not available */
#define BPM_COREDUMPM_TIMEOUT_NOT_PRESENT 1

/* DEFINE_SYSFS_GROUP_VISIBLE is not avilable */
#define BPM_DEFINE_SYSFS_GROUP_VISIBLE_NOT_PRESENT 1

/* dev_coredump_put() is not available */
#define BPM_DEVCOREDUMP_PUT_NOT_PRESENT 1

/* disable_work_sync() function is not avilable */
#define BPM_DISBALE_WORK_SYNC_NOT_PRESENT 1

/* DIV_U64_ROUND_UP macro is not avilable */
#define BPM_DIV_U64_ROUND_UP_NOT_PRESENT 1

/* dma_fence_array_alloc() is not available */
#define BPM_DMA_FENCE_ARRAY_ALLOC_NOT_PRESENT 1

/* drmm_cgroup_register_region is declared in drm/drm_drv.h */
#define BPM_DRMM_CGROUP_REGISTER_REGION_NOT_PRESENT 1

/* __drmm_workqueue_release is not available */
#define BPM_DRMM_WORKQUEUE_RELEASE_NOT_PRESENT 1

/* drm_buddy_block_trim() does not have 2nd Arugment not available */
#define BPM_DRM_BUDDY_BLOCK_TRIM_2ND_ARG_NOT_PRESENT 1

/* drm_buddy_free_list() does not have 3rd Arugment not available */
#define BPM_DRM_BUDDY_FREE_LIST_ARG3_NOT_PRESENT 1

/* drm_coredump_printer_is_full function is not avilable */
#define BPM_DRM_COREDUMP_PRINTER_IS_FULL_NOT_PRESENT 1

/* drm_dbg_printer() not available */
#define BPM_DRM_DBG_PRINTER_NOT_PRESENT 1

/* drm_dbg_ratelimited() not available */
#define BPM_DRM_DBG_RATELIMITED_NOT_PRESENT 1

/* DRM_DEV_WEDGED_EVENT is not avilable */
#define BPM_DRM_DEV_WEDGED_EVENT_NOT_PRESENT 1

/* drm_exec_init() takes only 2 arguments */
#define BPM_DRM_EXEC_INIT_ARG3_NOT_PRESENT 1

/* __dma_fence_is_later uses old signature with seqno and ops arguments */
#define BPM_DRM_FENCE_IS_LATER_ARG_DMA_FENCE_OPS_NOT_PRESENT 1

/* DRM_GPUVA_OP_DRIVER enum member is not avilable */
#define BPM_DRM_GPUVA_OP_DRIVER_NOT_PRESENT 1

/* rename DRM GPUVM symbols to avoid conflicts with backport kernel
   implementation */
#define BPM_DRM_GPUVM_RENAMING_SYMBOLS 1

/* drm_line_printer() not available */
#define BPM_DRM_LINE_PRINTER_NOT_PRESENT 1

/* DRIVER_DATE field is not present or not needed in drm_driver structure */
/* #undef BPM_DRV_DATE_NOT_PRESENT */

/* whether FOP_UNSIGNED_OFFSET is defined */
#define BPM_FOP_UNSIGNED_OFFSET_NOT_PRESENT 1

/* GENMASK_U32 macro is not avilable */
#define BPM_GENMASK_U32_NOT_PRESENT 1

/* HRTIMER_SETUP macro is not avilable */
#define BPM_HRTIMER_SETUP_NOT_PRESENT 1

/* kmap_local_page_try_from_panic function is not avilable */
#define BPM_KMAP_LOCAL_PAGE_TRY_FROM_PANIC_NOT_PRESENT 1

/* module_import_ns quoted namespace strings are not supported */
#define BPM_MODULE_IMPORT_TO_STRING_LITERAL_PRESENT 1

/* pci_iov_vf_bar_get_sizes and pci_iov_vf_bar_set_size functions not
   available */
#define BPM_PCI_IOV_VF_BAR_FUNCTIONS_NOT_PRESENT 1

/* struct pmu does not have scope member */
#define BPM_PMU_SCOPE_MEMBER_NOT_PRESENT 1

/* pm_runtime_get_if_active() does not have 2nd Arugment not available */
/* #undef BPM_PM_RUNTIME_GET_IF_ACTIVE_ARG2_NOT_PRESENT */

/* PM_SUSPEND_IN_PROGRESS function is not avilable */
#define BPM_PM_SUSPEND_IN_PROGRESS_NOT_PRESENT 1

/* secs_to_jiffies() function is not available */
#define BPM_SECS_TO_JIFFIES_NOT_PRESENT 1

/* shmem_writeout is not available */
#define BPM_SHMEM_WRITEOUT_NOT_PRESENT 1

/* shrinker_alloc/register/free API not present */
#define BPM_SHRINKER_ALLOC_NOT_PRESENT 1

/* strscpy() argument3 is not available */
#define BPM_STRSCPY_ARG3_PRESENT 1

/* struct bin_attribute does not have read_new member */
#define BPM_STRUCT_BIN_ATTRIBUTE_READ_NEW_NOT_PRESENT 1

/* const keyword not supported for struct ctl_table */
#define BPM_STRUCT_CTL_TABLE_CONST_KEYWORD_NOT_PRESENT 1

/* origin member is not part of "struct drm_printer" */
#define BPM_STRUCT_DRM_PRINTER_ORIGIN_NOT_PRESENT 1

/* str_plural() is not available */
#define BPM_STR_PLURAL_NOT_PRESENT 1

/* str_up_down() is not available */
#define BPM_STR_UP_DOWN_NOT_PRESENT 1

/* Define to 1 if you have the <drm/i915_component.h> header file. */
#define HAVE_DRM_I915_COMPONENT_H 1

/* Define to 1 if you have the <drm/i915_gsc_proxy_mei_interface.h> header
   file. */
#define HAVE_DRM_I915_GSC_PROXY_MEI_INTERFACE_H 1

/* Define to 1 if you have the <drm/intel/i915_drm.h> header file. */
/* #undef HAVE_DRM_INTEL_I915_DRM_H */

/* Define to 1 if you have the <linux/wordpart.h> header file. */
/* #undef HAVE_LINUX_WORDPART_H */

/* Define to 1 if you have the <linux/workqueue_types.h> header file. */
/* #undef HAVE_LINUX_WORKQUEUE_TYPES_H */

/* Name of package */
#define PACKAGE "intel-xe-drm"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "linux-graphics@intel.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "intel-xe-drm"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "intel-xe-drm 1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "intel-xe-drm"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0"

/* Version number of package */
#define VERSION "1.0"
