#ifndef __CAVM_CSRS_DSS_H__
#define __CAVM_CSRS_DSS_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX DSS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dss_bar_e
 *
 * DSS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_DSS_BAR_E_DSSX_PF_BAR0(a) (0x87e03c000000ll + 0x1000000ll * (a))
#define CAVM_DSS_BAR_E_DSSX_PF_BAR0_SIZE 0x800000ull
#define CAVM_DSS_BAR_E_DSSX_PF_BAR4(a) (0x87e03cf00000ll + 0x1000000ll * (a))
#define CAVM_DSS_BAR_E_DSSX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration dss_int_vec_e
 *
 * DSS MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_DSS_INT_VEC_E_DSS_INT (0)

/**
 * Register (RSL) dss#_clk_en
 *
 * DSS clock enable Register
 * control of DSS domain's clock enables.
 */
union cavm_dssx_clk_en
{
    uint64_t u;
    struct cavm_dssx_clk_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t s_mem_clk_en          : 1;  /**< [  4:  4](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_apb_clk_en          : 1;  /**< [  3:  3](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_rclk_en             : 1;  /**< [  2:  2](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_phy_ref_clk_en      : 1;  /**< [  1:  1](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_mc_core_clk_en      : 1;  /**< [  0:  0](SR/W) 1- clock enabled , 0- clock disabled */
#else /* Word 0 - Little Endian */
        uint64_t s_mc_core_clk_en      : 1;  /**< [  0:  0](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_phy_ref_clk_en      : 1;  /**< [  1:  1](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_rclk_en             : 1;  /**< [  2:  2](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_apb_clk_en          : 1;  /**< [  3:  3](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t s_mem_clk_en          : 1;  /**< [  4:  4](SR/W) 1- clock enabled , 0- clock disabled */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_clk_en_s cn; */
};
typedef union cavm_dssx_clk_en cavm_dssx_clk_en_t;

static inline uint64_t CAVM_DSSX_CLK_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_CLK_EN(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000020ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_CLK_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_CLK_EN(a) cavm_dssx_clk_en_t
#define bustype_CAVM_DSSX_CLK_EN(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_CLK_EN(a) "DSSX_CLK_EN"
#define device_bar_CAVM_DSSX_CLK_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_CLK_EN(a) (a)
#define arguments_CAVM_DSSX_CLK_EN(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_ctrl
 *
 * DSS control Register
 * general control register.
 */
union cavm_dssx_ctrl
{
    uint64_t u;
    struct cavm_dssx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t s_force_crypto_slow_clk : 1;/**< [  2:  2](SR/W) 1- forcing the clock of the crypto to be the slow clock (relevant only on ddr
                                                                 1:4 mode. in 1:2 mode the slow and fast clock (dfi and phy clocks) are at the
                                                                 same ferquency) */
        uint64_t s_ddr_type_5          : 1;  /**< [  1:  1](SR/W) 0- ddr type is ddr4 , 1- ddr type is ddr5 */
        uint64_t s_ddr_mode_1_4        : 1;  /**< [  0:  0](SR/W) 0- ddr mode is 1:2 , 1- ddr mode is 1:4 */
#else /* Word 0 - Little Endian */
        uint64_t s_ddr_mode_1_4        : 1;  /**< [  0:  0](SR/W) 0- ddr mode is 1:2 , 1- ddr mode is 1:4 */
        uint64_t s_ddr_type_5          : 1;  /**< [  1:  1](SR/W) 0- ddr type is ddr4 , 1- ddr type is ddr5 */
        uint64_t s_force_crypto_slow_clk : 1;/**< [  2:  2](SR/W) 1- forcing the clock of the crypto to be the slow clock (relevant only on ddr
                                                                 1:4 mode. in 1:2 mode the slow and fast clock (dfi and phy clocks) are at the
                                                                 same ferquency) */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_ctrl_s cn; */
};
typedef union cavm_dssx_ctrl cavm_dssx_ctrl_t;

static inline uint64_t CAVM_DSSX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000030ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_CTRL(a) cavm_dssx_ctrl_t
#define bustype_CAVM_DSSX_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_CTRL(a) "DSSX_CTRL"
#define device_bar_CAVM_DSSX_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_CTRL(a) (a)
#define arguments_CAVM_DSSX_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_int_ena_w1c
 *
 * DSS Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_dssx_int_ena_w1c
{
    uint64_t u;
    struct cavm_dssx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_63]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_00]. */
#else /* Word 0 - Little Endian */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_00]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1C/H) Reads or clears enable for DSS(0..3)_INT_W1C[INT_63]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_int_ena_w1c_s cn; */
};
typedef union cavm_dssx_int_ena_w1c cavm_dssx_int_ena_w1c_t;

static inline uint64_t CAVM_DSSX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e03c008010ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_INT_ENA_W1C(a) cavm_dssx_int_ena_w1c_t
#define bustype_CAVM_DSSX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_INT_ENA_W1C(a) "DSSX_INT_ENA_W1C"
#define device_bar_CAVM_DSSX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_DSSX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_int_ena_w1s
 *
 * DSS Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_dssx_int_ena_w1s
{
    uint64_t u;
    struct cavm_dssx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_63]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_00]. */
#else /* Word 0 - Little Endian */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_00]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1S/H) Reads or sets enable for DSS(0..3)_INT_W1C[INT_63]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_int_ena_w1s_s cn; */
};
typedef union cavm_dssx_int_ena_w1s cavm_dssx_int_ena_w1s_t;

static inline uint64_t CAVM_DSSX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e03c008018ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_INT_ENA_W1S(a) cavm_dssx_int_ena_w1s_t
#define bustype_CAVM_DSSX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_INT_ENA_W1S(a) "DSSX_INT_ENA_W1S"
#define device_bar_CAVM_DSSX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_DSSX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_int_w1c
 *
 * DSS Interrupt Register
 * This register is for DSS-based interrupts.
 */
union cavm_dssx_int_w1c
{
    uint64_t u;
    struct cavm_dssx_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1C/H) TBD */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1C/H) TBD */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1C/H) TBD */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1C/H) TBD */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1C/H) TBD */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1C/H) TBD */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1C/H) TBD */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1C/H) TBD */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1C/H) TBD */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1C/H) TBD */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1C/H) TBD */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1C/H) TBD */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1C/H) TBD */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1C/H) TBD */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1C/H) TBD */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1C/H) TBD */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1C/H) TBD */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1C/H) TBD */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1C/H) TBD */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1C/H) TBD */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1C/H) TBD */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1C/H) TBD */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1C/H) TBD */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1C/H) TBD */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1C/H) TBD */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1C/H) TBD */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1C/H) TBD */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1C/H) TBD */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1C/H) TBD */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1C/H) TBD */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1C/H) TBD */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1C/H) TBD */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1C/H) TBD */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1C/H) TBD */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1C/H) TBD */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1C/H) TBD */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1C/H) TBD */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1C/H) TBD */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1C/H) TBD */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1C/H) TBD */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1C/H) TBD */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1C/H) TBD */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1C/H) TBD */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1C/H) TBD */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1C/H) TBD */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1C/H) TBD */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1C/H) TBD */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1C/H) TBD */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1C/H) TBD */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1C/H) TBD */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1C/H) TBD */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1C/H) TBD */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1C/H) TBD */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1C/H) TBD */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1C/H) TBD */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1C/H) TBD */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1C/H) TBD */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1C/H) TBD */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1C/H) TBD */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1C/H) TBD */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1C/H) TBD */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1C/H) TBD */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1C/H) TBD */
