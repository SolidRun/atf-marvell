# Copyright (c) 2016 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/version.mk

VERSION_STRING		+=(Marvell-${SUBVERSION})

BL2_AT_EL3		:=	1

ifeq (${RAS_EXTENSION},1)
# Software Delegated Exception support required by RAS
SDEI_SUPPORT            :=       1
$(eval $(call add_define,SDEI_SUPPORT))
endif

# disable GIC v4 (unless defined by platform)
GIC_ENABLE_V4_EXTN      ?=       0
$(eval $(call assert_boolean,GIC_ENABLE_V4_EXTN))
$(eval $(call add_define,GIC_ENABLE_V4_EXTN))

# set default CSR include path (unless already defined by platform)
PLAT_CSR_INCLUDE        ?=       include/plat/marvell/octeontx/csr

# Check if xSPI or MPI should be build
CN10K_PLATS = cn10ka cnf10ka cnf10kb cn10kb
ifeq (${PLAT},$(filter ${PLAT}, ${CN10K_PLATS}))
       BUILD_XSPI=1
else
       BUILD_XSPI=0
endif

ifeq (${BUILD_TYPE}, release)
	# Use LOG_LEVEL_WARN in release builds
        LOG_LEVEL	:=	30
endif

OVERRIDE_LIBC		:=	1
include plat/marvell/octeontx/libc/libc.mk

LIBFDT_DIR		:=	lib/libfdt

PLAT_INCLUDES		:=	-Iinclude/common/tbbr				\
				-Iinclude/common 				\
				-Iinclude/lib/libfdt 				\
				-Iinclude/plat/marvell/octeontx 			\
				-Iinclude/plat/marvell/octeontx/aarch64 			\
				-Iinclude/drivers/marvell/octeontx				\
				-Iinclude/lib				\
				-I${PLAT_CSR_INCLUDE} \
				-Ilib/cpus/aarch64	\

include lib/xlat_tables_v2/xlat_tables.mk
include drivers/arm/gic/v3/gicv3.mk

MARVELL_GIC_SOURCES	:=	${GICV3_SOURCES}	\
				plat/common/plat_gicv3.c	\
				drivers/marvell/octeontx/gicv3_setup.c	\

PLAT_BL_COMMON_SOURCES	:=	drivers/arm/pl011/aarch64/pl011_console.S	\
				drivers/marvell/octeontx/mmc.c		\
				drivers/marvell/octeontx/twsi_core.c		\
				drivers/marvell/octeontx/twsi.c		\
				drivers/delay_timer/delay_timer.c		\
				drivers/marvell/octeontx/timers_octeontx.c		\
				${LIBFDT_DIR}/fdt.c				\
				${LIBFDT_DIR}/fdt_ro.c				\
				${LIBFDT_DIR}/fdt_rw.c				\
				${LIBFDT_DIR}/fdt_wip.c				\
				plat/marvell/octeontx/octeontx_common.c		\
				plat/marvell/octeontx/octeontx_dram.c			\
				plat/marvell/octeontx/dlmalloc.c		\
				plat/marvell/octeontx/plat_mem_alloc.c		\
				plat/marvell/octeontx/aarch64/octeontx_report_exception.S	\
				plat/marvell/octeontx/aarch64/octeontx_helpers.S 	\
				${XLAT_TABLES_LIB_SRCS}				\
				${LIBC_SRCS}

BL2_SOURCES +=			drivers/io/io_memmap.c				\
				drivers/io/io_storage.c				\
				drivers/io/io_dummy.c				\
				plat/marvell/octeontx/octeontx_bl2_setup.c		\
				plat/marvell/octeontx/octeontx_ecam.c			\
				plat/marvell/octeontx/octeontx_board_cfg_setup.c	\
				plat/marvell/octeontx/octeontx_scfg_setup.c		\
				plat/marvell/octeontx/aarch64/octeontx_reset_handler.S	\
				common/desc_image_load.c				\
				plat/marvell/octeontx/aarch64/octeontx_bl2_mem_params_desc.c	\
				plat/marvell/octeontx/octeontx_image_load.c

BL31_SOURCES		+=	${MARVELL_GIC_SOURCES}		\
				lib/timers/timers.c				\
				drivers/marvell/octeontx/gpio_octeontx.c		\
				drivers/marvell/octeontx/gti_watchdog.c                  \
				plat/marvell/octeontx/octeontx_bl31_setup.c			\
				plat/marvell/octeontx/octeontx_ehf.c		\
				plat/marvell/octeontx/octeontx_legacy_pm.c			\
				plat/marvell/octeontx/octeontx_legacy_pwrc.c		\
				plat/marvell/octeontx/octeontx_mmap_utils.c	\
				plat/marvell/octeontx/octeontx_svc.c				\
				plat/common/plat_psci_common.c			\
				plat/marvell/octeontx/aarch64/octeontx_bl31_exceptions.S	\
				plat/marvell/octeontx/octeontx_ras.c	\

