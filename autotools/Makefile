# Check if being called by kernel build system
ifneq ($(KERNELRELEASE),)
# Called by kernel build system - descend into src/
obj-y := src/
else
# User/packaging mode

# Version extraction from backport versions file
# Extract value after = and remove quotes, then split by _
# Strips git hash suffix (e.g., -7-gb27e38cc6) from the release version field
BKPT_VER=$(shell cat src/versions | grep BACKPORTS_RELEASE_TAG | cut -d '=' -f 2 | tr -d '"' | cut -d '_' -f 3 2>/dev/null || echo 1)
BP_TAG=$(shell cat src/versions | grep BACKPORTS_RELEASE_TAG | cut -d '=' -f 2 | tr -d '"' | cut -d '_' -f 2 2>/dev/null || echo 1)
BP_DATE=$(shell echo $(BKPT_VER) | cut -d "." -f 1 2>/dev/null || echo 1)

# Get kernel version - from KLIB/KLIB_BUILD headers if provided, else from uname -r
ifneq ($(origin KLIB), undefined)
  KLIB_BUILD ?= $(KLIB)/build/
  TARGET_KERN_VER=$(shell cat $(KLIB_BUILD)/include/generated/autoconf.h 2>/dev/null | grep 'CONFIG_BUILD_SALT' | cut -d '"' -f2 2>/dev/null || cat $(KLIB_BUILD)/include/generated/utsrelease.h 2>/dev/null | grep "UTS_RELEASE" | cut -d '"' -f2 2>/dev/null || uname -r)
else ifneq ($(origin KLIB_BUILD), undefined)
  KLIB ?= $(patsubst %/build,%,$(KLIB_BUILD))
  TARGET_KERN_VER=$(shell cat $(KLIB_BUILD)/include/generated/autoconf.h 2>/dev/null | grep 'CONFIG_BUILD_SALT' | cut -d '"' -f2 2>/dev/null || cat $(KLIB_BUILD)/include/generated/utsrelease.h 2>/dev/null | grep "UTS_RELEASE" | cut -d '"' -f2 2>/dev/null || uname -r)
else
  KLIB := /lib/modules/$(shell uname -r)/
  KLIB_BUILD ?= $(KLIB)/build/
  TARGET_KERN_VER=$(shell uname -r)
endif

BACKPORT_DIR = src
CONFIG_SHELL = /bin/bash

# Extract kernel version components
FULL_KERN_STR=$(shell echo "$(TARGET_KERN_VER)" | sed 's/\.el[0-9]*_[0-9]*\.x86_64//' | sed 's/\.x86_64//' | tr -d '+')
KER_VER=$(subst -,.,$(FULL_KERN_STR))
DISTRO_SUFFIX=$(shell echo "$(TARGET_KERN_VER)" | grep -oE 'el(9|10)_[0-9]+' | head -1)

# Extract DEV_TAG from BASE_KERNEL_TAG e.g. "xe-v6.17.13.46" extracts "6.17.13.46"
# Remove 'v' prefix if present
DEV_TAG_RAW=$(shell cat $(BACKPORT_DIR)/versions 2>/dev/null | grep BASE_KERNEL_TAG | cut -f 2 -d '"' | cut -d '-' -f 2 || echo "")
DEV_TAG=$(shell echo $(DEV_TAG_RAW) | sed 's/^v//')

# Package version format: only kernel version in VERSION field
# DEV_TAG and BP_DATE go into RELEASE with dot separator (RPM Release field restriction)
VERSION=$(KER_VER)
RELEASE_VERSION=$(DEV_TAG).$(BP_DATE)

XE_PKG_NAME=intel-xe-dkms
XE_PKG_VERSION=$(VERSION)
XE_PKG_RELEASE=$(RELEASE_VERSION)_1
XE_RPM_MK_SPEC=$(BACKPORT_DIR)/scripts/backport-mkdrmdkmsspec
XE_RPM_MK_DKMS=$(BACKPORT_DIR)/scripts/backport-mkdrmdkmsconf