#else /* Word 0 - Little Endian */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1C/H) TBD */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1C/H) TBD */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1C/H) TBD */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1C/H) TBD */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1C/H) TBD */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1C/H) TBD */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1C/H) TBD */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1C/H) TBD */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1C/H) TBD */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1C/H) TBD */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1C/H) TBD */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1C/H) TBD */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1C/H) TBD */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1C/H) TBD */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1C/H) TBD */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1C/H) TBD */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1C/H) TBD */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1C/H) TBD */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1C/H) TBD */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1C/H) TBD */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1C/H) TBD */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1C/H) TBD */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1C/H) TBD */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1C/H) TBD */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1C/H) TBD */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1C/H) TBD */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1C/H) TBD */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1C/H) TBD */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1C/H) TBD */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1C/H) TBD */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1C/H) TBD */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1C/H) TBD */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1C/H) TBD */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1C/H) TBD */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1C/H) TBD */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1C/H) TBD */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1C/H) TBD */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1C/H) TBD */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1C/H) TBD */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1C/H) TBD */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1C/H) TBD */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1C/H) TBD */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1C/H) TBD */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1C/H) TBD */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1C/H) TBD */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1C/H) TBD */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1C/H) TBD */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1C/H) TBD */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1C/H) TBD */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1C/H) TBD */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1C/H) TBD */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1C/H) TBD */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1C/H) TBD */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1C/H) TBD */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1C/H) TBD */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1C/H) TBD */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1C/H) TBD */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1C/H) TBD */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1C/H) TBD */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1C/H) TBD */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1C/H) TBD */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1C/H) TBD */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1C/H) TBD */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1C/H) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_int_w1c_s cn; */
};
typedef union cavm_dssx_int_w1c cavm_dssx_int_w1c_t;

static inline uint64_t CAVM_DSSX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_INT_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e03c008000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_INT_W1C(a) cavm_dssx_int_w1c_t
#define bustype_CAVM_DSSX_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_INT_W1C(a) "DSSX_INT_W1C"
#define device_bar_CAVM_DSSX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_INT_W1C(a) (a)
#define arguments_CAVM_DSSX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_int_w1s
 *
 * DSS Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_dssx_int_w1s
{
    uint64_t u;
    struct cavm_dssx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_63]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_00]. */
#else /* Word 0 - Little Endian */
        uint64_t int_00                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_00]. */
        uint64_t int_01                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_01]. */
        uint64_t int_02                : 1;  /**< [  2:  2](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_02]. */
        uint64_t int_03                : 1;  /**< [  3:  3](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_03]. */
        uint64_t int_04                : 1;  /**< [  4:  4](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_04]. */
        uint64_t int_05                : 1;  /**< [  5:  5](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_05]. */
        uint64_t int_06                : 1;  /**< [  6:  6](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_06]. */
        uint64_t int_07                : 1;  /**< [  7:  7](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_07]. */
        uint64_t int_08                : 1;  /**< [  8:  8](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_08]. */
        uint64_t int_09                : 1;  /**< [  9:  9](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_09]. */
        uint64_t int_10                : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_10]. */
        uint64_t int_11                : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_11]. */
        uint64_t int_12                : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_12]. */
        uint64_t int_13                : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_13]. */
        uint64_t int_14                : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_14]. */
        uint64_t int_15                : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_15]. */
        uint64_t int_16                : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_16]. */
        uint64_t int_17                : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_17]. */
        uint64_t int_18                : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_18]. */
        uint64_t int_19                : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_19]. */
        uint64_t int_20                : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_20]. */
        uint64_t int_21                : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_21]. */
        uint64_t int_22                : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_22]. */
        uint64_t int_23                : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_23]. */
        uint64_t int_24                : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_24]. */
        uint64_t int_25                : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_25]. */
        uint64_t int_26                : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_26]. */
        uint64_t int_27                : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_27]. */
        uint64_t int_28                : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_28]. */
        uint64_t int_29                : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_29]. */
        uint64_t int_30                : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_30]. */
        uint64_t int_31                : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_31]. */
        uint64_t int_32                : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_32]. */
        uint64_t int_33                : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_33]. */
        uint64_t int_34                : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_34]. */
        uint64_t int_35                : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_35]. */
        uint64_t int_36                : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_36]. */
        uint64_t int_37                : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_37]. */
        uint64_t int_38                : 1;  /**< [ 38: 38](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_38]. */
        uint64_t int_39                : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_39]. */
        uint64_t int_40                : 1;  /**< [ 40: 40](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_40]. */
        uint64_t int_41                : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_41]. */
        uint64_t int_42                : 1;  /**< [ 42: 42](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_42]. */
        uint64_t int_43                : 1;  /**< [ 43: 43](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_43]. */
        uint64_t int_44                : 1;  /**< [ 44: 44](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_44]. */
        uint64_t int_45                : 1;  /**< [ 45: 45](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_45]. */
        uint64_t int_46                : 1;  /**< [ 46: 46](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_46]. */
        uint64_t int_47                : 1;  /**< [ 47: 47](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_47]. */
        uint64_t int_48                : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_48]. */
        uint64_t int_49                : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_49]. */
        uint64_t int_50                : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_50]. */
        uint64_t int_51                : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_51]. */
        uint64_t int_52                : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_52]. */
        uint64_t int_53                : 1;  /**< [ 53: 53](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_53]. */
        uint64_t int_54                : 1;  /**< [ 54: 54](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_54]. */
        uint64_t int_55                : 1;  /**< [ 55: 55](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_55]. */
        uint64_t int_56                : 1;  /**< [ 56: 56](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_56]. */
        uint64_t int_57                : 1;  /**< [ 57: 57](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_57]. */
        uint64_t int_58                : 1;  /**< [ 58: 58](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_58]. */
        uint64_t int_59                : 1;  /**< [ 59: 59](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_59]. */
        uint64_t int_60                : 1;  /**< [ 60: 60](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_60]. */
        uint64_t int_61                : 1;  /**< [ 61: 61](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_61]. */
        uint64_t int_62                : 1;  /**< [ 62: 62](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_62]. */
        uint64_t int_63                : 1;  /**< [ 63: 63](R/W1S/H) Reads or sets DSS(0..3)_INT_W1C[INT_63]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_int_w1s_s cn; */
};
typedef union cavm_dssx_int_w1s cavm_dssx_int_w1s_t;

static inline uint64_t CAVM_DSSX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e03c008008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_INT_W1S(a) cavm_dssx_int_w1s_t
#define bustype_CAVM_DSSX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_INT_W1S(a) "DSSX_INT_W1S"
#define device_bar_CAVM_DSSX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_INT_W1S(a) (a)
#define arguments_CAVM_DSSX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_mc_core_reset_n
 *
 * DSS dfi domain reset Register
 * dfi clock SW reset - active low.
 */
union cavm_dssx_mc_core_reset_n
{
    uint64_t u;
    struct cavm_dssx_mc_core_reset_n_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s_mc_core_reset_n     : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
#else /* Word 0 - Little Endian */
        uint64_t s_mc_core_reset_n     : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_mc_core_reset_n_s cn; */
};
typedef union cavm_dssx_mc_core_reset_n cavm_dssx_mc_core_reset_n_t;