# Add xSPI or MPI support based on platform
ifeq (${BUILD_XSPI}, 1)
       BL31_SOURCES += drivers/marvell/octeontx/cn10k/cdns_xspi.c
       BL2_SOURCES += drivers/marvell/octeontx/cn10k/cdns_xspi.c
       BL31_SOURCES += drivers/marvell/octeontx/cn10k/async_spi_op.c
       BL2_SOURCES += drivers/marvell/octeontx/cn10k/async_spi_op.c
else
       BL31_SOURCES += drivers/marvell/octeontx/spi.c
       BL2_SOURCES += drivers/marvell/octeontx/spi.c
endif

ifeq (${SDEI_SUPPORT},1)
BL31_SOURCES		+=	plat/marvell/octeontx/octeontx_sdei.c
endif

ENABLE_PLAT_COMPAT	:=	0

CRASH_REPORTING		:=	1

ASM_ASSERTION		:=	1

PL011_GENERIC_UART	:=	1

ERROR_DEPRECATED	:=	1

USE_TBBR_DEFS		:=	1

CTX_INCLUDE_AARCH32_REGS	:=	0

PROGRAMMABLE_RESET_ADDRESS	:=	1

WORKAROUND_CVE_2022_23960	:=	1

EL3_EXCEPTION_HANDLING	:=       1

ifeq (${TRUSTED_BOARD_BOOT},1)
    ifeq (${ARM_ROTPK_LOCATION}, regs)
        ARM_ROTPK_LOCATION_ID = ARM_ROTPK_REGS_ID
    else
        $(error "Unsupported ARM_ROTPK_LOCATION value '${ARM_ROTPK_LOCATION}'")
    endif

    # KEY_ALG and TF_MBEDTLS_KEY_ALG are used for authentication purposes
    KEY_ALG                := ecdsa
    TF_MBEDTLS_KEY_ALG     := ${KEY_ALG}

    # CIPHER_TYPE that will be used to encrypt/decrypt images
    # If not defied at build time, do not use encryption
    ifneq (${CIPHER_TYPE},)
        MBEDTLS_CIPHER_TYPE	   := ${CIPHER_TYPE}
        CRYPTO_BOARD_BOOT	   := 1
    else
        CRYPTO_BOARD_BOOT	   := 0
    endif

    $(eval $(call add_define,ARM_ROTPK_LOCATION_ID))
    PLAT_BL_COMMON_SOURCES += drivers/auth/auth_mod.c                              \
                              drivers/auth/crypto_mod.c                            \
                              drivers/auth/img_parser_mod.c                        \
                              plat/marvell/octeontx/octeontx_tbbr_cot.c            \
                              plat/marvell/octeontx/octeontx_trusted_boot.c

    CRYPTO_LIB_MK := drivers/auth/mbedtls/mbedtls_crypto.mk
    IMG_PARSER_LIB_MK := drivers/auth/mbedtls/mbedtls_x509.mk

    include drivers/auth/mbedtls/mbedtls_common.mk

    $(info Including ${CRYPTO_LIB_MK})
    include ${CRYPTO_LIB_MK}

    $(info Including ${IMG_PARSER_LIB_MK})
    include ${IMG_PARSER_LIB_MK}
endif

ifeq (${USE_MRVL_TF_LOGGING},1)
DEF_LOG_MODULES ?= DUMMY_bl?_common_drivers_lib_plat_services_libtim
MRVL_OTX_DEBUG_H ?= octeontx_debug.h
# MRVL_TF_LOG_DEF constructs cmd-line options for ATF Runtime Logging feature
#
#   $(1) = source file (%.c)
#   $(2) = BL stage (2, 2u, 30, 31, 32, 33)
define MRVL_TF_LOG_DEF
$(eval LOG_MODULES := $(subst ?,$(2),$(DEF_LOG_MODULES)))
$(eval SRC_MOD := $(subst ..//,,$(1)))
$(eval LOG_MOD := $(word 1,$(subst /, ,$(SRC_MOD))))
$(eval $(if $(findstring $(LOG_MOD),$(LOG_MODULES)),,$(error "Unknown logging module '$(LOG_MOD)' ($(1)) (missing from $(LOG_MODULES))")))
$(eval LOG_MOD_SPLIT_LIST := $(firstword $(subst $(LOG_MOD), ,$(LOG_MODULES))))
$(eval LOG_MOD_INDEX := $(shell echo $$(($(words $(subst _, ,$(LOG_MOD_SPLIT_LIST)))-1))))
$(eval LOG_MOD_MASK := $(shell echo $(LOG_MOD_INDEX) | awk '{ print (2 ^ $$1); }'))
$(eval MRVL_TF_LOGGING := -DMRVL_TF_LOG_MODULE=$(LOG_MOD_MASK) -include $(MRVL_OTX_DEBUG_H))
endef
endif
