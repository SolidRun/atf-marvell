# Copyright (c) 2020 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# add libtim.a to the build.  This file is built in the SDK and copied
# to this location.

# There does not seem to be a nice way to add a library path so we add
# it here.
LDLIBS		+= -ltim -L$(LIBTIM_DIR)