static inline uint64_t CAVM_DSSX_MC_CORE_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MC_CORE_RESET_N(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_MC_CORE_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MC_CORE_RESET_N(a) cavm_dssx_mc_core_reset_n_t
#define bustype_CAVM_DSSX_MC_CORE_RESET_N(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MC_CORE_RESET_N(a) "DSSX_MC_CORE_RESET_N"
#define device_bar_CAVM_DSSX_MC_CORE_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_MC_CORE_RESET_N(a) (a)
#define arguments_CAVM_DSSX_MC_CORE_RESET_N(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_mc_ctrl
 *
 * DSS Memory Controller control Register
 * Memory Controller control register.
 */
union cavm_dssx_mc_ctrl
{
    uint64_t u;
    struct cavm_dssx_mc_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t s_mc_cactive          : 1;  /**< [  2:  2](SRO/H) value of the sysack_ddrc port from the MC (see Synopsys MC reference manual). */
        uint64_t s_mc_csysack          : 1;  /**< [  1:  1](SRO/H) value of the sysack_ddrc port from the MC (see Synopsys MC reference manual) */
        uint64_t s_mc_csysreq          : 1;  /**< [  0:  0](SR/W) controls the value driven MC csysreq_ddrc port (see Synopsys MC reference manual). */
#else /* Word 0 - Little Endian */
        uint64_t s_mc_csysreq          : 1;  /**< [  0:  0](SR/W) controls the value driven MC csysreq_ddrc port (see Synopsys MC reference manual). */
        uint64_t s_mc_csysack          : 1;  /**< [  1:  1](SRO/H) value of the sysack_ddrc port from the MC (see Synopsys MC reference manual) */
        uint64_t s_mc_cactive          : 1;  /**< [  2:  2](SRO/H) value of the sysack_ddrc port from the MC (see Synopsys MC reference manual). */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_mc_ctrl_s cn; */
};
typedef union cavm_dssx_mc_ctrl cavm_dssx_mc_ctrl_t;

static inline uint64_t CAVM_DSSX_MC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MC_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000050ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_MC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MC_CTRL(a) cavm_dssx_mc_ctrl_t
#define bustype_CAVM_DSSX_MC_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MC_CTRL(a) "DSSX_MC_CTRL"
#define device_bar_CAVM_DSSX_MC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_MC_CTRL(a) (a)
#define arguments_CAVM_DSSX_MC_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_mem_reset_n
 *
 * DSS mct mem domain reset Register
 * mem clock SW reset - active low.
 */
union cavm_dssx_mem_reset_n
{
    uint64_t u;
    struct cavm_dssx_mem_reset_n_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s_mem_reset_n         : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
#else /* Word 0 - Little Endian */
        uint64_t s_mem_reset_n         : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_mem_reset_n_s cn; */
};
typedef union cavm_dssx_mem_reset_n cavm_dssx_mem_reset_n_t;

static inline uint64_t CAVM_DSSX_MEM_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MEM_RESET_N(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000010ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_MEM_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MEM_RESET_N(a) cavm_dssx_mem_reset_n_t
#define bustype_CAVM_DSSX_MEM_RESET_N(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MEM_RESET_N(a) "DSSX_MEM_RESET_N"
#define device_bar_CAVM_DSSX_MEM_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_MEM_RESET_N(a) (a)
#define arguments_CAVM_DSSX_MEM_RESET_N(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_msix_pba#
 *
 * DSS MSI-X Pending Bit Array Registers
 * Internal:
 * This register is the MSI-X PBA table; FIXME
 */
union cavm_dssx_msix_pbax
{
    uint64_t u;
    struct cavm_dssx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) TBD */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_msix_pbax_s cn; */
};
typedef union cavm_dssx_msix_pbax cavm_dssx_msix_pbax_t;

static inline uint64_t CAVM_DSSX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e03cf08000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("DSSX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MSIX_PBAX(a,b) cavm_dssx_msix_pbax_t
#define bustype_CAVM_DSSX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MSIX_PBAX(a,b) "DSSX_MSIX_PBAX"
#define device_bar_CAVM_DSSX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_DSSX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_DSSX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dss#_msix_vec#_addr
 *
 * DSS MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the DSS_PF_INT_VEC_E enumeration.
 */
union cavm_dssx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_dssx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) TBD */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_msix_vecx_addr_s cn; */
};
typedef union cavm_dssx_msix_vecx_addr cavm_dssx_msix_vecx_addr_t;

static inline uint64_t CAVM_DSSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e03cf00000ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("DSSX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MSIX_VECX_ADDR(a,b) cavm_dssx_msix_vecx_addr_t
#define bustype_CAVM_DSSX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MSIX_VECX_ADDR(a,b) "DSSX_MSIX_VECX_ADDR"
#define device_bar_CAVM_DSSX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_DSSX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_DSSX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dss#_msix_vec#_ctl
 *
 * DSS MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the DSS_PF_INT_VEC_E enumeration.
 */
union cavm_dssx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_dssx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_msix_vecx_ctl_s cn; */
};
typedef union cavm_dssx_msix_vecx_ctl cavm_dssx_msix_vecx_ctl_t;

