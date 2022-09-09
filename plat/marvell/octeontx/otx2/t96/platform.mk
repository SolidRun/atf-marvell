# Copyright (c) 2016 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
#DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/csr 			\
				-Iplat/marvell/octeontx/otx2/t96/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/t96/plat_t96_setup.c		\
				drivers/marvell/octeontx/otx2/gsern/gsern_init_common.c	\
				drivers/marvell/octeontx/otx2/gsern/gsern_init_network.c	\
				drivers/marvell/octeontx/otx2/gsern/gsern_api.c		\
				drivers/marvell/octeontx/otx2/gsern/gsern_eye.c		\
				drivers/marvell/octeontx/otx2/qlm/qlm_gsern.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gsern_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/t96/plat_t96_ecam.c		\

BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/spi_smc_load.c		\
				plat/marvell/octeontx/otx2/t96/plat_t96_svc.c	\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif

ifeq (${RAS_EXTENSION},1)
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/smc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/lmc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/mdc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/plat_ras.c
BL31_SOURCES		+=	lib/extensions/ras/std_err_record.c
BL31_SOURCES		+=	lib/extensions/ras/ras_common.c
endif

MARVELL_PHY_5123 := 1
ifdef MARVELL_PHY_5123
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_5123
    PLAT_INCLUDES     +=	-Ilib/libphy/marvell_88x5123/include				\
				-Ilib/libphy/marvell_88x5123/serdes/include			\
				-Ilib/libphy/marvell_88x5123/serdes/marvell			\
				-Ilib/libphy/marvell_88x5123/serdes/marvell/sd28firmware	\

    BL31_LIBS         += lib/libphy/libphy_88x5123.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_5123.c
endif

MARVELL_PHY_5113 := 1
ifdef MARVELL_PHY_5113
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_5113
    PLAT_INCLUDES     +=	-Ilib/libphy/marvell_88x5113/include				\
				-Ilib/libphy/marvell_88x5113/serdes/src/include		\

    BL31_LIBS         += lib/libphy/libphy_88x5113.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_5113.c
endif

MARVELL_PHY_6141 := 1
ifdef MARVELL_PHY_6141
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_6141
    PLAT_INCLUDES     += -Ilib/libphy/marvell_88x6141/include
    BL31_LIBS         += lib/libphy/libphy_88x6141.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_6141.c
endif
MARVELL_PHY_1548 := 1
ifdef MARVELL_PHY_1548
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_1548
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_1548.c
endif

MARVELL_PHY_3310 := 1
ifdef MARVELL_PHY_3310
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_3310
    PLAT_INCLUDES     += -Ilib/libphy/marvell_88x3310/include
    BL31_LIBS         += lib/libphy/libphy_88x3310.a
    BL31_SOURCES      += drivers/marvell/octeontx/cn10k/phy/phy_marvell_3310.c
endif

ifeq (${ENABLE_ATTESTATION_SERVICE},1)
BL31_SOURCES            +=      plat/marvell/octeontx/otx2/octeontx_attestation.c \
                                ${MBEDTLS_COMMON_SOURCES}               \
                                ${MBEDTLS_CRYPTO_SOURCES}               \
                                ${MBEDTLS_X509_SOURCES}                 \
                                $(addprefix ${MBEDTLS_DIR}/library/,    \
                                  entropy.c                             \
                                  entropy_poll.c                        \
                                  ctr_drbg.c                            \
                                  aes.c                                 \
                                  cipher.c                              \
                                  cipher_wrap.c                         \
                                 )
CPPFLAGS                +=      -Wno-error=cpp
ifneq ($(ATTESTATION_SIGNING_KEY_FILE),)
    override ATTESTATION_SIGNING_KEY_FILE:=\"$(ATTESTATION_SIGNING_KEY_FILE)\"
else
    ATTESTATION_SIGNING_KEY_FILE:=\"attestation_signing_key.h\"
endif
$(eval $(call add_define,ATTESTATION_SIGNING_KEY_FILE))
$(eval $(call add_define,ENABLE_ATTESTATION_SERVICE))
$(eval $(call assert_boolean,ENABLE_ATTESTATION_SERVICE))
endif

