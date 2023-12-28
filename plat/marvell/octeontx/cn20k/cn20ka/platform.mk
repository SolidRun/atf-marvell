# Copyright (c) 2023 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# include cn20k platform common makefile
include plat/marvell/octeontx/cn20k/platform.mk

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn20k/cn20ka/include

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn20k/cn20ka/plat_cn20ka_setup.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn20k/cn20ka/plat_cn20ka_ecam.c