static inline uint64_t CAVM_DSSX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b==0))
        return 0x87e03cf00008ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("DSSX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_MSIX_VECX_CTL(a,b) cavm_dssx_msix_vecx_ctl_t
#define bustype_CAVM_DSSX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSSX_MSIX_VECX_CTL(a,b) "DSSX_MSIX_VECX_CTL"
#define device_bar_CAVM_DSSX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_DSSX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_DSSX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dss#_phy_ctrl
 *
 * DSS PHY control Register
 * phy control register.
 */
union cavm_dssx_phy_ctrl
{
    uint64_t u;
    struct cavm_dssx_phy_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t s_phy_pprot           : 3;  /**< [  2:  0](SR/W) controls the value driven to the ddr_phy's PPROT_PIN input port. */
#else /* Word 0 - Little Endian */
        uint64_t s_phy_pprot           : 3;  /**< [  2:  0](SR/W) controls the value driven to the ddr_phy's PPROT_PIN input port. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_phy_ctrl_s cn; */
};
typedef union cavm_dssx_phy_ctrl cavm_dssx_phy_ctrl_t;

static inline uint64_t CAVM_DSSX_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_PHY_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000040ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_PHY_CTRL(a) cavm_dssx_phy_ctrl_t
#define bustype_CAVM_DSSX_PHY_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_PHY_CTRL(a) "DSSX_PHY_CTRL"
#define device_bar_CAVM_DSSX_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_PHY_CTRL(a) (a)
#define arguments_CAVM_DSSX_PHY_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_phy_ref_reset_n
 *
 * DSS phy domain reset Register
 * phy clock SW reset - active low.
 */
union cavm_dssx_phy_ref_reset_n
{
    uint64_t u;
    struct cavm_dssx_phy_ref_reset_n_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s_phy_ref_reset_n     : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
#else /* Word 0 - Little Endian */
        uint64_t s_phy_ref_reset_n     : 1;  /**< [  0:  0](SR/W) 0- reset active , 1- reset deactive */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_phy_ref_reset_n_s cn; */
};
typedef union cavm_dssx_phy_ref_reset_n cavm_dssx_phy_ref_reset_n_t;

static inline uint64_t CAVM_DSSX_PHY_REF_RESET_N(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_PHY_REF_RESET_N(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_PHY_REF_RESET_N", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_PHY_REF_RESET_N(a) cavm_dssx_phy_ref_reset_n_t
#define bustype_CAVM_DSSX_PHY_REF_RESET_N(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_PHY_REF_RESET_N(a) "DSSX_PHY_REF_RESET_N"
#define device_bar_CAVM_DSSX_PHY_REF_RESET_N(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_PHY_REF_RESET_N(a) (a)
#define arguments_CAVM_DSSX_PHY_REF_RESET_N(a) (a),-1,-1,-1

/**
 * Register (RSL) dss#_sac_ctrl
 *
 * DSS Shared AC control Register
 * Shared AC control register.
 */
union cavm_dssx_sac_ctrl
{
    uint64_t u;
    struct cavm_dssx_sac_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t s_sac_dual_channel_en : 1;  /**< [ 45: 45](SR/W) drives the input of the dfi_ic inside the shared_ac (port named reg_ddrc_dual_channel_en) */
        uint64_t s_sac_dfi_dram_clk_disable : 1;/**< [ 44: 44](SR/W) drives the input of the dfi_ic inside the shared_ac (port named
                                                                 reg_ddrc_share_dfi_dram_clk_disable). */
        uint64_t reserved_42_43        : 2;
        uint64_t s_tphy_rdcslat_phy_side : 6;/**< [ 41: 36](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_34_35        : 2;
        uint64_t s_t_phy_rddata_en_phy_side : 6;/**< [ 33: 28](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI to the
                                                                 assertion of the dfi_rddata_en signal.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_26_27        : 2;
        uint64_t s_tphy_wrcslat_phy_side : 6;/**< [ 25: 20](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_18_19        : 2;
        uint64_t s_tphy_wrlat_phy_side : 6;  /**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_10_11        : 2;
        uint64_t s_tphy_wrdata_phy_side : 6; /**< [  9:  4](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_2_3          : 2;
        uint64_t s_dfi_data_cs_polarity : 1; /**< [  1:  1](SR/W) Defines polarity of dfi_wrdata_cs and dfi_rddata_cs signals:
                                                                 1'b0 - active_low.
                                                                 1'b1 - active high. */
        uint64_t s_sac_en              : 1;  /**< [  0:  0](SR/W) Shared AC block enable :
                                                                 0- Shared AC is disabled - power saving when SAC in bypass mode.
                                                                 1- Shared AC is enabled.
                                                                 Note: this configuration is used also as clock gating for SAC block. */
#else /* Word 0 - Little Endian */
        uint64_t s_sac_en              : 1;  /**< [  0:  0](SR/W) Shared AC block enable :
                                                                 0- Shared AC is disabled - power saving when SAC in bypass mode.
                                                                 1- Shared AC is enabled.
                                                                 Note: this configuration is used also as clock gating for SAC block. */
        uint64_t s_dfi_data_cs_polarity : 1; /**< [  1:  1](SR/W) Defines polarity of dfi_wrdata_cs and dfi_rddata_cs signals:
                                                                 1'b0 - active_low.
                                                                 1'b1 - active high. */
        uint64_t reserved_2_3          : 2;
        uint64_t s_tphy_wrdata_phy_side : 6; /**< [  9:  4](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_10_11        : 2;
        uint64_t s_tphy_wrlat_phy_side : 6;  /**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_18_19        : 2;
        uint64_t s_tphy_wrcslat_phy_side : 6;/**< [ 25: 20](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_26_27        : 2;
        uint64_t s_t_phy_rddata_en_phy_side : 6;/**< [ 33: 28](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI to the
                                                                 assertion of the dfi_rddata_en signal.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_34_35        : 2;
        uint64_t s_tphy_rdcslat_phy_side : 6;/**< [ 41: 36](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted.
                                                                 It should be set with correlation to the same paramter defined in the PHY. */
        uint64_t reserved_42_43        : 2;
        uint64_t s_sac_dfi_dram_clk_disable : 1;/**< [ 44: 44](SR/W) drives the input of the dfi_ic inside the shared_ac (port named
                                                                 reg_ddrc_share_dfi_dram_clk_disable). */
        uint64_t s_sac_dual_channel_en : 1;  /**< [ 45: 45](SR/W) drives the input of the dfi_ic inside the shared_ac (port named reg_ddrc_dual_channel_en) */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dssx_sac_ctrl_s cn; */
};
typedef union cavm_dssx_sac_ctrl cavm_dssx_sac_ctrl_t;

static inline uint64_t CAVM_DSSX_SAC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSSX_SAC_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c000060ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSSX_SAC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSSX_SAC_CTRL(a) cavm_dssx_sac_ctrl_t
#define bustype_CAVM_DSSX_SAC_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSSX_SAC_CTRL(a) "DSSX_SAC_CTRL"
#define device_bar_CAVM_DSSX_SAC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSSX_SAC_CTRL(a) (a)
#define arguments_CAVM_DSSX_SAC_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_cmn_ctrl
 *
 * DSS MCT common control Register
 * MCT module common control register for two channels.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_cmn_ctrl
{
    uint64_t u;
    struct cavm_dss_mctx_cmn_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t s_dfi_mct_freq_ratio  : 1;  /**< [  5:  5](SR/W) DFI to MCT clock frequency ratio:
                                                                 0x0 - 1:1.
                                                                 0x1 - 1:2. */
        uint64_t s_dfi_memory_freq_ratio : 1;/**< [  4:  4](SR/W) DFI to memory clock frequency ratio:
                                                                 0x0 - 1:2.
                                                                 0x1 - 1:4. */
        uint64_t s_ecc_type            : 1;  /**< [  3:  3](SR/W) ECC type:
                                                                 0x0- Single Beat ECC.
                                                                 0x1- Multi Beat ECC. */
        uint64_t s_data_width          : 2;  /**< [  2:  1](SR/W) Data width:
                                                                 0x0 - 64bits -- Not supported.
                                                                 0x1 - 32bits.
                                                                 0x2 - 16bits -- supported only in DDR5.
                                                                 0x3 - Reserved. */
        uint64_t s_ddr_type            : 1;  /**< [  0:  0](SR/W) DDR type:
                                                                 0x0 - DDR4.
                                                                 0x1 - DDR5. */
#else /* Word 0 - Little Endian */
        uint64_t s_ddr_type            : 1;  /**< [  0:  0](SR/W) DDR type:
                                                                 0x0 - DDR4.
                                                                 0x1 - DDR5. */
        uint64_t s_data_width          : 2;  /**< [  2:  1](SR/W) Data width:
                                                                 0x0 - 64bits -- Not supported.
                                                                 0x1 - 32bits.
                                                                 0x2 - 16bits -- supported only in DDR5.
                                                                 0x3 - Reserved. */
        uint64_t s_ecc_type            : 1;  /**< [  3:  3](SR/W) ECC type:
                                                                 0x0- Single Beat ECC.
                                                                 0x1- Multi Beat ECC. */
        uint64_t s_dfi_memory_freq_ratio : 1;/**< [  4:  4](SR/W) DFI to memory clock frequency ratio:
                                                                 0x0 - 1:2.
                                                                 0x1 - 1:4. */
        uint64_t s_dfi_mct_freq_ratio  : 1;  /**< [  5:  5](SR/W) DFI to MCT clock frequency ratio:
                                                                 0x0 - 1:1.
                                                                 0x1 - 1:2. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_cmn_ctrl_s cn; */
};
typedef union cavm_dss_mctx_cmn_ctrl cavm_dss_mctx_cmn_ctrl_t;

static inline uint64_t CAVM_DSS_MCTX_CMN_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_CMN_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_CMN_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_CMN_CTRL(a) cavm_dss_mctx_cmn_ctrl_t
#define bustype_CAVM_DSS_MCTX_CMN_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_CMN_CTRL(a) "DSS_MCTX_CMN_CTRL"
#define device_bar_CAVM_DSS_MCTX_CMN_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_CMN_CTRL(a) (a)
#define arguments_CAVM_DSS_MCTX_CMN_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_ctrl
 *
 * DSS MCT control Register
 * MCT module control register.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_ctrl
{
    uint64_t u;
    struct cavm_dss_mctx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t s_burst_chop          : 1;  /**< [ 20: 20](SR/W) When set, enable burst-chop 8 if MEMC_BURST_LENGTH=16.
                                                                 Note: only for DDR5. Not supported in DDR4 mode! */
        uint64_t s_active_ranks        : 4;  /**< [ 19: 16](SR/W) Active low register indicating which ranks are functional.
                                                                 When a specific bit is low, the corresponding rank is active. */
        uint64_t reserved_8_15         : 8;
        uint64_t s_ecc_en              : 1;  /**< [  7:  7](SR/W) Configure if ECC is enabled in this window:
                                                                 0 - ecc for current window disabled.
                                                                 1 - ecc for current window enabled. */
        uint64_t s_rd_dbi_en           : 1;  /**< [  6:  6](SR/W) Configure if read DBI is enabled in this window:
                                                                 0- Read dbi for current window disabled.
                                                                 1- Read dbi for current window enabled. */
        uint64_t s_wr_dbi_en           : 1;  /**< [  5:  5](SR/W) Configure if write DBI is enabled in this window:
                                                                 0- Write dbi for current window disabled.
                                                                 1- Write dbi for current window enabled. */
        uint64_t s_key_scramble        : 1;  /**< [  4:  4](SR/W) Key scramble with system address:
                                                                 1'b0 - The key is not scrambled.
                                                                 1'b1 - The key is scrambled. */
        uint64_t s_dfi_data_cs_polarity : 1; /**< [  3:  3](SR/W) Defines polarity of dfi_wrdata_cs and dfi_rddata_cs signals:
                                                                 1'b0 - active_low.
                                                                 1'b1 - active high. */
        uint64_t s_cmd_type            : 1;  /**< [  2:  2](SR/W) For DDR5:
                                                                 1'b0 - 2N mode.
                                                                 1'b1 - 1N mode.
                                                                 This signal must be set the same value as MR2 OP[2].
                                                                 For DDR4:
                                                                 1'b0 - 1T mode.
                                                                 1'b1 - 2T mode.
                                                                 In 2T timing, all command signals (except chip select) are held for 2 clocks on the SDRAM bus.
                                                                 Chip select is asserted on the second cycle of the command. */
        uint64_t s_burst_length        : 2;  /**< [  1:  0](SR/W) 0x0: Burst length of 8.
                                                                 0x1: Burst length of 16.
                                                                 0x2: Burst length of 32.
                                                                 0x3: Reserved.
                                                                 This controls the burst size used to access the SDRAM.
                                                                 This must match the burst length mode register setting in the SDRAM. */
#else /* Word 0 - Little Endian */
        uint64_t s_burst_length        : 2;  /**< [  1:  0](SR/W) 0x0: Burst length of 8.
                                                                 0x1: Burst length of 16.
                                                                 0x2: Burst length of 32.
                                                                 0x3: Reserved.
                                                                 This controls the burst size used to access the SDRAM.
                                                                 This must match the burst length mode register setting in the SDRAM. */
        uint64_t s_cmd_type            : 1;  /**< [  2:  2](SR/W) For DDR5:
                                                                 1'b0 - 2N mode.
                                                                 1'b1 - 1N mode.
                                                                 This signal must be set the same value as MR2 OP[2].
                                                                 For DDR4:
                                                                 1'b0 - 1T mode.
                                                                 1'b1 - 2T mode.
                                                                 In 2T timing, all command signals (except chip select) are held for 2 clocks on the SDRAM bus.
                                                                 Chip select is asserted on the second cycle of the command. */
        uint64_t s_dfi_data_cs_polarity : 1; /**< [  3:  3](SR/W) Defines polarity of dfi_wrdata_cs and dfi_rddata_cs signals:
                                                                 1'b0 - active_low.
                                                                 1'b1 - active high. */
        uint64_t s_key_scramble        : 1;  /**< [  4:  4](SR/W) Key scramble with system address:
                                                                 1'b0 - The key is not scrambled.
                                                                 1'b1 - The key is scrambled. */
        uint64_t s_wr_dbi_en           : 1;  /**< [  5:  5](SR/W) Configure if write DBI is enabled in this window:
                                                                 0- Write dbi for current window disabled.
                                                                 1- Write dbi for current window enabled. */
        uint64_t s_rd_dbi_en           : 1;  /**< [  6:  6](SR/W) Configure if read DBI is enabled in this window:
                                                                 0- Read dbi for current window disabled.
                                                                 1- Read dbi for current window enabled. */
        uint64_t s_ecc_en              : 1;  /**< [  7:  7](SR/W) Configure if ECC is enabled in this window:
                                                                 0 - ecc for current window disabled.
                                                                 1 - ecc for current window enabled. */
        uint64_t reserved_8_15         : 8;
        uint64_t s_active_ranks        : 4;  /**< [ 19: 16](SR/W) Active low register indicating which ranks are functional.
                                                                 When a specific bit is low, the corresponding rank is active. */
        uint64_t s_burst_chop          : 1;  /**< [ 20: 20](SR/W) When set, enable burst-chop 8 if MEMC_BURST_LENGTH=16.
                                                                 Note: only for DDR5. Not supported in DDR4 mode! */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_ctrl_s cn; */
};
typedef union cavm_dss_mctx_ctrl cavm_dss_mctx_ctrl_t;

static inline uint64_t CAVM_DSS_MCTX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001010ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_CTRL(a) cavm_dss_mctx_ctrl_t
#define bustype_CAVM_DSS_MCTX_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_CTRL(a) "DSS_MCTX_CTRL"
#define device_bar_CAVM_DSS_MCTX_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_CTRL(a) (a)
#define arguments_CAVM_DSS_MCTX_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_data_high
 *
 * DSS MCT SW debug data Register
 * Holds the higher bits of the debug data used for the encryption/decryption operation
 * of SW commands.
 */
union cavm_dss_mctx_dbg_sw_data_high
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_data_high_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_data_hi      : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption data.
                                                                 MCT will encrypt/decrypt this data according to operation type. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_data_hi      : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption data.
                                                                 MCT will encrypt/decrypt this data according to operation type. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_data_high_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_data_high cavm_dss_mctx_dbg_sw_data_high_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001208ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_DATA_HIGH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) cavm_dss_mctx_dbg_sw_data_high_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) "DSS_MCTX_DBG_SW_DATA_HIGH"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_DATA_HIGH(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_data_low
 *
 * DSS MCT SW debug data Register
 * Holds the lower bits of the debug data used for the encryption/decryption operation
 * of SW commands.
 */
union cavm_dss_mctx_dbg_sw_data_low
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_data_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_data_lo      : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption data.
                                                                 MCT will encrypt/decrypt this data according to operation type. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_data_lo      : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption data.
                                                                 MCT will encrypt/decrypt this data according to operation type. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_data_low_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_data_low cavm_dss_mctx_dbg_sw_data_low_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_DATA_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_DATA_LOW(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001200ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_DATA_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) cavm_dss_mctx_dbg_sw_data_low_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) "DSS_MCTX_DBG_SW_DATA_LOW"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_DATA_LOW(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_key_high
 *
 * DSS MCT SW debug KEY Register
 * Holds the higher bits of the debug key used for the encryption/decryption operation
 * of SW commands.
 */
union cavm_dss_mctx_dbg_sw_key_high
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_key_high_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_key_hi       : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption key.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_key_hi       : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption key.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_key_high_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_key_high cavm_dss_mctx_dbg_sw_key_high_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011f8ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_KEY_HIGH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) cavm_dss_mctx_dbg_sw_key_high_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) "DSS_MCTX_DBG_SW_KEY_HIGH"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_KEY_HIGH(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_key_low
 *
 * DSS MCT SW debug KEY Register
 * Holds the lower bits of the debug key used for the encryption/decryption operation
 * of SW commands.
 */
union cavm_dss_mctx_dbg_sw_key_low
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_key_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_key_lo       : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption key.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_key_lo       : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption key.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_key_low_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_key_low cavm_dss_mctx_dbg_sw_key_low_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_KEY_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_KEY_LOW(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011f0ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_KEY_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) cavm_dss_mctx_dbg_sw_key_low_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) "DSS_MCTX_DBG_SW_KEY_LOW"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_KEY_LOW(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_op_cmd_ctrl
 *
 * DSS MCT SoftWare operation control Register
 * This register is RW/HW handshake control, using DBG_* registers SW can initiate
 * encryption / decryption commands to MCT.
 */
union cavm_dss_mctx_dbg_sw_op_cmd_ctrl
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_op_cmd_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t s_sw_op_sys_addr      : 48; /**< [ 57: 10](SR/W) SW requested system address:
                                                                 When SW command is issued when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x0  - traffic
                                                                 alike operation, MCT will treat this SW command as a demand read/write operation
                                                                 with the same system address.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x0. */
        uint64_t reserved_2_9          : 8;
        uint64_t s_sw_op_behavior      : 1;  /**< [  1:  1](SR/W) SW requested behaviour:
                                                                 0x0 - traffic alike operation - MCT will encrypt/decrypt the requested data the same way
                                                                 it treats a demand read/write operation with the same system address.
                                                                 0x1 - pure software interface - MCT will encrypt/decrypt the requested data using the
                                                                 configured debug key in MCT_SW_DBG_KEY_LOW and MCT_SW_DBG_KEY_HIGH. */
        uint64_t s_sw_op_type          : 1;  /**< [  0:  0](SR/W) SW requested operation:
                                                                 0x0 - encryption operation.
                                                                 0x1 - decryption operation. */
#else /* Word 0 - Little Endian */
        uint64_t s_sw_op_type          : 1;  /**< [  0:  0](SR/W) SW requested operation:
                                                                 0x0 - encryption operation.
                                                                 0x1 - decryption operation. */
        uint64_t s_sw_op_behavior      : 1;  /**< [  1:  1](SR/W) SW requested behaviour:
                                                                 0x0 - traffic alike operation - MCT will encrypt/decrypt the requested data the same way
                                                                 it treats a demand read/write operation with the same system address.
                                                                 0x1 - pure software interface - MCT will encrypt/decrypt the requested data using the
                                                                 configured debug key in MCT_SW_DBG_KEY_LOW and MCT_SW_DBG_KEY_HIGH. */
        uint64_t reserved_2_9          : 8;
        uint64_t s_sw_op_sys_addr      : 48; /**< [ 57: 10](SR/W) SW requested system address:
                                                                 When SW command is issued when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x0  - traffic
                                                                 alike operation, MCT will treat this SW command as a demand read/write operation
                                                                 with the same system address.
                                                                 Note: this field is valid only when MCT_DBG_SW_OP_CMD_CTRL.S_sw_op_behaviour == 0x0. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_op_cmd_ctrl_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_op_cmd_ctrl cavm_dss_mctx_dbg_sw_op_cmd_ctrl_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011e8ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_OP_CMD_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) cavm_dss_mctx_dbg_sw_op_cmd_ctrl_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) "DSS_MCTX_DBG_SW_OP_CMD_CTRL"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_OP_CMD_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_op_ctrl
 *
 * DSS MCT SoftWare operation control Register
 * This register is RW/HW handshake control, using DBG_* registers SW can initiate
 * encryption / decryption commands to MCT.
 */
union cavm_dss_mctx_dbg_sw_op_ctrl
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_op_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s_run                 : 1;  /**< [  0:  0](SR/W1S/H) Run SW command. Software should write this bit to one to initiate the
                                                                 cypher operation, after initializing DBG_SW_* registers.
                                                                 The MCT clears [RUN] after the command is completes and its result is visible in
                                                                 MCT_DBG_SW_RESP_LOW and MCT_DBG_SW_RESP_HIGH. A write of zero to
                                                                 this flag might change the value of the flag but has no other effect. Software
                                                                 must only write zero to this flag when the flag is zero. */
#else /* Word 0 - Little Endian */
        uint64_t s_run                 : 1;  /**< [  0:  0](SR/W1S/H) Run SW command. Software should write this bit to one to initiate the
                                                                 cypher operation, after initializing DBG_SW_* registers.
                                                                 The MCT clears [RUN] after the command is completes and its result is visible in
                                                                 MCT_DBG_SW_RESP_LOW and MCT_DBG_SW_RESP_HIGH. A write of zero to
                                                                 this flag might change the value of the flag but has no other effect. Software
                                                                 must only write zero to this flag when the flag is zero. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_op_ctrl_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_op_ctrl cavm_dss_mctx_dbg_sw_op_ctrl_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_OP_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_OP_CTRL(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011e0ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_OP_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) cavm_dss_mctx_dbg_sw_op_ctrl_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) "DSS_MCTX_DBG_SW_OP_CTRL"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_OP_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_resp_high
 *
 * DSS MCT Software Debug Response Register
 * Holds the higher bits of the debug response data for the
 * encryption/decryption operation of SW commands.
 */
union cavm_dss_mctx_dbg_sw_resp_high
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_resp_high_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_data_hi      : 64; /**< [ 63:  0](SRO/H) bits[127:64] of encryption/decryption data.
                                                                 MCT will write the encrypted/decrypted data according to operation type to this register. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_data_hi      : 64; /**< [ 63:  0](SRO/H) bits[127:64] of encryption/decryption data.
                                                                 MCT will write the encrypted/decrypted data according to operation type to this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_resp_high_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_resp_high cavm_dss_mctx_dbg_sw_resp_high_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001218ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_RESP_HIGH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) cavm_dss_mctx_dbg_sw_resp_high_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) "DSS_MCTX_DBG_SW_RESP_HIGH"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_RESP_HIGH(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_dbg_sw_resp_low
 *
 * DSS MCT SW debug response Register
 * Holds the lower bits of the debug response data for the
 * encryption/decryption operation of SW commands.
 */
union cavm_dss_mctx_dbg_sw_resp_low
{
    uint64_t u;
    struct cavm_dss_mctx_dbg_sw_resp_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_dbg_sw_resp_lo      : 64; /**< [ 63:  0](SRO/H) bits[63:0] of encrypted/decrypted data.
                                                                 MCT will write the encrypted/decrypted data according to operation type to this register. */
#else /* Word 0 - Little Endian */
        uint64_t s_dbg_sw_resp_lo      : 64; /**< [ 63:  0](SRO/H) bits[63:0] of encrypted/decrypted data.
                                                                 MCT will write the encrypted/decrypted data according to operation type to this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_dbg_sw_resp_low_s cn; */
};
typedef union cavm_dss_mctx_dbg_sw_resp_low cavm_dss_mctx_dbg_sw_resp_low_t;

static inline uint64_t CAVM_DSS_MCTX_DBG_SW_RESP_LOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DBG_SW_RESP_LOW(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001210ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DBG_SW_RESP_LOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) cavm_dss_mctx_dbg_sw_resp_low_t
#define bustype_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) "DSS_MCTX_DBG_SW_RESP_LOW"
#define device_bar_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) (a)
#define arguments_CAVM_DSS_MCTX_DBG_SW_RESP_LOW(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_default_win_cfg
 *
 * DSS MCT default window configuration Register
 * Defines the default window configuration.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_default_win_cfg
{
    uint64_t u;
    struct cavm_dss_mctx_default_win_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t s_default_enc_en      : 1;  /**< [  0:  0](SR/W) Default encryption configuration:
                                                                 0x0: encryption disabled.
                                                                 0x1: encryption enabled. */
#else /* Word 0 - Little Endian */
        uint64_t s_default_enc_en      : 1;  /**< [  0:  0](SR/W) Default encryption configuration:
                                                                 0x0: encryption disabled.
                                                                 0x1: encryption enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_default_win_cfg_s cn; */
};
typedef union cavm_dss_mctx_default_win_cfg cavm_dss_mctx_default_win_cfg_t;

static inline uint64_t CAVM_DSS_MCTX_DEFAULT_WIN_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_DEFAULT_WIN_CFG(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001028ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_DEFAULT_WIN_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) cavm_dss_mctx_default_win_cfg_t
#define bustype_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) "DSS_MCTX_DEFAULT_WIN_CFG"
#define device_bar_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) (a)
#define arguments_CAVM_DSS_MCTX_DEFAULT_WIN_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_enable
 *
 * DSS MCT enable Register
 * MCT block enable register.
 */
union cavm_dss_mctx_enable
{
    uint64_t u;
    struct cavm_dss_mctx_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t s_mct_clk_dis         : 1;  /**< [  1:  1](SR/W) 0- MCT clock is enabled.
                                                                 1- MCT clock is disabled - power saving when MCT in bypass mode. */
        uint64_t s_mct_en              : 1;  /**< [  0:  0](SR/W) 0- mct in bypass mode.
                                                                 1- mct in functional mode. */
#else /* Word 0 - Little Endian */
        uint64_t s_mct_en              : 1;  /**< [  0:  0](SR/W) 0- mct in bypass mode.
                                                                 1- mct in functional mode. */
        uint64_t s_mct_clk_dis         : 1;  /**< [  1:  1](SR/W) 0- MCT clock is enabled.
                                                                 1- MCT clock is disabled - power saving when MCT in bypass mode. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_enable_s cn; */
};
typedef union cavm_dss_mctx_enable cavm_dss_mctx_enable_t;

static inline uint64_t CAVM_DSS_MCTX_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_ENABLE(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_ENABLE(a) cavm_dss_mctx_enable_t
#define bustype_CAVM_DSS_MCTX_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_ENABLE(a) "DSS_MCTX_ENABLE"
#define device_bar_CAVM_DSS_MCTX_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_ENABLE(a) (a)
#define arguments_CAVM_DSS_MCTX_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_int_ena_w1c
 *
 * DSS MCT Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_dss_mctx_int_ena_w1c
{
    uint64_t u;
    struct cavm_dss_mctx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
#else /* Word 0 - Little Endian */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1C/H) Reads or clears enable for DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_int_ena_w1c_s cn; */
};
typedef union cavm_dss_mctx_int_ena_w1c cavm_dss_mctx_int_ena_w1c_t;

static inline uint64_t CAVM_DSS_MCTX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_INT_ENA_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011d0ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_INT_ENA_W1C(a) cavm_dss_mctx_int_ena_w1c_t
#define bustype_CAVM_DSS_MCTX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_INT_ENA_W1C(a) "DSS_MCTX_INT_ENA_W1C"
#define device_bar_CAVM_DSS_MCTX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_DSS_MCTX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_int_ena_w1s
 *
 * DSS MCT Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_dss_mctx_int_ena_w1s
{
    uint64_t u;
    struct cavm_dss_mctx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
#else /* Word 0 - Little Endian */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1S/H) Reads or sets enable for DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_int_ena_w1s_s cn; */
};
typedef union cavm_dss_mctx_int_ena_w1s cavm_dss_mctx_int_ena_w1s_t;

static inline uint64_t CAVM_DSS_MCTX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_INT_ENA_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011d8ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_INT_ENA_W1S(a) cavm_dss_mctx_int_ena_w1s_t
#define bustype_CAVM_DSS_MCTX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_INT_ENA_W1S(a) "DSS_MCTX_INT_ENA_W1S"
#define device_bar_CAVM_DSS_MCTX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_DSS_MCTX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_int_w1c
 *
 * DSS MCT Interrupts Register
 * This register defines the crypto Interrupts.
 */
union cavm_dss_mctx_int_w1c
{
    uint64_t u;
    struct cavm_dss_mctx_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1C/H) When set, indicates there was overflow in write data FIFO. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1C/H) When set, indicates there was overflow in read FIFO. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1C/H) When set, indicates there was write access to an address
                                                                 that configured in two windows or more. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1C/H) When set, indicates there was read access to an address
                                                                 that configured in two windows or more. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1C/H) When set, indicates there was write access to not configured address */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1C/H) When set, indicates there was read access to not configured address */