# DEB package version: <KER_VER>-<DEV_TAG>.<BKPT_VER> e.g. intel-xe-dkms_6.12.0.124.8.1-6.17.13.49.260409.4+i1-1_all.deb
XE_DEB_PKG_VERSION=$(KER_VER)-$(DEV_TAG).$(BKPT_VER)
XE_DEB_PKG_RELEASE=1
DEF_VER=$(shell cat debian/changelog.in | head -1 | cut -d '(' -f 2 | cut -d ')' -f 1)
XE_DKMS_MK_CONTROL=$(BACKPORT_DIR)/scripts/backport-mkdebcontrol
XE_DKMS_MK_RULES=$(BACKPORT_DIR)/scripts/backport-mkdebrules
XE_DKMS_MK_DKMS=$(BACKPORT_DIR)/scripts/backport-mkxedebdkms
XE_DKMS_MK_README=$(BACKPORT_DIR)/scripts/backport-mkdebreadme
XE_DKMS_MK_COPYRIGHT=$(BACKPORT_DIR)/scripts/backport-mkdebcopyright
KBUILD_ONLYXEDIRS := src/drivers/gpu src/include src/scripts src/drivers/platform src/drivers/mtd
KBUILD_XEVFIOPCIDIRS := src/drivers/vfio/pci/xe
KBUILD_AUTOTOOLS := m4 AUTHORS ChangeLog configure.ac COPYING INSTALL Makefile Makefile.am NEWS README.md compile.sh
XE_TAR_CONTENT=$(KBUILD_ONLYXEDIRS) $(KBUILD_AUTOTOOLS) $(KBUILD_XEVFIOPCIDIRS) src/Makefile* src/local-symbols src/MAINTAINERS src/local-symbols-autoconf \
	src/Kconfig src/Kconfig.sources src/Kconfig.package.hacks src/COPYING src/versions src/defconfigs src/backport-include src/kconf src/compat

# Export variables for sub-makes
export KLIB KLIB_BUILD

.PHONY: all clean xe-dkms-deb-pkg
all clean xe-dkms-deb-pkg:
	$(MAKE) -C src $@

.PHONY: modules olddefconfig menuconfig savedefconfig
modules olddefconfig menuconfig savedefconfig:
	$(MAKE) -C src KLIB=$(KLIB) KLIB_BUILD=$(KLIB_BUILD) $@

.PHONY: show-version
show-version:
	@echo "Target Kernel Version : $(TARGET_KERN_VER)"
	@echo "Kernel Headers Path   : $(KLIB_BUILD)"
	@echo "Package Version       : $(XE_PKG_VERSION)"
	@echo "Package Release       : $(XE_PKG_RELEASE)$(if $(DISTRO_SUFFIX),.$(DISTRO_SUFFIX))"
	@echo "Expected RPM Name     : $(XE_PKG_NAME)-$(XE_PKG_VERSION)-$(XE_PKG_RELEASE)$(if $(DISTRO_SUFFIX),.$(DISTRO_SUFFIX)).x86_64.rpm"
	@echo "Package Version (DEB) : $(XE_DEB_PKG_VERSION)"
	@echo "Expected DEB Name     : $(XE_PKG_NAME)_$(XE_DEB_PKG_VERSION)+i$(XE_DEB_PKG_RELEASE)-1_all.deb"

.PHONY: xe-dkms-rpm-pkg
xe-dkms-rpm-pkg: clean
	@echo "========================================"
	@echo "Building DKMS RPM package"
	@echo "Target Kernel: $(TARGET_KERN_VER)"
	@echo "Package version: $(XE_PKG_VERSION)-$(XE_PKG_RELEASE)"
	@echo "========================================"
	@echo "Pre-configuring source for DKMS..."
	@cd src && test -f .config || $(MAKE) defconfig-xe
	@echo "Pre-generating backport autoconf.h..."
	@cd src && $(MAKE) backport-include/backport/autoconf.h
	mkdir -p rpm
	mkdir -p ~/rpmbuild/SOURCES
	$(CONFIG_SHELL) $(XE_RPM_MK_SPEC) -n $(XE_PKG_NAME) -v $(XE_PKG_VERSION) -r $(XE_PKG_RELEASE) $(if $(DISTRO_SUFFIX),-d $(DISTRO_SUFFIX)) -z dkms > rpm/$(XE_PKG_NAME).spec
	$(CONFIG_SHELL) $(XE_RPM_MK_DKMS) -n $(XE_PKG_NAME) -v $(XE_PKG_VERSION) -r $(XE_PKG_RELEASE) > rpm/$(XE_PKG_NAME).dkms.conf
	cp -r src m4 debian Makefile* configure* aclocal.m4 AUTHORS ChangeLog COPYING INSTALL NEWS README compile.sh ~/rpmbuild/SOURCES/ 2>/dev/null || true
	+rpmbuild -bb --define "_sourcedir $(PWD)" rpm/$(XE_PKG_NAME).spec

endif # End of user/packaging mode
