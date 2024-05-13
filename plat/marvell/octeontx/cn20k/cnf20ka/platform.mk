# Copyright (c) 2024 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# include cnf20k platform common makefile
include plat/marvell/octeontx/cn20k/platform.mk

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn20k/cnf20ka/include \
				-I${ETH_INCLUDES}/cnf20ka

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn20k/cnf20ka/plat_cnf20ka_setup.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn20k/cnf20ka/plat_cnf20ka_ecam.c