#else /* Word 0 - Little Endian */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1C/H) When set, indicates there was read access to not configured address */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1C/H) When set, indicates there was write access to not configured address */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1C/H) When set, indicates there was read access to an address
                                                                 that configured in two windows or more. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1C/H) When set, indicates there was write access to an address
                                                                 that configured in two windows or more. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1C/H) When set, indicates there was overflow in read FIFO. */
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1C/H) When set, indicates there was overflow in write data FIFO. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_int_w1c_s cn; */
};
typedef union cavm_dss_mctx_int_w1c cavm_dss_mctx_int_w1c_t;

static inline uint64_t CAVM_DSS_MCTX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_INT_W1C(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011c0ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_INT_W1C(a) cavm_dss_mctx_int_w1c_t
#define bustype_CAVM_DSS_MCTX_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_INT_W1C(a) "DSS_MCTX_INT_W1C"
#define device_bar_CAVM_DSS_MCTX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_INT_W1C(a) (a)
#define arguments_CAVM_DSS_MCTX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_int_w1s
 *
 * DSS MCT Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_dss_mctx_int_w1s
{
    uint64_t u;
    struct cavm_dss_mctx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
#else /* Word 0 - Little Endian */
        uint64_t s_not_configured_read_address : 1;/**< [  0:  0](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_READ_ADDRESS]. */
        uint64_t s_not_configured_write_address : 1;/**< [  1:  1](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_NOT_CONFIGURED_WRITE_ADDRESS]. */
        uint64_t s_rd_multi_hits       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_RD_MULTI_HITS]. */
        uint64_t s_wr_multi_hits       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_WR_MULTI_HITS]. */
        uint64_t s_read_fifo_overflow  : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_READ_FIFO_OVERFLOW]. */
        uint64_t s_write_data_fifo_overflow : 1;/**< [  5:  5](SR/W1S/H) Reads or sets DSS_MCT(0..3)_INT_W1C[S_WRITE_DATA_FIFO_OVERFLOW]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_int_w1s_s cn; */
};
typedef union cavm_dss_mctx_int_w1s cavm_dss_mctx_int_w1s_t;

