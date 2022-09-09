# Copyright (c) 2019 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

ENABLE_BACKTRACE 	:=	1

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/loki/include		\
				-Ilib/libphy/marvell_88x5113/include			\
				-Ilib/libphy/marvell_88x5113/serdes/src/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/loki/plat_loki_setup.c	\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/loki/plat_loki_ecam.c	\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/loki/plat_loki_svc.c		\
				drivers/marvell/octeontx/otx2/bphy.c			\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif

MARVELL_PHY_7121 := 1
ifdef MARVELL_PHY_7121
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_7121
    PLAT_INCLUDES     +=        -Ilib/libphy/marvell_88x7121/serdes/C112GX4     \
                                -Ilib/libphy/marvell_88x7121/serdes      \
                                -Ilib/libphy/marvell_88x7121    \

    BL31_LIBS         += lib/libphy/libphy_88x7121.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_7121.c
endif