static inline uint64_t CAVM_DSS_MCTX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_INT_W1S(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011c8ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_INT_W1S(a) cavm_dss_mctx_int_w1s_t
#define bustype_CAVM_DSS_MCTX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_INT_W1S(a) "DSS_MCTX_INT_W1S"
#define device_bar_CAVM_DSS_MCTX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_INT_W1S(a) (a)
#define arguments_CAVM_DSS_MCTX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_key_hi
 *
 * DSS MCT KEY Register
 * Holds the higher bits of the key used for the encryption/decryption.
 */
union cavm_dss_mctx_key_hi
{
    uint64_t u;
    struct cavm_dss_mctx_key_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_key_hi              : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption key. */
#else /* Word 0 - Little Endian */
        uint64_t s_key_hi              : 64; /**< [ 63:  0](SR/W) bits[127:64] of encryption/decryption key. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_key_hi_s cn; */
};
typedef union cavm_dss_mctx_key_hi cavm_dss_mctx_key_hi_t;

static inline uint64_t CAVM_DSS_MCTX_KEY_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_KEY_HI(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001020ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_KEY_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_KEY_HI(a) cavm_dss_mctx_key_hi_t
#define bustype_CAVM_DSS_MCTX_KEY_HI(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_KEY_HI(a) "DSS_MCTX_KEY_HI"
#define device_bar_CAVM_DSS_MCTX_KEY_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_KEY_HI(a) (a)
#define arguments_CAVM_DSS_MCTX_KEY_HI(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_key_lo
 *
 * DSS MCT KEY Register
 * Holds the lower bits of the key used for the encryption/decryption.
 */
union cavm_dss_mctx_key_lo
{
    uint64_t u;
    struct cavm_dss_mctx_key_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_key_lo              : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption key. */
#else /* Word 0 - Little Endian */
        uint64_t s_key_lo              : 64; /**< [ 63:  0](SR/W) bits[63:0] of encryption/decryption key. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_key_lo_s cn; */
};
typedef union cavm_dss_mctx_key_lo cavm_dss_mctx_key_lo_t;

static inline uint64_t CAVM_DSS_MCTX_KEY_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_KEY_LO(uint64_t a)
{
    if (a<=3)
        return 0x87e03c001018ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_KEY_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_KEY_LO(a) cavm_dss_mctx_key_lo_t
#define bustype_CAVM_DSS_MCTX_KEY_LO(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_KEY_LO(a) "DSS_MCTX_KEY_LO"
#define device_bar_CAVM_DSS_MCTX_KEY_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_KEY_LO(a) (a)
#define arguments_CAVM_DSS_MCTX_KEY_LO(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_tmg_param_mc_side
 *
 * DSS MCT timing parameters - MC side Register
 * Timing parameters configured in the memory controller.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_tmg_param_mc_side
{
    uint64_t u;
    struct cavm_dss_mctx_tmg_param_mc_side_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t s_tphy_rdcslat_mc_side : 6; /**< [ 29: 24](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted. */
        uint64_t s_t_phy_rddata_en_mc_side : 6;/**< [ 23: 18](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI command interface to the
                                                                 assertion of the dfi_rddata_en signal. */
        uint64_t s_tphy_wrcslat_mc_side : 6; /**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted. */
        uint64_t s_tphy_wrlat_mc_side  : 6;  /**< [ 11:  6](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted. */
        uint64_t s_tphy_wrdata_mc_side : 6;  /**< [  5:  0](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal. */
#else /* Word 0 - Little Endian */
        uint64_t s_tphy_wrdata_mc_side : 6;  /**< [  5:  0](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal. */
        uint64_t s_tphy_wrlat_mc_side  : 6;  /**< [ 11:  6](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted. */
        uint64_t s_tphy_wrcslat_mc_side : 6; /**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted. */
        uint64_t s_t_phy_rddata_en_mc_side : 6;/**< [ 23: 18](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI command interface to the
                                                                 assertion of the dfi_rddata_en signal. */
        uint64_t s_tphy_rdcslat_mc_side : 6; /**< [ 29: 24](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_tmg_param_mc_side_s cn; */
};
typedef union cavm_dss_mctx_tmg_param_mc_side cavm_dss_mctx_tmg_param_mc_side_t;

static inline uint64_t CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011b0ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_TMG_PARAM_MC_SIDE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) cavm_dss_mctx_tmg_param_mc_side_t
#define bustype_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) "DSS_MCTX_TMG_PARAM_MC_SIDE"
#define device_bar_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) (a)
#define arguments_CAVM_DSS_MCTX_TMG_PARAM_MC_SIDE(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_tmg_param_phy_side
 *
 * DSS MCT timing parameters - PHY side Register
 * Timing parameters towards PHY on DFI interface.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_tmg_param_phy_side
{
    uint64_t u;
    struct cavm_dss_mctx_tmg_param_phy_side_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t s_tphy_rdcslat_phy_side : 6;/**< [ 29: 24](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted. */
        uint64_t s_t_phy_rddata_en_phy_side : 6;/**< [ 23: 18](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI to the
                                                                 assertion of the dfi_rddata_en signal. */
        uint64_t s_tphy_wrcslat_phy_side : 6;/**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted. */
        uint64_t s_tphy_wrlat_phy_side : 6;  /**< [ 11:  6](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted. */
        uint64_t s_tphy_wrdata_phy_side : 6; /**< [  5:  0](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal. */
#else /* Word 0 - Little Endian */
        uint64_t s_tphy_wrdata_phy_side : 6; /**< [  5:  0](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that the dfi_wrdata_en
                                                                 signal is asserted and when the associated write data
                                                                 is driven on the dfi_wrdata signal. */
        uint64_t s_tphy_wrlat_phy_side : 6;  /**< [ 11:  6](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 dfi_wrdata_en signal is asserted. */
        uint64_t s_tphy_wrcslat_phy_side : 6;/**< [ 17: 12](SR/W) This parameter specifies the number of DFI PHY
                                                                 clock cycles from the time that a write command is
                                                                 sent on the DFI command interface and when the
                                                                 associated dfi_wrdata_cs signal is asserted. */
        uint64_t s_t_phy_rddata_en_phy_side : 6;/**< [ 23: 18](SR/W) Specifies the number of DFI PHY clock cycles from
                                                                 the assertion of a read command on the DFI to the
                                                                 assertion of the dfi_rddata_en signal. */
        uint64_t s_tphy_rdcslat_phy_side : 6;/**< [ 29: 24](SR/W) Specifies the number of DFI PHY clocks between
                                                                 when a read command is sent on the DFI command
                                                                 interface and when the associated dfi_rddata_cs
                                                                 signal is asserted. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_tmg_param_phy_side_s cn; */
};
typedef union cavm_dss_mctx_tmg_param_phy_side cavm_dss_mctx_tmg_param_phy_side_t;

static inline uint64_t CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(uint64_t a)
{
    if (a<=3)
        return 0x87e03c0011b8ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("DSS_MCTX_TMG_PARAM_PHY_SIDE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) cavm_dss_mctx_tmg_param_phy_side_t
#define bustype_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) "DSS_MCTX_TMG_PARAM_PHY_SIDE"
#define device_bar_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) (a)
#define arguments_CAVM_DSS_MCTX_TMG_PARAM_PHY_SIDE(a) (a),-1,-1,-1

/**
 * Register (RSL) dss_mct#_win_addr_hi#
 *
 * DSS MCT WIN ADDR HI Register
 * This register defines the crypto high address windows.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_win_addr_hix
{
    uint64_t u;
    struct cavm_dss_mctx_win_addr_hix_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t s_win_addr_hi         : 48; /**< [ 47:  0](SR/W) Window max address */
#else /* Word 0 - Little Endian */
        uint64_t s_win_addr_hi         : 48; /**< [ 47:  0](SR/W) Window max address */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_win_addr_hix_s cn; */
};
typedef union cavm_dss_mctx_win_addr_hix cavm_dss_mctx_win_addr_hix_t;

static inline uint64_t CAVM_DSS_MCTX_WIN_ADDR_HIX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_WIN_ADDR_HIX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e03c001130ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("DSS_MCTX_WIN_ADDR_HIX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) cavm_dss_mctx_win_addr_hix_t
#define bustype_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) "DSS_MCTX_WIN_ADDR_HIX"
#define device_bar_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) (a)
#define arguments_CAVM_DSS_MCTX_WIN_ADDR_HIX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dss_mct#_win_addr_lo#
 *
 * DSS MCT WIN ADDR LO Register
 * This register defines the crypto low address windows.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_win_addr_lox
{
    uint64_t u;
    struct cavm_dss_mctx_win_addr_lox_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t s_win_addr_lo         : 48; /**< [ 47:  0](SR/W) Window base address */
#else /* Word 0 - Little Endian */
        uint64_t s_win_addr_lo         : 48; /**< [ 47:  0](SR/W) Window base address */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_win_addr_lox_s cn; */
};
typedef union cavm_dss_mctx_win_addr_lox cavm_dss_mctx_win_addr_lox_t;

static inline uint64_t CAVM_DSS_MCTX_WIN_ADDR_LOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_WIN_ADDR_LOX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e03c0010b0ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("DSS_MCTX_WIN_ADDR_LOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) cavm_dss_mctx_win_addr_lox_t
#define bustype_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) "DSS_MCTX_WIN_ADDR_LOX"
#define device_bar_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) (a)
#define arguments_CAVM_DSS_MCTX_WIN_ADDR_LOX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dss_mct#_win_ctrl#
 *
 * DSS MCT WINDOW CTRL Register
 * This register defines the crypto address windows attributes.
 * NOTE: This register should be configured only when (MCT_ENABLE.S_MCT_EN == 0) !
 */
union cavm_dss_mctx_win_ctrlx
{
    uint64_t u;
    struct cavm_dss_mctx_win_ctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t s_win_encryption_en   : 1;  /**< [  1:  1](SR/W) Configure if encryption / decryption is enabled in this window:
                                                                 0- encryption / decryption for current window disabled.
                                                                 1- encryption / decryption for current window enabled. */
        uint64_t s_win_en              : 1;  /**< [  0:  0](SR/W) Window enable:
                                                                 0 - Window disabled.
                                                                 1 - Window enabled. */
#else /* Word 0 - Little Endian */
        uint64_t s_win_en              : 1;  /**< [  0:  0](SR/W) Window enable:
                                                                 0 - Window disabled.
                                                                 1 - Window enabled. */
        uint64_t s_win_encryption_en   : 1;  /**< [  1:  1](SR/W) Configure if encryption / decryption is enabled in this window:
                                                                 0- encryption / decryption for current window disabled.
                                                                 1- encryption / decryption for current window enabled. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dss_mctx_win_ctrlx_s cn; */
};
typedef union cavm_dss_mctx_win_ctrlx cavm_dss_mctx_win_ctrlx_t;

static inline uint64_t CAVM_DSS_MCTX_WIN_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSS_MCTX_WIN_CTRLX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=15))
        return 0x87e03c001030ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("DSS_MCTX_WIN_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSS_MCTX_WIN_CTRLX(a,b) cavm_dss_mctx_win_ctrlx_t
#define bustype_CAVM_DSS_MCTX_WIN_CTRLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSS_MCTX_WIN_CTRLX(a,b) "DSS_MCTX_WIN_CTRLX"
#define device_bar_CAVM_DSS_MCTX_WIN_CTRLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSS_MCTX_WIN_CTRLX(a,b) (a)
#define arguments_CAVM_DSS_MCTX_WIN_CTRLX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_DSS_H__ */
