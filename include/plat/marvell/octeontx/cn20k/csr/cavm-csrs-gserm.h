#ifndef __CAVM_CSRS_GSERM_H__
#define __CAVM_CSRS_GSERM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * GSERM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration gserm_bar_e
 *
 * GSERM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_CHEETAH(a) (0x87e0a0000000ll + 0x1000000ll * (a))
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_CHEETAH_SIZE 0x400000ull
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_ODINMP(a) (0x87e0a0000000ll + 0x1000000ll * (a))
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_ODINMP_SIZE 0x100000ull
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_CHEETAH(a) (0x87e0a0c00000ll + 0x1000000ll * (a))
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_CHEETAH_SIZE 0x400000ull
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_ODINMP(a) (0x87e0a0f00000ll + 0x1000000ll * (a))
#define CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_ODINMP_SIZE 0x100000ull

/**
 * Enumeration gserm_int_vec_e
 *
 * GSERM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_GSERM_INT_VEC_E_GSERM_INT (0)

/**
 * Enumeration gserm_psb_acc_e
 *
 * GSERM Power Statistics Block Accumulator Enumeration
 * Enumerates the GSERM accumulators for LMC slaves, which correspond to index {b} of
 * PSBS_SYS()_ACCUM().
 */
#define CAVM_GSERM_PSB_ACC_E_RSVD0 (0)
#define CAVM_GSERM_PSB_ACC_E_RSVD1 (1)
#define CAVM_GSERM_PSB_ACC_E_RSVD2 (2)
#define CAVM_GSERM_PSB_ACC_E_RSVD3 (3)

/**
 * Enumeration gserm_psb_event_e
 *
 * GSERM Power Statistics Block Event Enumeration
 * Enumerates the event numbers for GSERM slaves, which correspond to index {b} of
 * PSBS_SYS()_EVENT()_CFG.
 */
#define CAVM_GSERM_PSB_EVENT_E_CYCLE_COUNT (0xc)
#define CAVM_GSERM_PSB_EVENT_E_LANEX_LANE_UP(a) (2 + 3 * (a))
#define CAVM_GSERM_PSB_EVENT_E_LANEX_PLL_TX_UP(a) (1 + 3 * (a))
#define CAVM_GSERM_PSB_EVENT_E_LANEX_PLL_UP(a) (0 + 3 * (a))

/**
 * Register (RSL32b) gserm#_ana_data_reg0
 *
 * GSERM Phy
 */
union cavm_gsermx_ana_data_reg0
{
    uint32_t u;
    struct cavm_gsermx_ana_data_reg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t txclk_nt_div_reset_lane : 1;/**< [  7:  7](R/W/H) Reset N-Divider For NT TX Clock Path */
        uint32_t reserved_5_6          : 2;
        uint32_t idcon_vddadata_lane   : 1;  /**< [  4:  4](R/W/H) Enable VDDA_DATA Bleeding Current */
        uint32_t local_ana_tx2rx_lpbk_en_lane : 1;/**< [  3:  3](R/W/H) Enable Internal TX To RX Analog Loopback.
                                                                 1
                                                                 Also Need To Set PU_LB_LANE=1 For Internal Loopback */
        uint32_t idcon_cur_lane        : 2;  /**< [  2:  1](R/W/H) Select VDDA_DATA Bleeding Current */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t idcon_cur_lane        : 2;  /**< [  2:  1](R/W/H) Select VDDA_DATA Bleeding Current */
        uint32_t local_ana_tx2rx_lpbk_en_lane : 1;/**< [  3:  3](R/W/H) Enable Internal TX To RX Analog Loopback.
                                                                 1
                                                                 Also Need To Set PU_LB_LANE=1 For Internal Loopback */
        uint32_t idcon_vddadata_lane   : 1;  /**< [  4:  4](R/W/H) Enable VDDA_DATA Bleeding Current */
        uint32_t reserved_5_6          : 2;
        uint32_t txclk_nt_div_reset_lane : 1;/**< [  7:  7](R/W/H) Reset N-Divider For NT TX Clock Path */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_ana_data_reg0_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t txclk_nt_div_reset_lane : 1;/**< [  7:  7](R/W/H) Reset N-Divider For NT TX Clock Path */
        uint32_t reserved_6            : 1;
        uint32_t reserved_5            : 1;
        uint32_t idcon_vddadata_lane   : 1;  /**< [  4:  4](R/W/H) Enable VDDA_DATA Bleeding Current */
        uint32_t local_ana_tx2rx_lpbk_en_lane : 1;/**< [  3:  3](R/W/H) Enable Internal TX To RX Analog Loopback.
                                                                 1
                                                                 Also Need To Set PU_LB_LANE=1 For Internal Loopback */
        uint32_t idcon_cur_lane        : 2;  /**< [  2:  1](R/W/H) Select VDDA_DATA Bleeding Current */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t idcon_cur_lane        : 2;  /**< [  2:  1](R/W/H) Select VDDA_DATA Bleeding Current */
        uint32_t local_ana_tx2rx_lpbk_en_lane : 1;/**< [  3:  3](R/W/H) Enable Internal TX To RX Analog Loopback.
                                                                 1
                                                                 Also Need To Set PU_LB_LANE=1 For Internal Loopback */
        uint32_t idcon_vddadata_lane   : 1;  /**< [  4:  4](R/W/H) Enable VDDA_DATA Bleeding Current */
        uint32_t reserved_5            : 1;
        uint32_t reserved_6            : 1;
        uint32_t txclk_nt_div_reset_lane : 1;/**< [  7:  7](R/W/H) Reset N-Divider For NT TX Clock Path */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_gsermx_ana_data_reg0 cavm_gsermx_ana_data_reg0_t;

static inline uint64_t CAVM_GSERMX_ANA_DATA_REG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_ANA_DATA_REG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0002260ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_ANA_DATA_REG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_ANA_DATA_REG0(a) cavm_gsermx_ana_data_reg0_t
#define bustype_CAVM_GSERMX_ANA_DATA_REG0(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_ANA_DATA_REG0(a) "GSERMX_ANA_DATA_REG0"
#define device_bar_CAVM_GSERMX_ANA_DATA_REG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_ANA_DATA_REG0(a) (a)
#define arguments_CAVM_GSERMX_ANA_DATA_REG0(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_anagrp_ctl1
 *
 * GSERM Analog Group Control1 Register
 * This register contains control inputs going to the ANA_GRP module.
 * Only the GSERM0 instance of GSERM is expected to make the connections.
 *
 * This register is asynchronously reset on rst__pll_dcok.
 */
union cavm_gsermx_anagrp_ctl1
{
    uint64_t u;
    struct cavm_gsermx_anagrp_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t unused                : 6;  /**< [ 63: 58](R/W) Not currently used. */
        uint64_t avdd_sel              : 3;  /**< [ 57: 55](R/W) Analog power supply select.
                                                                 Select whether AVDD is 1.2V, 1.15V, 1.1V, 1.05V, 1V, or 0.95V.
                                                                 0x0 = Reserved
                                                                 0x1 = Reserved
                                                                 0x2 = 0.95 +/- 5%.
                                                                 0x3 = 1.0 +/- 5%.
                                                                 0x4 = 1.05 +/- 5%.
                                                                 0x5 = 1.1 +/- 5%.
                                                                 0x6 = 1.15 +/- 5%.
                                                                 0x7 = 1.2 +/- 5%. */
        uint64_t cp_hvop_en            : 1;  /**< [ 54: 54](R/W) Charge-pump internal auxiliary enable.
                                                                 Used for Operational Amplifier (OPA) power supply and based on AVDD voltage level.
                                                                 0 = Disable auxiliary charge-pump, AVDD for OPA at AVDD = 1.1V or 1.2V.
                                                                 1 = Enable auxiliary charge-pump at AVDD = 0.9V or 1.0V. */
        uint64_t cp2vddrs_en           : 1;  /**< [ 53: 53](R/W) Charge-pump core voltage mode selection.
                                                                 0 = AVDD + Regulation VDDR.
                                                                 1 = Two regulation VDDRs. */
        uint64_t cp_bgref_en           : 1;  /**< [ 52: 52](R/W) Charge-pump close loop reference voltage source selection.
                                                                 When RESERVE_IN[9] = 0,
                                                                 0 = Use AVDD divide down value as reference.
                                                                 1 = Use bandgap output with hysteresis comparator as reference.
                                                                 When RESERVE_IN[9] = 1, CP_BGREF_EN = X, use bandgap output without hysteresis
                                                                 comparator as reference. */
        uint64_t cp_clp_en             : 1;  /**< [ 51: 51](R/W) Charge-pump work mode selection.
                                                                 0 = Open loop mode.
                                                                 1 = Close loop mode. */
        uint64_t sel_div_clkana        : 1;  /**< [ 50: 50](R/W) Charge-pump OSC divider ratio for output analog group CLKANA (FCLKANA).
                                                                 0 = Fosc/4.
                                                                 1 = Fosc/8. */
        uint64_t sel_div_clkbg         : 2;  /**< [ 49: 48](R/W) Charge-pump OSC divider ratio for bandgap input clock (Fbandgapclk).
                                                                 0x0 = Fosc/32.
                                                                 0x1 = Fosc/64.
                                                                 0x2 = Fosc/128.
                                                                 0x3 = Fosc/256. */
        uint64_t iosc_cp_sel           : 4;  /**< [ 47: 44](R/W) Charge-pump OSC current selection.
                                                                 The OSC current ranges from 5 uA to 20 uA,1 uA per step.
                                                                 0x0 = 5 uA.
                                                                 0x1 = 6 uA.
                                                                 [...].
                                                                 0xF = 20 uA. */
        uint64_t osc_cp_ctune          : 3;  /**< [ 43: 41](R/W) Charge-pump OSC capacitance tuning selection.
                                                                 0x0 = 0 fF.
                                                                 0x1 = 2 fF.
                                                                 0x2 = 4 fF.
                                                                 0x3 = 6 fF.
                                                                 0x4 = 8 fF.
                                                                 0x5 = 10 fF.
                                                                 0x6 = 12 fF.
                                                                 0x7 = 14 fF. */
        uint64_t vref_cp_sel           : 3;  /**< [ 40: 38](R/W) Charge-pump reference voltage selection.
                                                                 Different control bits are used for close loop and open loop work mode.

                                                                 Close loop work mode (CP_CLP_EN = 1).
                                                                 VREF_CP_SEL[2:0]  Input reference voltage  ADD1P65V_CHP.
                                                                 0x0               0.63V                    1.575V.
                                                                 0x1               0.64V                    1.6V.
                                                                 0x2               0.65V                    1.625V.
                                                                 0x3               0.66V                    1.65V.
                                                                 0x4               0.67V                    1.675V.
                                                                 0x5               0.68V                    1.7V.
                                                                 0x6               0.69V                    1.725V.
                                                                 0x7               0.7V                     1.75V.

                                                                 Open loop work mode (CP_CLP_EN = 0).
                                                                 Use AVDD_SEL[1:0] and VREF_CP_SEL[2:0] for charge-pump input voltage selection.
                                                                 VREF_CP_SEL[2:0]  AVDD_SEL[1:0]            AVDD.
                                                                 0x3               0x0                      0.9V.
                                                                 0x1               0x1                      1.0V.
                                                                 0x0               0x2                      1.1V.
                                                                 0x1               0x3                      1.2V. */
        uint64_t iop_cp_sel            : 3;  /**< [ 37: 35](R/W) OPA input current selection.
                                                                 This field affects the loop gain band width (GBW).
                                                                 0x0 = 1 uA.
                                                                 0x1 = 1.5 uA.
                                                                 0x2 = 2 uA.
                                                                 0x3 = 2.5 uA.
                                                                 0x4 = 3 uA.
                                                                 0x5 = 3.5 uA.
                                                                 0x6 = 4 uA.
                                                                 0x7 = 4.5 uA. */
        uint64_t chopper_bg_en         : 1;  /**< [ 34: 34](R/W) Notch filter, chopper clock, and ripple canceling clock enable control.
                                                                 0 = Disable notch filter, chopper clock, and ripple canceling clock.
                                                                 1 = Enable notch filter, chopper clock, and ripple canceling clock. */
        uint64_t res_trim_bg_sel       : 5;  /**< [ 33: 29](R/W) Bandgap trimming resistor variation corner select.
                                                                 Selects the resistor process variation.
                                                                 0x07 = SS resistor corner.
                                                                 0x0D = TT resistor corner.
                                                                 0x14 = FF resistor corner. */
        uint64_t vbg_sel               : 4;  /**< [ 28: 25](R/W) Bandgap output voltage select.
                                                                 0x0 = 0.60V.
                                                                 0x1 = 0.62V.
                                                                 0x2 = 0.64V.
                                                                 [...].
                                                                 0x7 = 0.74V.
                                                                 [...].
                                                                 0xC = 0.84V.
                                                                 0xD = 0.86V.
                                                                 0xE = 0.88V.
                                                                 0xF = 0.90V. */
        uint64_t icc_adj               : 2;  /**< [ 24: 23](R/W) ICC current adjust.
                                                                 Fine adjustment of ICC current.
                                                                 0x0 = 97%.
                                                                 0x1 = 100%.
                                                                 0x2 = 103%.
                                                                 0x3 = 107%. */
        uint64_t ipp_adj               : 2;  /**< [ 22: 21](R/W) IPP current adjust.
                                                                 Fine adjustment of IPP current.
                                                                 0x0 = 97%.
                                                                 0x1 = 100%.
                                                                 0x2 = 103%.
                                                                 0x3 = 107%. */
        uint64_t vddr_g2_g_short       : 1;  /**< [ 20: 20](R/W) VDDR_G2 to VDDR_G short enable.
                                                                 Short VDDR_G2 to VDDR_G.
                                                                 0x0 = Do not short VDDR_G2 to VDDR_G; recommend setting for AVDD = 1.2V.
                                                                 0x1 = Short VDDR_G2 to VDDR_G; recommended setting for AVDD = 0.9V to 1.1V. */
        uint64_t vreg_0p75v_sel        : 3;  /**< [ 19: 17](R/W) 0.75V regulator voltage select.
                                                                 When AVDD_SEL[2:0] = 0x2 to 0x4:
                                                                   0x0 = 0.575V.
                                                                   0x1 = 0.6V.
                                                                   0x2 = 0.625V.
                                                                   0x3 = 0.65V.
                                                                   0x4 = 0.675V.
                                                                   0x5 = 0.7V.
                                                                   0x6 = 0.725V.
                                                                   0x7 = 0.75V.
                                                                 When AVDD_SEL[2:0] = 0x5 to 0x7:
                                                                   0x0 = 0.65V.
                                                                   0x1 = 0.67V.
                                                                   0x2 = 0.69V.
                                                                   0x3 = 0.71V.
                                                                   0x4 = 0.73V.
                                                                   0x5 = 0.75V.
                                                                   0x6 = 0.77V.
                                                                   0x7 = 0.79V. */
        uint64_t vreg_1p0v_sel         : 2;  /**< [ 16: 15](R/W) 1.0V regulator voltage select.
                                                                 When AVDD_SEL[2:0] = 0x2 to 0x3, regulator output = AVDD.
                                                                 When AVDD_SEL[2:0] = 0x4 to 0x5:
                                                                   0x0 = 0.82V.
                                                                   0x1 = 0.84V.
                                                                   0x2 = 0.86V.
                                                                   0x3 = 0.88V.
                                                                 When AVDD_SEL[2:0] = 0x6:
                                                                   0x0 = 0.92V.
                                                                   0x1 = 0.94V.
                                                                   0x2 = 0.96V.
                                                                   0x3 = 0.98V.
                                                                 When AVDD_SEL[2:0] = 0x7:
                                                                   0x0 = 0.98V.
                                                                   0x1 = 1.0V.
                                                                   0x2 = 1.02V.
                                                                   0x3 = 1.04V. */
        uint64_t bypass                : 1;  /**< [ 14: 14](R/W) Crystal oscillator circuit (XTAL) bypass control signal.
                                                                 0 = Normal operation when the internal crystal oscillator circuit (XTAL) functions.
                                                                 1 = Crystal oscillator circuit (XTAL) is disabled, external reference clock
                                                                 drives in through XTAL_IN pad. */
        uint64_t ac_bypass_en          : 1;  /**< [ 13: 13](R/W) This pin is only valid when BYPASS = 1.
                                                                 0 = XTAL_IN is not internally biased.
                                                                 1 = XTAL_IN is internal weakly biased through a 3k-ohm resistor. */
        uint64_t gainx2                : 1;  /**< [ 12: 12](R/W) Crystal oscillator circuit (XTAL) gain control select.
                                                                 0 = 1x buffer size (crystal frequency is 15 MHz to 30 MHz).
                                                                 1 = 2x buffer size (crystal frequency is 30 MHz to 60 MHz). */
        uint64_t ixtal                 : 5;  /**< [ 11:  7](R/W) Crystal oscillator circuit (XTAL) biasing current select.
                                                                 Used for setting XTAL block biasing current.
                                                                 0x00 = 10 uA.
                                                                 0x01 = 15 uA.
                                                                 0x02 = 20 uA.
                                                                 [...].
                                                                 0x14 = 80 uA.
                                                                 [...].
                                                                 0x1F = 165 uA. */
        uint64_t pu_xtl                : 1;  /**< [  6:  6](R/W) Crystal Oscillator (XTAL) Circuit Power-up.
                                                                 0x0: Power off XTAL
                                                                 0x1: Power up XTAL */
        uint64_t refclkl1_en           : 1;  /**< [  5:  5](R/W) Long distance reference clock REFCLKL1 enable.
                                                                 0 = Disable long distance reference clock.
                                                                 1 = Enable long distance reference clock. */
        uint64_t refclkl1_sr_sel       : 2;  /**< [  4:  3](R/W) Long distance reference clock buffer REFCLKL1 slew rate control.
                                                                 0x0 = 30 ps.
                                                                 0x1 = 80 ps.
                                                                 0x2 = 110 ps.
                                                                 0x3 = 140 ps. */
        uint64_t refclkl2_en           : 1;  /**< [  2:  2](R/W) Long distance reference clock REFCLKL2 enable.
                                                                 0x0 = Disable long distance reference clock.
                                                                 0x1 = Enable long distance reference clock. */
        uint64_t refclkl2_sr_sel       : 2;  /**< [  1:  0](R/W) Long distance reference clock buffer REFCLKL2 slew rate control.
                                                                 0x0 = 30 ps.
                                                                 0x1 = 80 ps.
                                                                 0x2 = 110 ps.
                                                                 0x3 = 140 ps. */
#else /* Word 0 - Little Endian */
        uint64_t refclkl2_sr_sel       : 2;  /**< [  1:  0](R/W) Long distance reference clock buffer REFCLKL2 slew rate control.
                                                                 0x0 = 30 ps.
                                                                 0x1 = 80 ps.
                                                                 0x2 = 110 ps.
                                                                 0x3 = 140 ps. */
        uint64_t refclkl2_en           : 1;  /**< [  2:  2](R/W) Long distance reference clock REFCLKL2 enable.
                                                                 0x0 = Disable long distance reference clock.
                                                                 0x1 = Enable long distance reference clock. */
        uint64_t refclkl1_sr_sel       : 2;  /**< [  4:  3](R/W) Long distance reference clock buffer REFCLKL1 slew rate control.
                                                                 0x0 = 30 ps.
                                                                 0x1 = 80 ps.
                                                                 0x2 = 110 ps.
                                                                 0x3 = 140 ps. */
        uint64_t refclkl1_en           : 1;  /**< [  5:  5](R/W) Long distance reference clock REFCLKL1 enable.
                                                                 0 = Disable long distance reference clock.
                                                                 1 = Enable long distance reference clock. */
        uint64_t pu_xtl                : 1;  /**< [  6:  6](R/W) Crystal Oscillator (XTAL) Circuit Power-up.
                                                                 0x0: Power off XTAL
                                                                 0x1: Power up XTAL */
        uint64_t ixtal                 : 5;  /**< [ 11:  7](R/W) Crystal oscillator circuit (XTAL) biasing current select.
                                                                 Used for setting XTAL block biasing current.
                                                                 0x00 = 10 uA.
                                                                 0x01 = 15 uA.
                                                                 0x02 = 20 uA.
                                                                 [...].
                                                                 0x14 = 80 uA.
                                                                 [...].
                                                                 0x1F = 165 uA. */
        uint64_t gainx2                : 1;  /**< [ 12: 12](R/W) Crystal oscillator circuit (XTAL) gain control select.
                                                                 0 = 1x buffer size (crystal frequency is 15 MHz to 30 MHz).
                                                                 1 = 2x buffer size (crystal frequency is 30 MHz to 60 MHz). */
        uint64_t ac_bypass_en          : 1;  /**< [ 13: 13](R/W) This pin is only valid when BYPASS = 1.
                                                                 0 = XTAL_IN is not internally biased.
                                                                 1 = XTAL_IN is internal weakly biased through a 3k-ohm resistor. */
        uint64_t bypass                : 1;  /**< [ 14: 14](R/W) Crystal oscillator circuit (XTAL) bypass control signal.
                                                                 0 = Normal operation when the internal crystal oscillator circuit (XTAL) functions.
                                                                 1 = Crystal oscillator circuit (XTAL) is disabled, external reference clock
                                                                 drives in through XTAL_IN pad. */
        uint64_t vreg_1p0v_sel         : 2;  /**< [ 16: 15](R/W) 1.0V regulator voltage select.
                                                                 When AVDD_SEL[2:0] = 0x2 to 0x3, regulator output = AVDD.
                                                                 When AVDD_SEL[2:0] = 0x4 to 0x5:
                                                                   0x0 = 0.82V.
                                                                   0x1 = 0.84V.
                                                                   0x2 = 0.86V.
                                                                   0x3 = 0.88V.
                                                                 When AVDD_SEL[2:0] = 0x6:
                                                                   0x0 = 0.92V.
                                                                   0x1 = 0.94V.
                                                                   0x2 = 0.96V.
                                                                   0x3 = 0.98V.
                                                                 When AVDD_SEL[2:0] = 0x7:
                                                                   0x0 = 0.98V.
                                                                   0x1 = 1.0V.
                                                                   0x2 = 1.02V.
                                                                   0x3 = 1.04V. */
        uint64_t vreg_0p75v_sel        : 3;  /**< [ 19: 17](R/W) 0.75V regulator voltage select.
                                                                 When AVDD_SEL[2:0] = 0x2 to 0x4:
                                                                   0x0 = 0.575V.
                                                                   0x1 = 0.6V.
                                                                   0x2 = 0.625V.
                                                                   0x3 = 0.65V.
                                                                   0x4 = 0.675V.
                                                                   0x5 = 0.7V.
                                                                   0x6 = 0.725V.
                                                                   0x7 = 0.75V.
                                                                 When AVDD_SEL[2:0] = 0x5 to 0x7:
                                                                   0x0 = 0.65V.
                                                                   0x1 = 0.67V.
                                                                   0x2 = 0.69V.
                                                                   0x3 = 0.71V.
                                                                   0x4 = 0.73V.
                                                                   0x5 = 0.75V.
                                                                   0x6 = 0.77V.
                                                                   0x7 = 0.79V. */
        uint64_t vddr_g2_g_short       : 1;  /**< [ 20: 20](R/W) VDDR_G2 to VDDR_G short enable.
                                                                 Short VDDR_G2 to VDDR_G.
                                                                 0x0 = Do not short VDDR_G2 to VDDR_G; recommend setting for AVDD = 1.2V.
                                                                 0x1 = Short VDDR_G2 to VDDR_G; recommended setting for AVDD = 0.9V to 1.1V. */
        uint64_t ipp_adj               : 2;  /**< [ 22: 21](R/W) IPP current adjust.
                                                                 Fine adjustment of IPP current.
                                                                 0x0 = 97%.
                                                                 0x1 = 100%.
                                                                 0x2 = 103%.
                                                                 0x3 = 107%. */
        uint64_t icc_adj               : 2;  /**< [ 24: 23](R/W) ICC current adjust.
                                                                 Fine adjustment of ICC current.
                                                                 0x0 = 97%.
                                                                 0x1 = 100%.
                                                                 0x2 = 103%.
                                                                 0x3 = 107%. */
        uint64_t vbg_sel               : 4;  /**< [ 28: 25](R/W) Bandgap output voltage select.
                                                                 0x0 = 0.60V.
                                                                 0x1 = 0.62V.
                                                                 0x2 = 0.64V.
                                                                 [...].
                                                                 0x7 = 0.74V.
                                                                 [...].
                                                                 0xC = 0.84V.
                                                                 0xD = 0.86V.
                                                                 0xE = 0.88V.
                                                                 0xF = 0.90V. */
        uint64_t res_trim_bg_sel       : 5;  /**< [ 33: 29](R/W) Bandgap trimming resistor variation corner select.
                                                                 Selects the resistor process variation.
                                                                 0x07 = SS resistor corner.
                                                                 0x0D = TT resistor corner.
                                                                 0x14 = FF resistor corner. */
        uint64_t chopper_bg_en         : 1;  /**< [ 34: 34](R/W) Notch filter, chopper clock, and ripple canceling clock enable control.
                                                                 0 = Disable notch filter, chopper clock, and ripple canceling clock.
                                                                 1 = Enable notch filter, chopper clock, and ripple canceling clock. */
        uint64_t iop_cp_sel            : 3;  /**< [ 37: 35](R/W) OPA input current selection.
                                                                 This field affects the loop gain band width (GBW).
                                                                 0x0 = 1 uA.
                                                                 0x1 = 1.5 uA.
                                                                 0x2 = 2 uA.
                                                                 0x3 = 2.5 uA.
                                                                 0x4 = 3 uA.
                                                                 0x5 = 3.5 uA.
                                                                 0x6 = 4 uA.
                                                                 0x7 = 4.5 uA. */
        uint64_t vref_cp_sel           : 3;  /**< [ 40: 38](R/W) Charge-pump reference voltage selection.
                                                                 Different control bits are used for close loop and open loop work mode.

                                                                 Close loop work mode (CP_CLP_EN = 1).
                                                                 VREF_CP_SEL[2:0]  Input reference voltage  ADD1P65V_CHP.
                                                                 0x0               0.63V                    1.575V.
                                                                 0x1               0.64V                    1.6V.
                                                                 0x2               0.65V                    1.625V.
                                                                 0x3               0.66V                    1.65V.
                                                                 0x4               0.67V                    1.675V.
                                                                 0x5               0.68V                    1.7V.
                                                                 0x6               0.69V                    1.725V.
                                                                 0x7               0.7V                     1.75V.

                                                                 Open loop work mode (CP_CLP_EN = 0).
                                                                 Use AVDD_SEL[1:0] and VREF_CP_SEL[2:0] for charge-pump input voltage selection.
                                                                 VREF_CP_SEL[2:0]  AVDD_SEL[1:0]            AVDD.
                                                                 0x3               0x0                      0.9V.
                                                                 0x1               0x1                      1.0V.
                                                                 0x0               0x2                      1.1V.
                                                                 0x1               0x3                      1.2V. */
        uint64_t osc_cp_ctune          : 3;  /**< [ 43: 41](R/W) Charge-pump OSC capacitance tuning selection.
                                                                 0x0 = 0 fF.
                                                                 0x1 = 2 fF.
                                                                 0x2 = 4 fF.
                                                                 0x3 = 6 fF.
                                                                 0x4 = 8 fF.
                                                                 0x5 = 10 fF.
                                                                 0x6 = 12 fF.
                                                                 0x7 = 14 fF. */
        uint64_t iosc_cp_sel           : 4;  /**< [ 47: 44](R/W) Charge-pump OSC current selection.
                                                                 The OSC current ranges from 5 uA to 20 uA,1 uA per step.
                                                                 0x0 = 5 uA.
                                                                 0x1 = 6 uA.
                                                                 [...].
                                                                 0xF = 20 uA. */
        uint64_t sel_div_clkbg         : 2;  /**< [ 49: 48](R/W) Charge-pump OSC divider ratio for bandgap input clock (Fbandgapclk).
                                                                 0x0 = Fosc/32.
                                                                 0x1 = Fosc/64.
                                                                 0x2 = Fosc/128.
                                                                 0x3 = Fosc/256. */
        uint64_t sel_div_clkana        : 1;  /**< [ 50: 50](R/W) Charge-pump OSC divider ratio for output analog group CLKANA (FCLKANA).
                                                                 0 = Fosc/4.
                                                                 1 = Fosc/8. */
        uint64_t cp_clp_en             : 1;  /**< [ 51: 51](R/W) Charge-pump work mode selection.
                                                                 0 = Open loop mode.
                                                                 1 = Close loop mode. */
        uint64_t cp_bgref_en           : 1;  /**< [ 52: 52](R/W) Charge-pump close loop reference voltage source selection.
                                                                 When RESERVE_IN[9] = 0,
                                                                 0 = Use AVDD divide down value as reference.
                                                                 1 = Use bandgap output with hysteresis comparator as reference.
                                                                 When RESERVE_IN[9] = 1, CP_BGREF_EN = X, use bandgap output without hysteresis
                                                                 comparator as reference. */
        uint64_t cp2vddrs_en           : 1;  /**< [ 53: 53](R/W) Charge-pump core voltage mode selection.
                                                                 0 = AVDD + Regulation VDDR.
                                                                 1 = Two regulation VDDRs. */
        uint64_t cp_hvop_en            : 1;  /**< [ 54: 54](R/W) Charge-pump internal auxiliary enable.
                                                                 Used for Operational Amplifier (OPA) power supply and based on AVDD voltage level.
                                                                 0 = Disable auxiliary charge-pump, AVDD for OPA at AVDD = 1.1V or 1.2V.
                                                                 1 = Enable auxiliary charge-pump at AVDD = 0.9V or 1.0V. */
        uint64_t avdd_sel              : 3;  /**< [ 57: 55](R/W) Analog power supply select.
                                                                 Select whether AVDD is 1.2V, 1.15V, 1.1V, 1.05V, 1V, or 0.95V.
                                                                 0x0 = Reserved
                                                                 0x1 = Reserved
                                                                 0x2 = 0.95 +/- 5%.
                                                                 0x3 = 1.0 +/- 5%.
                                                                 0x4 = 1.05 +/- 5%.
                                                                 0x5 = 1.1 +/- 5%.
                                                                 0x6 = 1.15 +/- 5%.
                                                                 0x7 = 1.2 +/- 5%. */
        uint64_t unused                : 6;  /**< [ 63: 58](R/W) Not currently used. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_anagrp_ctl1_s cn; */
};
typedef union cavm_gsermx_anagrp_ctl1 cavm_gsermx_anagrp_ctl1_t;

static inline uint64_t CAVM_GSERMX_ANAGRP_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_ANAGRP_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800d0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800d0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_ANAGRP_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_ANAGRP_CTL1(a) cavm_gsermx_anagrp_ctl1_t
#define bustype_CAVM_GSERMX_ANAGRP_CTL1(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_ANAGRP_CTL1(a) "GSERMX_ANAGRP_CTL1"
#define device_bar_CAVM_GSERMX_ANAGRP_CTL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_ANAGRP_CTL1(a) (a)
#define arguments_CAVM_GSERMX_ANAGRP_CTL1(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_anagrp_ctl2
 *
 * GSERM Analog Group Control2 Register
 * This register contains control inputs going to the ANA_GRP module.
 * Only the GSERM0 instance of GSERM is expected to make the connections.
 *
 * This register is asynchronously reset on rst__pll_dcok.
 */
union cavm_gsermx_anagrp_ctl2
{
    uint64_t u;
    struct cavm_gsermx_anagrp_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t clkout_dig0_div_sel   : 2;  /**< [ 39: 38](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig1_div_sel   : 2;  /**< [ 37: 36](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig2_div_sel   : 2;  /**< [ 35: 34](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig3_div_sel   : 2;  /**< [ 33: 32](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t icc10u_in_sel         : 1;  /**< [ 31: 31](R/W) Free-running Ring Oscillator (RING) External ICC Biasing Current Select.
                                                                 0x0: Use internal ICC or IPP current for RING. ICC10U_IN cannot be tied low or left floating.
                                                                 0x1: Use external ICC current for RING. Feed external constant 10 uA current to ICC10U_IN.
                                                                 PIN RESERVE_IN_2[1:0] and ICC10U_IN_SEL together generate C_RING_ICC bias current */
        uint64_t pu_osc                : 1;  /**< [ 30: 30](R/W) Free-running Ring Oscillator Power-up.
                                                                 0 = Power off ring oscillator.
                                                                 1 = Power up ring oscillator. */
        uint64_t speed_osc             : 2;  /**< [ 29: 28](R/W) CLKOUT_OSC Frequency Select.
                                                                 0x0 = 7.5 MHz to 8.3 MHz.
                                                                 0x1 = 8.4 MHz to 9.4 MHz.
                                                                 0x2 = 9.5 MHz to 10.1 MHz.
                                                                 0x3 = 11.2 MHz to 13.4 MHz. */
        uint64_t reserve_in            : 10; /**< [ 27: 18](R/W) Reserved Input Register Pins.
                                                                 Connect to SoC register.

                                                                 [9]
                                                                 Charge-pump Close Loop Reference Voltage Source Selection.
                                                                 0x0: CP_BGREF_EN = 0x0: use AVDD divide down value as reference
                                                                      CP_BGREF_EN = 0x1: use bandgap output with hysteresis comparator as reference
                                                                 0x1: CP_BGREF_EN = X    use bandgap output without hysteresis comparator as reference

                                                                 [8:6]
                                                                 At BYPASS = 0:
                                                                   * When RESERVE_IN[7] = 1, RESERVE_IN[8] = x, analog clock takes clock from
                                                                 XTAL_OUT (through the Schmitt trigger)
                                                                   * When RESERVE_IN[7] = 0, RESERVE_IN[8] = 0, the analog clock takes clock from
                                                                 XTAL_OUT (not through Schmitt trigger).
                                                                   * When RESERVE_IN[7] = 0, RESERVE_IN[8] = 1, analog clock takes clock from XTAL_IN.
                                                                   * When RESERVE_IN[6] = 0, RESERVE_IN[8] = x, digital clock takes clock from
                                                                 XTAL_OUT (through Schmitt trigger)
                                                                   * When RESERVE_IN[6] = 1, RESERVE_IN[8] = 0, digital clock takes clock from
                                                                 XTAL_OUT (not through Schmitt trigger).
                                                                   * When RESERVE_IN[6] = 1, RESERVE_IN[8] = 1, digital clock takes clock from XTAL_IN.

                                                                 [5]
                                                                 Reserved.

                                                                 [4:3]
                                                                 Programmable c_reg1p2vto0p75v standby current
                                                                 0x0: 100 uA
                                                                 0x1: 200 uA
                                                                 0x2: 300 uA
                                                                 0x3: 400 uA

                                                                 [2]
                                                                 VDDR_1P0V selection
                                                                 0x0: VDDR_1P0V uses internal regulated 0.8V, 0.95V or 1.0V
                                                                 0x1: VDDR_1P0V connects to AVDD

                                                                 [1:0]
                                                                 XTAL main clock buffer selection
                                                                 0x0: 4x size, best noise performance
                                                                 0x1: 3x size
                                                                 0x2: 2x size
                                                                 0x3: 1x size, least power consumption */
        uint64_t reserve_in_2          : 12; /**< [ 17:  6](R/W) Reserved Input Register 2 Pins.

                                                                 [11:7]
                                                                 Reserved.

                                                                 [6]
                                                                 IPP Current Burst in Mode
                                                                 0X0 IPP increase +20%
                                                                 0X1 keep IPP current

                                                                 [5]
                                                                 Reserved.

                                                                 [4]
                                                                 Programmable AVDD_POR Trigger Voltage.
                                                                 0x0: AVDD rise edge trigger = 0.97V at AVDD_SEL[1:0] = 0x2
                                                                      AVDD rise edge trigger = 1.0V at AVDD_SEL[1:0] = 0x3
                                                                 0x1: AVDD rise edge trigger = 0.94V at AVDD_SEL[1:0] = 0x2
                                                                      AVDD rise edge trigger = 0.97V at AVDD_SEL[1:0] = 0x3

                                                                 [3]
                                                                 REFCLKL1/REFCLKL2 Regulator Standby Current Select.
                                                                 0x0: 100 uA
                                                                 0x1: 200 uA

                                                                 [2]
                                                                 XTAL Output Clock Delay Time Select.
                                                                 0x0: Delay time is 1024/ Fxtl
                                                                 0x1: No delay

                                                                 [1:0]
                                                                 Free-running Ring Oscillator (RING) Biasing current.
                                                                 PIN RESERVE_IN_2[1:0] and ICC10U_IN_SEL together generate C_RING_ICC bias current. */
        uint64_t test_ana              : 5;  /**< [  5:  1](R/W) Analog Test Control Bits.
                                                                 Also logic OR with JTAG TDR.
                                                                 0x0: Tristate the output. */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) Analog Group Power-up.
                                                                 Power up control for current reference.
                                                                 0x0: Power off
                                                                 0x1: Power up
                                                                 Note: also controlled by JTAG IDDQ TDR. */
#else /* Word 0 - Little Endian */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) Analog Group Power-up.
                                                                 Power up control for current reference.
                                                                 0x0: Power off
                                                                 0x1: Power up
                                                                 Note: also controlled by JTAG IDDQ TDR. */
        uint64_t test_ana              : 5;  /**< [  5:  1](R/W) Analog Test Control Bits.
                                                                 Also logic OR with JTAG TDR.
                                                                 0x0: Tristate the output. */
        uint64_t reserve_in_2          : 12; /**< [ 17:  6](R/W) Reserved Input Register 2 Pins.

                                                                 [11:7]
                                                                 Reserved.

                                                                 [6]
                                                                 IPP Current Burst in Mode
                                                                 0X0 IPP increase +20%
                                                                 0X1 keep IPP current

                                                                 [5]
                                                                 Reserved.

                                                                 [4]
                                                                 Programmable AVDD_POR Trigger Voltage.
                                                                 0x0: AVDD rise edge trigger = 0.97V at AVDD_SEL[1:0] = 0x2
                                                                      AVDD rise edge trigger = 1.0V at AVDD_SEL[1:0] = 0x3
                                                                 0x1: AVDD rise edge trigger = 0.94V at AVDD_SEL[1:0] = 0x2
                                                                      AVDD rise edge trigger = 0.97V at AVDD_SEL[1:0] = 0x3

                                                                 [3]
                                                                 REFCLKL1/REFCLKL2 Regulator Standby Current Select.
                                                                 0x0: 100 uA
                                                                 0x1: 200 uA

                                                                 [2]
                                                                 XTAL Output Clock Delay Time Select.
                                                                 0x0: Delay time is 1024/ Fxtl
                                                                 0x1: No delay

                                                                 [1:0]
                                                                 Free-running Ring Oscillator (RING) Biasing current.
                                                                 PIN RESERVE_IN_2[1:0] and ICC10U_IN_SEL together generate C_RING_ICC bias current. */
        uint64_t reserve_in            : 10; /**< [ 27: 18](R/W) Reserved Input Register Pins.
                                                                 Connect to SoC register.

                                                                 [9]
                                                                 Charge-pump Close Loop Reference Voltage Source Selection.
                                                                 0x0: CP_BGREF_EN = 0x0: use AVDD divide down value as reference
                                                                      CP_BGREF_EN = 0x1: use bandgap output with hysteresis comparator as reference
                                                                 0x1: CP_BGREF_EN = X    use bandgap output without hysteresis comparator as reference

                                                                 [8:6]
                                                                 At BYPASS = 0:
                                                                   * When RESERVE_IN[7] = 1, RESERVE_IN[8] = x, analog clock takes clock from
                                                                 XTAL_OUT (through the Schmitt trigger)
                                                                   * When RESERVE_IN[7] = 0, RESERVE_IN[8] = 0, the analog clock takes clock from
                                                                 XTAL_OUT (not through Schmitt trigger).
                                                                   * When RESERVE_IN[7] = 0, RESERVE_IN[8] = 1, analog clock takes clock from XTAL_IN.
                                                                   * When RESERVE_IN[6] = 0, RESERVE_IN[8] = x, digital clock takes clock from
                                                                 XTAL_OUT (through Schmitt trigger)
                                                                   * When RESERVE_IN[6] = 1, RESERVE_IN[8] = 0, digital clock takes clock from
                                                                 XTAL_OUT (not through Schmitt trigger).
                                                                   * When RESERVE_IN[6] = 1, RESERVE_IN[8] = 1, digital clock takes clock from XTAL_IN.

                                                                 [5]
                                                                 Reserved.

                                                                 [4:3]
                                                                 Programmable c_reg1p2vto0p75v standby current
                                                                 0x0: 100 uA
                                                                 0x1: 200 uA
                                                                 0x2: 300 uA
                                                                 0x3: 400 uA

                                                                 [2]
                                                                 VDDR_1P0V selection
                                                                 0x0: VDDR_1P0V uses internal regulated 0.8V, 0.95V or 1.0V
                                                                 0x1: VDDR_1P0V connects to AVDD

                                                                 [1:0]
                                                                 XTAL main clock buffer selection
                                                                 0x0: 4x size, best noise performance
                                                                 0x1: 3x size
                                                                 0x2: 2x size
                                                                 0x3: 1x size, least power consumption */
        uint64_t speed_osc             : 2;  /**< [ 29: 28](R/W) CLKOUT_OSC Frequency Select.
                                                                 0x0 = 7.5 MHz to 8.3 MHz.
                                                                 0x1 = 8.4 MHz to 9.4 MHz.
                                                                 0x2 = 9.5 MHz to 10.1 MHz.
                                                                 0x3 = 11.2 MHz to 13.4 MHz. */
        uint64_t pu_osc                : 1;  /**< [ 30: 30](R/W) Free-running Ring Oscillator Power-up.
                                                                 0 = Power off ring oscillator.
                                                                 1 = Power up ring oscillator. */
        uint64_t icc10u_in_sel         : 1;  /**< [ 31: 31](R/W) Free-running Ring Oscillator (RING) External ICC Biasing Current Select.
                                                                 0x0: Use internal ICC or IPP current for RING. ICC10U_IN cannot be tied low or left floating.
                                                                 0x1: Use external ICC current for RING. Feed external constant 10 uA current to ICC10U_IN.
                                                                 PIN RESERVE_IN_2[1:0] and ICC10U_IN_SEL together generate C_RING_ICC bias current */
        uint64_t clkout_dig3_div_sel   : 2;  /**< [ 33: 32](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig2_div_sel   : 2;  /**< [ 35: 34](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig1_div_sel   : 2;  /**< [ 37: 36](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig0_div_sel   : 2;  /**< [ 39: 38](R/W) Clock Division Ratio Select.
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_anagrp_ctl2_s cn; */
};
typedef union cavm_gsermx_anagrp_ctl2 cavm_gsermx_anagrp_ctl2_t;

static inline uint64_t CAVM_GSERMX_ANAGRP_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_ANAGRP_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800d8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800d8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_ANAGRP_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_ANAGRP_CTL2(a) cavm_gsermx_anagrp_ctl2_t
#define bustype_CAVM_GSERMX_ANAGRP_CTL2(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_ANAGRP_CTL2(a) "GSERMX_ANAGRP_CTL2"
#define device_bar_CAVM_GSERMX_ANAGRP_CTL2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_ANAGRP_CTL2(a) (a)
#define arguments_CAVM_GSERMX_ANAGRP_CTL2(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_common_phy_ctrl_bcfg
 *
 * GSERM PHY Common Control Register
 */
union cavm_gsermx_common_phy_ctrl_bcfg
{
    uint64_t u;
    struct cavm_gsermx_common_phy_ctrl_bcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t refclk_sel_ext        : 1;  /**< [ 47: 47](R/W) External refclk mux select for selection between REF_CLK2 (Std-Ethernet) and
                                                                 REF_CLK4(Sync-Ethernet).
                                                                   0 = REF_CLK4 (Sync-Ethernet) is selected.
                                                                   1 = REF_CLK2 (Std-Ethernet) is selected. */
        uint64_t refclk_override       : 1;  /**< [ 46: 46](R/W) Reserved. */
        uint64_t apb_reset             : 1;  /**< [ 45: 45](R/W) Reset for CPU's APB bus. Must be set to zero prior to accessing APB bus via JTAG or RSL.
                                                                   0 = APB bus reset deasserted.
                                                                   1 = APB bus reset asserted. */
        uint64_t dis_apb_csr_addr_filter : 1;/**< [ 44: 44](R/W) Set to 1 to disable the address filter that nomally blocks APB accesses for
                                                                 addresses that are not documented in this csr file. This provides a mechanism to
                                                                 allow RSL access to APB registers that may exist in the phy IP, but which
                                                                 are not documented in the IP's IPXACT register description file which
                                                                 was imported to form the APB subblock of this csr file. */
        uint64_t pmem_wr_prot          : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t reserved_41_42        : 2;
        uint64_t phy_rext_master       : 1;  /**< [ 40: 40](R/W/H) Reserved. */
        uint64_t refclk_a_oe_l         : 1;  /**< [ 39: 39](R/W/H) Reserved. */
        uint64_t refclk_b_oe_l         : 1;  /**< [ 38: 38](R/W/H) Reserved. */
        uint64_t refclk_a_oe_r         : 1;  /**< [ 37: 37](R/W/H) Reserved. */
        uint64_t refclk_b_oe_r         : 1;  /**< [ 36: 36](R/W/H) Reserved. */
        uint64_t refclk_pad_ena        : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t refclk_hiz_ena        : 1;  /**< [ 34: 34](R/W) Reserved. */
        uint64_t refclk_right_output_sel : 4;/**< [ 33: 30](R/W/H) Reserved. */
        uint64_t refclk_left_output_sel : 4; /**< [ 29: 26](R/W/H) Reserved. */
        uint64_t refclk_input_sel      : 3;  /**< [ 25: 23](R/W) Reserved. */
        uint64_t cpu_reset             : 1;  /**< [ 22: 22](R/W) Reserved. */
        uint64_t refclk_sel_en         : 4;  /**< [ 21: 18](R/W) Reference clock select enable.
                                                                 Bit i of this field controls lane i.
                                                                 0x0 = Reference clock is selected by tied value.
                                                                 0x1 = Reference clock comes from [REFCLK_SEL].
                                                                 This needs to be programmed correctly before releasing GSERM_COMMON_PHY_CTRL_BCFG[RESET]. */
        uint64_t refclk_sel            : 4;  /**< [ 17: 14](R/W) Reference clock select.
                                                                 Bit i of this field controls lane i.
                                                                 This bit has effect only when corresponding bit of [REFCLK_SEL_EN] is set.
                                                                 0x0 = For GSERM0/1 Reference clock comes from REF_CLK2 and for other GSERM
                                                                 instances Reference clock comes from REF_CLK2/REF_CLK4 based on
                                                                 [REFCLK_SEL_EXT].
                                                                 0x1 = For GSERM0/1 Reference clock comes from REF_CLK4 and for other GSERM
                                                                 instances Reference clock comes from REF_CLK3.
                                                                 This needs to be programmed correctly before releasing GSERM_COMMON_PHY_CTRL_BCFG[RESET]. */
        uint64_t spd_cfg               : 4;  /**< [ 13: 10](R/W) Speed Configuration.
                                                                   0x0 = 1 TRX has 2 PLL, TX and RX use separate PLL.
                                                                   0x1 = 1 TRX has 2 PLL, TX and RX use same PLL, the other PLL is not used.
                                                                   0x2 = 2 TRX has 2 PLL, each TRX uses separate PLL.
                                                                   0x3 = 2 TRX has 2 PLL, both TRX use the same PLL, the other PLL is not used.
                                                                   0x4 = 4 TRX has 2 PLL, TRX 0 and TRX 1 use the same PLL, TRX 2 and TRX 3 use the other PLL.
                                                                   0x5 = 4 TRX has 2 PLL, all 4 TRX use the same PLL, the other PLL is not used.
                                                                   Others: Reserved. */
        uint64_t pram_soc_en           : 1;  /**< [  9:  9](R/W) APB3 or SIF interface or PHY PRAM interface selection.
                                                                 0 = GSERM PRAM interface is selected for GSERM to read SRAM or ROM data.
                                                                 1 = APB3 or SIF interface is selected for SoC to download firmware to SRAM. */
        uint64_t direct_access_en      : 1;  /**< [  8:  8](R/W) Direct access enable.
                                                                   0 = PHY register write and read control functions run at PIN_MCU_CLK.
                                                                        Registers can be accessed when PHY MCUs are disabled or MCUs are not in IDLE or STOP mode.
                                                                   1 = PHY register write and read control functions run at PIN_PCLK or PIN_SIF_CLK.
                                                                        Registers can also be accessed all the time. */
        uint64_t fw_ready              : 1;  /**< [  7:  7](R/W) PHY firmware is downloaded by SoC.
                                                                 After SoC download PHY firmware and speed table, SoC should set FW_READY = 1.
                                                                 PRAM_SOC_EN must be 0 when this bit is set.
                                                                   0 = Firmware not ready.
                                                                   1 = Firmware ready. */
        uint64_t pu_ivref              : 1;  /**< [  6:  6](R/W) Power-on current and voltage reference.
                                                                   0 = Power off.
                                                                   1 = Power on. */
        uint64_t reserved_1_5          : 5;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) Power on reset signal, active high. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) Power on reset signal, active high. */
        uint64_t reserved_1_5          : 5;
        uint64_t pu_ivref              : 1;  /**< [  6:  6](R/W) Power-on current and voltage reference.
                                                                   0 = Power off.
                                                                   1 = Power on. */
        uint64_t fw_ready              : 1;  /**< [  7:  7](R/W) PHY firmware is downloaded by SoC.
                                                                 After SoC download PHY firmware and speed table, SoC should set FW_READY = 1.
                                                                 PRAM_SOC_EN must be 0 when this bit is set.
                                                                   0 = Firmware not ready.
                                                                   1 = Firmware ready. */
        uint64_t direct_access_en      : 1;  /**< [  8:  8](R/W) Direct access enable.
                                                                   0 = PHY register write and read control functions run at PIN_MCU_CLK.
                                                                        Registers can be accessed when PHY MCUs are disabled or MCUs are not in IDLE or STOP mode.
                                                                   1 = PHY register write and read control functions run at PIN_PCLK or PIN_SIF_CLK.
                                                                        Registers can also be accessed all the time. */
        uint64_t pram_soc_en           : 1;  /**< [  9:  9](R/W) APB3 or SIF interface or PHY PRAM interface selection.
                                                                 0 = GSERM PRAM interface is selected for GSERM to read SRAM or ROM data.
                                                                 1 = APB3 or SIF interface is selected for SoC to download firmware to SRAM. */
        uint64_t spd_cfg               : 4;  /**< [ 13: 10](R/W) Speed Configuration.
                                                                   0x0 = 1 TRX has 2 PLL, TX and RX use separate PLL.
                                                                   0x1 = 1 TRX has 2 PLL, TX and RX use same PLL, the other PLL is not used.
                                                                   0x2 = 2 TRX has 2 PLL, each TRX uses separate PLL.
                                                                   0x3 = 2 TRX has 2 PLL, both TRX use the same PLL, the other PLL is not used.
                                                                   0x4 = 4 TRX has 2 PLL, TRX 0 and TRX 1 use the same PLL, TRX 2 and TRX 3 use the other PLL.
                                                                   0x5 = 4 TRX has 2 PLL, all 4 TRX use the same PLL, the other PLL is not used.
                                                                   Others: Reserved. */
        uint64_t refclk_sel            : 4;  /**< [ 17: 14](R/W) Reference clock select.
                                                                 Bit i of this field controls lane i.
                                                                 This bit has effect only when corresponding bit of [REFCLK_SEL_EN] is set.
                                                                 0x0 = For GSERM0/1 Reference clock comes from REF_CLK2 and for other GSERM
                                                                 instances Reference clock comes from REF_CLK2/REF_CLK4 based on
                                                                 [REFCLK_SEL_EXT].
                                                                 0x1 = For GSERM0/1 Reference clock comes from REF_CLK4 and for other GSERM
                                                                 instances Reference clock comes from REF_CLK3.
                                                                 This needs to be programmed correctly before releasing GSERM_COMMON_PHY_CTRL_BCFG[RESET]. */
        uint64_t refclk_sel_en         : 4;  /**< [ 21: 18](R/W) Reference clock select enable.
                                                                 Bit i of this field controls lane i.
                                                                 0x0 = Reference clock is selected by tied value.
                                                                 0x1 = Reference clock comes from [REFCLK_SEL].
                                                                 This needs to be programmed correctly before releasing GSERM_COMMON_PHY_CTRL_BCFG[RESET]. */
        uint64_t cpu_reset             : 1;  /**< [ 22: 22](R/W) Reserved. */
        uint64_t refclk_input_sel      : 3;  /**< [ 25: 23](R/W) Reserved. */
        uint64_t refclk_left_output_sel : 4; /**< [ 29: 26](R/W/H) Reserved. */
        uint64_t refclk_right_output_sel : 4;/**< [ 33: 30](R/W/H) Reserved. */
        uint64_t refclk_hiz_ena        : 1;  /**< [ 34: 34](R/W) Reserved. */
        uint64_t refclk_pad_ena        : 1;  /**< [ 35: 35](R/W) Reserved. */
        uint64_t refclk_b_oe_r         : 1;  /**< [ 36: 36](R/W/H) Reserved. */
        uint64_t refclk_a_oe_r         : 1;  /**< [ 37: 37](R/W/H) Reserved. */
        uint64_t refclk_b_oe_l         : 1;  /**< [ 38: 38](R/W/H) Reserved. */
        uint64_t refclk_a_oe_l         : 1;  /**< [ 39: 39](R/W/H) Reserved. */
        uint64_t phy_rext_master       : 1;  /**< [ 40: 40](R/W/H) Reserved. */
        uint64_t reserved_41_42        : 2;
        uint64_t pmem_wr_prot          : 1;  /**< [ 43: 43](R/W) Reserved. */
        uint64_t dis_apb_csr_addr_filter : 1;/**< [ 44: 44](R/W) Set to 1 to disable the address filter that nomally blocks APB accesses for
                                                                 addresses that are not documented in this csr file. This provides a mechanism to
                                                                 allow RSL access to APB registers that may exist in the phy IP, but which
                                                                 are not documented in the IP's IPXACT register description file which
                                                                 was imported to form the APB subblock of this csr file. */
        uint64_t apb_reset             : 1;  /**< [ 45: 45](R/W) Reset for CPU's APB bus. Must be set to zero prior to accessing APB bus via JTAG or RSL.
                                                                   0 = APB bus reset deasserted.
                                                                   1 = APB bus reset asserted. */
        uint64_t refclk_override       : 1;  /**< [ 46: 46](R/W) Reserved. */
        uint64_t refclk_sel_ext        : 1;  /**< [ 47: 47](R/W) External refclk mux select for selection between REF_CLK2 (Std-Ethernet) and
                                                                 REF_CLK4(Sync-Ethernet).
                                                                   0 = REF_CLK4 (Sync-Ethernet) is selected.
                                                                   1 = REF_CLK2 (Std-Ethernet) is selected. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_common_phy_ctrl_bcfg_s cn; */
};
typedef union cavm_gsermx_common_phy_ctrl_bcfg cavm_gsermx_common_phy_ctrl_bcfg_t;

static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800a0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800a0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_COMMON_PHY_CTRL_BCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) cavm_gsermx_common_phy_ctrl_bcfg_t
#define bustype_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) "GSERMX_COMMON_PHY_CTRL_BCFG"
#define device_bar_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) (a)
#define arguments_CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_common_phy_ctrl_prot
 *
 * GSERM PHY Common Control Protection Register
 */
union cavm_gsermx_common_phy_ctrl_prot
{
    uint64_t u;
    struct cavm_gsermx_common_phy_ctrl_prot_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pmem_wr_prot_stky     : 1;  /**< [  0:  0](R/W1S) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pmem_wr_prot_stky     : 1;  /**< [  0:  0](R/W1S) Reserved. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_common_phy_ctrl_prot_s cn; */
};
typedef union cavm_gsermx_common_phy_ctrl_prot cavm_gsermx_common_phy_ctrl_prot_t;

static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_PROT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_PROT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800b0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800b0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_COMMON_PHY_CTRL_PROT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) cavm_gsermx_common_phy_ctrl_prot_t
#define bustype_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) "GSERMX_COMMON_PHY_CTRL_PROT"
#define device_bar_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) (a)
#define arguments_CAVM_GSERMX_COMMON_PHY_CTRL_PROT(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_common_phy_ctrl_stall
 *
 * GSERM PHY Common Control Stall Register
 */
union cavm_gsermx_common_phy_ctrl_stall
{
    uint64_t u;
    struct cavm_gsermx_common_phy_ctrl_stall_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t csr_force_stall       : 1;  /**< [  1:  1](R/W) CSR controlled stall for accesses to CPU program and data memory.
                                                                   0 = Does not assert stall to CPU program and data memory.
                                                                   1 = Asserts stall stall to CPU program and data memory. */
        uint64_t csr_mask_stall        : 1;  /**< [  0:  0](R/W) Hardware stall mask control for accesses to CPU program and data memory.
                                                                   0 = Hardware stall from RSL access is enabled.
                                                                   1 = Hardware stall from RSL access is disabled (masked). */
#else /* Word 0 - Little Endian */
        uint64_t csr_mask_stall        : 1;  /**< [  0:  0](R/W) Hardware stall mask control for accesses to CPU program and data memory.
                                                                   0 = Hardware stall from RSL access is enabled.
                                                                   1 = Hardware stall from RSL access is disabled (masked). */
        uint64_t csr_force_stall       : 1;  /**< [  1:  1](R/W) CSR controlled stall for accesses to CPU program and data memory.
                                                                   0 = Does not assert stall to CPU program and data memory.
                                                                   1 = Asserts stall stall to CPU program and data memory. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_common_phy_ctrl_stall_s cn; */
};
typedef union cavm_gsermx_common_phy_ctrl_stall cavm_gsermx_common_phy_ctrl_stall_t;

static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_STALL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_COMMON_PHY_CTRL_STALL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800c0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800c0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_COMMON_PHY_CTRL_STALL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) cavm_gsermx_common_phy_ctrl_stall_t
#define bustype_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) "GSERMX_COMMON_PHY_CTRL_STALL"
#define device_bar_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) (a)
#define arguments_CAVM_GSERMX_COMMON_PHY_CTRL_STALL(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_common_phy_status_bsts
 *
 * GSERM PHY Common Status Register
 */
union cavm_gsermx_common_phy_status_bsts
{
    uint64_t u;
    struct cavm_gsermx_common_phy_status_bsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t dig_test_bus          : 16; /**< [ 17:  2](RO/H) DTEST test output value PHY Digital Test Bus. This test pin provides internal
                                                                 status signals or flags. The maximum frequency used for this pin is 100 MHz.
                                                                 This pin must be connected to GPIO pads through combinational logic for other
                                                                 applications */
        uint64_t phy_int_out           : 1;  /**< [  1:  1](RO/H) PHY interrupt output. It is level based signal:
                                                                   0x0 = Interrupt not asserted.
                                                                   0x1 = Interrupt asserted. */
        uint64_t mem_ecc_err_cmn       : 1;  /**< [  0:  0](RO/H) PHY ECC error status:
                                                                   0x0 = No error.
                                                                   0x1 = Memory ECC Error Indicator in Common Module. */
#else /* Word 0 - Little Endian */
        uint64_t mem_ecc_err_cmn       : 1;  /**< [  0:  0](RO/H) PHY ECC error status:
                                                                   0x0 = No error.
                                                                   0x1 = Memory ECC Error Indicator in Common Module. */
        uint64_t phy_int_out           : 1;  /**< [  1:  1](RO/H) PHY interrupt output. It is level based signal:
                                                                   0x0 = Interrupt not asserted.
                                                                   0x1 = Interrupt asserted. */
        uint64_t dig_test_bus          : 16; /**< [ 17:  2](RO/H) DTEST test output value PHY Digital Test Bus. This test pin provides internal
                                                                 status signals or flags. The maximum frequency used for this pin is 100 MHz.
                                                                 This pin must be connected to GPIO pads through combinational logic for other
                                                                 applications */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_common_phy_status_bsts_s cn; */
};
typedef union cavm_gsermx_common_phy_status_bsts cavm_gsermx_common_phy_status_bsts_t;

static inline uint64_t CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081020ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081020ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_COMMON_PHY_STATUS_BSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) cavm_gsermx_common_phy_status_bsts_t
#define bustype_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) "GSERMX_COMMON_PHY_STATUS_BSTS"
#define device_bar_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) (a)
#define arguments_CAVM_GSERMX_COMMON_PHY_STATUS_BSTS(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_const
 *
 * GSERM CONST Register
 */
union cavm_gsermx_const
{
    uint64_t u;
    struct cavm_gsermx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 52; /**< [ 63: 12](RO) Reserved. */
        uint64_t mac_lanes             : 4;  /**< [ 11:  8](RO/H) Number of MAC lanes in this module.
                                                                 If 0, there are either 1 or 4 MAC lanes and the LANEx_CONTROL_SD_MUX registers map MAC lane
                                                                 X to a selected SerDes lane.
                                                                 If non-zero, indicates the number of MAC lanes, and LANEx_CONTROL_SD_MUX
                                                                 registers map SerDes lane X to a selected MAC lane. */
        uint64_t reserved_3_7          : 5;
        uint64_t nr_lanes              : 3;  /**< [  2:  0](RO/H) Number of GSERM lanes in this module. */
#else /* Word 0 - Little Endian */
        uint64_t nr_lanes              : 3;  /**< [  2:  0](RO/H) Number of GSERM lanes in this module. */
        uint64_t reserved_3_7          : 5;
        uint64_t mac_lanes             : 4;  /**< [ 11:  8](RO/H) Number of MAC lanes in this module.
                                                                 If 0, there are either 1 or 4 MAC lanes and the LANEx_CONTROL_SD_MUX registers map MAC lane
                                                                 X to a selected SerDes lane.
                                                                 If non-zero, indicates the number of MAC lanes, and LANEx_CONTROL_SD_MUX
                                                                 registers map SerDes lane X to a selected MAC lane. */
        uint64_t data                  : 52; /**< [ 63: 12](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_const_s cn; */
};
typedef union cavm_gsermx_const cavm_gsermx_const_t;

static inline uint64_t CAVM_GSERMX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0080090ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0080090ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_CONST(a) cavm_gsermx_const_t
#define bustype_CAVM_GSERMX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_CONST(a) "GSERMX_CONST"
#define device_bar_CAVM_GSERMX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_CONST(a) (a)
#define arguments_CAVM_GSERMX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_debug_sel
 *
 * GSERM Debug Select Register
 */
union cavm_gsermx_debug_sel
{
    uint64_t u;
    struct cavm_gsermx_debug_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t gpo_sel               : 3;  /**< [  9:  7](R/W) Select GPO lane. */
        uint64_t gpi_sel               : 3;  /**< [  6:  4](R/W) Select GPI lane. */
        uint64_t uart_tx_sel           : 2;  /**< [  3:  2](R/W) Select UART_TX lane. */
        uint64_t uart_rx_sel           : 2;  /**< [  1:  0](R/W) Select UART_RX lane. */
#else /* Word 0 - Little Endian */
        uint64_t uart_rx_sel           : 2;  /**< [  1:  0](R/W) Select UART_RX lane. */
        uint64_t uart_tx_sel           : 2;  /**< [  3:  2](R/W) Select UART_TX lane. */
        uint64_t gpi_sel               : 3;  /**< [  6:  4](R/W) Select GPI lane. */
        uint64_t gpo_sel               : 3;  /**< [  9:  7](R/W) Select GPO lane. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_debug_sel_s cn; */
};
typedef union cavm_gsermx_debug_sel cavm_gsermx_debug_sel_t;

static inline uint64_t CAVM_GSERMX_DEBUG_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_DEBUG_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800c8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800c8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_DEBUG_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_DEBUG_SEL(a) cavm_gsermx_debug_sel_t
#define bustype_CAVM_GSERMX_DEBUG_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_DEBUG_SEL(a) "GSERMX_DEBUG_SEL"
#define device_bar_CAVM_GSERMX_DEBUG_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_DEBUG_SEL(a) (a)
#define arguments_CAVM_GSERMX_DEBUG_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_domain_rst_en
 *
 * Domain Reset Enable Register
 */
union cavm_gsermx_domain_rst_en
{
    uint64_t u;
    struct cavm_gsermx_domain_rst_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Domain reset enable.
                                                                     0 = Prevent resetting lane logic with domain reset.
                                                                     1 = Enable resetting all lane logic, except CSRCOLD CSR subblock registers, with domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](R/W) Domain reset enable.
                                                                     0 = Prevent resetting lane logic with domain reset.
                                                                     1 = Enable resetting all lane logic, except CSRCOLD CSR subblock registers, with domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_domain_rst_en_s cn; */
};
typedef union cavm_gsermx_domain_rst_en cavm_gsermx_domain_rst_en_t;

static inline uint64_t CAVM_GSERMX_DOMAIN_RST_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_DOMAIN_RST_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0080080ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0080080ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_DOMAIN_RST_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_DOMAIN_RST_EN(a) cavm_gsermx_domain_rst_en_t
#define bustype_CAVM_GSERMX_DOMAIN_RST_EN(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_DOMAIN_RST_EN(a) "GSERMX_DOMAIN_RST_EN"
#define device_bar_CAVM_GSERMX_DOMAIN_RST_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_DOMAIN_RST_EN(a) (a)
#define arguments_CAVM_GSERMX_DOMAIN_RST_EN(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_int
 *
 * GSERM Interrupt Summary Register
 * This register contains the different interrupt summary bits of the GSERM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_gsermx_int
{
    uint64_t u;
    struct cavm_gsermx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) GSERM Interrupt Output */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) GSERM MCU Watchdog Timeout Common */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) GSERM MCU Watchdog Timeout Lane 3 */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) GSERM MCU Watchdog Timeout Lane 2 */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) GSERM MCU Watchdog Timeout Lane 1 */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) GSERM MCU Watchdog Timeout Lane 0 */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) GSERM MCU Watchdog Timeout Lane 0 */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) GSERM MCU Watchdog Timeout Lane 1 */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) GSERM MCU Watchdog Timeout Lane 2 */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) GSERM MCU Watchdog Timeout Lane 3 */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) GSERM MCU Watchdog Timeout Common */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) GSERM Interrupt Output */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_int_s cn; */
};
typedef union cavm_gsermx_int cavm_gsermx_int_t;

static inline uint64_t CAVM_GSERMX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0282000ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0082000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_INT(a) cavm_gsermx_int_t
#define bustype_CAVM_GSERMX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_INT(a) "GSERMX_INT"
#define device_bar_CAVM_GSERMX_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_INT(a) (a)
#define arguments_CAVM_GSERMX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_int_ena_w1c
 *
 * GSERM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_gsermx_int_ena_w1c
{
    uint64_t u;
    struct cavm_gsermx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_int_ena_w1c_s cheetah; */
    /* struct cavm_gsermx_int_ena_w1c_s cn20; */
    struct cavm_gsermx_int_ena_w1c_odinmp
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } odinmp;
};
typedef union cavm_gsermx_int_ena_w1c cavm_gsermx_int_ena_w1c_t;

static inline uint64_t CAVM_GSERMX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0282010ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0082010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_INT_ENA_W1C(a) cavm_gsermx_int_ena_w1c_t
#define bustype_CAVM_GSERMX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_INT_ENA_W1C(a) "GSERMX_INT_ENA_W1C"
#define device_bar_CAVM_GSERMX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_GSERMX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_int_ena_w1s
 *
 * GSERM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_gsermx_int_ena_w1s
{
    uint64_t u;
    struct cavm_gsermx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_int_ena_w1s_s cheetah; */
    /* struct cavm_gsermx_int_ena_w1s_s cn20; */
    struct cavm_gsermx_int_ena_w1s_odinmp
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } odinmp;
};
typedef union cavm_gsermx_int_ena_w1s cavm_gsermx_int_ena_w1s_t;

static inline uint64_t CAVM_GSERMX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0282018ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0082018ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_INT_ENA_W1S(a) cavm_gsermx_int_ena_w1s_t
#define bustype_CAVM_GSERMX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_INT_ENA_W1S(a) "GSERMX_INT_ENA_W1S"
#define device_bar_CAVM_GSERMX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_GSERMX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_int_w1s
 *
 * GSERM Interrupt Summary Register
 * This register sets interrupt bits.
 */
union cavm_gsermx_int_w1s
{
    uint64_t u;
    struct cavm_gsermx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets GSERM(0..2,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_int_w1s_s cheetah; */
    /* struct cavm_gsermx_int_w1s_s cn20; */
    struct cavm_gsermx_int_w1s_odinmp
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT0]. */
#else /* Word 0 - Little Endian */
        uint64_t mcu_wdt0              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT0]. */
        uint64_t mcu_wdt1              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT1]. */
        uint64_t mcu_wdt2              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT2]. */
        uint64_t mcu_wdt3              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT3]. */
        uint64_t mcu_wdt_cmn           : 1;  /**< [  4:  4](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[MCU_WDT_CMN]. */
        uint64_t phy_int_out           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets GSERM(0..5,15)_INT[PHY_INT_OUT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } odinmp;
};
typedef union cavm_gsermx_int_w1s cavm_gsermx_int_w1s_t;

static inline uint64_t CAVM_GSERMX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0282008ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0082008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_INT_W1S(a) cavm_gsermx_int_w1s_t
#define bustype_CAVM_GSERMX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_INT_W1S(a) "GSERMX_INT_W1S"
#define device_bar_CAVM_GSERMX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_INT_W1S(a) (a)
#define arguments_CAVM_GSERMX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_lane#_btsclk_cfg
 *
 * GSERM Lane BTS Synchronous Ethernet Clock Control Register
 * Register controls settings for providing a clock output from the lane which is
 * synchronous to the clock recovered from the received data stream.
 */
union cavm_gsermx_lanex_btsclk_cfg
{
    uint64_t u;
    struct cavm_gsermx_lanex_btsclk_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t en                    : 1;  /**< [ 24: 24](R/W) Enable driving the clock output from the lane. This bit should be set low before
                                                                 changing [DRATIO]; it may be written to 1 in the same cycle that [DRATIO] is
                                                                 written. */
        uint64_t reserved_18_23        : 6;
        uint64_t dratio                : 2;  /**< [ 17: 16](R/W) Divider ratio for the clock output from the lane relative to the clock for the
                                                                 parallel receive data.
                                                                 0x0 = Divide by 1, i.e., no division.
                                                                 0x1 = Divide by 2.
                                                                 0x2 = Divide by 4.
                                                                 0x3 = Divide by 8. */
        uint64_t reserved_9_15         : 7;
        uint64_t mio_en                : 1;  /**< [  8:  8](R/W) Enable driving the clock output from the lane to MIO. This bit should be set low before
                                                                 changing [MIO_DRATIO]; it may be written to 1 in the same cycle that [DRATIO] is
                                                                 written. */
        uint64_t reserved_2_7          : 6;
        uint64_t mio_dratio            : 2;  /**< [  1:  0](R/W) Divider ratio for the clock output from the lane to MIO relative to the clock for the
                                                                 parallel receive data.
                                                                 0x0 = Divide by 1, i.e., no division.
                                                                 0x1 = Divide by 2.
                                                                 0x2 = Divide by 4.
                                                                 0x3 = Divide by 8. */
#else /* Word 0 - Little Endian */
        uint64_t mio_dratio            : 2;  /**< [  1:  0](R/W) Divider ratio for the clock output from the lane to MIO relative to the clock for the
                                                                 parallel receive data.
                                                                 0x0 = Divide by 1, i.e., no division.
                                                                 0x1 = Divide by 2.
                                                                 0x2 = Divide by 4.
                                                                 0x3 = Divide by 8. */
        uint64_t reserved_2_7          : 6;
        uint64_t mio_en                : 1;  /**< [  8:  8](R/W) Enable driving the clock output from the lane to MIO. This bit should be set low before
                                                                 changing [MIO_DRATIO]; it may be written to 1 in the same cycle that [DRATIO] is
                                                                 written. */
        uint64_t reserved_9_15         : 7;
        uint64_t dratio                : 2;  /**< [ 17: 16](R/W) Divider ratio for the clock output from the lane relative to the clock for the
                                                                 parallel receive data.
                                                                 0x0 = Divide by 1, i.e., no division.
                                                                 0x1 = Divide by 2.
                                                                 0x2 = Divide by 4.
                                                                 0x3 = Divide by 8. */
        uint64_t reserved_18_23        : 6;
        uint64_t en                    : 1;  /**< [ 24: 24](R/W) Enable driving the clock output from the lane. This bit should be set low before
                                                                 changing [DRATIO]; it may be written to 1 in the same cycle that [DRATIO] is
                                                                 written. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_btsclk_cfg_s cn; */
};
typedef union cavm_gsermx_lanex_btsclk_cfg cavm_gsermx_lanex_btsclk_cfg_t;

static inline uint64_t CAVM_GSERMX_LANEX_BTSCLK_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_BTSCLK_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a00810b0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a00810b0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_BTSCLK_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) cavm_gsermx_lanex_btsclk_cfg_t
#define bustype_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) "GSERMX_LANEX_BTSCLK_CFG"
#define device_bar_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_BTSCLK_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_control_bcfg
 *
 * GSERM PHY Lane Control Register
 */
union cavm_gsermx_lanex_control_bcfg
{
    uint64_t u;
    struct cavm_gsermx_lanex_control_bcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t couple_mode_en        : 1;  /**< [ 63: 63](R/W) Couple Mode Enable.
                                                                 0x0: Couple mode is disabled.
                                                                 0x1: Couple mode is enabled. */
        uint64_t ref_fref_sel          : 5;  /**< [ 62: 58](R/W) Reference Clock Frequency Select. (unit MHz)
                                                                   0x0: 25
                                                                   0x1: 30
                                                                   0x2: 40
                                                                   0x3: 50
                                                                   0x4: 62.5
                                                                   0x5: 100
                                                                   0x6: 125
                                                                   0x7: 156.25
                                                                   Others = Reserved. */
        uint64_t jesd_mode             : 1;  /**< [ 57: 57](R/W) Reserved. Must be zero. */
        uint64_t tx_wup_order          : 1;  /**< [ 56: 56](RAZ) Reserved. */
        uint64_t rx_wpk_20b40b         : 1;  /**< [ 55: 55](RAZ) Reserved. */
        uint64_t tx_wup_40b20b         : 1;  /**< [ 54: 54](RAZ) Reserved. */
        uint64_t reverse_rx_bit_order  : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t reverse_tx_bit_order  : 1;  /**< [ 52: 52](R/W) Reserved. */
        uint64_t cgx_quad              : 1;  /**< [ 51: 51](R/W) Reserved. */
        uint64_t cgx_dual              : 1;  /**< [ 50: 50](R/W) Reserved. */
        uint64_t cfg_cgx               : 1;  /**< [ 49: 49](R/W) Reserved. */
        uint64_t reserved_46_48        : 3;
        uint64_t pin_rx_init_ovr_en    : 1;  /**< [ 45: 45](R/W) Override for PIN_RX_INIT. 0x0 = Internal Logic drives the PIN_RX_INIT. 0x1 =
                                                                 PIN_RX_INIT is driven by following bit. */
        uint64_t pin_rx_init           : 1;  /**< [ 44: 44](R/W) Receiver Initialization.
                                                                 The rising edge of the pin triggers the PHY to start an adaptation for
                                                                 Clock and Data Recovery (CDR). */
        uint64_t reserved_41_43        : 3;
        uint64_t txdclk_2x_sel         : 1;  /**< [ 40: 40](R/W) PIN_TXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_TXDCLK_4X outputs Tx Data Clock 4X.
                                                                 0x1: PIN_TXDCLK_4X outputs Tx Data Clock 2X. */
        uint64_t rxdclk_2x_sel         : 1;  /**< [ 39: 39](R/W) PIN_RXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_RXDCLK_4X outputs Rx Data Clock 4X.
                                                                 0x1: PIN_RXDCLK_4X outputs Rx Data Clock 2X. */
        uint64_t txdclk_4x_en          : 1;  /**< [ 38: 38](R/W) PIN_TXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t rxdclk_4x_en          : 1;  /**< [ 37: 37](R/W) PIN_RXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t reset_dtx_in          : 1;  /**< [ 36: 36](R/W) Reset DTX Function Input.
                                                                 Should normally be driven by hardware.
                                                                   0x0: Enable DTX function
                                                                   0x1: Disable DTX function */
        uint64_t reset_core_tx         : 1;  /**< [ 35: 35](R/W) PHY Core Reset for Tx.
                                                                 Reset for PHY core Tx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_core_rx         : 1;  /**< [ 34: 34](R/W) PHY Core Reset for Rx.
                                                                 Reset for PHY core Rx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t refclk_dis            : 1;  /**< [ 33: 33](R/W) Reference Clock Disable Request.
                                                                   0x0: Enable PHY digital reference clock.
                                                                   0x1: Request to disable PHY digital reference clock. */
        uint64_t txdata_gray_code_en   : 1;  /**< [ 32: 32](R/W) Transmit PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Tx data path.
                                                                   0x1: Enable Gray coding in Tx data path. */
        uint64_t rxdata_gray_code_en   : 1;  /**< [ 31: 31](R/W) Receive PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Rx data path.
                                                                   0x1: Enable Gray coding in Rx data path. */
        uint64_t txdata_pre_code_en    : 1;  /**< [ 30: 30](R/W) Transmit PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Tx data path.
                                                                   0x1: Enable Pre-coding in Tx data path. */
        uint64_t rxdata_pre_code_en    : 1;  /**< [ 29: 29](R/W) Receive PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Rx data path.
                                                                   0x1: Enable Pre-coding in Rx data path. */
        uint64_t phy_gen_max_tx        : 6;  /**< [ 28: 23](R/W) Tx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_max_rx        : 6;  /**< [ 22: 17](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_tx            : 6;  /**< [ 16: 11](R/W) Tx Generation Select (unit Gbps):
                                                                   0x0 = 1.0625.
                                                                   0x1 = 1.2288.
                                                                   0x2 = 1.25.
                                                                   0x3 = 2.125.
                                                                   0x4 = 2.4576.
                                                                   0x5 = 2.5.
                                                                   0x6 = 3.125.
                                                                   0x7 = 4.25.
                                                                   0x8 = 4.9152.
                                                                   0x9 = 5.
                                                                   0xA = 5.1562.
                                                                   0xB = 6.144.
                                                                   0xC = 6.25.
                                                                   0xD = 7.5.
                                                                   0xE = 8.5.
                                                                   0xF = 9.8304.
                                                                   0x10 = 10.137.
                                                                   0x11 = 10.3125.
                                                                   0x12 = 10.5188.
                                                                   0x13 = 12.1651.
                                                                   0x14 = 12.1875.
                                                                   0x15 = 12.5.
                                                                   0x16 = 12.8906.
                                                                   0x17 = 14.025.
                                                                   0x18 = 20.625.
                                                                   0x19 = 24.3302.
                                                                   0x1A = 25.7812.
                                                                   0x1B = 26.5625.
                                                                   0x1C = 27.5.
                                                                   0x1D = 28.05.
                                                                   0x1E = 28.125.
                                                                   0x20 = 46.25.
                                                                   0x22 = 51.5625.
                                                                   0x23 = 53.125.
                                                                   0x25 = 56.1.
                                                                   0x26 = 56.25.
                                                                   0x2A = 56.
                                                                   0x2E = 2.5781.
                                                                   0x2F = 15.
                                                                   Others = Reserved. */
        uint64_t phy_gen_rx            : 6;  /**< [ 10:  5](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t tx_idle               : 1;  /**< [  4:  4](R/W) Transmit enable:
                                                                   0x0 = Tx driver output is valid.
                                                                   0x1 = Tx driver is at common mode voltage (idle). */
        uint64_t pu_tx                 : 1;  /**< [  3:  3](R/W) Power-on Transmitter:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_rx                 : 1;  /**< [  2:  2](R/W) Power-on Receiver:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_pll                : 1;  /**< [  1:  1](R/W) Power-on PHY PLL:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) PHY overall power control for each lane:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
#else /* Word 0 - Little Endian */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) PHY overall power control for each lane:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_pll                : 1;  /**< [  1:  1](R/W) Power-on PHY PLL:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_rx                 : 1;  /**< [  2:  2](R/W) Power-on Receiver:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_tx                 : 1;  /**< [  3:  3](R/W) Power-on Transmitter:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t tx_idle               : 1;  /**< [  4:  4](R/W) Transmit enable:
                                                                   0x0 = Tx driver output is valid.
                                                                   0x1 = Tx driver is at common mode voltage (idle). */
        uint64_t phy_gen_rx            : 6;  /**< [ 10:  5](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_tx            : 6;  /**< [ 16: 11](R/W) Tx Generation Select (unit Gbps):
                                                                   0x0 = 1.0625.
                                                                   0x1 = 1.2288.
                                                                   0x2 = 1.25.
                                                                   0x3 = 2.125.
                                                                   0x4 = 2.4576.
                                                                   0x5 = 2.5.
                                                                   0x6 = 3.125.
                                                                   0x7 = 4.25.
                                                                   0x8 = 4.9152.
                                                                   0x9 = 5.
                                                                   0xA = 5.1562.
                                                                   0xB = 6.144.
                                                                   0xC = 6.25.
                                                                   0xD = 7.5.
                                                                   0xE = 8.5.
                                                                   0xF = 9.8304.
                                                                   0x10 = 10.137.
                                                                   0x11 = 10.3125.
                                                                   0x12 = 10.5188.
                                                                   0x13 = 12.1651.
                                                                   0x14 = 12.1875.
                                                                   0x15 = 12.5.
                                                                   0x16 = 12.8906.
                                                                   0x17 = 14.025.
                                                                   0x18 = 20.625.
                                                                   0x19 = 24.3302.
                                                                   0x1A = 25.7812.
                                                                   0x1B = 26.5625.
                                                                   0x1C = 27.5.
                                                                   0x1D = 28.05.
                                                                   0x1E = 28.125.
                                                                   0x20 = 46.25.
                                                                   0x22 = 51.5625.
                                                                   0x23 = 53.125.
                                                                   0x25 = 56.1.
                                                                   0x26 = 56.25.
                                                                   0x2A = 56.
                                                                   0x2E = 2.5781.
                                                                   0x2F = 15.
                                                                   Others = Reserved. */
        uint64_t phy_gen_max_rx        : 6;  /**< [ 22: 17](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_max_tx        : 6;  /**< [ 28: 23](R/W) Tx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t rxdata_pre_code_en    : 1;  /**< [ 29: 29](R/W) Receive PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Rx data path.
                                                                   0x1: Enable Pre-coding in Rx data path. */
        uint64_t txdata_pre_code_en    : 1;  /**< [ 30: 30](R/W) Transmit PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Tx data path.
                                                                   0x1: Enable Pre-coding in Tx data path. */
        uint64_t rxdata_gray_code_en   : 1;  /**< [ 31: 31](R/W) Receive PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Rx data path.
                                                                   0x1: Enable Gray coding in Rx data path. */
        uint64_t txdata_gray_code_en   : 1;  /**< [ 32: 32](R/W) Transmit PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Tx data path.
                                                                   0x1: Enable Gray coding in Tx data path. */
        uint64_t refclk_dis            : 1;  /**< [ 33: 33](R/W) Reference Clock Disable Request.
                                                                   0x0: Enable PHY digital reference clock.
                                                                   0x1: Request to disable PHY digital reference clock. */
        uint64_t reset_core_rx         : 1;  /**< [ 34: 34](R/W) PHY Core Reset for Rx.
                                                                 Reset for PHY core Rx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_core_tx         : 1;  /**< [ 35: 35](R/W) PHY Core Reset for Tx.
                                                                 Reset for PHY core Tx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_dtx_in          : 1;  /**< [ 36: 36](R/W) Reset DTX Function Input.
                                                                 Should normally be driven by hardware.
                                                                   0x0: Enable DTX function
                                                                   0x1: Disable DTX function */
        uint64_t rxdclk_4x_en          : 1;  /**< [ 37: 37](R/W) PIN_RXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t txdclk_4x_en          : 1;  /**< [ 38: 38](R/W) PIN_TXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t rxdclk_2x_sel         : 1;  /**< [ 39: 39](R/W) PIN_RXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_RXDCLK_4X outputs Rx Data Clock 4X.
                                                                 0x1: PIN_RXDCLK_4X outputs Rx Data Clock 2X. */
        uint64_t txdclk_2x_sel         : 1;  /**< [ 40: 40](R/W) PIN_TXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_TXDCLK_4X outputs Tx Data Clock 4X.
                                                                 0x1: PIN_TXDCLK_4X outputs Tx Data Clock 2X. */
        uint64_t reserved_41_43        : 3;
        uint64_t pin_rx_init           : 1;  /**< [ 44: 44](R/W) Receiver Initialization.
                                                                 The rising edge of the pin triggers the PHY to start an adaptation for
                                                                 Clock and Data Recovery (CDR). */
        uint64_t pin_rx_init_ovr_en    : 1;  /**< [ 45: 45](R/W) Override for PIN_RX_INIT. 0x0 = Internal Logic drives the PIN_RX_INIT. 0x1 =
                                                                 PIN_RX_INIT is driven by following bit. */
        uint64_t reserved_46_48        : 3;
        uint64_t cfg_cgx               : 1;  /**< [ 49: 49](R/W) Reserved. */
        uint64_t cgx_dual              : 1;  /**< [ 50: 50](R/W) Reserved. */
        uint64_t cgx_quad              : 1;  /**< [ 51: 51](R/W) Reserved. */
        uint64_t reverse_tx_bit_order  : 1;  /**< [ 52: 52](R/W) Reserved. */
        uint64_t reverse_rx_bit_order  : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t tx_wup_40b20b         : 1;  /**< [ 54: 54](RAZ) Reserved. */
        uint64_t rx_wpk_20b40b         : 1;  /**< [ 55: 55](RAZ) Reserved. */
        uint64_t tx_wup_order          : 1;  /**< [ 56: 56](RAZ) Reserved. */
        uint64_t jesd_mode             : 1;  /**< [ 57: 57](R/W) Reserved. Must be zero. */
        uint64_t ref_fref_sel          : 5;  /**< [ 62: 58](R/W) Reference Clock Frequency Select. (unit MHz)
                                                                   0x0: 25
                                                                   0x1: 30
                                                                   0x2: 40
                                                                   0x3: 50
                                                                   0x4: 62.5
                                                                   0x5: 100
                                                                   0x6: 125
                                                                   0x7: 156.25
                                                                   Others = Reserved. */
        uint64_t couple_mode_en        : 1;  /**< [ 63: 63](R/W) Couple Mode Enable.
                                                                 0x0: Couple mode is disabled.
                                                                 0x1: Couple mode is enabled. */
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_lanex_control_bcfg_cheetah
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t couple_mode_en        : 1;  /**< [ 63: 63](R/W) Couple Mode Enable.
                                                                 0x0: Couple mode is disabled.
                                                                 0x1: Couple mode is enabled. */
        uint64_t reserved_58_62        : 5;
        uint64_t jesd_mode             : 1;  /**< [ 57: 57](R/W) Reserved. Must be zero. */
        uint64_t tx_wup_order          : 1;  /**< [ 56: 56](RAZ) Reserved. */
        uint64_t rx_wpk_20b40b         : 1;  /**< [ 55: 55](RAZ) Reserved. */
        uint64_t tx_wup_40b20b         : 1;  /**< [ 54: 54](RAZ) Reserved. */
        uint64_t reverse_rx_bit_order  : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t reverse_tx_bit_order  : 1;  /**< [ 52: 52](R/W) Reserved. */
        uint64_t cgx_quad              : 1;  /**< [ 51: 51](R/W) Reserved. */
        uint64_t cgx_dual              : 1;  /**< [ 50: 50](R/W) Reserved. */
        uint64_t cfg_cgx               : 1;  /**< [ 49: 49](R/W) Reserved. */
        uint64_t reserved_46_48        : 3;
        uint64_t pin_rx_init_ovr_en    : 1;  /**< [ 45: 45](R/W) Override for PIN_RX_INIT. 0x0 = Internal Logic drives the PIN_RX_INIT. 0x1 =
                                                                 PIN_RX_INIT is driven by following bit. */
        uint64_t pin_rx_init           : 1;  /**< [ 44: 44](R/W) Receiver Initialization.
                                                                 The rising edge of the pin triggers the PHY to start an adaptation for
                                                                 Clock and Data Recovery (CDR). */
        uint64_t reserved_41_43        : 3;
        uint64_t txdclk_2x_sel         : 1;  /**< [ 40: 40](R/W) PIN_TXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_TXDCLK_4X outputs Tx Data Clock 4X.
                                                                 0x1: PIN_TXDCLK_4X outputs Tx Data Clock 2X. */
        uint64_t rxdclk_2x_sel         : 1;  /**< [ 39: 39](R/W) PIN_RXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_RXDCLK_4X outputs Rx Data Clock 4X.
                                                                 0x1: PIN_RXDCLK_4X outputs Rx Data Clock 2X. */
        uint64_t txdclk_4x_en          : 1;  /**< [ 38: 38](R/W) PIN_TXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t rxdclk_4x_en          : 1;  /**< [ 37: 37](R/W) PIN_RXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t reset_dtx_in          : 1;  /**< [ 36: 36](R/W) Reset DTX Function Input.
                                                                 Should normally be driven by hardware.
                                                                   0x0: Enable DTX function
                                                                   0x1: Disable DTX function */
        uint64_t reset_core_tx         : 1;  /**< [ 35: 35](R/W) PHY Core Reset for Tx.
                                                                 Reset for PHY core Tx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_core_rx         : 1;  /**< [ 34: 34](R/W) PHY Core Reset for Rx.
                                                                 Reset for PHY core Rx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t refclk_dis            : 1;  /**< [ 33: 33](R/W) Reference Clock Disable Request.
                                                                   0x0: Enable PHY digital reference clock.
                                                                   0x1: Request to disable PHY digital reference clock. */
        uint64_t txdata_gray_code_en   : 1;  /**< [ 32: 32](R/W) Transmit PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Tx data path.
                                                                   0x1: Enable Gray coding in Tx data path. */
        uint64_t rxdata_gray_code_en   : 1;  /**< [ 31: 31](R/W) Receive PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Rx data path.
                                                                   0x1: Enable Gray coding in Rx data path. */
        uint64_t txdata_pre_code_en    : 1;  /**< [ 30: 30](R/W) Transmit PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Tx data path.
                                                                   0x1: Enable Pre-coding in Tx data path. */
        uint64_t rxdata_pre_code_en    : 1;  /**< [ 29: 29](R/W) Receive PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Rx data path.
                                                                   0x1: Enable Pre-coding in Rx data path. */
        uint64_t phy_gen_max_tx        : 6;  /**< [ 28: 23](R/W) Tx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_max_rx        : 6;  /**< [ 22: 17](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t reserved_11_16        : 6;
        uint64_t reserved_5_10         : 6;
        uint64_t tx_idle               : 1;  /**< [  4:  4](R/W) Transmit enable:
                                                                   0x0 = Tx driver output is valid.
                                                                   0x1 = Tx driver is at common mode voltage (idle). */
        uint64_t pu_tx                 : 1;  /**< [  3:  3](R/W) Power-on Transmitter:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_rx                 : 1;  /**< [  2:  2](R/W) Power-on Receiver:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_pll                : 1;  /**< [  1:  1](R/W) Power-on PHY PLL:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) PHY overall power control for each lane:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
#else /* Word 0 - Little Endian */
        uint64_t pu                    : 1;  /**< [  0:  0](R/W) PHY overall power control for each lane:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_pll                : 1;  /**< [  1:  1](R/W) Power-on PHY PLL:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_rx                 : 1;  /**< [  2:  2](R/W) Power-on Receiver:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t pu_tx                 : 1;  /**< [  3:  3](R/W) Power-on Transmitter:
                                                                   0x0 = Power off.
                                                                   0x1 = Power on. */
        uint64_t tx_idle               : 1;  /**< [  4:  4](R/W) Transmit enable:
                                                                   0x0 = Tx driver output is valid.
                                                                   0x1 = Tx driver is at common mode voltage (idle). */
        uint64_t reserved_5_10         : 6;
        uint64_t reserved_11_16        : 6;
        uint64_t phy_gen_max_rx        : 6;  /**< [ 22: 17](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t phy_gen_max_tx        : 6;  /**< [ 28: 23](R/W) Tx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_TX. */
        uint64_t rxdata_pre_code_en    : 1;  /**< [ 29: 29](R/W) Receive PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Rx data path.
                                                                   0x1: Enable Pre-coding in Rx data path. */
        uint64_t txdata_pre_code_en    : 1;  /**< [ 30: 30](R/W) Transmit PAM4 Pre-code Enable.
                                                                   0x0: Disable Pre-coding in Tx data path.
                                                                   0x1: Enable Pre-coding in Tx data path. */
        uint64_t rxdata_gray_code_en   : 1;  /**< [ 31: 31](R/W) Receive PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Rx data path.
                                                                   0x1: Enable Gray coding in Rx data path. */
        uint64_t txdata_gray_code_en   : 1;  /**< [ 32: 32](R/W) Transmit PAM4 Gray Code Enable.
                                                                   0x0: Disable Gray coding in Tx data path.
                                                                   0x1: Enable Gray coding in Tx data path. */
        uint64_t refclk_dis            : 1;  /**< [ 33: 33](R/W) Reference Clock Disable Request.
                                                                   0x0: Enable PHY digital reference clock.
                                                                   0x1: Request to disable PHY digital reference clock. */
        uint64_t reset_core_rx         : 1;  /**< [ 34: 34](R/W) PHY Core Reset for Rx.
                                                                 Reset for PHY core Rx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_core_tx         : 1;  /**< [ 35: 35](R/W) PHY Core Reset for Tx.
                                                                 Reset for PHY core Tx, high level effective.
                                                                 It is not used in scan mode.
                                                                   0x0: Normal mode.
                                                                   0x1: Reset internal core logic, does not reset the registers. */
        uint64_t reset_dtx_in          : 1;  /**< [ 36: 36](R/W) Reset DTX Function Input.
                                                                 Should normally be driven by hardware.
                                                                   0x0: Enable DTX function
                                                                   0x1: Disable DTX function */
        uint64_t rxdclk_4x_en          : 1;  /**< [ 37: 37](R/W) PIN_RXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t txdclk_4x_en          : 1;  /**< [ 38: 38](R/W) PIN_TXDCLK_4X Enable. This clock is provided for use by Auto-negotiation block. */
        uint64_t rxdclk_2x_sel         : 1;  /**< [ 39: 39](R/W) PIN_RXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_RXDCLK_4X outputs Rx Data Clock 4X.
                                                                 0x1: PIN_RXDCLK_4X outputs Rx Data Clock 2X. */
        uint64_t txdclk_2x_sel         : 1;  /**< [ 40: 40](R/W) PIN_TXDCLK_4X 2X or 4X Select.
                                                                 0x0: PIN_TXDCLK_4X outputs Tx Data Clock 4X.
                                                                 0x1: PIN_TXDCLK_4X outputs Tx Data Clock 2X. */
        uint64_t reserved_41_43        : 3;
        uint64_t pin_rx_init           : 1;  /**< [ 44: 44](R/W) Receiver Initialization.
                                                                 The rising edge of the pin triggers the PHY to start an adaptation for
                                                                 Clock and Data Recovery (CDR). */
        uint64_t pin_rx_init_ovr_en    : 1;  /**< [ 45: 45](R/W) Override for PIN_RX_INIT. 0x0 = Internal Logic drives the PIN_RX_INIT. 0x1 =
                                                                 PIN_RX_INIT is driven by following bit. */
        uint64_t reserved_46_48        : 3;
        uint64_t cfg_cgx               : 1;  /**< [ 49: 49](R/W) Reserved. */
        uint64_t cgx_dual              : 1;  /**< [ 50: 50](R/W) Reserved. */
        uint64_t cgx_quad              : 1;  /**< [ 51: 51](R/W) Reserved. */
        uint64_t reverse_tx_bit_order  : 1;  /**< [ 52: 52](R/W) Reserved. */
        uint64_t reverse_rx_bit_order  : 1;  /**< [ 53: 53](R/W) Reserved. */
        uint64_t tx_wup_40b20b         : 1;  /**< [ 54: 54](RAZ) Reserved. */
        uint64_t rx_wpk_20b40b         : 1;  /**< [ 55: 55](RAZ) Reserved. */
        uint64_t tx_wup_order          : 1;  /**< [ 56: 56](RAZ) Reserved. */
        uint64_t jesd_mode             : 1;  /**< [ 57: 57](R/W) Reserved. Must be zero. */
        uint64_t reserved_58_62        : 5;
        uint64_t couple_mode_en        : 1;  /**< [ 63: 63](R/W) Couple Mode Enable.
                                                                 0x0: Couple mode is disabled.
                                                                 0x1: Couple mode is enabled. */
#endif /* Word 0 - End */
    } cheetah;
    /* struct cavm_gsermx_lanex_control_bcfg_s cn20; */
    /* struct cavm_gsermx_lanex_control_bcfg_s odinmp; */
};
typedef union cavm_gsermx_lanex_control_bcfg cavm_gsermx_lanex_control_bcfg_t;

static inline uint64_t CAVM_GSERMX_LANEX_CONTROL_BCFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_CONTROL_BCFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081030ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a0081030ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_CONTROL_BCFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) cavm_gsermx_lanex_control_bcfg_t
#define bustype_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) "GSERMX_LANEX_CONTROL_BCFG"
#define device_bar_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_CONTROL_BCFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_control_bcfg_1
 *
 * GSERM PHY Lane Control Register
 */
union cavm_gsermx_lanex_control_bcfg_1
{
    uint64_t u;
    struct cavm_gsermx_lanex_control_bcfg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t ref_fref_sel_tx       : 8;  /**< [ 35: 28](R/W) Reference Clock Frequency Select. (unit MHz) */
        uint64_t ref_fref_sel_rx       : 8;  /**< [ 27: 20](R/W) Reference Clock Frequency Select. (unit MHz)
                                                                   0x0: 25
                                                                   0x1: 30
                                                                   0x2: 40
                                                                   0x3: 50
                                                                   0x4: 62.5
                                                                   0x5: 100
                                                                   0x6: 125
                                                                   0x7: 156.25
                                                                   Others = Reserved. */
        uint64_t phy_gen_rx            : 10; /**< [ 19: 10](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_RX. */
        uint64_t phy_gen_tx            : 10; /**< [  9:  0](R/W) Tx Generation Select (unit Gbps):
                                                                   0x0 = 1.0625.
                                                                   0x1 = 1.2288.
                                                                   0x2 = 1.25.
                                                                   0x3 = 2.125.
                                                                   0x4 = 2.4576.
                                                                   0x5 = 2.5.
                                                                   0x6 = 3.125.
                                                                   0x7 = 4.25.
                                                                   0x8 = 4.9152.
                                                                   0x9 = 5.
                                                                   0xA = 5.1562.
                                                                   0xB = 6.144.
                                                                   0xC = 6.25.
                                                                   0xD = 7.5.
                                                                   0xE = 8.5.
                                                                   0xF = 9.8304.
                                                                   0x10 = 10.137.
                                                                   0x11 = 10.3125.
                                                                   0x12 = 10.5188.
                                                                   0x13 = 12.1651.
                                                                   0x14 = 12.1875.
                                                                   0x15 = 12.5.
                                                                   0x16 = 12.8906.
                                                                   0x17 = 14.025.
                                                                   0x18 = 20.625.
                                                                   0x19 = 24.3302.
                                                                   0x1A = 25.7812.
                                                                   0x1B = 26.5625.
                                                                   0x1C = 27.5.
                                                                   0x1D = 28.05.
                                                                   0x1E = 28.125.
                                                                   0x20 = 46.25.
                                                                   0x22 = 51.5625.
                                                                   0x23 = 53.125.
                                                                   0x25 = 56.1.
                                                                   0x26 = 56.25.
                                                                   0x2A = 56.
                                                                   0x2E = 2.5781.
                                                                   0x2F = 15.
                                                                   Others = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t phy_gen_tx            : 10; /**< [  9:  0](R/W) Tx Generation Select (unit Gbps):
                                                                   0x0 = 1.0625.
                                                                   0x1 = 1.2288.
                                                                   0x2 = 1.25.
                                                                   0x3 = 2.125.
                                                                   0x4 = 2.4576.
                                                                   0x5 = 2.5.
                                                                   0x6 = 3.125.
                                                                   0x7 = 4.25.
                                                                   0x8 = 4.9152.
                                                                   0x9 = 5.
                                                                   0xA = 5.1562.
                                                                   0xB = 6.144.
                                                                   0xC = 6.25.
                                                                   0xD = 7.5.
                                                                   0xE = 8.5.
                                                                   0xF = 9.8304.
                                                                   0x10 = 10.137.
                                                                   0x11 = 10.3125.
                                                                   0x12 = 10.5188.
                                                                   0x13 = 12.1651.
                                                                   0x14 = 12.1875.
                                                                   0x15 = 12.5.
                                                                   0x16 = 12.8906.
                                                                   0x17 = 14.025.
                                                                   0x18 = 20.625.
                                                                   0x19 = 24.3302.
                                                                   0x1A = 25.7812.
                                                                   0x1B = 26.5625.
                                                                   0x1C = 27.5.
                                                                   0x1D = 28.05.
                                                                   0x1E = 28.125.
                                                                   0x20 = 46.25.
                                                                   0x22 = 51.5625.
                                                                   0x23 = 53.125.
                                                                   0x25 = 56.1.
                                                                   0x26 = 56.25.
                                                                   0x2A = 56.
                                                                   0x2E = 2.5781.
                                                                   0x2F = 15.
                                                                   Others = Reserved. */
        uint64_t phy_gen_rx            : 10; /**< [ 19: 10](R/W) Rx Generation Select (unit Gbps):
                                                                   Same definition as PHY_GEN_RX. */
        uint64_t ref_fref_sel_rx       : 8;  /**< [ 27: 20](R/W) Reference Clock Frequency Select. (unit MHz)
                                                                   0x0: 25
                                                                   0x1: 30
                                                                   0x2: 40
                                                                   0x3: 50
                                                                   0x4: 62.5
                                                                   0x5: 100
                                                                   0x6: 125
                                                                   0x7: 156.25
                                                                   Others = Reserved. */
        uint64_t ref_fref_sel_tx       : 8;  /**< [ 35: 28](R/W) Reference Clock Frequency Select. (unit MHz) */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_control_bcfg_1_s cn; */
};
typedef union cavm_gsermx_lanex_control_bcfg_1 cavm_gsermx_lanex_control_bcfg_1_t;

static inline uint64_t CAVM_GSERMX_LANEX_CONTROL_BCFG_1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_CONTROL_BCFG_1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081260ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_CONTROL_BCFG_1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) cavm_gsermx_lanex_control_bcfg_1_t
#define bustype_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) "GSERMX_LANEX_CONTROL_BCFG_1"
#define device_bar_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_CONTROL_BCFG_1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_misc_ctrl_2
 *
 * GSERM MISC CTRL Registers
 */
union cavm_gsermx_lanex_misc_ctrl_2
{
    uint64_t u;
    struct cavm_gsermx_lanex_misc_ctrl_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t ned_en                : 1;  /**< [ 10: 10](R/W) Control register to enable near-end digital loopback. This works for tx to rx
                                                                 data rate of 2:1. Other ratios are not supported.
                                                                 0 = NED loopback disable.
                                                                 1 = NED loopback enable. */
        uint64_t cpri_jesd_sel         : 1;  /**< [  9:  9](R/W) Reserved. Must be one. */
        uint64_t rpm1_clk_en           : 1;  /**< [  8:  8](R/W) Clock enable for RPM1. This bit should be programmed before swizzling starts. */
        uint64_t jesd_clk_en           : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t rpm_clk_en            : 1;  /**< [  6:  6](R/W) Clock enable for RPM. This bit should be programmed before swizzling starts. */
        uint64_t chicken_bit_sigdet    : 1;  /**< [  5:  5](R/W) Chicken bit to for sigdet. */
        uint64_t lpbk_sigdet_en        : 1;  /**< [  4:  4](R/W) In LPBK mode use this bit generate sigdet. */
        uint64_t reserved_2_3          : 2;
        uint64_t rx_train_enable       : 1;  /**< [  1:  1](R/W) Receiver Training Enable. When these pins are asserted, the local PHY begins Rx
                                                                 training (receiver adaptation processes). If these pins are de-asserted before
                                                                 the assertion of PIN_RX_TRAIN_COMPLETE, the local PHY stops active receiver
                                                                 adaptation processes. After de-asserting PIN_RX_TRAIN_ENABLE, wait 10 PIN_RXDCLK
                                                                 cycles before starting another operation. These operations include - Toggling
                                                                 PIN_PU_PLL, PIN_PU_RX, PIN_PU_TX, and PIN_RX_INIT - Changing speed or - Starting
                                                                 another Tx or Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t tx_train_enable       : 1;  /**< [  0:  0](R/W) Transmitter Training Enable. When asserted, these pins indicate that the PHY
                                                                 begins local receiver adaptation and remote transmitter adaptation. The
                                                                 PIN_TXDATA must be valid when PIN_ TX_TRAIN_ENABLE is de-asserted. When de-
                                                                 asserted before the assertion of PIN_TX_TRAIN_COMPLETE, these pins indicate that
                                                                 the local PHY must cease any transmitter adaptation processes currently in
                                                                 progress. After de-asserting PIN_TX_TRAIN_ENABLE, wait 10 PIN_TXDCLK cycles
                                                                 before starting another operation, such as - Toggling PIN_PU_PLL,
                                                                 PIN_PU_RX,PIN_PU_TX, and PIN_RX_INIT, - Changing speed - Starting another Tx or
                                                                 Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
#else /* Word 0 - Little Endian */
        uint64_t tx_train_enable       : 1;  /**< [  0:  0](R/W) Transmitter Training Enable. When asserted, these pins indicate that the PHY
                                                                 begins local receiver adaptation and remote transmitter adaptation. The
                                                                 PIN_TXDATA must be valid when PIN_ TX_TRAIN_ENABLE is de-asserted. When de-
                                                                 asserted before the assertion of PIN_TX_TRAIN_COMPLETE, these pins indicate that
                                                                 the local PHY must cease any transmitter adaptation processes currently in
                                                                 progress. After de-asserting PIN_TX_TRAIN_ENABLE, wait 10 PIN_TXDCLK cycles
                                                                 before starting another operation, such as - Toggling PIN_PU_PLL,
                                                                 PIN_PU_RX,PIN_PU_TX, and PIN_RX_INIT, - Changing speed - Starting another Tx or
                                                                 Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t rx_train_enable       : 1;  /**< [  1:  1](R/W) Receiver Training Enable. When these pins are asserted, the local PHY begins Rx
                                                                 training (receiver adaptation processes). If these pins are de-asserted before
                                                                 the assertion of PIN_RX_TRAIN_COMPLETE, the local PHY stops active receiver
                                                                 adaptation processes. After de-asserting PIN_RX_TRAIN_ENABLE, wait 10 PIN_RXDCLK
                                                                 cycles before starting another operation. These operations include - Toggling
                                                                 PIN_PU_PLL, PIN_PU_RX, PIN_PU_TX, and PIN_RX_INIT - Changing speed or - Starting
                                                                 another Tx or Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t reserved_2_3          : 2;
        uint64_t lpbk_sigdet_en        : 1;  /**< [  4:  4](R/W) In LPBK mode use this bit generate sigdet. */
        uint64_t chicken_bit_sigdet    : 1;  /**< [  5:  5](R/W) Chicken bit to for sigdet. */
        uint64_t rpm_clk_en            : 1;  /**< [  6:  6](R/W) Clock enable for RPM. This bit should be programmed before swizzling starts. */
        uint64_t jesd_clk_en           : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t rpm1_clk_en           : 1;  /**< [  8:  8](R/W) Clock enable for RPM1. This bit should be programmed before swizzling starts. */
        uint64_t cpri_jesd_sel         : 1;  /**< [  9:  9](R/W) Reserved. Must be one. */
        uint64_t ned_en                : 1;  /**< [ 10: 10](R/W) Control register to enable near-end digital loopback. This works for tx to rx
                                                                 data rate of 2:1. Other ratios are not supported.
                                                                 0 = NED loopback disable.
                                                                 1 = NED loopback enable. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_misc_ctrl_2_s cn; */
};
typedef union cavm_gsermx_lanex_misc_ctrl_2 cavm_gsermx_lanex_misc_ctrl_2_t;

static inline uint64_t CAVM_GSERMX_LANEX_MISC_CTRL_2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_MISC_CTRL_2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a00810f0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_MISC_CTRL_2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) cavm_gsermx_lanex_misc_ctrl_2_t
#define bustype_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) "GSERMX_LANEX_MISC_CTRL_2"
#define device_bar_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_MISC_CTRL_2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_pin_rsvd_input_rx
 *
 * GSERM PIN_RESERVED_INPUT_RX Register
 */
union cavm_gsermx_lanex_pin_rsvd_input_rx
{
    uint64_t u;
    struct cavm_gsermx_lanex_pin_rsvd_input_rx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t pin_reserved_input_rx : 16; /**< [ 15:  0](R/W) Reserved Input Pins for Rx. */
#else /* Word 0 - Little Endian */
        uint64_t pin_reserved_input_rx : 16; /**< [ 15:  0](R/W) Reserved Input Pins for Rx. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_pin_rsvd_input_rx_s cn; */
};
typedef union cavm_gsermx_lanex_pin_rsvd_input_rx cavm_gsermx_lanex_pin_rsvd_input_rx_t;

static inline uint64_t CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081168ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_PIN_RSVD_INPUT_RX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) cavm_gsermx_lanex_pin_rsvd_input_rx_t
#define bustype_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) "GSERMX_LANEX_PIN_RSVD_INPUT_RX"
#define device_bar_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_PIN_RSVD_INPUT_RX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_status_bsts
 *
 * GSERM PHY Lane Status Register
 */
union cavm_gsermx_lanex_status_bsts
{
    uint64_t u;
    struct cavm_gsermx_lanex_status_bsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t pin_sq_detected_lpf   : 1;  /**< [  7:  7](RO/H) Squelch Detector Output after Low Pass Filter (LPF).
                                                                 0x0 = Differential of PIN_RXP/PIN_RXN is detected.
                                                                 0x1 = No differential of PIN_RXP/PIN_RXN is detected.
                                                                 For details refer to Squelch Detection. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t reset_core_ack_tx     : 1;  /**< [  6:  6](RO/H) PHY Core Reset Acknowledge for Tx.
                                                                 This pin indicates if the Core Reset Tx procedure is done. After
                                                                 RESET_CORE_TX is triggered, PHY should not be
                                                                 programmed before RESET_CORE_ACK_TX goes to high.
                                                                 0x0: The Tx core reset procedure is not done.
                                                                 0x1: The Tx core reset procedure is done. */
        uint64_t reset_core_ack_rx     : 1;  /**< [  5:  5](RO/H) PHY Core Reset Acknowledge for Rx.
                                                                 This pin indicates if the Core Reset Rx procedure is done. After
                                                                 RESET_CORE_RX is triggered, PHY should not be
                                                                 programmed before RESET_CORE_ACK_RX goes to high.
                                                                 0x0: The Rx core reset procedure is not done.
                                                                 0x1: The Rx core reset procedure is done. */
        uint64_t mem_ecc_err           : 1;  /**< [  4:  4](RO/H) Memory ECC Error Indicator in Lane Module. */
        uint64_t rx_init_done          : 1;  /**< [  3:  3](RO/H) Receiver Initialization Done. They are level signal. the PHY DTL has entered
                                                                 optimized states. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t sigdet                : 1;  /**< [  2:  2](RO/H) Signal detect, active high. This is inverse of Phy pin SQ_DETECTED_LPF. */
        uint64_t pll_ready_tx          : 1;  /**< [  1:  1](RO/H) PLL Ready for Tx.
                                                                 Indicates the PHY Tx clock is ready and Tx can send out data. */
        uint64_t pll_ready_rx          : 1;  /**< [  0:  0](RO/H) PLL Ready for Rx.
                                                                 Indicates that the PHY Rx clock is ready and PIN_RX_INIT can be asserted. */
#else /* Word 0 - Little Endian */
        uint64_t pll_ready_rx          : 1;  /**< [  0:  0](RO/H) PLL Ready for Rx.
                                                                 Indicates that the PHY Rx clock is ready and PIN_RX_INIT can be asserted. */
        uint64_t pll_ready_tx          : 1;  /**< [  1:  1](RO/H) PLL Ready for Tx.
                                                                 Indicates the PHY Tx clock is ready and Tx can send out data. */
        uint64_t sigdet                : 1;  /**< [  2:  2](RO/H) Signal detect, active high. This is inverse of Phy pin SQ_DETECTED_LPF. */
        uint64_t rx_init_done          : 1;  /**< [  3:  3](RO/H) Receiver Initialization Done. They are level signal. the PHY DTL has entered
                                                                 optimized states. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t mem_ecc_err           : 1;  /**< [  4:  4](RO/H) Memory ECC Error Indicator in Lane Module. */
        uint64_t reset_core_ack_rx     : 1;  /**< [  5:  5](RO/H) PHY Core Reset Acknowledge for Rx.
                                                                 This pin indicates if the Core Reset Rx procedure is done. After
                                                                 RESET_CORE_RX is triggered, PHY should not be
                                                                 programmed before RESET_CORE_ACK_RX goes to high.
                                                                 0x0: The Rx core reset procedure is not done.
                                                                 0x1: The Rx core reset procedure is done. */
        uint64_t reset_core_ack_tx     : 1;  /**< [  6:  6](RO/H) PHY Core Reset Acknowledge for Tx.
                                                                 This pin indicates if the Core Reset Tx procedure is done. After
                                                                 RESET_CORE_TX is triggered, PHY should not be
                                                                 programmed before RESET_CORE_ACK_TX goes to high.
                                                                 0x0: The Tx core reset procedure is not done.
                                                                 0x1: The Tx core reset procedure is done. */
        uint64_t pin_sq_detected_lpf   : 1;  /**< [  7:  7](RO/H) Squelch Detector Output after Low Pass Filter (LPF).
                                                                 0x0 = Differential of PIN_RXP/PIN_RXN is detected.
                                                                 0x1 = No differential of PIN_RXP/PIN_RXN is detected.
                                                                 For details refer to Squelch Detection. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_status_bsts_s cn; */
};
typedef union cavm_gsermx_lanex_status_bsts cavm_gsermx_lanex_status_bsts_t;

static inline uint64_t CAVM_GSERMX_LANEX_STATUS_BSTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_STATUS_BSTS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081070ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a0081070ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_STATUS_BSTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) cavm_gsermx_lanex_status_bsts_t
#define bustype_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) "GSERMX_LANEX_STATUS_BSTS"
#define device_bar_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_STATUS_BSTS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_tx_rx_train_sts
 *
 * GSERM TX_TRAIN_STATUS Registers
 */
union cavm_gsermx_lanex_tx_rx_train_sts
{
    uint64_t u;
    struct cavm_gsermx_lanex_tx_rx_train_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t rx_train_complete     : 1;  /**< [  6:  6](RO/H) Receiver Training Complete. When these pins are asserted, it indicates the local
                                                                 PHY has completed receiver adaptation process. These pins are asserted when Rx
                                                                 training is complete, and it is deasserted when PIN_RX_TRAIN_ENABLE is de-
                                                                 asserted. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t rx_train_failed       : 1;  /**< [  5:  5](RO/H) Receiver Training Failed. These pins are valid when PIN_RX_TRAIN_COMPLETE is
                                                                 asserted. These pins indicate that the local PHY has encountered a problem
                                                                 during training or that the PHY could not converge. When PIN_PIPE_SEL = 0x1,
                                                                 output of these pins is invalid. */
        uint64_t tx_train_complete     : 1;  /**< [  4:  4](RO/H) Transmitter Training Complete. In non-link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of both the
                                                                 local PHY and remote PHY have finished. In link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of the local
                                                                 PHY has finished. These pins are asserted when Tx training is complete, and they
                                                                 are deasserted when PIN_TX_TRAIN_ENABLE = 0x0. When PIN_PIPE_SEL = 0x1, output
                                                                 of these pins is invalid. */
        uint64_t tx_train_failed       : 1;  /**< [  3:  3](RO/H) Transmitter Training Failed. These pins are valid when PIN_TX_ TRAIN_COMPLETE is
                                                                 asserted. They indicate that the local PHY has encountered a problem during
                                                                 training or could not converge. PIN_TX_TRAIN_FAILED deasserts when
                                                                 PIN_TX_TRAIN_ENABLE = 0x0. PIN_TX_TRAIN_ERROR[1:0] determines 4 error cases
                                                                 which can cause Tx training to fail. When PIN_PIPE_SEL = 0x1, output of these
                                                                 pins is invalid. */
        uint64_t tx_train_error        : 2;  /**< [  2:  1](RO/H) Tx Training Failure Error Types. Valid when PIN_TX_TRAIN_COMPLETE is asserted.
                                                                 These pins indicate which error has occurred when PIN_TX_TRAIN_FAILED = 0x1.
                                                                 These pins go to low when PIN_TX_TRAIN_ENABLE = 0x0. There are 4 error cases
                                                                 which can cause Tx training failure. This is only for SAS-4 application. 0x0 =
                                                                 Pattern lock lost timer expires (only valid when bit LINK_TRAIN_MODE_LANE is 0).
                                                                 0x1 = Tx training has finished, but signal eye quality does not qualify for data
                                                                 transfer. 0x2 = Local training could not finish within MTTT timer. Timer based
                                                                 on field TRX_TRAIN_TIMER_LANE[15:0]. 0x3 = Did not get complete status from
                                                                 remote PHY within MTTT timer. Timer based on field TRX_TRAIN_TIMER_LANE[15:0].
                                                                 When PIN_PIPE_SEL = 0x1, output of these pins is invalid.. */
        uint64_t tx_train_frame_lock_detected : 1;/**< [  0:  0](RO/H) Transmitter Training Frame Marker Detected. 0x0 = Frame marker not detected. 0x1
                                                                 = These pins indicate that a Tx training frame marker has been detected. The
                                                                 Dwords on the following 8 cycles contain the Manchester-encoded control and
                                                                 status frames from the attached host, aligned within +-2 bits. These pins are 1
                                                                 clock cycle width pulse. When PIN_PIPE_SEL = 0x1, output of these pins is
                                                                 invalid. */
#else /* Word 0 - Little Endian */
        uint64_t tx_train_frame_lock_detected : 1;/**< [  0:  0](RO/H) Transmitter Training Frame Marker Detected. 0x0 = Frame marker not detected. 0x1
                                                                 = These pins indicate that a Tx training frame marker has been detected. The
                                                                 Dwords on the following 8 cycles contain the Manchester-encoded control and
                                                                 status frames from the attached host, aligned within +-2 bits. These pins are 1
                                                                 clock cycle width pulse. When PIN_PIPE_SEL = 0x1, output of these pins is
                                                                 invalid. */
        uint64_t tx_train_error        : 2;  /**< [  2:  1](RO/H) Tx Training Failure Error Types. Valid when PIN_TX_TRAIN_COMPLETE is asserted.
                                                                 These pins indicate which error has occurred when PIN_TX_TRAIN_FAILED = 0x1.
                                                                 These pins go to low when PIN_TX_TRAIN_ENABLE = 0x0. There are 4 error cases
                                                                 which can cause Tx training failure. This is only for SAS-4 application. 0x0 =
                                                                 Pattern lock lost timer expires (only valid when bit LINK_TRAIN_MODE_LANE is 0).
                                                                 0x1 = Tx training has finished, but signal eye quality does not qualify for data
                                                                 transfer. 0x2 = Local training could not finish within MTTT timer. Timer based
                                                                 on field TRX_TRAIN_TIMER_LANE[15:0]. 0x3 = Did not get complete status from
                                                                 remote PHY within MTTT timer. Timer based on field TRX_TRAIN_TIMER_LANE[15:0].
                                                                 When PIN_PIPE_SEL = 0x1, output of these pins is invalid.. */
        uint64_t tx_train_failed       : 1;  /**< [  3:  3](RO/H) Transmitter Training Failed. These pins are valid when PIN_TX_ TRAIN_COMPLETE is
                                                                 asserted. They indicate that the local PHY has encountered a problem during
                                                                 training or could not converge. PIN_TX_TRAIN_FAILED deasserts when
                                                                 PIN_TX_TRAIN_ENABLE = 0x0. PIN_TX_TRAIN_ERROR[1:0] determines 4 error cases
                                                                 which can cause Tx training to fail. When PIN_PIPE_SEL = 0x1, output of these
                                                                 pins is invalid. */
        uint64_t tx_train_complete     : 1;  /**< [  4:  4](RO/H) Transmitter Training Complete. In non-link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of both the
                                                                 local PHY and remote PHY have finished. In link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of the local
                                                                 PHY has finished. These pins are asserted when Tx training is complete, and they
                                                                 are deasserted when PIN_TX_TRAIN_ENABLE = 0x0. When PIN_PIPE_SEL = 0x1, output
                                                                 of these pins is invalid. */
        uint64_t rx_train_failed       : 1;  /**< [  5:  5](RO/H) Receiver Training Failed. These pins are valid when PIN_RX_TRAIN_COMPLETE is
                                                                 asserted. These pins indicate that the local PHY has encountered a problem
                                                                 during training or that the PHY could not converge. When PIN_PIPE_SEL = 0x1,
                                                                 output of these pins is invalid. */
        uint64_t rx_train_complete     : 1;  /**< [  6:  6](RO/H) Receiver Training Complete. When these pins are asserted, it indicates the local
                                                                 PHY has completed receiver adaptation process. These pins are asserted when Rx
                                                                 training is complete, and it is deasserted when PIN_RX_TRAIN_ENABLE is de-
                                                                 asserted. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_tx_rx_train_sts_s cn; */
};
typedef union cavm_gsermx_lanex_tx_rx_train_sts cavm_gsermx_lanex_tx_rx_train_sts_t;

static inline uint64_t CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081120ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_TX_RX_TRAIN_STS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) cavm_gsermx_lanex_tx_rx_train_sts_t
#define bustype_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) "GSERMX_LANEX_TX_RX_TRAIN_STS"
#define device_bar_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_TX_RX_TRAIN_STS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane#_txclk_ctr
 *
 * GSERM Reference Clock Cycle Counter Register
 * A free-running cycle counter of the TX Clock Mux Output to enable rough
 * confirmation of tx clock frequency via software. Read the counter; wait some
 * time, e.g., 100ms; read the counter; calculate frequency based on the difference in
 * values during the known wait time.
 */
union cavm_gsermx_lanex_txclk_ctr
{
    uint64_t u;
    struct cavm_gsermx_lanex_txclk_ctr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Running cycle count of the TX Clock Mux Output. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Running cycle count of the TX Clock Mux Output. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lanex_txclk_ctr_s cn; */
};
typedef union cavm_gsermx_lanex_txclk_ctr cavm_gsermx_lanex_txclk_ctr_t;

static inline uint64_t CAVM_GSERMX_LANEX_TXCLK_CTR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANEX_TXCLK_CTR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=3)))
        return 0x87e0a0081090ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a0081090ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_LANEX_TXCLK_CTR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) cavm_gsermx_lanex_txclk_ctr_t
#define bustype_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) "GSERMX_LANEX_TXCLK_CTR"
#define device_bar_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) (a)
#define arguments_CAVM_GSERMX_LANEX_TXCLK_CTR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_lane0_control_sd_mux
 *
 * GSERM SD MUX Lane Control Register
 */
union cavm_gsermx_lane0_control_sd_mux
{
    uint64_t u;
    struct cavm_gsermx_lane0_control_sd_mux_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE0 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE0 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE0 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE0 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE0 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE0 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE0 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE0 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE0 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE0 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE0 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE0 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE0 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE0 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE0 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE0 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE0 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE0 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE0 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE0 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE0 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE0 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE0 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE0 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lane0_control_sd_mux_s cn; */
};
typedef union cavm_gsermx_lane0_control_sd_mux cavm_gsermx_lane0_control_sd_mux_t;

static inline uint64_t CAVM_GSERMX_LANE0_CONTROL_SD_MUX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANE0_CONTROL_SD_MUX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081050ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081050ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_LANE0_CONTROL_SD_MUX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) cavm_gsermx_lane0_control_sd_mux_t
#define bustype_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) "GSERMX_LANE0_CONTROL_SD_MUX"
#define device_bar_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) (a)
#define arguments_CAVM_GSERMX_LANE0_CONTROL_SD_MUX(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_lane1_control_sd_mux
 *
 * GSERM SD MUX Lane Control Register
 */
union cavm_gsermx_lane1_control_sd_mux
{
    uint64_t u;
    struct cavm_gsermx_lane1_control_sd_mux_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE1 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE1 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE1 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE1 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE1 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE1 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE1 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE1 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE1 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE1 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE1 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE1 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE1 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE1 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE1 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE1 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE1 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE1 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE1 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE1 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE1 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE1 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE1 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE1 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lane1_control_sd_mux_s cn; */
};
typedef union cavm_gsermx_lane1_control_sd_mux cavm_gsermx_lane1_control_sd_mux_t;

static inline uint64_t CAVM_GSERMX_LANE1_CONTROL_SD_MUX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANE1_CONTROL_SD_MUX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081058ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081058ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_LANE1_CONTROL_SD_MUX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) cavm_gsermx_lane1_control_sd_mux_t
#define bustype_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) "GSERMX_LANE1_CONTROL_SD_MUX"
#define device_bar_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) (a)
#define arguments_CAVM_GSERMX_LANE1_CONTROL_SD_MUX(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_lane2_control_sd_mux
 *
 * GSERM SD MUX Lane Control Register
 */
union cavm_gsermx_lane2_control_sd_mux
{
    uint64_t u;
    struct cavm_gsermx_lane2_control_sd_mux_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE2 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE2 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE2 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE2 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE2 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE2 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE2 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE2 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE2 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE2 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE2 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE2 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE2 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE2 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE2 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE2 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE2 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE2 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE2 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE2 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE2 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE2 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE2 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE2 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lane2_control_sd_mux_s cn; */
};
typedef union cavm_gsermx_lane2_control_sd_mux cavm_gsermx_lane2_control_sd_mux_t;

static inline uint64_t CAVM_GSERMX_LANE2_CONTROL_SD_MUX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANE2_CONTROL_SD_MUX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081060ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081060ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_LANE2_CONTROL_SD_MUX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) cavm_gsermx_lane2_control_sd_mux_t
#define bustype_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) "GSERMX_LANE2_CONTROL_SD_MUX"
#define device_bar_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) (a)
#define arguments_CAVM_GSERMX_LANE2_CONTROL_SD_MUX(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_lane3_control_sd_mux
 *
 * GSERM SD MUX Lane Control Register
 */
union cavm_gsermx_lane3_control_sd_mux
{
    uint64_t u;
    struct cavm_gsermx_lane3_control_sd_mux_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE3 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE3 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE3 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE3 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE3 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE3 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE3 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE3 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE3 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE3 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE3 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE3 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t lane_sel              : 4;  /**< [  3:  0](R/W) The MAC lane which this GSERM lane maps to. Valid values are 0x0 to
                                                                 GSERM_CONST[NR_LANES]-1, other values are reserved.
                                                                 0x0 =  GSERM LANE3 is mapped to MAC LANE0.
                                                                 0x1 =  GSERM LANE3 is mapped to MAC LANE1.
                                                                 0x2 =  GSERM LANE3 is mapped to MAC LANE2.
                                                                 0x3 =  GSERM LANE3 is mapped to MAC LANE3.
                                                                 0x4 =  GSERM LANE3 is mapped to MAC LANE4.
                                                                 0x5 =  GSERM LANE3 is mapped to MAC LANE5.
                                                                 0x6 =  GSERM LANE3 is mapped to MAC LANE6.
                                                                 0x7 =  GSERM LANE3 is mapped to MAC LANE7.
                                                                 0x8 =  GSERM LANE3 is mapped to MAC LANE8.
                                                                 0x9 =  GSERM LANE3 is mapped to MAC LANE9.
                                                                 0xa =  GSERM LANE3 is mapped to MAC LANEa.
                                                                 0xb =  GSERM LANE3 is mapped to MAC LANEb.
                                                                 Others = Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_lane3_control_sd_mux_s cn; */
};
typedef union cavm_gsermx_lane3_control_sd_mux cavm_gsermx_lane3_control_sd_mux_t;

static inline uint64_t CAVM_GSERMX_LANE3_CONTROL_SD_MUX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_LANE3_CONTROL_SD_MUX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081068ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081068ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_LANE3_CONTROL_SD_MUX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) cavm_gsermx_lane3_control_sd_mux_t
#define bustype_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) "GSERMX_LANE3_CONTROL_SD_MUX"
#define device_bar_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) (a)
#define arguments_CAVM_GSERMX_LANE3_CONTROL_SD_MUX(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_misc_ctrl
 *
 * GSERM MISC control Registers
 */
union cavm_gsermx_misc_ctrl
{
    uint64_t u;
    struct cavm_gsermx_misc_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t pin_avdd_sel          : 3;  /**< [ 14: 12](R/W) Set PIN_AVDD_SEL[2:0] based on selected AVDD power. 0x5 = 1.1V +-3% 0x6 = 1.15V
                                                                 +-5% 0x7 = 1.2V +-3% Others = Reserved. */
        uint64_t pin_txclk_sync_start_out : 4;/**< [ 11:  8](RO/H) Tx Clock Synchronization Start Output. Indicates whether this PHY is ready to
                                                                 start Tx clock synchronization with the other PHY. 0x0 = Not ready to start
                                                                 clock synchronization. 0x1 = Ready to start clock synchronization. When PCIe
                                                                 mode, they are used for the lane alignment and connected to PIN_TXCLK_
                                                                 SYNC_START_IN of the master PHY. When SerDes mode, they used in couple mode. For
                                                                 detailed description, see Couple Mode. For the other modes, these pins are
                                                                 invalid.. */
        uint64_t pin_txclk_sync_en_pll_in : 4;/**< [  7:  4](R/W) PIN_TXCLK_SYNC_EN_PLL_IN. */
        uint64_t reserved_2_3          : 2;
        uint64_t clk_sel               : 2;  /**< [  1:  0](R/W) Select register to select between 4 recovered clocks from GSERM. 0x0 = recovered
                                                                 clock from lane0 is selected. 0x1 = recovered clock from lane1 is selected. 0x2 =
                                                                 recovered clock from lane2
                                                                 is selected. 0x3 = recovered clock from lane3 is selected. */
#else /* Word 0 - Little Endian */
        uint64_t clk_sel               : 2;  /**< [  1:  0](R/W) Select register to select between 4 recovered clocks from GSERM. 0x0 = recovered
                                                                 clock from lane0 is selected. 0x1 = recovered clock from lane1 is selected. 0x2 =
                                                                 recovered clock from lane2
                                                                 is selected. 0x3 = recovered clock from lane3 is selected. */
        uint64_t reserved_2_3          : 2;
        uint64_t pin_txclk_sync_en_pll_in : 4;/**< [  7:  4](R/W) PIN_TXCLK_SYNC_EN_PLL_IN. */
        uint64_t pin_txclk_sync_start_out : 4;/**< [ 11:  8](RO/H) Tx Clock Synchronization Start Output. Indicates whether this PHY is ready to
                                                                 start Tx clock synchronization with the other PHY. 0x0 = Not ready to start
                                                                 clock synchronization. 0x1 = Ready to start clock synchronization. When PCIe
                                                                 mode, they are used for the lane alignment and connected to PIN_TXCLK_
                                                                 SYNC_START_IN of the master PHY. When SerDes mode, they used in couple mode. For
                                                                 detailed description, see Couple Mode. For the other modes, these pins are
                                                                 invalid.. */
        uint64_t pin_avdd_sel          : 3;  /**< [ 14: 12](R/W) Set PIN_AVDD_SEL[2:0] based on selected AVDD power. 0x5 = 1.1V +-3% 0x6 = 1.15V
                                                                 +-5% 0x7 = 1.2V +-3% Others = Reserved. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_misc_ctrl_s cn; */
};
typedef union cavm_gsermx_misc_ctrl cavm_gsermx_misc_ctrl_t;

static inline uint64_t CAVM_GSERMX_MISC_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_MISC_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00810e0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00810e0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_MISC_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_MISC_CTRL(a) cavm_gsermx_misc_ctrl_t
#define bustype_CAVM_GSERMX_MISC_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_MISC_CTRL(a) "GSERMX_MISC_CTRL"
#define device_bar_CAVM_GSERMX_MISC_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_MISC_CTRL(a) (a)
#define arguments_CAVM_GSERMX_MISC_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_misc_ctrl_2#
 *
 * GSERM MISC CTRL Registers
 */
union cavm_gsermx_misc_ctrl_2x
{
    uint64_t u;
    struct cavm_gsermx_misc_ctrl_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t ned_en                : 1;  /**< [ 10: 10](R/W) Control register to enable near-end digital loopback. This works for tx to rx
                                                                 data rate of 2:1. Other ratios are not supported.
                                                                 0 = NED loopback disable.
                                                                 1 = NED loopback enable. */
        uint64_t cpri_jesd_sel         : 1;  /**< [  9:  9](R/W) Reserved. Must be one. */
        uint64_t rpm1_clk_en           : 1;  /**< [  8:  8](R/W) Clock enable for RPM1. This bit should be programmed before swizzling starts. */
        uint64_t jesd_clk_en           : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t rpm_clk_en            : 1;  /**< [  6:  6](R/W) Clock enable for RPM. This bit should be programmed before swizzling starts. */
        uint64_t chicken_bit_sigdet    : 1;  /**< [  5:  5](R/W) Chicken bit to for sigdet. */
        uint64_t lpbk_sigdet_en        : 1;  /**< [  4:  4](R/W) In LPBK mode use this bit generate sigdet. */
        uint64_t reserved_2_3          : 2;
        uint64_t rx_train_enable       : 1;  /**< [  1:  1](R/W) Receiver Training Enable. When these pins are asserted, the local PHY begins Rx
                                                                 training (receiver adaptation processes). If these pins are de-asserted before
                                                                 the assertion of PIN_RX_TRAIN_COMPLETE, the local PHY stops active receiver
                                                                 adaptation processes. After de-asserting PIN_RX_TRAIN_ENABLE, wait 10 PIN_RXDCLK
                                                                 cycles before starting another operation. These operations include - Toggling
                                                                 PIN_PU_PLL, PIN_PU_RX, PIN_PU_TX, and PIN_RX_INIT - Changing speed or - Starting
                                                                 another Tx or Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t tx_train_enable       : 1;  /**< [  0:  0](R/W) Transmitter Training Enable. When asserted, these pins indicate that the PHY
                                                                 begins local receiver adaptation and remote transmitter adaptation. The
                                                                 PIN_TXDATA must be valid when PIN_ TX_TRAIN_ENABLE is de-asserted. When de-
                                                                 asserted before the assertion of PIN_TX_TRAIN_COMPLETE, these pins indicate that
                                                                 the local PHY must cease any transmitter adaptation processes currently in
                                                                 progress. After de-asserting PIN_TX_TRAIN_ENABLE, wait 10 PIN_TXDCLK cycles
                                                                 before starting another operation, such as - Toggling PIN_PU_PLL,
                                                                 PIN_PU_RX,PIN_PU_TX, and PIN_RX_INIT, - Changing speed - Starting another Tx or
                                                                 Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
#else /* Word 0 - Little Endian */
        uint64_t tx_train_enable       : 1;  /**< [  0:  0](R/W) Transmitter Training Enable. When asserted, these pins indicate that the PHY
                                                                 begins local receiver adaptation and remote transmitter adaptation. The
                                                                 PIN_TXDATA must be valid when PIN_ TX_TRAIN_ENABLE is de-asserted. When de-
                                                                 asserted before the assertion of PIN_TX_TRAIN_COMPLETE, these pins indicate that
                                                                 the local PHY must cease any transmitter adaptation processes currently in
                                                                 progress. After de-asserting PIN_TX_TRAIN_ENABLE, wait 10 PIN_TXDCLK cycles
                                                                 before starting another operation, such as - Toggling PIN_PU_PLL,
                                                                 PIN_PU_RX,PIN_PU_TX, and PIN_RX_INIT, - Changing speed - Starting another Tx or
                                                                 Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t rx_train_enable       : 1;  /**< [  1:  1](R/W) Receiver Training Enable. When these pins are asserted, the local PHY begins Rx
                                                                 training (receiver adaptation processes). If these pins are de-asserted before
                                                                 the assertion of PIN_RX_TRAIN_COMPLETE, the local PHY stops active receiver
                                                                 adaptation processes. After de-asserting PIN_RX_TRAIN_ENABLE, wait 10 PIN_RXDCLK
                                                                 cycles before starting another operation. These operations include - Toggling
                                                                 PIN_PU_PLL, PIN_PU_RX, PIN_PU_TX, and PIN_RX_INIT - Changing speed or - Starting
                                                                 another Tx or Rx training. When PIN_PIPE_SEL = 0x1, tie these pins low.. */
        uint64_t reserved_2_3          : 2;
        uint64_t lpbk_sigdet_en        : 1;  /**< [  4:  4](R/W) In LPBK mode use this bit generate sigdet. */
        uint64_t chicken_bit_sigdet    : 1;  /**< [  5:  5](R/W) Chicken bit to for sigdet. */
        uint64_t rpm_clk_en            : 1;  /**< [  6:  6](R/W) Clock enable for RPM. This bit should be programmed before swizzling starts. */
        uint64_t jesd_clk_en           : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t rpm1_clk_en           : 1;  /**< [  8:  8](R/W) Clock enable for RPM1. This bit should be programmed before swizzling starts. */
        uint64_t cpri_jesd_sel         : 1;  /**< [  9:  9](R/W) Reserved. Must be one. */
        uint64_t ned_en                : 1;  /**< [ 10: 10](R/W) Control register to enable near-end digital loopback. This works for tx to rx
                                                                 data rate of 2:1. Other ratios are not supported.
                                                                 0 = NED loopback disable.
                                                                 1 = NED loopback enable. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_misc_ctrl_2x_s cn; */
};
typedef union cavm_gsermx_misc_ctrl_2x cavm_gsermx_misc_ctrl_2x_t;

static inline uint64_t CAVM_GSERMX_MISC_CTRL_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_MISC_CTRL_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a00810f0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_MISC_CTRL_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_MISC_CTRL_2X(a,b) cavm_gsermx_misc_ctrl_2x_t
#define bustype_CAVM_GSERMX_MISC_CTRL_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_MISC_CTRL_2X(a,b) "GSERMX_MISC_CTRL_2X"
#define device_bar_CAVM_GSERMX_MISC_CTRL_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_MISC_CTRL_2X(a,b) (a)
#define arguments_CAVM_GSERMX_MISC_CTRL_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_msix_pba#
 *
 * GSERM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the GSERM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_gsermx_msix_pbax
{
    uint64_t u;
    struct cavm_gsermx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated GSERM_MSIX_VEC_CTL, enumerated by GSERM_INT_VEC_E. Bits
                                                                 that have no associated GSERM_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated GSERM_MSIX_VEC_CTL, enumerated by GSERM_INT_VEC_E. Bits
                                                                 that have no associated GSERM_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_msix_pbax_s cn; */
};
typedef union cavm_gsermx_msix_pbax cavm_gsermx_msix_pbax_t;

static inline uint64_t CAVM_GSERMX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b==0)))
        return 0x87e0a0cf0000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b==0)))
        return 0x87e0a0ff0000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("GSERMX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_MSIX_PBAX(a,b) cavm_gsermx_msix_pbax_t
#define bustype_CAVM_GSERMX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_MSIX_PBAX(a,b) "GSERMX_MSIX_PBAX"
#define device_bar_CAVM_GSERMX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_GSERMX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_GSERMX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_msix_vec#_addr
 *
 * GSERM MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the GSERM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_gsermx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_gsermx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's GSERM_MSIX_VEC()_ADDR, GSERM_MSIX_VEC()_CTL, and
                                                                 corresponding bit of GSERM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_GSERM_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's GSERM_MSIX_VEC()_ADDR, GSERM_MSIX_VEC()_CTL, and
                                                                 corresponding bit of GSERM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_GSERM_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_msix_vecx_addr_s cn; */
};
typedef union cavm_gsermx_msix_vecx_addr cavm_gsermx_msix_vecx_addr_t;

static inline uint64_t CAVM_GSERMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b==0)))
        return 0x87e0a0c00000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b==0)))
        return 0x87e0a0f00000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("GSERMX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) cavm_gsermx_msix_vecx_addr_t
#define bustype_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) "GSERMX_MSIX_VECX_ADDR"
#define device_bar_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_GSERMX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_msix_vec#_ctl
 *
 * GSERM MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the GSERM_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on cold reset.
 */
union cavm_gsermx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_gsermx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_msix_vecx_ctl_s cn; */
};
typedef union cavm_gsermx_msix_vecx_ctl cavm_gsermx_msix_vecx_ctl_t;

static inline uint64_t CAVM_GSERMX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b==0)))
        return 0x87e0a0c00008ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b==0)))
        return 0x87e0a0f00008ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("GSERMX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_MSIX_VECX_CTL(a,b) cavm_gsermx_msix_vecx_ctl_t
#define bustype_CAVM_GSERMX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_MSIX_VECX_CTL(a,b) "GSERMX_MSIX_VECX_CTL"
#define device_bar_CAVM_GSERMX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_GSERMX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_GSERMX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL32b) gserm#_phytest_rx0
 *
 * GSERM Phy PHYtest Rx Control Register 0
 */
union cavm_gsermx_phytest_rx0
{
    uint32_t u;
    struct cavm_gsermx_phytest_rx0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_rx_en_mode_lane    : 2;  /**< [ 31: 30](R/W/H) PHY Test Enable Mode
                                                                 2'b00: enable PT after pt_en = 1
                                                                 2'b01: enable PT after pt_en = 1 and normal_state_ready = 1
                                                                 2'b10: enable PT after pt_en = 1 and pt_phyready_force = 1
                                                                 Others: Reserved */
        uint32_t pt_rx_pattern_sel_lane : 6; /**< [ 29: 24](R/W/H) PHY Test RX Pattern Select
                                                                 6'h01: User Pattern 80Bit
                                                                 6'h08: Jitter Pattern K28.5
                                                                 6'h09: Jitter Pattern 1T
                                                                 6'h0a: Jitter Pattern 2T
                                                                 6'h0b: Jitter Pattern 4T
                                                                 6'h0c: Jitter Pattern 5T (only for 10X bit mode)
                                                                 6'h0d: Jitter Pattern 8T (only for 8X bit mode)
                                                                 6'h0e: Jitter Pattern 10T (only for 10X bit mode)
                                                                 6'h10: PRBS 7
                                                                 6'h11: PRBS 9
                                                                 6'h12: PRBS 11
                                                                 6'h13: PRBS 11_0
                                                                 6'h14: PRBS 11_1
                                                                 6'h15: PRBS 11_2
                                                                 6'h16: PRBS 11_3
                                                                 6'h17: PRBS 15
                                                                 6'h18: PRBS 16
                                                                 6'h19: PRBS 23
                                                                 6'h1a: PRBS 31
                                                                 6'h1b: PRBS 32
                                                                 6'h20: SATA Pattern LTDP
                                                                 6'h21: SATA Pattern HTDP
                                                                 6'h22: SATA Pattern LFSCP
                                                                 6'h23: SATA Pattern SSOP
                                                                 6'h24: SATA Pattern LBP
                                                                 6'h25: SATA Pattern COMP
                                                                 6'h28: SAS Pattern JTPAT
                                                                 6'h29: SAS Pattern MJTPAT
                                                                 6'h2a: SAS Pattern CJTPAT
                                                                 6'h2b: SAS Pattern DFE_TRAIN
                                                                 6'h2c: SAS Pattern DFE_TRAIN_DONE
                                                                 Others: Reserved
                                                                 Refer design spec for detail pattern selection */
        uint32_t pt_rx_en_lane         : 1;  /**< [ 23: 23](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable
                                                                 1: PHY Test enable
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
        uint32_t pt_rx_phyready_force_lane : 1;/**< [ 22: 22](R/W/H) PHY Test PHY Ready Force
                                                                 0: Not force
                                                                 1: Force PHY ready in PHY Test with 1 */
        uint32_t pt_rx_cnt_rst_lane    : 1;  /**< [ 21: 21](R/W/H) PHY Test Pattern Counter Reset
                                                                 0: not reset
                                                                 1: reset */
        uint32_t pt_rx_cnt_pause_lane  : 1;  /**< [ 20: 20](R/W/H) PHY Test Pattern Counter Pause
                                                                 internal
                                                                 PT_CNT and PT_ERR_CNT is paused when this register is set */
        uint32_t pt_rx_relock_lane     : 1;  /**< [ 19: 19](R/W/H) PHY Test Relock Enable
                                                                 internal
                                                                 0: Disable relock
                                                                 1: Enable relock,
                                                                 This bit is only valid for SAS, USER_80B and JITP. Reset state machine for SAS and USER_80B. And enable 40bit sync detection for JITP. */
        uint32_t pt_rx_sync_mode_lane  : 1;  /**< [ 18: 18](R/W/H) PHY Test Sync Mode Select
                                                                 internal
                                                                 For SATA Pattern
                                                                 0: sync with K28.5 at beginning
                                                                 1: sync with 40bit pattern at anytime, except HTDP pattern
                                                                 For USER 80B Pattern
                                                                 0: No Sync, just check if received pattern is repeat
                                                                 1: sync with 283 pattern at beginning and check if received pattern is exactly reg_pt_user_patter[79:0] */
        uint32_t pt_rx_prbs_load_lane  : 1;  /**< [ 17: 17](R/W/H) PRBS Input Select
                                                                 internal
                                                                 0: use previous data to calculate next
                                                                 1: use input rxdata to calculate next */
        uint32_t pt_rx_lock_mode_lane  : 1;  /**< [ 16: 16](R/W/H) Lock Mode Selection
                                                                 internal
                                                                 0: PRBS and Jitter pattern lock after total reg_pt_lock_cnt cycles match
                                                                 1: PRBS and Jitter pattern lock after continuous reg_pt_lock_cnt cycles match
                                                                 This bit is only valid for PRBS and Jitter pattern. Other patterns don't have continuous lock. */
        uint32_t pt_rx_prbs_gray_en_lane : 1;/**< [ 15: 15](R/W/H) PRBS PAM4 Gray Code Enable
                                                                 internal
                                                                 0: normal PRBS data
                                                                 1: Enable 2 bit gray code for PAM4 PRBS13Q and PRBS31Q */
        uint32_t pt_rx_prbs_inv_lane   : 1;  /**< [ 14: 14](R/W/H) PRBS Pattern Inversion in PHY RX
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t force_pt_rx_lock_lane : 1;  /**< [ 13: 13](R/W/H) Force PT Lock Indicator
                                                                 internal */
        uint32_t pt_rx_lock_set_lane   : 1;  /**< [ 12: 12](R/W/H) Force PT Lock Indicator Value
                                                                 internal */
        uint32_t force_pt_rx_prbs_data_set_lane : 1;/**< [ 11: 11](R/W/H) Force PHY PRBS Data Selection In TX Train
                                                                 internal */
        uint32_t tx_train_pat_lock_mode_rx_lane : 1;/**< [ 10: 10](R/W/H) TX Training Pattern Lock Mode
                                                                 internal
                                                                 1: Lock and select PRBS pattern for every training packet
                                                                 0: Only lock and select PRBS once for TX training */
        uint32_t reserved_8_9          : 2;
        uint32_t pt_rx_lock_cnt_lane   : 8;  /**< [  7:  0](R/W/H) PHY Test Pattern Lock Count Threshold
                                                                 PHY Test comparator begins after pt_lock_cnt cycle's lock */
#else /* Word 0 - Little Endian */
        uint32_t pt_rx_lock_cnt_lane   : 8;  /**< [  7:  0](R/W/H) PHY Test Pattern Lock Count Threshold
                                                                 PHY Test comparator begins after pt_lock_cnt cycle's lock */
        uint32_t reserved_8_9          : 2;
        uint32_t tx_train_pat_lock_mode_rx_lane : 1;/**< [ 10: 10](R/W/H) TX Training Pattern Lock Mode
                                                                 internal
                                                                 1: Lock and select PRBS pattern for every training packet
                                                                 0: Only lock and select PRBS once for TX training */
        uint32_t force_pt_rx_prbs_data_set_lane : 1;/**< [ 11: 11](R/W/H) Force PHY PRBS Data Selection In TX Train
                                                                 internal */
        uint32_t pt_rx_lock_set_lane   : 1;  /**< [ 12: 12](R/W/H) Force PT Lock Indicator Value
                                                                 internal */
        uint32_t force_pt_rx_lock_lane : 1;  /**< [ 13: 13](R/W/H) Force PT Lock Indicator
                                                                 internal */
        uint32_t pt_rx_prbs_inv_lane   : 1;  /**< [ 14: 14](R/W/H) PRBS Pattern Inversion in PHY RX
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t pt_rx_prbs_gray_en_lane : 1;/**< [ 15: 15](R/W/H) PRBS PAM4 Gray Code Enable
                                                                 internal
                                                                 0: normal PRBS data
                                                                 1: Enable 2 bit gray code for PAM4 PRBS13Q and PRBS31Q */
        uint32_t pt_rx_lock_mode_lane  : 1;  /**< [ 16: 16](R/W/H) Lock Mode Selection
                                                                 internal
                                                                 0: PRBS and Jitter pattern lock after total reg_pt_lock_cnt cycles match
                                                                 1: PRBS and Jitter pattern lock after continuous reg_pt_lock_cnt cycles match
                                                                 This bit is only valid for PRBS and Jitter pattern. Other patterns don't have continuous lock. */
        uint32_t pt_rx_prbs_load_lane  : 1;  /**< [ 17: 17](R/W/H) PRBS Input Select
                                                                 internal
                                                                 0: use previous data to calculate next
                                                                 1: use input rxdata to calculate next */
        uint32_t pt_rx_sync_mode_lane  : 1;  /**< [ 18: 18](R/W/H) PHY Test Sync Mode Select
                                                                 internal
                                                                 For SATA Pattern
                                                                 0: sync with K28.5 at beginning
                                                                 1: sync with 40bit pattern at anytime, except HTDP pattern
                                                                 For USER 80B Pattern
                                                                 0: No Sync, just check if received pattern is repeat
                                                                 1: sync with 283 pattern at beginning and check if received pattern is exactly reg_pt_user_patter[79:0] */
        uint32_t pt_rx_relock_lane     : 1;  /**< [ 19: 19](R/W/H) PHY Test Relock Enable
                                                                 internal
                                                                 0: Disable relock
                                                                 1: Enable relock,
                                                                 This bit is only valid for SAS, USER_80B and JITP. Reset state machine for SAS and USER_80B. And enable 40bit sync detection for JITP. */
        uint32_t pt_rx_cnt_pause_lane  : 1;  /**< [ 20: 20](R/W/H) PHY Test Pattern Counter Pause
                                                                 internal
                                                                 PT_CNT and PT_ERR_CNT is paused when this register is set */
        uint32_t pt_rx_cnt_rst_lane    : 1;  /**< [ 21: 21](R/W/H) PHY Test Pattern Counter Reset
                                                                 0: not reset
                                                                 1: reset */
        uint32_t pt_rx_phyready_force_lane : 1;/**< [ 22: 22](R/W/H) PHY Test PHY Ready Force
                                                                 0: Not force
                                                                 1: Force PHY ready in PHY Test with 1 */
        uint32_t pt_rx_en_lane         : 1;  /**< [ 23: 23](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable
                                                                 1: PHY Test enable
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
        uint32_t pt_rx_pattern_sel_lane : 6; /**< [ 29: 24](R/W/H) PHY Test RX Pattern Select
                                                                 6'h01: User Pattern 80Bit
                                                                 6'h08: Jitter Pattern K28.5
                                                                 6'h09: Jitter Pattern 1T
                                                                 6'h0a: Jitter Pattern 2T
                                                                 6'h0b: Jitter Pattern 4T
                                                                 6'h0c: Jitter Pattern 5T (only for 10X bit mode)
                                                                 6'h0d: Jitter Pattern 8T (only for 8X bit mode)
                                                                 6'h0e: Jitter Pattern 10T (only for 10X bit mode)
                                                                 6'h10: PRBS 7
                                                                 6'h11: PRBS 9
                                                                 6'h12: PRBS 11
                                                                 6'h13: PRBS 11_0
                                                                 6'h14: PRBS 11_1
                                                                 6'h15: PRBS 11_2
                                                                 6'h16: PRBS 11_3
                                                                 6'h17: PRBS 15
                                                                 6'h18: PRBS 16
                                                                 6'h19: PRBS 23
                                                                 6'h1a: PRBS 31
                                                                 6'h1b: PRBS 32
                                                                 6'h20: SATA Pattern LTDP
                                                                 6'h21: SATA Pattern HTDP
                                                                 6'h22: SATA Pattern LFSCP
                                                                 6'h23: SATA Pattern SSOP
                                                                 6'h24: SATA Pattern LBP
                                                                 6'h25: SATA Pattern COMP
                                                                 6'h28: SAS Pattern JTPAT
                                                                 6'h29: SAS Pattern MJTPAT
                                                                 6'h2a: SAS Pattern CJTPAT
                                                                 6'h2b: SAS Pattern DFE_TRAIN
                                                                 6'h2c: SAS Pattern DFE_TRAIN_DONE
                                                                 Others: Reserved
                                                                 Refer design spec for detail pattern selection */
        uint32_t pt_rx_en_mode_lane    : 2;  /**< [ 31: 30](R/W/H) PHY Test Enable Mode
                                                                 2'b00: enable PT after pt_en = 1
                                                                 2'b01: enable PT after pt_en = 1 and normal_state_ready = 1
                                                                 2'b10: enable PT after pt_en = 1 and pt_phyready_force = 1
                                                                 Others: Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_rx0_s cn; */
};
typedef union cavm_gsermx_phytest_rx0 cavm_gsermx_phytest_rx0_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_RX0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_RX0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006500ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_RX0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_RX0(a) cavm_gsermx_phytest_rx0_t
#define bustype_CAVM_GSERMX_PHYTEST_RX0(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_RX0(a) "GSERMX_PHYTEST_RX0"
#define device_bar_CAVM_GSERMX_PHYTEST_RX0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_RX0(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_RX0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_rx3
 *
 * GSERM Phy PHYtest Rx Control Register 3
 */
union cavm_gsermx_phytest_rx3
{
    uint32_t u;
    struct cavm_gsermx_phytest_rx3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_rx_user_pattern_lane : 16;/**< [ 31: 16](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
        uint32_t reserved_15           : 1;
        uint32_t tx_train_pat_sel_rx_lane : 3;/**< [ 14: 12](R/W/H) TX Training Pattern Select For RX PRBS Control
                                                                 3'b000: No use
                                                                 3'b001: LFSR11, each lane with same formula and seed for 10G-KR
                                                                 3'b010: LFSR11, each lane with different formula and seed for 100G
                                                                 3'b011: LFSR13, each lane with different formula and seed for 200G
                                                                 3'b100:Packet mode, only for 40bit mode */
        uint32_t pt_rx_start_rd_lane   : 1;  /**< [ 11: 11](R/W/H) PHY Test Start Running Disparity in RX
                                                                 This register selects the initial running disparity for SATA test patterns.
                                                                 0: Initial Disparity for pattern is negative
                                                                 1: Initial Disparity for pattern is positive */
        uint32_t pt_rx_sata_long_lane  : 1;  /**< [ 10: 10](R/W/H) SATA Pattern Select in RX
                                                                 0: Short version of SATA pattern
                                                                 1: Long version of SATA pattern */
        uint32_t pt_rx_prbs_enc_en_lane : 1; /**< [  9:  9](R/W/H) PRBS 8/10bit Coding Enable in RX
                                                                 0: disable
                                                                 1: enable
                                                                 After enable, PHY must works at 40bit mode. 32bit PRBS is sent to encoder to generate 40bit encoding data. */
        uint32_t pt_trx_en_lane        : 1;  /**< [  8:  8](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable for TX and RT
                                                                 1: PHY Test enable for TX and RX
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
        uint32_t pt_rx_rst_lane        : 1;  /**< [  7:  7](R/W/H) PHY Test RX Reset
                                                                 0: Not reset mode
                                                                 1: This is a reset signal to PHY Test TX. Once its set to 1, all registers in PHY Test TX are cleared. */
        uint32_t pt_rx_prbs_data_set_lane : 2;/**< [  6:  5](R/W/H) PHY PRBS Data Selection In TX Train
                                                                 internal */
        uint32_t prbs_data_detected_rx_lane : 2;/**< [  4:  3](RO/H) PHY PRBS Detected In TX Train
                                                                 internal
                                                                 2'b00 : PRBS11, PRBS_11_0, PRBS_13_0
                                                                 2'b01 : PRBS_11_1, PRBS_13_1
                                                                 2'b10 : PRBS_11_2, PRBS_13_2
                                                                 2'b11 : PRBS_11_3, PRBS_13_3 */
        uint32_t pt_rx_cnt_ready_lane  : 1;  /**< [  2:  2](RO/H) PHY TEST Pattern Count Ready
                                                                 PHY Test Pattern Counter PT_CNT_LANE Reach Maximum Pattern Counter MAX_PT_CNT_LANE */
        uint32_t pt_rx_pass_lane       : 1;  /**< [  1:  1](RO/H) PHY Test Pass Flag
                                                                 0: 1 or more errors is found or the pattern is not locked
                                                                 1: the pattern is locked and no error is detected */
        uint32_t pt_rx_lock_lane       : 1;  /**< [  0:  0](RO/H) PHY Test Pattern Lock Flag
                                                                 0: Pattern detector is not locked onto the pattern
                                                                 1: Pattern detector is locked onto the pattern
                                                                 If the pattern doesn't lock then either the signal quality is low or the pattern provided to the receiver doesn't match the programmed pattern. */
#else /* Word 0 - Little Endian */
        uint32_t pt_rx_lock_lane       : 1;  /**< [  0:  0](RO/H) PHY Test Pattern Lock Flag
                                                                 0: Pattern detector is not locked onto the pattern
                                                                 1: Pattern detector is locked onto the pattern
                                                                 If the pattern doesn't lock then either the signal quality is low or the pattern provided to the receiver doesn't match the programmed pattern. */
        uint32_t pt_rx_pass_lane       : 1;  /**< [  1:  1](RO/H) PHY Test Pass Flag
                                                                 0: 1 or more errors is found or the pattern is not locked
                                                                 1: the pattern is locked and no error is detected */
        uint32_t pt_rx_cnt_ready_lane  : 1;  /**< [  2:  2](RO/H) PHY TEST Pattern Count Ready
                                                                 PHY Test Pattern Counter PT_CNT_LANE Reach Maximum Pattern Counter MAX_PT_CNT_LANE */
        uint32_t prbs_data_detected_rx_lane : 2;/**< [  4:  3](RO/H) PHY PRBS Detected In TX Train
                                                                 internal
                                                                 2'b00 : PRBS11, PRBS_11_0, PRBS_13_0
                                                                 2'b01 : PRBS_11_1, PRBS_13_1
                                                                 2'b10 : PRBS_11_2, PRBS_13_2
                                                                 2'b11 : PRBS_11_3, PRBS_13_3 */
        uint32_t pt_rx_prbs_data_set_lane : 2;/**< [  6:  5](R/W/H) PHY PRBS Data Selection In TX Train
                                                                 internal */
        uint32_t pt_rx_rst_lane        : 1;  /**< [  7:  7](R/W/H) PHY Test RX Reset
                                                                 0: Not reset mode
                                                                 1: This is a reset signal to PHY Test TX. Once its set to 1, all registers in PHY Test TX are cleared. */
        uint32_t pt_trx_en_lane        : 1;  /**< [  8:  8](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable for TX and RT
                                                                 1: PHY Test enable for TX and RX
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
        uint32_t pt_rx_prbs_enc_en_lane : 1; /**< [  9:  9](R/W/H) PRBS 8/10bit Coding Enable in RX
                                                                 0: disable
                                                                 1: enable
                                                                 After enable, PHY must works at 40bit mode. 32bit PRBS is sent to encoder to generate 40bit encoding data. */
        uint32_t pt_rx_sata_long_lane  : 1;  /**< [ 10: 10](R/W/H) SATA Pattern Select in RX
                                                                 0: Short version of SATA pattern
                                                                 1: Long version of SATA pattern */
        uint32_t pt_rx_start_rd_lane   : 1;  /**< [ 11: 11](R/W/H) PHY Test Start Running Disparity in RX
                                                                 This register selects the initial running disparity for SATA test patterns.
                                                                 0: Initial Disparity for pattern is negative
                                                                 1: Initial Disparity for pattern is positive */
        uint32_t tx_train_pat_sel_rx_lane : 3;/**< [ 14: 12](R/W/H) TX Training Pattern Select For RX PRBS Control
                                                                 3'b000: No use
                                                                 3'b001: LFSR11, each lane with same formula and seed for 10G-KR
                                                                 3'b010: LFSR11, each lane with different formula and seed for 100G
                                                                 3'b011: LFSR13, each lane with different formula and seed for 200G
                                                                 3'b100:Packet mode, only for 40bit mode */
        uint32_t reserved_15           : 1;
        uint32_t pt_rx_user_pattern_lane : 16;/**< [ 31: 16](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_rx3_s cn; */
};
typedef union cavm_gsermx_phytest_rx3 cavm_gsermx_phytest_rx3_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_RX3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_RX3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006518ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_RX3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_RX3(a) cavm_gsermx_phytest_rx3_t
#define bustype_CAVM_GSERMX_PHYTEST_RX3(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_RX3(a) "GSERMX_PHYTEST_RX3"
#define device_bar_CAVM_GSERMX_PHYTEST_RX3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_RX3(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_RX3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_rx6
 *
 * GSERM Phy PHYtest Rx Control Register 6
 */
union cavm_gsermx_phytest_rx6
{
    uint32_t u;
    struct cavm_gsermx_phytest_rx6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_rx_err_cnt_lane    : 16; /**< [ 31: 16](RO/H) PHY Test Error Count
                                                                 The number of error bits encountered after obtaining pattern lock */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t pt_rx_err_cnt_lane    : 16; /**< [ 31: 16](RO/H) PHY Test Error Count
                                                                 The number of error bits encountered after obtaining pattern lock */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_rx6_s cn; */
};
typedef union cavm_gsermx_phytest_rx6 cavm_gsermx_phytest_rx6_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_RX6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_RX6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006530ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_RX6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_RX6(a) cavm_gsermx_phytest_rx6_t
#define bustype_CAVM_GSERMX_PHYTEST_RX6(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_RX6(a) "GSERMX_PHYTEST_RX6"
#define device_bar_CAVM_GSERMX_PHYTEST_RX6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_RX6(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_RX6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_tx0
 *
 * GSERM Phy PHYTEST Control Registers 0
 */
union cavm_gsermx_phytest_tx0
{
    uint32_t u;
    struct cavm_gsermx_phytest_tx0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_tx_en_lane         : 1;  /**< [ 31: 31](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable
                                                                 1: PHY Test enable
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
        uint32_t pt_tx_phyready_force_lane : 1;/**< [ 30: 30](R/W/H) PHY Test PHY Ready Force
                                                                 0: Not force
                                                                 1: Force PHY ready in PHY Test with 1 */
        uint32_t pt_tx_pattern_sel_lane : 6; /**< [ 29: 24](R/W/H) PHY Test TX Pattern Select
                                                                 6'h01: User Pattern 80Bit
                                                                 6'h04: Short Stress Pattern Random Quaternary(SSPRQ)
                                                                 6'h08: Jitter Pattern K28.5
                                                                 6'h09: Jitter Pattern 1T
                                                                 6'h0a: Jitter Pattern 2T
                                                                 6'h0b: Jitter Pattern 4T
                                                                 6'h0c: Jitter Pattern 5T  (only for 10X bit mode)
                                                                 6'h0d: Jitter Pattern 8T (only for 8X bit mode)
                                                                 6'h0e: Jitter Pattern 10T (only for 10X bit mode)
                                                                 6'h10: PRBS 7
                                                                 6'h11: PRBS 9
                                                                 6'h12: PRBS 11
                                                                 6'h13: PRBS 11_0
                                                                 6'h14: PRBS 11_1
                                                                 6'h15: PRBS 11_2
                                                                 6'h16: PRBS 11_3
                                                                 6'h17: PRBS 15
                                                                 6'h18: PRBS 16
                                                                 6'h19: PRBS 23
                                                                 6'h1a: PRBS 31
                                                                 6'h1b: PRBS 32
                                                                 6'h20: SATA Pattern LTDP
                                                                 6'h21: SATA Pattern HTDP
                                                                 6'h22: SATA Pattern LFSCP
                                                                 6'h23: SATA Pattern SSOP
                                                                 6'h24: SATA Pattern LBP
                                                                 6'h25: SATA Pattern COMP
                                                                 6'h28: SAS Pattern JTPAT
                                                                 6'h29: SAS Pattern MJTPAT
                                                                 6'h2a: SAS Pattern CJTPAT
                                                                 6'h2b: SAS Pattern DFE_TRAIN
                                                                 6'h2c: SAS Pattern DFE_TRAIN_DONE
                                                                 Others: Reserved
                                                                 Refer design spec for detail pattern selection */
        uint32_t reserved_21_23        : 3;
        uint32_t pt_tx_start_rd_lane   : 1;  /**< [ 20: 20](R/W/H) PHY Test Start Running Disparity in TX
                                                                 This register selects the initial running disparity for SATA test patterns.
                                                                 0: Initial Disparity for pattern is negative
                                                                 1: Initial Disparity for pattern is positive */
        uint32_t reserved_17_19        : 3;
        uint32_t pt_tx_prbs_enc_en_lane : 1; /**< [ 16: 16](R/W/H) PRBS 8/10bit Coding Enable in TX
                                                                 0: disable
                                                                 1: enable
                                                                 After enable, PHY must works at 40bit mode. 32bit PRBS is sent to encoder to generate 40bit encoding data. */
        uint32_t ssprq_ui_dly_ctrl_lane : 5; /**< [ 15: 11](R/W/H) TX SSPRQ UI Delay Control For Each Lane
                                                                 Control the SSPRQ UI Delay For Each Lane For The Output SSPRQ Sequence
                                                                 The UI delay number of one clock cycle is determined by TX_SEL_BITS_LANE
                                                                 1'b0: 80 UI when PAM4 and Quarter Rate mode, 40 UI when PAM4 mode, Other is 20 UI
                                                                 1'b1: 64 UI when PAM4 and Quarter Rate mode, 32 UI when PAM4 mode, Other is 16 UI
                                                                 The Total UI Number Delay = One Clock Cycle UI Delay Number x SSPRQ_UI_DLY_CTRL_LANE[4:0] */
        uint32_t pt_tx_ssprq_inv_lane  : 1;  /**< [ 10: 10](R/W/H) TX SSPRQ Test Pattern Inversion
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t reserved_8_9          : 2;
        uint32_t pt_tx_prbs_inv_lane   : 1;  /**< [  7:  7](R/W/H) PRBS Pattern Inversion
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t pt_tx_prbs_gray_en_lane : 1;/**< [  6:  6](R/W/H) PRBS PAM4 Gray Code Enable
                                                                 internal
                                                                 0: normal PRBS data
                                                                 1: Enable 2 bit gray code for PAM4 PRBS13Q and PRBS31Q */
        uint32_t pt_tx_rst_lane        : 1;  /**< [  5:  5](R/W/H) PHY Test TX Reset
                                                                 0: Not reset mode
                                                                 1: This is a reset signal to PHY Test TX. Once its set to 1, all registers in PHY Test TX are cleared. */
        uint32_t tx_train_poly_sel_fm_pin_lane : 1;/**< [  4:  4](R/W/H) Tx training LFSR Pattern Polynomial Select
                                                                 0: Fixed LFSR polynomial selection. LANE 0 always uses first LFSR. LANE3 always uses latest LFSR.
                                                                 1: Control from PIN PIN_TX_TRAIN_POLY_SEL */
        uint32_t pt_tx_en_mode_lane    : 2;  /**< [  3:  2](R/W/H) PHY Test Enable Mode
                                                                 2'b00: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1)
                                                                 2'b01: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1) and normal_state_ready = 1
                                                                 2'b10: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1) and pt_phyready_force = 1
                                                                 Others: Reserved */
        uint32_t tx_train_pat_force_lane : 1;/**< [  1:  1](R/W/H) TX Training Pattern Force
                                                                 internal
                                                                 0: TX pattern is selected by tx_train_pat_sel
                                                                 1: TX pattern is selected by pt_tx_pattern_sel
                                                                 This bit is only valid when tx_train_en = 1. */
        uint32_t pt_tx_mode2_rst_dis_lane : 1;/**< [  0:  0](R/W/H) Disable Tx Pattern Reset When PHY Test Enable Mode 2
                                                                 internal
                                                                 0: not disable
                                                                 1: disable */
#else /* Word 0 - Little Endian */
        uint32_t pt_tx_mode2_rst_dis_lane : 1;/**< [  0:  0](R/W/H) Disable Tx Pattern Reset When PHY Test Enable Mode 2
                                                                 internal
                                                                 0: not disable
                                                                 1: disable */
        uint32_t tx_train_pat_force_lane : 1;/**< [  1:  1](R/W/H) TX Training Pattern Force
                                                                 internal
                                                                 0: TX pattern is selected by tx_train_pat_sel
                                                                 1: TX pattern is selected by pt_tx_pattern_sel
                                                                 This bit is only valid when tx_train_en = 1. */
        uint32_t pt_tx_en_mode_lane    : 2;  /**< [  3:  2](R/W/H) PHY Test Enable Mode
                                                                 2'b00: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1)
                                                                 2'b01: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1) and normal_state_ready = 1
                                                                 2'b10: enable PT after (pt_tx_en_lane=1 or pt_trx_en_lane=1) and pt_phyready_force = 1
                                                                 Others: Reserved */
        uint32_t tx_train_poly_sel_fm_pin_lane : 1;/**< [  4:  4](R/W/H) Tx training LFSR Pattern Polynomial Select
                                                                 0: Fixed LFSR polynomial selection. LANE 0 always uses first LFSR. LANE3 always uses latest LFSR.
                                                                 1: Control from PIN PIN_TX_TRAIN_POLY_SEL */
        uint32_t pt_tx_rst_lane        : 1;  /**< [  5:  5](R/W/H) PHY Test TX Reset
                                                                 0: Not reset mode
                                                                 1: This is a reset signal to PHY Test TX. Once its set to 1, all registers in PHY Test TX are cleared. */
        uint32_t pt_tx_prbs_gray_en_lane : 1;/**< [  6:  6](R/W/H) PRBS PAM4 Gray Code Enable
                                                                 internal
                                                                 0: normal PRBS data
                                                                 1: Enable 2 bit gray code for PAM4 PRBS13Q and PRBS31Q */
        uint32_t pt_tx_prbs_inv_lane   : 1;  /**< [  7:  7](R/W/H) PRBS Pattern Inversion
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t reserved_8_9          : 2;
        uint32_t pt_tx_ssprq_inv_lane  : 1;  /**< [ 10: 10](R/W/H) TX SSPRQ Test Pattern Inversion
                                                                 internal
                                                                 0: normal output
                                                                 1: inverted output */
        uint32_t ssprq_ui_dly_ctrl_lane : 5; /**< [ 15: 11](R/W/H) TX SSPRQ UI Delay Control For Each Lane
                                                                 Control the SSPRQ UI Delay For Each Lane For The Output SSPRQ Sequence
                                                                 The UI delay number of one clock cycle is determined by TX_SEL_BITS_LANE
                                                                 1'b0: 80 UI when PAM4 and Quarter Rate mode, 40 UI when PAM4 mode, Other is 20 UI
                                                                 1'b1: 64 UI when PAM4 and Quarter Rate mode, 32 UI when PAM4 mode, Other is 16 UI
                                                                 The Total UI Number Delay = One Clock Cycle UI Delay Number x SSPRQ_UI_DLY_CTRL_LANE[4:0] */
        uint32_t pt_tx_prbs_enc_en_lane : 1; /**< [ 16: 16](R/W/H) PRBS 8/10bit Coding Enable in TX
                                                                 0: disable
                                                                 1: enable
                                                                 After enable, PHY must works at 40bit mode. 32bit PRBS is sent to encoder to generate 40bit encoding data. */
        uint32_t reserved_17_19        : 3;
        uint32_t pt_tx_start_rd_lane   : 1;  /**< [ 20: 20](R/W/H) PHY Test Start Running Disparity in TX
                                                                 This register selects the initial running disparity for SATA test patterns.
                                                                 0: Initial Disparity for pattern is negative
                                                                 1: Initial Disparity for pattern is positive */
        uint32_t reserved_21_23        : 3;
        uint32_t pt_tx_pattern_sel_lane : 6; /**< [ 29: 24](R/W/H) PHY Test TX Pattern Select
                                                                 6'h01: User Pattern 80Bit
                                                                 6'h04: Short Stress Pattern Random Quaternary(SSPRQ)
                                                                 6'h08: Jitter Pattern K28.5
                                                                 6'h09: Jitter Pattern 1T
                                                                 6'h0a: Jitter Pattern 2T
                                                                 6'h0b: Jitter Pattern 4T
                                                                 6'h0c: Jitter Pattern 5T  (only for 10X bit mode)
                                                                 6'h0d: Jitter Pattern 8T (only for 8X bit mode)
                                                                 6'h0e: Jitter Pattern 10T (only for 10X bit mode)
                                                                 6'h10: PRBS 7
                                                                 6'h11: PRBS 9
                                                                 6'h12: PRBS 11
                                                                 6'h13: PRBS 11_0
                                                                 6'h14: PRBS 11_1
                                                                 6'h15: PRBS 11_2
                                                                 6'h16: PRBS 11_3
                                                                 6'h17: PRBS 15
                                                                 6'h18: PRBS 16
                                                                 6'h19: PRBS 23
                                                                 6'h1a: PRBS 31
                                                                 6'h1b: PRBS 32
                                                                 6'h20: SATA Pattern LTDP
                                                                 6'h21: SATA Pattern HTDP
                                                                 6'h22: SATA Pattern LFSCP
                                                                 6'h23: SATA Pattern SSOP
                                                                 6'h24: SATA Pattern LBP
                                                                 6'h25: SATA Pattern COMP
                                                                 6'h28: SAS Pattern JTPAT
                                                                 6'h29: SAS Pattern MJTPAT
                                                                 6'h2a: SAS Pattern CJTPAT
                                                                 6'h2b: SAS Pattern DFE_TRAIN
                                                                 6'h2c: SAS Pattern DFE_TRAIN_DONE
                                                                 Others: Reserved
                                                                 Refer design spec for detail pattern selection */
        uint32_t pt_tx_phyready_force_lane : 1;/**< [ 30: 30](R/W/H) PHY Test PHY Ready Force
                                                                 0: Not force
                                                                 1: Force PHY ready in PHY Test with 1 */
        uint32_t pt_tx_en_lane         : 1;  /**< [ 31: 31](R/W/H) PHY Test Enable
                                                                 0: PHY Test disable
                                                                 1: PHY Test enable
                                                                 Pattern should be selected while PT_EN = 0. When set to 1, this signal clears the pattern and error counts and begins looking for pattern lock. When set to zero this stops the testing and freeze the error and pattern counts. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_tx0_s cn; */
};
typedef union cavm_gsermx_phytest_tx0 cavm_gsermx_phytest_tx0_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_TX0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_TX0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006130ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_TX0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_TX0(a) cavm_gsermx_phytest_tx0_t
#define bustype_CAVM_GSERMX_PHYTEST_TX0(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_TX0(a) "GSERMX_PHYTEST_TX0"
#define device_bar_CAVM_GSERMX_PHYTEST_TX0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_TX0(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_TX0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_tx1
 *
 * GSERM Phy PHYTEST Control Registers 1
 */
union cavm_gsermx_phytest_tx1
{
    uint32_t u;
    struct cavm_gsermx_phytest_tx1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_tx_user_pattern_lane : 32;/**< [ 31:  0](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#else /* Word 0 - Little Endian */
        uint32_t pt_tx_user_pattern_lane : 32;/**< [ 31:  0](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_tx1_s cn; */
};
typedef union cavm_gsermx_phytest_tx1 cavm_gsermx_phytest_tx1_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_TX1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_TX1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006138ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_TX1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_TX1(a) cavm_gsermx_phytest_tx1_t
#define bustype_CAVM_GSERMX_PHYTEST_TX1(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_TX1(a) "GSERMX_PHYTEST_TX1"
#define device_bar_CAVM_GSERMX_PHYTEST_TX1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_TX1(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_TX1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_tx2
 *
 * GSERM Phy PHYTEST Control Registers 2
 */
union cavm_gsermx_phytest_tx2
{
    uint32_t u;
    struct cavm_gsermx_phytest_tx2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_tx_user_pattern_lane : 32;/**< [ 31:  0](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#else /* Word 0 - Little Endian */
        uint32_t pt_tx_user_pattern_lane : 32;/**< [ 31:  0](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_tx2_s cn; */
};
typedef union cavm_gsermx_phytest_tx2 cavm_gsermx_phytest_tx2_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_TX2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_TX2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006140ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_TX2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_TX2(a) cavm_gsermx_phytest_tx2_t
#define bustype_CAVM_GSERMX_PHYTEST_TX2(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_TX2(a) "GSERMX_PHYTEST_TX2"
#define device_bar_CAVM_GSERMX_PHYTEST_TX2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_TX2(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_TX2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_phytest_tx3
 *
 * GSERM Phy PHYTEST Control Registers 3
 */
union cavm_gsermx_phytest_tx3
{
    uint32_t u;
    struct cavm_gsermx_phytest_tx3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pt_tx_user_pattern_lane : 16;/**< [ 31: 16](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
        uint32_t pt_tx_user_k_char_lane : 8; /**< [ 15:  8](R/W/H) 64bit User Pattern K Character
                                                                 Indicate which byte is K character for 8/10 encoder */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t pt_tx_user_k_char_lane : 8; /**< [ 15:  8](R/W/H) 64bit User Pattern K Character
                                                                 Indicate which byte is K character for 8/10 encoder */
        uint32_t pt_tx_user_pattern_lane : 16;/**< [ 31: 16](R/W/H) User Defined Pattern
                                                                 User defined pattern for both 80bit user pattern */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_phytest_tx3_s cn; */
};
typedef union cavm_gsermx_phytest_tx3 cavm_gsermx_phytest_tx3_t;

static inline uint64_t CAVM_GSERMX_PHYTEST_TX3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PHYTEST_TX3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006148ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PHYTEST_TX3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PHYTEST_TX3(a) cavm_gsermx_phytest_tx3_t
#define bustype_CAVM_GSERMX_PHYTEST_TX3(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PHYTEST_TX3(a) "GSERMX_PHYTEST_TX3"
#define device_bar_CAVM_GSERMX_PHYTEST_TX3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PHYTEST_TX3(a) (a)
#define arguments_CAVM_GSERMX_PHYTEST_TX3(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_pin_reserved_input_rx#
 *
 * GSERM PIN_RESERVED_INPUT_RX Register
 */
union cavm_gsermx_pin_reserved_input_rxx
{
    uint64_t u;
    struct cavm_gsermx_pin_reserved_input_rxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t pin_reserved_input_rx : 16; /**< [ 15:  0](R/W) Reserved Input Pins for Rx. */
#else /* Word 0 - Little Endian */
        uint64_t pin_reserved_input_rx : 16; /**< [ 15:  0](R/W) Reserved Input Pins for Rx. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_pin_reserved_input_rxx_s cn; */
};
typedef union cavm_gsermx_pin_reserved_input_rxx cavm_gsermx_pin_reserved_input_rxx_t;

static inline uint64_t CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a0081168ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_PIN_RESERVED_INPUT_RXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) cavm_gsermx_pin_reserved_input_rxx_t
#define bustype_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) "GSERMX_PIN_RESERVED_INPUT_RXX"
#define device_bar_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) (a)
#define arguments_CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_pin_reserved_io_mcu
 *
 * GSERM RX_TRAIN_STATUS Registers
 */
union cavm_gsermx_pin_reserved_io_mcu
{
    uint64_t u;
    struct cavm_gsermx_pin_reserved_io_mcu_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pin_reserved_input    : 16; /**< [ 63: 48](R/W) Reserved Input Pins. */
        uint64_t pin_reserved_output   : 16; /**< [ 47: 32](RO/H) Reserved Output Pins. */
        uint64_t reserved_1_31         : 31;
        uint64_t pin_mcu_init_done     : 1;  /**< [  0:  0](RO/H) MCU initialization is done. 0x0 = MCU initialization not done yet. 0x1 = MCU
                                                                 initialization is done. */
#else /* Word 0 - Little Endian */
        uint64_t pin_mcu_init_done     : 1;  /**< [  0:  0](RO/H) MCU initialization is done. 0x0 = MCU initialization not done yet. 0x1 = MCU
                                                                 initialization is done. */
        uint64_t reserved_1_31         : 31;
        uint64_t pin_reserved_output   : 16; /**< [ 47: 32](RO/H) Reserved Output Pins. */
        uint64_t pin_reserved_input    : 16; /**< [ 63: 48](R/W) Reserved Input Pins. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_pin_reserved_io_mcu_s cn; */
};
typedef union cavm_gsermx_pin_reserved_io_mcu cavm_gsermx_pin_reserved_io_mcu_t;

static inline uint64_t CAVM_GSERMX_PIN_RESERVED_IO_MCU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PIN_RESERVED_IO_MCU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0081140ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0081140ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_PIN_RESERVED_IO_MCU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) cavm_gsermx_pin_reserved_io_mcu_t
#define bustype_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) "GSERMX_PIN_RESERVED_IO_MCU"
#define device_bar_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) (a)
#define arguments_CAVM_GSERMX_PIN_RESERVED_IO_MCU(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_pmem#
 *
 * GSERM Program Memory (128KB) Registers
 */
union cavm_gsermx_pmemx
{
    uint32_t u;
    struct cavm_gsermx_pmemx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Firmware memory for GSERM microcontroller. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Firmware memory for GSERM microcontroller. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_pmemx_s cn; */
};
typedef union cavm_gsermx_pmemx cavm_gsermx_pmemx_t;

static inline uint64_t CAVM_GSERMX_PMEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_PMEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=32767)))
        return 0x87e0a0040000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7fff);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=32767)))
        return 0x87e0a0040000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7fff);
    __cavm_csr_fatal("GSERMX_PMEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_PMEMX(a,b) cavm_gsermx_pmemx_t
#define bustype_CAVM_GSERMX_PMEMX(a,b) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_PMEMX(a,b) "GSERMX_PMEMX"
#define device_bar_CAVM_GSERMX_PMEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_PMEMX(a,b) (a)
#define arguments_CAVM_GSERMX_PMEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_refclk_ctl1
 *
 * GSERM Reference Clock Control1 Register
 * This register contains control inputs going to the REF_CLK IP module.
 * Refer to the Reference-Clock Termination section in the Clocking chapter to
 * determine which reference clock termination is controlled by each instance of GSERM.
 * This register is asynchronously reset on rst__pll_dcok.
 */
union cavm_gsermx_refclk_ctl1
{
    uint64_t u;
    struct cavm_gsermx_refclk_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t pu                    : 1;  /**< [ 60: 60](R/W) Power up control for REF_CLK IP block.  Must be powered down if
                                                                 there are no input clocks.  So async reset to 0 and software
                                                                 must set this bit when appropriate during chip bring-up.  Also,
                                                                 after setting this bit, software must also wait at least 12usec
                                                                 and then set [RX_EN] within this register.
                                                                 0x0: powered down
                                                                 0x1: powered up */
        uint64_t pu_osc                : 1;  /**< [ 59: 59](R/W) Power Up for Free-Running Ring Oscillator.
                                                                 0x0: powered down
                                                                 0x1: powered up */
        uint64_t speed_osc             : 2;  /**< [ 58: 57](R/W) Speed Select for the Oscillator Clock Out Frequency.
                                                                 This signal is used to select the oscillator clock out frequency.
                                                                 0x0 = 7.37 MHz to 8.32 MHz.
                                                                 0x1 = 8.62 MHz to 9.73 MHz.
                                                                 0x2 = 10.8 MHz to 12.1 MHz.
                                                                 0x3 = 13.8 MHz to 15.4 MHz. */
        uint64_t refclk_out_rx_div_sel : 2;  /**< [ 56: 55](R/W) REFCLK_OUT_RX & REFCLK_OUT_RX_DIG clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_ana1_div_sel   : 2;  /**< [ 54: 53](R/W) CLKOUT_ANA1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_ana2_div_sel   : 2;  /**< [ 52: 51](R/W) CLKOUT_ANA2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig1_div_sel   : 2;  /**< [ 50: 49](R/W) CLKOUT_DIG1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig2_div_sel   : 2;  /**< [ 48: 47](R/W) CLKOUT_DIG2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t refclkc1_div_sel      : 2;  /**< [ 46: 45](R/W) REFCLKC1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t refclkc2_div_sel      : 2;  /**< [ 44: 43](R/W) REFCLKC2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t refclk_out_rx_en      : 1;  /**< [ 42: 42](R/W) REFCLK_OUT_RX & REFCLK_OUT_RX_DIG clock enable
                                                                 0x0: Disable REFCLK_OUT_RX & REFCLK_OUT_RX_DIG
                                                                 0x1: Enable REFCLK_OUT_RX & REFCLK_OUT_RX_DIG */
        uint64_t clkout_ana1_en        : 1;  /**< [ 41: 41](R/W) CLKOUT_ANA1 clock enable
                                                                 0x0: Disable CLKOUT_ANA1
                                                                 0x1: Enable CLKOUT_ANA1 */
        uint64_t clkout_ana2_en        : 1;  /**< [ 40: 40](R/W) CLKOUT_ANA2 clock enable
                                                                 0x0: Disable CLKOUT_ANA2
                                                                 0x1: Enable CLKOUT_ANA2 */
        uint64_t clkout_dig1_en        : 1;  /**< [ 39: 39](R/W) CLKOUT_DIG1 clock enable
                                                                 0x0: Disable CLKOUT_DIG1
                                                                 0x1: Enable CLKOUT_DIG1 */
        uint64_t clkout_dig2_en        : 1;  /**< [ 38: 38](R/W) CLKOUT_DIG2 clock enable
                                                                 0x0: Disable CLKOUT_DIG2
                                                                 0x1: Enable CLKOUT_DIG2 */
        uint64_t refclkc1_en           : 1;  /**< [ 37: 37](R/W) REFCLKC1 clock enable
                                                                 0x0: Disable REFCLKC1
                                                                 0x1: Enable REFCLKC1 */
        uint64_t refclkc2_en           : 1;  /**< [ 36: 36](R/W) REFCLKC2 clock enable
                                                                 0x0: Disable REFCLKC2
                                                                 0x1: Enable REFCLKC2 */
        uint64_t reserve_in            : 8;  /**< [ 35: 28](R/W) Reserved Input Register Pins.
                                                                 Connect to SoC register.  RESERVE_IN[7:3] and RESERVE_IN[1] not used.
                                                                 RESERVE_IN[2], see GSERM_REFCLK_CTL2[DIV_RX] description.
                                                                 RESERVE_IN[0], see GSERM_REFCLK_CTL1[RX_HYSTERSIS_EN] description. */
        uint64_t rx_en                 : 1;  /**< [ 27: 27](R/W) Enable/Disable Rx.  If there are no input clocks, RX_EN must be set to 0.
                                                                 Set RX_EN=1 only after PU=1 for 12 usec.  To disable Rx without glitch,
                                                                 set RX=0 while maintaining PU=1 for at least 5 falling edges.
                                                                 0x0: Disable Rx
                                                                 0x1: Enable Rx */
        uint64_t rx_hystersis_en       : 1;  /**< [ 26: 26](R/W) Enable/Disable Hysteresis.  This IP has 2 circuits for generating hysteresis,
                                                                 one of which is controlled by this signal.  The other is controlled by RESERVE_IN[0].
                                                                 0x0: Disable hysteresis
                                                                 0x1: Enable hysteresis */
        uint64_t rx_lowoffset_mode     : 1;  /**< [ 25: 25](R/W) Set Low Offset Value
                                                                 0x0: High inherent offset value
                                                                 0x1: Low inherent offset value */
        uint64_t rx_offset_en          : 1;  /**< [ 24: 24](R/W) Enable/Disable Inherent Offset.
                                                                 0x0: Disable inherent offset
                                                                 0x1: Enable inherent offset */
        uint64_t rx_offset_polarity    : 1;  /**< [ 23: 23](R/W) Select Rx Inherent Offset Polarity.
                                                                 Selects polarity in order to overcome inherent offset selected by RX_OFFSET_EN.
                                                                 0x0: Input has negative polarity
                                                                 0x1: Input has positive polarity */
        uint64_t sel_ext               : 1;  /**< [ 22: 22](R/W) Enable/Disable Input Termination.
                                                                 Internal 50-ohm termination is used only for external current mode driver. For
                                                                 external voltage mode driver, set SEL_EXT to 1 and use of the on-board
                                                                 termination is recommended.
                                                                 0x0: Enable internal 50-ohm termination
                                                                 0x1: Disable internal 50-ohm termination */
        uint64_t refclk_logic_sel      : 2;  /**< [ 21: 20](R/W) Input Clock Mode Select
                                                                 0x0: PCIE mode
                                                                 0x1: MCI mode or PECL AC mode
                                                                 0x2: PECL DC mode
                                                                 0x3: CMOS logic */
        uint64_t vcm_sel               : 1;  /**< [ 19: 19](R/W) Internal Receiver Input Common Mode voltage range select:
                                                                 0x0: 360mV~420mV.
                                                                 0x1: 580mV~640mV. */
        uint64_t rx_lowpower_mode      : 2;  /**< [ 18: 17](R/W) Internal Receiver Power Mode select:
                                                                 0x0: default current branches
                                                                 0x1: reduce 25 percent of the current branches
                                                                 0x2: reduce 50 percent of the current branches
                                                                 0x3: reduce 62.5 percent of the current branches */
        uint64_t bias_cur_sel          : 2;  /**< [ 16: 15](R/W) Internal Receiver Bias Current select:
                                                                 0x0: select ICC current
                                                                 0x1: select IPP current.
                                                                 0x2: select internal generated current
                                                                 0x3: select internal generated current */
        uint64_t pecl_ac_cm_sel        : 2;  /**< [ 14: 13](R/W) Internal Receiver Common Mode voltage select:
                                                                 when VCM_SEL=0:
                                                                 0x0: 360mV
                                                                 0x1: 380mV
                                                                 0x2: 400mV
                                                                 0x3: 420mV
                                                                 when VCM_SEL=1:
                                                                 0x0: 580mV
                                                                 0x1: 600mV
                                                                 0x2: 620mV
                                                                 0x3: 640mV */
        uint64_t test_ana              : 3;  /**< [ 12: 10](R/W) Analog Test Point Selection:
                                                                 0x0: High-Z */
        uint64_t test_en               : 1;  /**< [  9:  9](R/W) Enable/Disable Test Point Monitor.
                                                                 0x0: Disable internal test point monitor.  Put TP into high-Z state
                                                                 0x1: Enable internal test point monitor */
        uint64_t clkdet_en             : 1;  /**< [  8:  8](R/W) Clock Detection Block enable:
                                                                 0x0: disable clock detection.
                                                                 0x1: enable clock detection. */
        uint64_t adder_rx_sel          : 1;  /**< [  7:  7](R/W) Adder Tolerance select.
                                                                 When ADDER_RX_SEL = 0, it indicates the previous counter number differs
                                                                 from the present counter number by 2.
                                                                 When ADDER_RX_SEL = 1, it indicates the previous counter number differs
                                                                 from the present counter number by 3.
                                                                 0x0: Tolerance adder sum +/- 2
                                                                 0x1: Tolerance adder sum +/- 3 */
        uint64_t delay_rx_sel          : 2;  /**< [  6:  5](R/W) Clock Ready delay.  Enables a certain delay time after the clock is ready.
                                                                 T = N / Frequency of CLKOUT_OSC where N = DIV_RX[5:0] ratio.
                                                                 0x0: 8T after ready
                                                                 0x1: 16T after ready
                                                                 0x2: 32T after ready
                                                                 0x3: 64T after ready */
        uint64_t det_rx_mode           : 1;  /**< [  4:  4](R/W) Enable/Disable Rx Detector.
                                                                 0x0: Detector always enabled.
                                                                 0x1: Detector disabled when GSERM_REFCLK_STATUS[CK_RX_RDY] = 1 */
        uint64_t glitch_rx_sel         : 2;  /**< [  3:  2](R/W) Glitch Filter select.  Enables glitch removal in the Rx signals by enabling a
                                                                 filter that is a multiple of the refined CLKOUT_OSC signal.
                                                                 T = N / Frequency of CLKOUT_OSC where N = DIV_RX[5:0] ratio.
                                                                 0x0: 1T filter
                                                                 0x1: 2T filter
                                                                 0x2: 4T filter
                                                                 0x3: No filter */
        uint64_t range_rx_sel          : 1;  /**< [  1:  1](R/W) Rx Output Clock Counter Range select.
                                                                 To obtain the Rx output clock counter, divide Rx Output frequency
                                                                 (REFCLK_OUT_RX_DIG) by the result of CLKOUT_OSC / DIV_RX[5:0].

                                                                 For example, if Rx Output frequency (REFCLK_OUT_RX_DIG) is 25 MHz,
                                                                 CLKOUT_OSC = 9.175 MHz, and DIV_RX[5:0] = 16
                                                                 25 MHz / (9.175 MHz / 16) = 43.6
                                                                 This value is between 32 and 63, so CK_RX_RDY = 1.

                                                                 When RX_CLKDET_MODE = 0:
                                                                 0x0: 16 to 63 code
                                                                 0x1: 32 to 63 code
                                                                 When RX_CLKDET_MODE = 1:
                                                                 0x0: 8 to 63 code
                                                                 0x1: 8 to 63 code */
        uint64_t rx_clkdet_mode        : 1;  /**< [  0:  0](R/W) Select Rx Clock Detector frequency.
                                                                 Indicates whether frequency of the detector is fixed or variable.
                                                                 0x0: Fixed detector frequency at one of the following values--25, 26, 40, 50, or 100 MHz.
                                                                 0x1: Variable detector frequency within range of 20 MHz to 50 MHz or is at 100 MHz */
#else /* Word 0 - Little Endian */
        uint64_t rx_clkdet_mode        : 1;  /**< [  0:  0](R/W) Select Rx Clock Detector frequency.
                                                                 Indicates whether frequency of the detector is fixed or variable.
                                                                 0x0: Fixed detector frequency at one of the following values--25, 26, 40, 50, or 100 MHz.
                                                                 0x1: Variable detector frequency within range of 20 MHz to 50 MHz or is at 100 MHz */
        uint64_t range_rx_sel          : 1;  /**< [  1:  1](R/W) Rx Output Clock Counter Range select.
                                                                 To obtain the Rx output clock counter, divide Rx Output frequency
                                                                 (REFCLK_OUT_RX_DIG) by the result of CLKOUT_OSC / DIV_RX[5:0].

                                                                 For example, if Rx Output frequency (REFCLK_OUT_RX_DIG) is 25 MHz,
                                                                 CLKOUT_OSC = 9.175 MHz, and DIV_RX[5:0] = 16
                                                                 25 MHz / (9.175 MHz / 16) = 43.6
                                                                 This value is between 32 and 63, so CK_RX_RDY = 1.

                                                                 When RX_CLKDET_MODE = 0:
                                                                 0x0: 16 to 63 code
                                                                 0x1: 32 to 63 code
                                                                 When RX_CLKDET_MODE = 1:
                                                                 0x0: 8 to 63 code
                                                                 0x1: 8 to 63 code */
        uint64_t glitch_rx_sel         : 2;  /**< [  3:  2](R/W) Glitch Filter select.  Enables glitch removal in the Rx signals by enabling a
                                                                 filter that is a multiple of the refined CLKOUT_OSC signal.
                                                                 T = N / Frequency of CLKOUT_OSC where N = DIV_RX[5:0] ratio.
                                                                 0x0: 1T filter
                                                                 0x1: 2T filter
                                                                 0x2: 4T filter
                                                                 0x3: No filter */
        uint64_t det_rx_mode           : 1;  /**< [  4:  4](R/W) Enable/Disable Rx Detector.
                                                                 0x0: Detector always enabled.
                                                                 0x1: Detector disabled when GSERM_REFCLK_STATUS[CK_RX_RDY] = 1 */
        uint64_t delay_rx_sel          : 2;  /**< [  6:  5](R/W) Clock Ready delay.  Enables a certain delay time after the clock is ready.
                                                                 T = N / Frequency of CLKOUT_OSC where N = DIV_RX[5:0] ratio.
                                                                 0x0: 8T after ready
                                                                 0x1: 16T after ready
                                                                 0x2: 32T after ready
                                                                 0x3: 64T after ready */
        uint64_t adder_rx_sel          : 1;  /**< [  7:  7](R/W) Adder Tolerance select.
                                                                 When ADDER_RX_SEL = 0, it indicates the previous counter number differs
                                                                 from the present counter number by 2.
                                                                 When ADDER_RX_SEL = 1, it indicates the previous counter number differs
                                                                 from the present counter number by 3.
                                                                 0x0: Tolerance adder sum +/- 2
                                                                 0x1: Tolerance adder sum +/- 3 */
        uint64_t clkdet_en             : 1;  /**< [  8:  8](R/W) Clock Detection Block enable:
                                                                 0x0: disable clock detection.
                                                                 0x1: enable clock detection. */
        uint64_t test_en               : 1;  /**< [  9:  9](R/W) Enable/Disable Test Point Monitor.
                                                                 0x0: Disable internal test point monitor.  Put TP into high-Z state
                                                                 0x1: Enable internal test point monitor */
        uint64_t test_ana              : 3;  /**< [ 12: 10](R/W) Analog Test Point Selection:
                                                                 0x0: High-Z */
        uint64_t pecl_ac_cm_sel        : 2;  /**< [ 14: 13](R/W) Internal Receiver Common Mode voltage select:
                                                                 when VCM_SEL=0:
                                                                 0x0: 360mV
                                                                 0x1: 380mV
                                                                 0x2: 400mV
                                                                 0x3: 420mV
                                                                 when VCM_SEL=1:
                                                                 0x0: 580mV
                                                                 0x1: 600mV
                                                                 0x2: 620mV
                                                                 0x3: 640mV */
        uint64_t bias_cur_sel          : 2;  /**< [ 16: 15](R/W) Internal Receiver Bias Current select:
                                                                 0x0: select ICC current
                                                                 0x1: select IPP current.
                                                                 0x2: select internal generated current
                                                                 0x3: select internal generated current */
        uint64_t rx_lowpower_mode      : 2;  /**< [ 18: 17](R/W) Internal Receiver Power Mode select:
                                                                 0x0: default current branches
                                                                 0x1: reduce 25 percent of the current branches
                                                                 0x2: reduce 50 percent of the current branches
                                                                 0x3: reduce 62.5 percent of the current branches */
        uint64_t vcm_sel               : 1;  /**< [ 19: 19](R/W) Internal Receiver Input Common Mode voltage range select:
                                                                 0x0: 360mV~420mV.
                                                                 0x1: 580mV~640mV. */
        uint64_t refclk_logic_sel      : 2;  /**< [ 21: 20](R/W) Input Clock Mode Select
                                                                 0x0: PCIE mode
                                                                 0x1: MCI mode or PECL AC mode
                                                                 0x2: PECL DC mode
                                                                 0x3: CMOS logic */
        uint64_t sel_ext               : 1;  /**< [ 22: 22](R/W) Enable/Disable Input Termination.
                                                                 Internal 50-ohm termination is used only for external current mode driver. For
                                                                 external voltage mode driver, set SEL_EXT to 1 and use of the on-board
                                                                 termination is recommended.
                                                                 0x0: Enable internal 50-ohm termination
                                                                 0x1: Disable internal 50-ohm termination */
        uint64_t rx_offset_polarity    : 1;  /**< [ 23: 23](R/W) Select Rx Inherent Offset Polarity.
                                                                 Selects polarity in order to overcome inherent offset selected by RX_OFFSET_EN.
                                                                 0x0: Input has negative polarity
                                                                 0x1: Input has positive polarity */
        uint64_t rx_offset_en          : 1;  /**< [ 24: 24](R/W) Enable/Disable Inherent Offset.
                                                                 0x0: Disable inherent offset
                                                                 0x1: Enable inherent offset */
        uint64_t rx_lowoffset_mode     : 1;  /**< [ 25: 25](R/W) Set Low Offset Value
                                                                 0x0: High inherent offset value
                                                                 0x1: Low inherent offset value */
        uint64_t rx_hystersis_en       : 1;  /**< [ 26: 26](R/W) Enable/Disable Hysteresis.  This IP has 2 circuits for generating hysteresis,
                                                                 one of which is controlled by this signal.  The other is controlled by RESERVE_IN[0].
                                                                 0x0: Disable hysteresis
                                                                 0x1: Enable hysteresis */
        uint64_t rx_en                 : 1;  /**< [ 27: 27](R/W) Enable/Disable Rx.  If there are no input clocks, RX_EN must be set to 0.
                                                                 Set RX_EN=1 only after PU=1 for 12 usec.  To disable Rx without glitch,
                                                                 set RX=0 while maintaining PU=1 for at least 5 falling edges.
                                                                 0x0: Disable Rx
                                                                 0x1: Enable Rx */
        uint64_t reserve_in            : 8;  /**< [ 35: 28](R/W) Reserved Input Register Pins.
                                                                 Connect to SoC register.  RESERVE_IN[7:3] and RESERVE_IN[1] not used.
                                                                 RESERVE_IN[2], see GSERM_REFCLK_CTL2[DIV_RX] description.
                                                                 RESERVE_IN[0], see GSERM_REFCLK_CTL1[RX_HYSTERSIS_EN] description. */
        uint64_t refclkc2_en           : 1;  /**< [ 36: 36](R/W) REFCLKC2 clock enable
                                                                 0x0: Disable REFCLKC2
                                                                 0x1: Enable REFCLKC2 */
        uint64_t refclkc1_en           : 1;  /**< [ 37: 37](R/W) REFCLKC1 clock enable
                                                                 0x0: Disable REFCLKC1
                                                                 0x1: Enable REFCLKC1 */
        uint64_t clkout_dig2_en        : 1;  /**< [ 38: 38](R/W) CLKOUT_DIG2 clock enable
                                                                 0x0: Disable CLKOUT_DIG2
                                                                 0x1: Enable CLKOUT_DIG2 */
        uint64_t clkout_dig1_en        : 1;  /**< [ 39: 39](R/W) CLKOUT_DIG1 clock enable
                                                                 0x0: Disable CLKOUT_DIG1
                                                                 0x1: Enable CLKOUT_DIG1 */
        uint64_t clkout_ana2_en        : 1;  /**< [ 40: 40](R/W) CLKOUT_ANA2 clock enable
                                                                 0x0: Disable CLKOUT_ANA2
                                                                 0x1: Enable CLKOUT_ANA2 */
        uint64_t clkout_ana1_en        : 1;  /**< [ 41: 41](R/W) CLKOUT_ANA1 clock enable
                                                                 0x0: Disable CLKOUT_ANA1
                                                                 0x1: Enable CLKOUT_ANA1 */
        uint64_t refclk_out_rx_en      : 1;  /**< [ 42: 42](R/W) REFCLK_OUT_RX & REFCLK_OUT_RX_DIG clock enable
                                                                 0x0: Disable REFCLK_OUT_RX & REFCLK_OUT_RX_DIG
                                                                 0x1: Enable REFCLK_OUT_RX & REFCLK_OUT_RX_DIG */
        uint64_t refclkc2_div_sel      : 2;  /**< [ 44: 43](R/W) REFCLKC2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t refclkc1_div_sel      : 2;  /**< [ 46: 45](R/W) REFCLKC1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig2_div_sel   : 2;  /**< [ 48: 47](R/W) CLKOUT_DIG2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_dig1_div_sel   : 2;  /**< [ 50: 49](R/W) CLKOUT_DIG1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_ana2_div_sel   : 2;  /**< [ 52: 51](R/W) CLKOUT_ANA2 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t clkout_ana1_div_sel   : 2;  /**< [ 54: 53](R/W) CLKOUT_ANA1 clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t refclk_out_rx_div_sel : 2;  /**< [ 56: 55](R/W) REFCLK_OUT_RX & REFCLK_OUT_RX_DIG clock division ratio select:
                                                                 0x0 = Divided by 1.
                                                                 0x1 = Divided by 2.
                                                                 0x2 = Divided by 4.
                                                                 0x3 = Divided by 8. */
        uint64_t speed_osc             : 2;  /**< [ 58: 57](R/W) Speed Select for the Oscillator Clock Out Frequency.
                                                                 This signal is used to select the oscillator clock out frequency.
                                                                 0x0 = 7.37 MHz to 8.32 MHz.
                                                                 0x1 = 8.62 MHz to 9.73 MHz.
                                                                 0x2 = 10.8 MHz to 12.1 MHz.
                                                                 0x3 = 13.8 MHz to 15.4 MHz. */
        uint64_t pu_osc                : 1;  /**< [ 59: 59](R/W) Power Up for Free-Running Ring Oscillator.
                                                                 0x0: powered down
                                                                 0x1: powered up */
        uint64_t pu                    : 1;  /**< [ 60: 60](R/W) Power up control for REF_CLK IP block.  Must be powered down if
                                                                 there are no input clocks.  So async reset to 0 and software
                                                                 must set this bit when appropriate during chip bring-up.  Also,
                                                                 after setting this bit, software must also wait at least 12usec
                                                                 and then set [RX_EN] within this register.
                                                                 0x0: powered down
                                                                 0x1: powered up */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_refclk_ctl1_s cn; */
};
typedef union cavm_gsermx_refclk_ctl1 cavm_gsermx_refclk_ctl1_t;

static inline uint64_t CAVM_GSERMX_REFCLK_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_REFCLK_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800e0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800e0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_REFCLK_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_REFCLK_CTL1(a) cavm_gsermx_refclk_ctl1_t
#define bustype_CAVM_GSERMX_REFCLK_CTL1(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_REFCLK_CTL1(a) "GSERMX_REFCLK_CTL1"
#define device_bar_CAVM_GSERMX_REFCLK_CTL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_REFCLK_CTL1(a) (a)
#define arguments_CAVM_GSERMX_REFCLK_CTL1(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_refclk_ctl2
 *
 * GSERM Reference Clock Control2 Register
 * This register contains control inputs going to the REF_CLK IP module.
 * Refer to the Reference-Clock Termination section in the Clocking chapter to
 * determine which reference clock termination is controlled by each instance of GSERM.
 * This register is asynchronously reset on rst__pll_dcok.
 */
union cavm_gsermx_refclk_ctl2
{
    uint64_t u;
    struct cavm_gsermx_refclk_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t clkout_dig_div_sel    : 5;  /**< [ 10:  6](R/W) Select Clock Out Digital Divider.
                                                                 The divided result is ONLY used as an input into the clock detection logic.
                                                                 0x0:  Divided by 1
                                                                 0x1:  Divided by 1
                                                                 0x2:  Divided by 2
                                                                 0x3:  Divided by 3
                                                                 0x4:  Divided by 4
                                                                 0x5:  Divided by 5
                                                                 [...]
                                                                 0x1f: Divided by 31 */
        uint64_t div_rx                : 6;  /**< [  5:  0](R/W) Rx Divider Ratio select.

                                                                 When RX_CLKDET_MODE = 0 and RANGE_RX_SEL = 1, set DIV_RX to the
                                                                 following values to detect the relevant REFCLK frequency.
                                                                 0x08: 50 MHz or 100MHz
                                                                 0x0A: 40 MHz
                                                                 0x0F: 26 MHz
                                                                 0x10: 25 MHz

                                                                 When RX_CLKDET_MODE = 0 and RANGE_RX_SEL = 0, set DIV_RX to the
                                                                 following values to detect the relevant REFCLK frequency.
                                                                 0x06: 50 MHz or 100MHz
                                                                 0x08: 40 MHz
                                                                 0x0C: 26 MHz
                                                                 0x0D: 25 MHz

                                                                 When RX_CLKDET_MODE = 1:
                                                                 0x06: always use this value when RX_CLKDET_MODE = 1

                                                                 All other encodings not called out above are reserved. */
#else /* Word 0 - Little Endian */
        uint64_t div_rx                : 6;  /**< [  5:  0](R/W) Rx Divider Ratio select.

                                                                 When RX_CLKDET_MODE = 0 and RANGE_RX_SEL = 1, set DIV_RX to the
                                                                 following values to detect the relevant REFCLK frequency.
                                                                 0x08: 50 MHz or 100MHz
                                                                 0x0A: 40 MHz
                                                                 0x0F: 26 MHz
                                                                 0x10: 25 MHz

                                                                 When RX_CLKDET_MODE = 0 and RANGE_RX_SEL = 0, set DIV_RX to the
                                                                 following values to detect the relevant REFCLK frequency.
                                                                 0x06: 50 MHz or 100MHz
                                                                 0x08: 40 MHz
                                                                 0x0C: 26 MHz
                                                                 0x0D: 25 MHz

                                                                 When RX_CLKDET_MODE = 1:
                                                                 0x06: always use this value when RX_CLKDET_MODE = 1

                                                                 All other encodings not called out above are reserved. */
        uint64_t clkout_dig_div_sel    : 5;  /**< [ 10:  6](R/W) Select Clock Out Digital Divider.
                                                                 The divided result is ONLY used as an input into the clock detection logic.
                                                                 0x0:  Divided by 1
                                                                 0x1:  Divided by 1
                                                                 0x2:  Divided by 2
                                                                 0x3:  Divided by 3
                                                                 0x4:  Divided by 4
                                                                 0x5:  Divided by 5
                                                                 [...]
                                                                 0x1f: Divided by 31 */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_refclk_ctl2_s cn; */
};
typedef union cavm_gsermx_refclk_ctl2 cavm_gsermx_refclk_ctl2_t;

static inline uint64_t CAVM_GSERMX_REFCLK_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_REFCLK_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800e8ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800e8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_REFCLK_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_REFCLK_CTL2(a) cavm_gsermx_refclk_ctl2_t
#define bustype_CAVM_GSERMX_REFCLK_CTL2(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_REFCLK_CTL2(a) "GSERMX_REFCLK_CTL2"
#define device_bar_CAVM_GSERMX_REFCLK_CTL2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_REFCLK_CTL2(a) (a)
#define arguments_CAVM_GSERMX_REFCLK_CTL2(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_refclk_status
 *
 * GSERM Reference Clock Status Register
 * This register contains status values coming from the REF_CLK IP module.
 * Refer to the Reference-Clock Termination section in the Clocking chapter to
 * determine which reference clock termination is controlled by each instance of GSERM.
 */
union cavm_gsermx_refclk_status
{
    uint64_t u;
    struct cavm_gsermx_refclk_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t reserve_out           : 8;  /**< [  8:  1](RO/H) Reserved Output Register Pins. */
        uint64_t ck_rx_rdy             : 1;  /**< [  0:  0](RO/H) Clock Ready Indicator.
                                                                 0x0: CK not in the target range
                                                                 0x1: CK ready */
#else /* Word 0 - Little Endian */
        uint64_t ck_rx_rdy             : 1;  /**< [  0:  0](RO/H) Clock Ready Indicator.
                                                                 0x0: CK not in the target range
                                                                 0x1: CK ready */
        uint64_t reserve_out           : 8;  /**< [  8:  1](RO/H) Reserved Output Register Pins. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_refclk_status_s cn; */
};
typedef union cavm_gsermx_refclk_status cavm_gsermx_refclk_status_t;

static inline uint64_t CAVM_GSERMX_REFCLK_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_REFCLK_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a00800f0ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a00800f0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_REFCLK_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_REFCLK_STATUS(a) cavm_gsermx_refclk_status_t
#define bustype_CAVM_GSERMX_REFCLK_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_REFCLK_STATUS(a) "GSERMX_REFCLK_STATUS"
#define device_bar_CAVM_GSERMX_REFCLK_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_REFCLK_STATUS(a) (a)
#define arguments_CAVM_GSERMX_REFCLK_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_rx_data_path_reg
 *
 * GSERM Phy RX Data Path Regiser
 */
union cavm_gsermx_rx_data_path_reg
{
    uint32_t u;
    struct cavm_gsermx_rx_data_path_reg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t local_dig_tx2rx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Parallel Transmit To Receive Loopback Enable
                                                                 0: Not enabled
                                                                 1: Enabled
                                                                 The parallel data received on the transmit data bus for the transmission is looped back to the receive parallel bus and bypasses the majority of the PHY circuits. */
        uint32_t det_bypass_lane       : 1;  /**< [ 30: 30](R/W/H) Bypass Frame Detection And Sync Detection For RXDATA
                                                                 0: Frame detection or sync detection is enabled, PIN_RXDATA has cycle delay from analog, if sync detection is used or frame marker detection is used, this bit must be set to 0
                                                                 1: Directly output analog data, PIN_RXDATA has no cycle delay from analog */
        uint32_t rxd_inv_lane          : 1;  /**< [ 29: 29](R/W/H) Receive Polarity Invert
                                                                 It is receive polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 becomes 0 and 0 becomes 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic can invert the polarity.
                                                                 This inversion comes before the PHY Test logic so the PHY Test module also sees the inversion. */
        uint32_t rxdata_latency_reduce_en_lane : 1;/**< [ 28: 28](R/W/H) Rx Data Path Latency Reduction Enable
                                                                 Reduce Rx Data Path Latency By One Clock Cycle For Data Rate Under 12Gbps For Backward Compatible
                                                                 0: Rx data path latency is not reduced
                                                                 1: Rx data path latency is reduced */
        uint32_t rxd_msb_lsb_swap_lane : 1;  /**< [ 27: 27](R/W/H) Receiver PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_25_26        : 2;
        uint32_t rxdata_msb_lsb_swap_lane : 1;/**< [ 24: 24](R/W/H) Receiver PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_22_23        : 2;
        uint32_t rxdata_pre_code_msb_lsb_swap_lane : 1;/**< [ 21: 21](R/W/H) Receiver PAM4 Symbol Of PRE Code MSB LSB Swap
                                                                 internal */
        uint32_t reserved_0_20         : 21;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_20         : 21;
        uint32_t rxdata_pre_code_msb_lsb_swap_lane : 1;/**< [ 21: 21](R/W/H) Receiver PAM4 Symbol Of PRE Code MSB LSB Swap
                                                                 internal */
        uint32_t reserved_22_23        : 2;
        uint32_t rxdata_msb_lsb_swap_lane : 1;/**< [ 24: 24](R/W/H) Receiver PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_25_26        : 2;
        uint32_t rxd_msb_lsb_swap_lane : 1;  /**< [ 27: 27](R/W/H) Receiver PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t rxdata_latency_reduce_en_lane : 1;/**< [ 28: 28](R/W/H) Rx Data Path Latency Reduction Enable
                                                                 Reduce Rx Data Path Latency By One Clock Cycle For Data Rate Under 12Gbps For Backward Compatible
                                                                 0: Rx data path latency is not reduced
                                                                 1: Rx data path latency is reduced */
        uint32_t rxd_inv_lane          : 1;  /**< [ 29: 29](R/W/H) Receive Polarity Invert
                                                                 It is receive polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 becomes 0 and 0 becomes 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic can invert the polarity.
                                                                 This inversion comes before the PHY Test logic so the PHY Test module also sees the inversion. */
        uint32_t det_bypass_lane       : 1;  /**< [ 30: 30](R/W/H) Bypass Frame Detection And Sync Detection For RXDATA
                                                                 0: Frame detection or sync detection is enabled, PIN_RXDATA has cycle delay from analog, if sync detection is used or frame marker detection is used, this bit must be set to 0
                                                                 1: Directly output analog data, PIN_RXDATA has no cycle delay from analog */
        uint32_t local_dig_tx2rx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Parallel Transmit To Receive Loopback Enable
                                                                 0: Not enabled
                                                                 1: Enabled
                                                                 The parallel data received on the transmit data bus for the transmission is looped back to the receive parallel bus and bypasses the majority of the PHY circuits. */
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_rx_data_path_reg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t local_dig_tx2rx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Parallel Transmit To Receive Loopback Enable
                                                                 0: Not enabled
                                                                 1: Enabled
                                                                 The parallel data received on the transmit data bus for the transmission is looped back to the receive parallel bus and bypasses the majority of the PHY circuits. */
        uint32_t det_bypass_lane       : 1;  /**< [ 30: 30](R/W/H) Bypass Frame Detection And Sync Detection For RXDATA
                                                                 0: Frame detection or sync detection is enabled, PIN_RXDATA has cycle delay from analog, if sync detection is used or frame marker detection is used, this bit must be set to 0
                                                                 1: Directly output analog data, PIN_RXDATA has no cycle delay from analog */
        uint32_t rxd_inv_lane          : 1;  /**< [ 29: 29](R/W/H) Receive Polarity Invert
                                                                 It is receive polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 becomes 0 and 0 becomes 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic can invert the polarity.
                                                                 This inversion comes before the PHY Test logic so the PHY Test module also sees the inversion. */
        uint32_t rxdata_latency_reduce_en_lane : 1;/**< [ 28: 28](R/W/H) Rx Data Path Latency Reduction Enable
                                                                 Reduce Rx Data Path Latency By One Clock Cycle For Data Rate Under 12Gbps For Backward Compatible
                                                                 0: Rx data path latency is not reduced
                                                                 1: Rx data path latency is reduced */
        uint32_t rxd_msb_lsb_swap_lane : 1;  /**< [ 27: 27](R/W/H) Receiver PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_26           : 1;
        uint32_t reserved_25           : 1;
        uint32_t rxdata_msb_lsb_swap_lane : 1;/**< [ 24: 24](R/W/H) Receiver PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_23           : 1;
        uint32_t reserved_22           : 1;
        uint32_t rxdata_pre_code_msb_lsb_swap_lane : 1;/**< [ 21: 21](R/W/H) Receiver PAM4 Symbol Of PRE Code MSB LSB Swap
                                                                 internal */
        uint32_t reserved_0_20         : 21;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_20         : 21;
        uint32_t rxdata_pre_code_msb_lsb_swap_lane : 1;/**< [ 21: 21](R/W/H) Receiver PAM4 Symbol Of PRE Code MSB LSB Swap
                                                                 internal */
        uint32_t reserved_22           : 1;
        uint32_t reserved_23           : 1;
        uint32_t rxdata_msb_lsb_swap_lane : 1;/**< [ 24: 24](R/W/H) Receiver PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_25           : 1;
        uint32_t reserved_26           : 1;
        uint32_t rxd_msb_lsb_swap_lane : 1;  /**< [ 27: 27](R/W/H) Receiver PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t rxdata_latency_reduce_en_lane : 1;/**< [ 28: 28](R/W/H) Rx Data Path Latency Reduction Enable
                                                                 Reduce Rx Data Path Latency By One Clock Cycle For Data Rate Under 12Gbps For Backward Compatible
                                                                 0: Rx data path latency is not reduced
                                                                 1: Rx data path latency is reduced */
        uint32_t rxd_inv_lane          : 1;  /**< [ 29: 29](R/W/H) Receive Polarity Invert
                                                                 It is receive polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 becomes 0 and 0 becomes 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic can invert the polarity.
                                                                 This inversion comes before the PHY Test logic so the PHY Test module also sees the inversion. */
        uint32_t det_bypass_lane       : 1;  /**< [ 30: 30](R/W/H) Bypass Frame Detection And Sync Detection For RXDATA
                                                                 0: Frame detection or sync detection is enabled, PIN_RXDATA has cycle delay from analog, if sync detection is used or frame marker detection is used, this bit must be set to 0
                                                                 1: Directly output analog data, PIN_RXDATA has no cycle delay from analog */
        uint32_t local_dig_tx2rx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Parallel Transmit To Receive Loopback Enable
                                                                 0: Not enabled
                                                                 1: Enabled
                                                                 The parallel data received on the transmit data bus for the transmission is looped back to the receive parallel bus and bypasses the majority of the PHY circuits. */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_gsermx_rx_data_path_reg cavm_gsermx_rx_data_path_reg_t;

static inline uint64_t CAVM_GSERMX_RX_DATA_PATH_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_RX_DATA_PATH_REG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006490ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_RX_DATA_PATH_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_RX_DATA_PATH_REG(a) cavm_gsermx_rx_data_path_reg_t
#define bustype_CAVM_GSERMX_RX_DATA_PATH_REG(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_RX_DATA_PATH_REG(a) "GSERMX_RX_DATA_PATH_REG"
#define device_bar_CAVM_GSERMX_RX_DATA_PATH_REG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_RX_DATA_PATH_REG(a) (a)
#define arguments_CAVM_GSERMX_RX_DATA_PATH_REG(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_rx_system_lane
 *
 * GSERM Phy
 */
union cavm_gsermx_rx_system_lane
{
    uint32_t u;
    struct cavm_gsermx_rx_system_lane_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Rx Data Bus Width
                                                                 1'b0: 40-bit when PAM2_EN is 1, 80-bit when PAM2_EN is 0
                                                                 1'b1: 32-bit when PAM2_EN is 1, 64-bit when PAM2_EN is 0 */
        uint32_t train_rx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Rx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t rx_eq_pam2_en_lane    : 1;  /**< [ 29: 29](R/W/H) Rx Equalization PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t rx_ana_pam2_en_lane   : 1;  /**< [ 28: 28](R/W/H) Rx Analog PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t reserved_17_27        : 11;
        uint32_t trx_rxclk_sel_lane    : 1;  /**< [ 16: 16](R/W/H) Select PLL Source For Rx
                                                                 Select the PLL source for Rx.
                                                                 0: Rx PLL is from PLL_RS
                                                                 1: Rx PLL is from PLL_TS */
        uint32_t reserved_3_15         : 13;
        uint32_t rx_data_width_lane    : 2;  /**< [  2:  1](R/W/H) Rx Data Width
                                                                 internal
                                                                 00: 16 or 20 bits.
                                                                 01: 32 or 40 bits.
                                                                 10: 64 or 80 bits.
                                                                 11: 128 or 160 bits. */
        uint32_t rx_pam2_en_lane       : 1;  /**< [  0:  0](R/W/H) Rx PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
#else /* Word 0 - Little Endian */
        uint32_t rx_pam2_en_lane       : 1;  /**< [  0:  0](R/W/H) Rx PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t rx_data_width_lane    : 2;  /**< [  2:  1](R/W/H) Rx Data Width
                                                                 internal
                                                                 00: 16 or 20 bits.
                                                                 01: 32 or 40 bits.
                                                                 10: 64 or 80 bits.
                                                                 11: 128 or 160 bits. */
        uint32_t reserved_3_15         : 13;
        uint32_t trx_rxclk_sel_lane    : 1;  /**< [ 16: 16](R/W/H) Select PLL Source For Rx
                                                                 Select the PLL source for Rx.
                                                                 0: Rx PLL is from PLL_RS
                                                                 1: Rx PLL is from PLL_TS */
        uint32_t reserved_17_27        : 11;
        uint32_t rx_ana_pam2_en_lane   : 1;  /**< [ 28: 28](R/W/H) Rx Analog PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t rx_eq_pam2_en_lane    : 1;  /**< [ 29: 29](R/W/H) Rx Equalization PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t train_rx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Rx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t rx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Rx Data Bus Width
                                                                 1'b0: 40-bit when PAM2_EN is 1, 80-bit when PAM2_EN is 0
                                                                 1'b1: 32-bit when PAM2_EN is 1, 64-bit when PAM2_EN is 0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_rx_system_lane_s cn; */
};
typedef union cavm_gsermx_rx_system_lane cavm_gsermx_rx_system_lane_t;

static inline uint64_t CAVM_GSERMX_RX_SYSTEM_LANE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_RX_SYSTEM_LANE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006408ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_RX_SYSTEM_LANE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_RX_SYSTEM_LANE(a) cavm_gsermx_rx_system_lane_t
#define bustype_CAVM_GSERMX_RX_SYSTEM_LANE(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_RX_SYSTEM_LANE(a) "GSERMX_RX_SYSTEM_LANE"
#define device_bar_CAVM_GSERMX_RX_SYSTEM_LANE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_RX_SYSTEM_LANE(a) (a)
#define arguments_CAVM_GSERMX_RX_SYSTEM_LANE(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_rx_term_ctl
 *
 * Receiver Termination Under perst (by lane) Control Register
 */
union cavm_gsermx_rx_term_ctl
{
    uint64_t u;
    struct cavm_gsermx_rx_term_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t term_ctl              : 64; /**< [ 63:  0](R/W) Placeholder until RTL is written. */
#else /* Word 0 - Little Endian */
        uint64_t term_ctl              : 64; /**< [ 63:  0](R/W) Placeholder until RTL is written. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_rx_term_ctl_s cn; */
};
typedef union cavm_gsermx_rx_term_ctl cavm_gsermx_rx_term_ctl_t;

static inline uint64_t CAVM_GSERMX_RX_TERM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_RX_TERM_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && ((a<=2) || (a==15)))
        return 0x87e0a0080070ll + 0x1000000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0080070ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_RX_TERM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_RX_TERM_CTL(a) cavm_gsermx_rx_term_ctl_t
#define bustype_CAVM_GSERMX_RX_TERM_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_RX_TERM_CTL(a) "GSERMX_RX_TERM_CTL"
#define device_bar_CAVM_GSERMX_RX_TERM_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_RX_TERM_CTL(a) (a)
#define arguments_CAVM_GSERMX_RX_TERM_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_scratch#
 *
 * GSERM Scratch Registers
 */
union cavm_gsermx_scratchx
{
    uint64_t u;
    struct cavm_gsermx_scratchx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_scratchx_s cn; */
};
typedef union cavm_gsermx_scratchx cavm_gsermx_scratchx_t;

static inline uint64_t CAVM_GSERMX_SCRATCHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_SCRATCHX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=7)))
        return 0x87e0a0080000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=7)))
        return 0x87e0a0080000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("GSERMX_SCRATCHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_SCRATCHX(a,b) cavm_gsermx_scratchx_t
#define bustype_CAVM_GSERMX_SCRATCHX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_SCRATCHX(a,b) "GSERMX_SCRATCHX"
#define device_bar_CAVM_GSERMX_SCRATCHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_SCRATCHX(a,b) (a)
#define arguments_CAVM_GSERMX_SCRATCHX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) gserm#_scratch_dom_rst#
 *
 * GSERM Scratch Registers
 */
union cavm_gsermx_scratch_dom_rstx
{
    uint64_t u;
    struct cavm_gsermx_scratch_dom_rstx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_scratch_dom_rstx_s cn; */
};
typedef union cavm_gsermx_scratch_dom_rstx cavm_gsermx_scratch_dom_rstx_t;

static inline uint64_t CAVM_GSERMX_SCRATCH_DOM_RSTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_SCRATCH_DOM_RSTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CHEETAH) && (((a<=2) || (a==15)) && (b<=1)))
        return 0x87e0a00810d0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=1)))
        return 0x87e0a00810d0ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("GSERMX_SCRATCH_DOM_RSTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) cavm_gsermx_scratch_dom_rstx_t
#define bustype_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) "GSERMX_SCRATCH_DOM_RSTX"
#define device_bar_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) (a)
#define arguments_CAVM_GSERMX_SCRATCH_DOM_RSTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL32b) gserm#_system
 *
 * GSERM Phy Common System Registers
 */
union cavm_gsermx_system
{
    uint32_t u;
    struct cavm_gsermx_system_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lane_sel              : 4;  /**< [ 31: 28](R/W/H) Register Lane Selection.
                                                                 These registers select which lane to program.
                                                                 4'h0: First lane
                                                                 4'h1: Second lane
                                                                 Others: N-1 lane */
        uint32_t broadcast             : 1;  /**< [ 27: 27](R/W/H) Register Broadcast Mode.
                                                                 This register indicates that the PHY is in Broadcast mode
                                                                 0: Not in Broadcast mode. Program LANE_SEL[2:0] To access each lane.
                                                                 1: APB and SIF Broadcast to all lanes. LANE_SEL[2:0] is ignored. */
        uint32_t reserved_24_26        : 3;
        uint32_t phy_isolate_mode      : 1;  /**< [ 23: 23](R/W/H) PHY Isolate Mode
                                                                 0: PHY is in Normal mode
                                                                 1: PHY is in Isolation mode. (This is used to isolate the PHY from outside logic to test it in standalone mode.) */
        uint32_t reserved_22           : 1;
        uint32_t sft_rst_no_reg_cmn    : 1;  /**< [ 21: 21](R/W/H) Software Reset For Internal Logic.
                                                                 Soft reset internal logic except control registers. It shall be set to 0 to release reset
                                                                 0: Not reset
                                                                 1: Reset */
        uint32_t sft_rst_only_reg      : 1;  /**< [ 20: 20](R/W/H) PHY Register Soft Reset With Auto Clear.
                                                                 This register resets all PHY registers to default values including itself. It doesn't reset any PHY state machines. After this register is set to 1h, it is cleared back to 0h automatically. This field is ORed with PIN_RESET to generate a reset for all PHY registers.
                                                                 0: No reset
                                                                 1: Reset */
        uint32_t reserved_1_19         : 19;
        uint32_t rst_reg_clk_cmn       : 1;  /**< [  0:  0](R/W/H) Reset Common Control Registers
                                                                 internal
                                                                 1: Reset
                                                                 0: Not reset */
#else /* Word 0 - Little Endian */
        uint32_t rst_reg_clk_cmn       : 1;  /**< [  0:  0](R/W/H) Reset Common Control Registers
                                                                 internal
                                                                 1: Reset
                                                                 0: Not reset */
        uint32_t reserved_1_19         : 19;
        uint32_t sft_rst_only_reg      : 1;  /**< [ 20: 20](R/W/H) PHY Register Soft Reset With Auto Clear.
                                                                 This register resets all PHY registers to default values including itself. It doesn't reset any PHY state machines. After this register is set to 1h, it is cleared back to 0h automatically. This field is ORed with PIN_RESET to generate a reset for all PHY registers.
                                                                 0: No reset
                                                                 1: Reset */
        uint32_t sft_rst_no_reg_cmn    : 1;  /**< [ 21: 21](R/W/H) Software Reset For Internal Logic.
                                                                 Soft reset internal logic except control registers. It shall be set to 0 to release reset
                                                                 0: Not reset
                                                                 1: Reset */
        uint32_t reserved_22           : 1;
        uint32_t phy_isolate_mode      : 1;  /**< [ 23: 23](R/W/H) PHY Isolate Mode
                                                                 0: PHY is in Normal mode
                                                                 1: PHY is in Isolation mode. (This is used to isolate the PHY from outside logic to test it in standalone mode.) */
        uint32_t reserved_24_26        : 3;
        uint32_t broadcast             : 1;  /**< [ 27: 27](R/W/H) Register Broadcast Mode.
                                                                 This register indicates that the PHY is in Broadcast mode
                                                                 0: Not in Broadcast mode. Program LANE_SEL[2:0] To access each lane.
                                                                 1: APB and SIF Broadcast to all lanes. LANE_SEL[2:0] is ignored. */
        uint32_t lane_sel              : 4;  /**< [ 31: 28](R/W/H) Register Lane Selection.
                                                                 These registers select which lane to program.
                                                                 4'h0: First lane
                                                                 4'h1: Second lane
                                                                 Others: N-1 lane */
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_system_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lane_sel              : 4;  /**< [ 31: 28](R/W/H) Register Lane Selection.
                                                                 These registers select which lane to program.
                                                                 4'h0: First lane
                                                                 4'h1: Second lane
                                                                 Others: N-1 lane */
        uint32_t broadcast             : 1;  /**< [ 27: 27](R/W/H) Register Broadcast Mode.
                                                                 This register indicates that the PHY is in Broadcast mode
                                                                 0: Not in Broadcast mode. Program LANE_SEL[2:0] To access each lane.
                                                                 1: APB and SIF Broadcast to all lanes. LANE_SEL[2:0] is ignored. */
        uint32_t reserved_24_26        : 3;
        uint32_t phy_isolate_mode      : 1;  /**< [ 23: 23](R/W/H) PHY Isolate Mode
                                                                 0: PHY is in Normal mode
                                                                 1: PHY is in Isolation mode. (This is used to isolate the PHY from outside logic to test it in standalone mode.) */
        uint32_t reserved_22           : 1;
        uint32_t sft_rst_no_reg_cmn    : 1;  /**< [ 21: 21](R/W/H) Software Reset For Internal Logic.
                                                                 Soft reset internal logic except control registers. It shall be set to 0 to release reset
                                                                 0: Not reset
                                                                 1: Reset */
        uint32_t sft_rst_only_reg      : 1;  /**< [ 20: 20](R/W/H) PHY Register Soft Reset With Auto Clear.
                                                                 This register resets all PHY registers to default values including itself. It doesn't reset any PHY state machines. After this register is set to 1h, it is cleared back to 0h automatically. This field is ORed with PIN_RESET to generate a reset for all PHY registers.
                                                                 0: No reset
                                                                 1: Reset */
        uint32_t reserved_19           : 1;
        uint32_t reserved_16_18        : 3;
        uint32_t reserved_13_15        : 3;
        uint32_t reserved_12           : 1;
        uint32_t reserved_8_11         : 4;
        uint32_t reserved_1_7          : 7;
        uint32_t rst_reg_clk_cmn       : 1;  /**< [  0:  0](R/W/H) Reset Common Control Registers
                                                                 internal
                                                                 1: Reset
                                                                 0: Not reset */
#else /* Word 0 - Little Endian */
        uint32_t rst_reg_clk_cmn       : 1;  /**< [  0:  0](R/W/H) Reset Common Control Registers
                                                                 internal
                                                                 1: Reset
                                                                 0: Not reset */
        uint32_t reserved_1_7          : 7;
        uint32_t reserved_8_11         : 4;
        uint32_t reserved_12           : 1;
        uint32_t reserved_13_15        : 3;
        uint32_t reserved_16_18        : 3;
        uint32_t reserved_19           : 1;
        uint32_t sft_rst_only_reg      : 1;  /**< [ 20: 20](R/W/H) PHY Register Soft Reset With Auto Clear.
                                                                 This register resets all PHY registers to default values including itself. It doesn't reset any PHY state machines. After this register is set to 1h, it is cleared back to 0h automatically. This field is ORed with PIN_RESET to generate a reset for all PHY registers.
                                                                 0: No reset
                                                                 1: Reset */
        uint32_t sft_rst_no_reg_cmn    : 1;  /**< [ 21: 21](R/W/H) Software Reset For Internal Logic.
                                                                 Soft reset internal logic except control registers. It shall be set to 0 to release reset
                                                                 0: Not reset
                                                                 1: Reset */
        uint32_t reserved_22           : 1;
        uint32_t phy_isolate_mode      : 1;  /**< [ 23: 23](R/W/H) PHY Isolate Mode
                                                                 0: PHY is in Normal mode
                                                                 1: PHY is in Isolation mode. (This is used to isolate the PHY from outside logic to test it in standalone mode.) */
        uint32_t reserved_24_26        : 3;
        uint32_t broadcast             : 1;  /**< [ 27: 27](R/W/H) Register Broadcast Mode.
                                                                 This register indicates that the PHY is in Broadcast mode
                                                                 0: Not in Broadcast mode. Program LANE_SEL[2:0] To access each lane.
                                                                 1: APB and SIF Broadcast to all lanes. LANE_SEL[2:0] is ignored. */
        uint32_t lane_sel              : 4;  /**< [ 31: 28](R/W/H) Register Lane Selection.
                                                                 These registers select which lane to program.
                                                                 4'h0: First lane
                                                                 4'h1: Second lane
                                                                 Others: N-1 lane */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_gsermx_system cavm_gsermx_system_t;

static inline uint64_t CAVM_GSERMX_SYSTEM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_SYSTEM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0014630ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_SYSTEM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_SYSTEM(a) cavm_gsermx_system_t
#define bustype_CAVM_GSERMX_SYSTEM(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_SYSTEM(a) "GSERMX_SYSTEM"
#define device_bar_CAVM_GSERMX_SYSTEM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_SYSTEM(a) (a)
#define arguments_CAVM_GSERMX_SYSTEM(a) (a),-1,-1,-1

/**
 * Register (RSL) gserm#_tx_rx_train_status#
 *
 * GSERM TX_TRAIN_STATUS Registers
 */
union cavm_gsermx_tx_rx_train_statusx
{
    uint64_t u;
    struct cavm_gsermx_tx_rx_train_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t rx_train_complete     : 1;  /**< [  6:  6](RO/H) Receiver Training Complete. When these pins are asserted, it indicates the local
                                                                 PHY has completed receiver adaptation process. These pins are asserted when Rx
                                                                 training is complete, and it is deasserted when PIN_RX_TRAIN_ENABLE is de-
                                                                 asserted. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t rx_train_failed       : 1;  /**< [  5:  5](RO/H) Receiver Training Failed. These pins are valid when PIN_RX_TRAIN_COMPLETE is
                                                                 asserted. These pins indicate that the local PHY has encountered a problem
                                                                 during training or that the PHY could not converge. When PIN_PIPE_SEL = 0x1,
                                                                 output of these pins is invalid. */
        uint64_t tx_train_complete     : 1;  /**< [  4:  4](RO/H) Transmitter Training Complete. In non-link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of both the
                                                                 local PHY and remote PHY have finished. In link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of the local
                                                                 PHY has finished. These pins are asserted when Tx training is complete, and they
                                                                 are deasserted when PIN_TX_TRAIN_ENABLE = 0x0. When PIN_PIPE_SEL = 0x1, output
                                                                 of these pins is invalid. */
        uint64_t tx_train_failed       : 1;  /**< [  3:  3](RO/H) Transmitter Training Failed. These pins are valid when PIN_TX_ TRAIN_COMPLETE is
                                                                 asserted. They indicate that the local PHY has encountered a problem during
                                                                 training or could not converge. PIN_TX_TRAIN_FAILED deasserts when
                                                                 PIN_TX_TRAIN_ENABLE = 0x0. PIN_TX_TRAIN_ERROR[1:0] determines 4 error cases
                                                                 which can cause Tx training to fail. When PIN_PIPE_SEL = 0x1, output of these
                                                                 pins is invalid. */
        uint64_t tx_train_error        : 2;  /**< [  2:  1](RO/H) Tx Training Failure Error Types. Valid when PIN_TX_TRAIN_COMPLETE is asserted.
                                                                 These pins indicate which error has occurred when PIN_TX_TRAIN_FAILED = 0x1.
                                                                 These pins go to low when PIN_TX_TRAIN_ENABLE = 0x0. There are 4 error cases
                                                                 which can cause Tx training failure. This is only for SAS-4 application. 0x0 =
                                                                 Pattern lock lost timer expires (only valid when bit LINK_TRAIN_MODE_LANE is 0).
                                                                 0x1 = Tx training has finished, but signal eye quality does not qualify for data
                                                                 transfer. 0x2 = Local training could not finish within MTTT timer. Timer based
                                                                 on field TRX_TRAIN_TIMER_LANE[15:0]. 0x3 = Did not get complete status from
                                                                 remote PHY within MTTT timer. Timer based on field TRX_TRAIN_TIMER_LANE[15:0].
                                                                 When PIN_PIPE_SEL = 0x1, output of these pins is invalid.. */
        uint64_t tx_train_frame_lock_detected : 1;/**< [  0:  0](RO/H) Transmitter Training Frame Marker Detected. 0x0 = Frame marker not detected. 0x1
                                                                 = These pins indicate that a Tx training frame marker has been detected. The
                                                                 Dwords on the following 8 cycles contain the Manchester-encoded control and
                                                                 status frames from the attached host, aligned within +-2 bits. These pins are 1
                                                                 clock cycle width pulse. When PIN_PIPE_SEL = 0x1, output of these pins is
                                                                 invalid. */
#else /* Word 0 - Little Endian */
        uint64_t tx_train_frame_lock_detected : 1;/**< [  0:  0](RO/H) Transmitter Training Frame Marker Detected. 0x0 = Frame marker not detected. 0x1
                                                                 = These pins indicate that a Tx training frame marker has been detected. The
                                                                 Dwords on the following 8 cycles contain the Manchester-encoded control and
                                                                 status frames from the attached host, aligned within +-2 bits. These pins are 1
                                                                 clock cycle width pulse. When PIN_PIPE_SEL = 0x1, output of these pins is
                                                                 invalid. */
        uint64_t tx_train_error        : 2;  /**< [  2:  1](RO/H) Tx Training Failure Error Types. Valid when PIN_TX_TRAIN_COMPLETE is asserted.
                                                                 These pins indicate which error has occurred when PIN_TX_TRAIN_FAILED = 0x1.
                                                                 These pins go to low when PIN_TX_TRAIN_ENABLE = 0x0. There are 4 error cases
                                                                 which can cause Tx training failure. This is only for SAS-4 application. 0x0 =
                                                                 Pattern lock lost timer expires (only valid when bit LINK_TRAIN_MODE_LANE is 0).
                                                                 0x1 = Tx training has finished, but signal eye quality does not qualify for data
                                                                 transfer. 0x2 = Local training could not finish within MTTT timer. Timer based
                                                                 on field TRX_TRAIN_TIMER_LANE[15:0]. 0x3 = Did not get complete status from
                                                                 remote PHY within MTTT timer. Timer based on field TRX_TRAIN_TIMER_LANE[15:0].
                                                                 When PIN_PIPE_SEL = 0x1, output of these pins is invalid.. */
        uint64_t tx_train_failed       : 1;  /**< [  3:  3](RO/H) Transmitter Training Failed. These pins are valid when PIN_TX_ TRAIN_COMPLETE is
                                                                 asserted. They indicate that the local PHY has encountered a problem during
                                                                 training or could not converge. PIN_TX_TRAIN_FAILED deasserts when
                                                                 PIN_TX_TRAIN_ENABLE = 0x0. PIN_TX_TRAIN_ERROR[1:0] determines 4 error cases
                                                                 which can cause Tx training to fail. When PIN_PIPE_SEL = 0x1, output of these
                                                                 pins is invalid. */
        uint64_t tx_train_complete     : 1;  /**< [  4:  4](RO/H) Transmitter Training Complete. In non-link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of both the
                                                                 local PHY and remote PHY have finished. In link layer Tx training mode, when
                                                                 asserted, these pins indicate that the transmitter training process of the local
                                                                 PHY has finished. These pins are asserted when Tx training is complete, and they
                                                                 are deasserted when PIN_TX_TRAIN_ENABLE = 0x0. When PIN_PIPE_SEL = 0x1, output
                                                                 of these pins is invalid. */
        uint64_t rx_train_failed       : 1;  /**< [  5:  5](RO/H) Receiver Training Failed. These pins are valid when PIN_RX_TRAIN_COMPLETE is
                                                                 asserted. These pins indicate that the local PHY has encountered a problem
                                                                 during training or that the PHY could not converge. When PIN_PIPE_SEL = 0x1,
                                                                 output of these pins is invalid. */
        uint64_t rx_train_complete     : 1;  /**< [  6:  6](RO/H) Receiver Training Complete. When these pins are asserted, it indicates the local
                                                                 PHY has completed receiver adaptation process. These pins are asserted when Rx
                                                                 training is complete, and it is deasserted when PIN_RX_TRAIN_ENABLE is de-
                                                                 asserted. When PIN_PIPE_SEL = 0x1, output of these pins is invalid. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_tx_rx_train_statusx_s cn; */
};
typedef union cavm_gsermx_tx_rx_train_statusx cavm_gsermx_tx_rx_train_statusx_t;

static inline uint64_t CAVM_GSERMX_TX_RX_TRAIN_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_TX_RX_TRAIN_STATUSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (((a<=5) || (a==15)) && (b<=3)))
        return 0x87e0a0081120ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("GSERMX_TX_RX_TRAIN_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) cavm_gsermx_tx_rx_train_statusx_t
#define bustype_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) "GSERMX_TX_RX_TRAIN_STATUSX"
#define device_bar_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) (a)
#define arguments_CAVM_GSERMX_TX_RX_TRAIN_STATUSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL32b) gserm#_tx_speed_convert_lane
 *
 * GSERM Phy TX Clock and Data Speed Convert
 */
union cavm_gsermx_tx_speed_convert_lane
{
    uint32_t u;
    struct cavm_gsermx_tx_speed_convert_lane_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t local_dig_rx2tx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Far End Loopback Enable (Receiver To Transmitter In Local PHY).
                                                                 0: loopback not enabled.
                                                                 1: Send received data back through the transmitter. */
        uint32_t txd_inv_lane          : 1;  /**< [ 30: 30](R/W/H) Transmit Polarity Invert.
                                                                 It is transmit polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 = 0 and 0 = 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic  inverts the polarity.
                                                                 This inversion comes after PHY Test so the PHY Test patterns would also be inverted. */
        uint32_t add_err_en_lane       : 1;  /**< [ 29: 29](R/W/H) TXDATA Error Injection Enable
                                                                 internal
                                                                 0: Disable
                                                                 1: Enable
                                                                 Rising edge triggers error injection. Only inject pt_add_err_num of error in one cycle. */
        uint32_t add_err_num_lane      : 3;  /**< [ 28: 26](R/W/H) TXDATA Error Injection Number
                                                                 internal
                                                                 3'b000-3'b111 represent 1 bit - 8 bit error accordingly */
        uint32_t rx2tx_fifo_no_stop_lane : 1;/**< [ 25: 25](R/W/H) Far End Loopback FIFO Not Stop
                                                                 internal
                                                                 0: Write stops when FIFO is full, Read stops when FIFO is empty
                                                                 1: FIFO does not stop at all
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source
                                                                 This register bit can also be set to high when DTX frequency loop is stable */
        uint32_t rx2tx_fifo_rd_start_point_lane : 1;/**< [ 24: 24](R/W/H) Far End Loopback FIFO Read Start Point
                                                                 internal
                                                                 0: in the middle of FIFO
                                                                 1: 4 cycles delay of write point
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source. Thus it has short latency. In this case, rx2tx_fifo_no_stop_lane must be set to high. */
        uint32_t rx2tx_fifo_full_lane  : 1;  /**< [ 23: 23](RO/H) Far End Loopback FIFO Is Full
                                                                 internal
                                                                 When FIFO is full, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_empty_lane : 1;  /**< [ 22: 22](RO/H) Far End Loopback FIFO Is Empty
                                                                 internal
                                                                 When FIFO is empty, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_status_clear_lane : 1;/**< [ 21: 21](R/W/H) Far End Loopback FIFO Status Clear
                                                                 internal
                                                                 When this register is high, rx2tx_fifo_full and rx2tx_fifo_empty flags are cleared */
        uint32_t rx2tx_fifo_full_force_lane : 1;/**< [ 20: 20](R/W/H) Far End Loopback FIFO Full Force
                                                                 internal
                                                                 Rising edge of this register stops write operation for 4 cycles
                                                                 It is used to make FIFO count close to the middle when rx2tx_w_fifo_cnt is close to 16 */
        uint32_t rx2tx_fifo_empty_force_lane : 1;/**< [ 19: 19](R/W/H) Far End Loopback FIFO Empty Force
                                                                 internal
                                                                 Rising edge of this register stops read operation for 4 cycles.
                                                                 It is used to make FIFO count close to the middle when rx2tx_r_fifo_cnt is close to 0 */
        uint32_t txd_msb_lsb_swap_lane : 1;  /**< [ 18: 18](R/W/H) Transmit PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_6_17         : 12;
        uint32_t txdata_msb_lsb_swap_lane : 1;/**< [  5:  5](R/W/H) Transmit PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t rx2tx_r_fifo_cnt_lane : 5;  /**< [  4:  0](RO/H) Far End Loopback FIFO Count In Write Side
                                                                 internal
                                                                 This register is updated when rx2tx_fifo_cnt_rd_req is high */
#else /* Word 0 - Little Endian */
        uint32_t rx2tx_r_fifo_cnt_lane : 5;  /**< [  4:  0](RO/H) Far End Loopback FIFO Count In Write Side
                                                                 internal
                                                                 This register is updated when rx2tx_fifo_cnt_rd_req is high */
        uint32_t txdata_msb_lsb_swap_lane : 1;/**< [  5:  5](R/W/H) Transmit PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_6_17         : 12;
        uint32_t txd_msb_lsb_swap_lane : 1;  /**< [ 18: 18](R/W/H) Transmit PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t rx2tx_fifo_empty_force_lane : 1;/**< [ 19: 19](R/W/H) Far End Loopback FIFO Empty Force
                                                                 internal
                                                                 Rising edge of this register stops read operation for 4 cycles.
                                                                 It is used to make FIFO count close to the middle when rx2tx_r_fifo_cnt is close to 0 */
        uint32_t rx2tx_fifo_full_force_lane : 1;/**< [ 20: 20](R/W/H) Far End Loopback FIFO Full Force
                                                                 internal
                                                                 Rising edge of this register stops write operation for 4 cycles
                                                                 It is used to make FIFO count close to the middle when rx2tx_w_fifo_cnt is close to 16 */
        uint32_t rx2tx_fifo_status_clear_lane : 1;/**< [ 21: 21](R/W/H) Far End Loopback FIFO Status Clear
                                                                 internal
                                                                 When this register is high, rx2tx_fifo_full and rx2tx_fifo_empty flags are cleared */
        uint32_t rx2tx_fifo_empty_lane : 1;  /**< [ 22: 22](RO/H) Far End Loopback FIFO Is Empty
                                                                 internal
                                                                 When FIFO is empty, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_full_lane  : 1;  /**< [ 23: 23](RO/H) Far End Loopback FIFO Is Full
                                                                 internal
                                                                 When FIFO is full, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_rd_start_point_lane : 1;/**< [ 24: 24](R/W/H) Far End Loopback FIFO Read Start Point
                                                                 internal
                                                                 0: in the middle of FIFO
                                                                 1: 4 cycles delay of write point
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source. Thus it has short latency. In this case, rx2tx_fifo_no_stop_lane must be set to high. */
        uint32_t rx2tx_fifo_no_stop_lane : 1;/**< [ 25: 25](R/W/H) Far End Loopback FIFO Not Stop
                                                                 internal
                                                                 0: Write stops when FIFO is full, Read stops when FIFO is empty
                                                                 1: FIFO does not stop at all
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source
                                                                 This register bit can also be set to high when DTX frequency loop is stable */
        uint32_t add_err_num_lane      : 3;  /**< [ 28: 26](R/W/H) TXDATA Error Injection Number
                                                                 internal
                                                                 3'b000-3'b111 represent 1 bit - 8 bit error accordingly */
        uint32_t add_err_en_lane       : 1;  /**< [ 29: 29](R/W/H) TXDATA Error Injection Enable
                                                                 internal
                                                                 0: Disable
                                                                 1: Enable
                                                                 Rising edge triggers error injection. Only inject pt_add_err_num of error in one cycle. */
        uint32_t txd_inv_lane          : 1;  /**< [ 30: 30](R/W/H) Transmit Polarity Invert.
                                                                 It is transmit polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 = 0 and 0 = 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic  inverts the polarity.
                                                                 This inversion comes after PHY Test so the PHY Test patterns would also be inverted. */
        uint32_t local_dig_rx2tx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Far End Loopback Enable (Receiver To Transmitter In Local PHY).
                                                                 0: loopback not enabled.
                                                                 1: Send received data back through the transmitter. */
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_tx_speed_convert_lane_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t local_dig_rx2tx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Far End Loopback Enable (Receiver To Transmitter In Local PHY).
                                                                 0: loopback not enabled.
                                                                 1: Send received data back through the transmitter. */
        uint32_t txd_inv_lane          : 1;  /**< [ 30: 30](R/W/H) Transmit Polarity Invert.
                                                                 It is transmit polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 = 0 and 0 = 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic  inverts the polarity.
                                                                 This inversion comes after PHY Test so the PHY Test patterns would also be inverted. */
        uint32_t add_err_en_lane       : 1;  /**< [ 29: 29](R/W/H) TXDATA Error Injection Enable
                                                                 internal
                                                                 0: Disable
                                                                 1: Enable
                                                                 Rising edge triggers error injection. Only inject pt_add_err_num of error in one cycle. */
        uint32_t add_err_num_lane      : 3;  /**< [ 28: 26](R/W/H) TXDATA Error Injection Number
                                                                 internal
                                                                 3'b000-3'b111 represent 1 bit - 8 bit error accordingly */
        uint32_t rx2tx_fifo_no_stop_lane : 1;/**< [ 25: 25](R/W/H) Far End Loopback FIFO Not Stop
                                                                 internal
                                                                 0: Write stops when FIFO is full, Read stops when FIFO is empty
                                                                 1: FIFO does not stop at all
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source
                                                                 This register bit can also be set to high when DTX frequency loop is stable */
        uint32_t rx2tx_fifo_rd_start_point_lane : 1;/**< [ 24: 24](R/W/H) Far End Loopback FIFO Read Start Point
                                                                 internal
                                                                 0: in the middle of FIFO
                                                                 1: 4 cycles delay of write point
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source. Thus it has short latency. In this case, rx2tx_fifo_no_stop_lane must be set to high. */
        uint32_t rx2tx_fifo_full_lane  : 1;  /**< [ 23: 23](RO/H) Far End Loopback FIFO Is Full
                                                                 internal
                                                                 When FIFO is full, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_empty_lane : 1;  /**< [ 22: 22](RO/H) Far End Loopback FIFO Is Empty
                                                                 internal
                                                                 When FIFO is empty, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_status_clear_lane : 1;/**< [ 21: 21](R/W/H) Far End Loopback FIFO Status Clear
                                                                 internal
                                                                 When this register is high, rx2tx_fifo_full and rx2tx_fifo_empty flags are cleared */
        uint32_t rx2tx_fifo_full_force_lane : 1;/**< [ 20: 20](R/W/H) Far End Loopback FIFO Full Force
                                                                 internal
                                                                 Rising edge of this register stops write operation for 4 cycles
                                                                 It is used to make FIFO count close to the middle when rx2tx_w_fifo_cnt is close to 16 */
        uint32_t rx2tx_fifo_empty_force_lane : 1;/**< [ 19: 19](R/W/H) Far End Loopback FIFO Empty Force
                                                                 internal
                                                                 Rising edge of this register stops read operation for 4 cycles.
                                                                 It is used to make FIFO count close to the middle when rx2tx_r_fifo_cnt is close to 0 */
        uint32_t txd_msb_lsb_swap_lane : 1;  /**< [ 18: 18](R/W/H) Transmit PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_17           : 1;
        uint32_t reserved_16           : 1;
        uint32_t reserved_15           : 1;
        uint32_t reserved_14           : 1;
        uint32_t reserved_13           : 1;
        uint32_t reserved_12           : 1;
        uint32_t reserved_11           : 1;
        uint32_t reserved_10           : 1;
        uint32_t reserved_9            : 1;
        uint32_t reserved_8            : 1;
        uint32_t reserved_7            : 1;
        uint32_t reserved_6            : 1;
        uint32_t txdata_msb_lsb_swap_lane : 1;/**< [  5:  5](R/W/H) Transmit PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t rx2tx_r_fifo_cnt_lane : 5;  /**< [  4:  0](RO/H) Far End Loopback FIFO Count In Write Side
                                                                 internal
                                                                 This register is updated when rx2tx_fifo_cnt_rd_req is high */
#else /* Word 0 - Little Endian */
        uint32_t rx2tx_r_fifo_cnt_lane : 5;  /**< [  4:  0](RO/H) Far End Loopback FIFO Count In Write Side
                                                                 internal
                                                                 This register is updated when rx2tx_fifo_cnt_rd_req is high */
        uint32_t txdata_msb_lsb_swap_lane : 1;/**< [  5:  5](R/W/H) Transmit PAM4 Symbol Of PIN Data MSB LSB Swap
                                                                 internal */
        uint32_t reserved_6            : 1;
        uint32_t reserved_7            : 1;
        uint32_t reserved_8            : 1;
        uint32_t reserved_9            : 1;
        uint32_t reserved_10           : 1;
        uint32_t reserved_11           : 1;
        uint32_t reserved_12           : 1;
        uint32_t reserved_13           : 1;
        uint32_t reserved_14           : 1;
        uint32_t reserved_15           : 1;
        uint32_t reserved_16           : 1;
        uint32_t reserved_17           : 1;
        uint32_t txd_msb_lsb_swap_lane : 1;  /**< [ 18: 18](R/W/H) Transmit PAM4 Symbol Of Analog Data MSB LSB Swap
                                                                 internal */
        uint32_t rx2tx_fifo_empty_force_lane : 1;/**< [ 19: 19](R/W/H) Far End Loopback FIFO Empty Force
                                                                 internal
                                                                 Rising edge of this register stops read operation for 4 cycles.
                                                                 It is used to make FIFO count close to the middle when rx2tx_r_fifo_cnt is close to 0 */
        uint32_t rx2tx_fifo_full_force_lane : 1;/**< [ 20: 20](R/W/H) Far End Loopback FIFO Full Force
                                                                 internal
                                                                 Rising edge of this register stops write operation for 4 cycles
                                                                 It is used to make FIFO count close to the middle when rx2tx_w_fifo_cnt is close to 16 */
        uint32_t rx2tx_fifo_status_clear_lane : 1;/**< [ 21: 21](R/W/H) Far End Loopback FIFO Status Clear
                                                                 internal
                                                                 When this register is high, rx2tx_fifo_full and rx2tx_fifo_empty flags are cleared */
        uint32_t rx2tx_fifo_empty_lane : 1;  /**< [ 22: 22](RO/H) Far End Loopback FIFO Is Empty
                                                                 internal
                                                                 When FIFO is empty, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_full_lane  : 1;  /**< [ 23: 23](RO/H) Far End Loopback FIFO Is Full
                                                                 internal
                                                                 When FIFO is full, this register bit is asserted
                                                                 When rx2tx_fifo_status_clear is high, this register bit is de-asserted */
        uint32_t rx2tx_fifo_rd_start_point_lane : 1;/**< [ 24: 24](R/W/H) Far End Loopback FIFO Read Start Point
                                                                 internal
                                                                 0: in the middle of FIFO
                                                                 1: 4 cycles delay of write point
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source. Thus it has short latency. In this case, rx2tx_fifo_no_stop_lane must be set to high. */
        uint32_t rx2tx_fifo_no_stop_lane : 1;/**< [ 25: 25](R/W/H) Far End Loopback FIFO Not Stop
                                                                 internal
                                                                 0: Write stops when FIFO is full, Read stops when FIFO is empty
                                                                 1: FIFO does not stop at all
                                                                 This register bit can be set to high when local PHY and remote PHY have same reference clock source
                                                                 This register bit can also be set to high when DTX frequency loop is stable */
        uint32_t add_err_num_lane      : 3;  /**< [ 28: 26](R/W/H) TXDATA Error Injection Number
                                                                 internal
                                                                 3'b000-3'b111 represent 1 bit - 8 bit error accordingly */
        uint32_t add_err_en_lane       : 1;  /**< [ 29: 29](R/W/H) TXDATA Error Injection Enable
                                                                 internal
                                                                 0: Disable
                                                                 1: Enable
                                                                 Rising edge triggers error injection. Only inject pt_add_err_num of error in one cycle. */
        uint32_t txd_inv_lane          : 1;  /**< [ 30: 30](R/W/H) Transmit Polarity Invert.
                                                                 It is transmit polarity swap enable.
                                                                 0: No polarity swap
                                                                 1: Polarity Swap (1 = 0 and 0 = 1)
                                                                 This control allows PCB to select a layout where the plus and minus signals are swapped. Internally the logic  inverts the polarity.
                                                                 This inversion comes after PHY Test so the PHY Test patterns would also be inverted. */
        uint32_t local_dig_rx2tx_lpbk_en_lane : 1;/**< [ 31: 31](R/W/H) Far End Loopback Enable (Receiver To Transmitter In Local PHY).
                                                                 0: loopback not enabled.
                                                                 1: Send received data back through the transmitter. */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_gsermx_tx_speed_convert_lane cavm_gsermx_tx_speed_convert_lane_t;

static inline uint64_t CAVM_GSERMX_TX_SPEED_CONVERT_LANE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_TX_SPEED_CONVERT_LANE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006048ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_TX_SPEED_CONVERT_LANE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) cavm_gsermx_tx_speed_convert_lane_t
#define bustype_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) "GSERMX_TX_SPEED_CONVERT_LANE"
#define device_bar_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) (a)
#define arguments_CAVM_GSERMX_TX_SPEED_CONVERT_LANE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_tx_system_lane0
 *
 * GSERM Phy Tx System Register0
 */
union cavm_gsermx_tx_system_lane0
{
    uint32_t u;
    struct cavm_gsermx_tx_system_lane0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Tx Data Bus Width
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t train_tx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Tx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t trx_txclk_sel_lane    : 1;  /**< [ 29: 29](R/W/H) Select PLL Source For Tx
                                                                 Select the PLL source for Tx.
                                                                 0: Rx PLL is from PLL_TS
                                                                 1: Rx PLL is from PLL_RS */
        uint32_t tx_sel_bits_rd_lane   : 3;  /**< [ 28: 26](RO/H) Tx Sel_bits Read Out Value
                                                                 internal
                                                                 3'b000: 20 bit
                                                                 3'b001: 16 bit
                                                                 3'b010: 40 bit
                                                                 3'b011: 32 bit
                                                                 3'b100: 80 bit
                                                                 3'b101: 64 bit
                                                                 3'b110: 160 bit
                                                                 3'b111: 128 bit */
        uint32_t reserved_25           : 1;
        uint32_t ssc_dspread_tx_lane   : 1;  /**< [ 24: 24](R/W/H) Spread Spectrum Clock Down-spread Select
                                                                 0: Center-spread
                                                                 1: Down-spread */
        uint32_t ssc_amp_lane          : 7;  /**< [ 23: 17](R/W/H) SSC Amplitude Setting
                                                                 SSC Amplitude, Unit is around 125ppm, check user manual for detail */
        uint32_t reserved_16           : 1;
        uint32_t cnt_ini_lane          : 8;  /**< [ 15:  8](R/W/H) Clock 1M Divider For Power Control
                                                                 internal
                                                                 The clock for internal power control logic is 1/(beacon_divider + 1)/(cnt_ini+1) of MCU clock frequency.
                                                                 Set correct register value to make this clock has frequency of 1M. This is mainly for Tx detect Rx discharge time measurement. */
        uint32_t reserved_5_7          : 3;
        uint32_t dtx_input_from_remote_lane : 1;/**< [  4:  4](R/W/H) DTX Input Control From Remote Side In Share PLL Mode
                                                                 internal */
        uint32_t share_pll_mode_lane   : 2;  /**< [  3:  2](R/W/H) Share PLL Mode LANE
                                                                 internal
                                                                 2'h0: Tx Rx use separate PLL
                                                                 2'h1: 1 TRX has 1 PLL pair
                                                                 2'h2: 2 TRX has 1 PLL pair
                                                                 2'h3: 4 TRX has 1 PLL pair */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t share_pll_mode_lane   : 2;  /**< [  3:  2](R/W/H) Share PLL Mode LANE
                                                                 internal
                                                                 2'h0: Tx Rx use separate PLL
                                                                 2'h1: 1 TRX has 1 PLL pair
                                                                 2'h2: 2 TRX has 1 PLL pair
                                                                 2'h3: 4 TRX has 1 PLL pair */
        uint32_t dtx_input_from_remote_lane : 1;/**< [  4:  4](R/W/H) DTX Input Control From Remote Side In Share PLL Mode
                                                                 internal */
        uint32_t reserved_5_7          : 3;
        uint32_t cnt_ini_lane          : 8;  /**< [ 15:  8](R/W/H) Clock 1M Divider For Power Control
                                                                 internal
                                                                 The clock for internal power control logic is 1/(beacon_divider + 1)/(cnt_ini+1) of MCU clock frequency.
                                                                 Set correct register value to make this clock has frequency of 1M. This is mainly for Tx detect Rx discharge time measurement. */
        uint32_t reserved_16           : 1;
        uint32_t ssc_amp_lane          : 7;  /**< [ 23: 17](R/W/H) SSC Amplitude Setting
                                                                 SSC Amplitude, Unit is around 125ppm, check user manual for detail */
        uint32_t ssc_dspread_tx_lane   : 1;  /**< [ 24: 24](R/W/H) Spread Spectrum Clock Down-spread Select
                                                                 0: Center-spread
                                                                 1: Down-spread */
        uint32_t reserved_25           : 1;
        uint32_t tx_sel_bits_rd_lane   : 3;  /**< [ 28: 26](RO/H) Tx Sel_bits Read Out Value
                                                                 internal
                                                                 3'b000: 20 bit
                                                                 3'b001: 16 bit
                                                                 3'b010: 40 bit
                                                                 3'b011: 32 bit
                                                                 3'b100: 80 bit
                                                                 3'b101: 64 bit
                                                                 3'b110: 160 bit
                                                                 3'b111: 128 bit */
        uint32_t trx_txclk_sel_lane    : 1;  /**< [ 29: 29](R/W/H) Select PLL Source For Tx
                                                                 Select the PLL source for Tx.
                                                                 0: Rx PLL is from PLL_TS
                                                                 1: Rx PLL is from PLL_RS */
        uint32_t train_tx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Tx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t tx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Tx Data Bus Width
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
#endif /* Word 0 - End */
    } s;
    struct cavm_gsermx_tx_system_lane0_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Tx Data Bus Width
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t train_tx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Tx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t trx_txclk_sel_lane    : 1;  /**< [ 29: 29](R/W/H) Select PLL Source For Tx
                                                                 Select the PLL source for Tx.
                                                                 0: Rx PLL is from PLL_TS
                                                                 1: Rx PLL is from PLL_RS */
        uint32_t tx_sel_bits_rd_lane   : 3;  /**< [ 28: 26](RO/H) Tx Sel_bits Read Out Value
                                                                 internal
                                                                 3'b000: 20 bit
                                                                 3'b001: 16 bit
                                                                 3'b010: 40 bit
                                                                 3'b011: 32 bit
                                                                 3'b100: 80 bit
                                                                 3'b101: 64 bit
                                                                 3'b110: 160 bit
                                                                 3'b111: 128 bit */
        uint32_t reserved_25           : 1;
        uint32_t ssc_dspread_tx_lane   : 1;  /**< [ 24: 24](R/W/H) Spread Spectrum Clock Down-spread Select
                                                                 0: Center-spread
                                                                 1: Down-spread */
        uint32_t ssc_amp_lane          : 7;  /**< [ 23: 17](R/W/H) SSC Amplitude Setting
                                                                 SSC Amplitude, Unit is around 125ppm, check user manual for detail */
        uint32_t reserved_16           : 1;
        uint32_t cnt_ini_lane          : 8;  /**< [ 15:  8](R/W/H) Clock 1M Divider For Power Control
                                                                 internal
                                                                 The clock for internal power control logic is 1/(beacon_divider + 1)/(cnt_ini+1) of MCU clock frequency.
                                                                 Set correct register value to make this clock has frequency of 1M. This is mainly for Tx detect Rx discharge time measurement. */
        uint32_t reserved_7            : 1;
        uint32_t reserved_6            : 1;
        uint32_t reserved_5            : 1;
        uint32_t dtx_input_from_remote_lane : 1;/**< [  4:  4](R/W/H) DTX Input Control From Remote Side In Share PLL Mode
                                                                 internal */
        uint32_t share_pll_mode_lane   : 2;  /**< [  3:  2](R/W/H) Share PLL Mode LANE
                                                                 internal
                                                                 2'h0: Tx Rx use separate PLL
                                                                 2'h1: 1 TRX has 1 PLL pair
                                                                 2'h2: 2 TRX has 1 PLL pair
                                                                 2'h3: 4 TRX has 1 PLL pair */
        uint32_t reserved_1            : 1;
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t reserved_1            : 1;
        uint32_t share_pll_mode_lane   : 2;  /**< [  3:  2](R/W/H) Share PLL Mode LANE
                                                                 internal
                                                                 2'h0: Tx Rx use separate PLL
                                                                 2'h1: 1 TRX has 1 PLL pair
                                                                 2'h2: 2 TRX has 1 PLL pair
                                                                 2'h3: 4 TRX has 1 PLL pair */
        uint32_t dtx_input_from_remote_lane : 1;/**< [  4:  4](R/W/H) DTX Input Control From Remote Side In Share PLL Mode
                                                                 internal */
        uint32_t reserved_5            : 1;
        uint32_t reserved_6            : 1;
        uint32_t reserved_7            : 1;
        uint32_t cnt_ini_lane          : 8;  /**< [ 15:  8](R/W/H) Clock 1M Divider For Power Control
                                                                 internal
                                                                 The clock for internal power control logic is 1/(beacon_divider + 1)/(cnt_ini+1) of MCU clock frequency.
                                                                 Set correct register value to make this clock has frequency of 1M. This is mainly for Tx detect Rx discharge time measurement. */
        uint32_t reserved_16           : 1;
        uint32_t ssc_amp_lane          : 7;  /**< [ 23: 17](R/W/H) SSC Amplitude Setting
                                                                 SSC Amplitude, Unit is around 125ppm, check user manual for detail */
        uint32_t ssc_dspread_tx_lane   : 1;  /**< [ 24: 24](R/W/H) Spread Spectrum Clock Down-spread Select
                                                                 0: Center-spread
                                                                 1: Down-spread */
        uint32_t reserved_25           : 1;
        uint32_t tx_sel_bits_rd_lane   : 3;  /**< [ 28: 26](RO/H) Tx Sel_bits Read Out Value
                                                                 internal
                                                                 3'b000: 20 bit
                                                                 3'b001: 16 bit
                                                                 3'b010: 40 bit
                                                                 3'b011: 32 bit
                                                                 3'b100: 80 bit
                                                                 3'b101: 64 bit
                                                                 3'b110: 160 bit
                                                                 3'b111: 128 bit */
        uint32_t trx_txclk_sel_lane    : 1;  /**< [ 29: 29](R/W/H) Select PLL Source For Tx
                                                                 Select the PLL source for Tx.
                                                                 0: Rx PLL is from PLL_TS
                                                                 1: Rx PLL is from PLL_RS */
        uint32_t train_tx_sel_bits_lane : 1; /**< [ 30: 30](R/W/H) Select Tx Data Bus Width For Tx Training
                                                                 internal
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
        uint32_t tx_sel_bits_lane      : 1;  /**< [ 31: 31](R/W/H) Select Tx Data Bus Width
                                                                 1'b0: 160-bit when PAM4 and Quarter Rate mode, 80-bit when PAM4 mode, Other is 40-bit
                                                                 1'b1: 128-bit when PAM4 and Quarter Rate mode, 64-bit when PAM4 mode, Other is 32-bit */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_gsermx_tx_system_lane0 cavm_gsermx_tx_system_lane0_t;

static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006068ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_TX_SYSTEM_LANE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_TX_SYSTEM_LANE0(a) cavm_gsermx_tx_system_lane0_t
#define bustype_CAVM_GSERMX_TX_SYSTEM_LANE0(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_TX_SYSTEM_LANE0(a) "GSERMX_TX_SYSTEM_LANE0"
#define device_bar_CAVM_GSERMX_TX_SYSTEM_LANE0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_TX_SYSTEM_LANE0(a) (a)
#define arguments_CAVM_GSERMX_TX_SYSTEM_LANE0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_tx_system_lane1
 *
 * GSERM Phy Tx System Register1
 */
union cavm_gsermx_tx_system_lane1
{
    uint32_t u;
    struct cavm_gsermx_tx_system_lane1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t tx_pam2_en_lane       : 1;  /**< [ 30: 30](R/W/H) Tx PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t reserved_8_29         : 22;
        uint32_t dig_id_lane           : 8;  /**< [  7:  0](RO/H) TRx Revision
                                                                 internal */
#else /* Word 0 - Little Endian */
        uint32_t dig_id_lane           : 8;  /**< [  7:  0](RO/H) TRx Revision
                                                                 internal */
        uint32_t reserved_8_29         : 22;
        uint32_t tx_pam2_en_lane       : 1;  /**< [ 30: 30](R/W/H) Tx PAM2 Enable
                                                                 0: PAM4
                                                                 1: PAM2 */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_tx_system_lane1_s cn; */
};
typedef union cavm_gsermx_tx_system_lane1 cavm_gsermx_tx_system_lane1_t;

static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006078ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_TX_SYSTEM_LANE1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_TX_SYSTEM_LANE1(a) cavm_gsermx_tx_system_lane1_t
#define bustype_CAVM_GSERMX_TX_SYSTEM_LANE1(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_TX_SYSTEM_LANE1(a) "GSERMX_TX_SYSTEM_LANE1"
#define device_bar_CAVM_GSERMX_TX_SYSTEM_LANE1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_TX_SYSTEM_LANE1(a) (a)
#define arguments_CAVM_GSERMX_TX_SYSTEM_LANE1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) gserm#_tx_system_lane2
 *
 * GSERM Phy Tx System Register2
 */
union cavm_gsermx_tx_system_lane2
{
    uint32_t u;
    struct cavm_gsermx_tx_system_lane2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t ssc_amp_unit_sel_lane : 1;  /**< [ 11: 11](R/W/H) SSC Amplitude unit select
                                                                 internal
                                                                 0: SSC_AMP_LANE is valid, Unit is around 125PPM
                                                                 1: SSC_AMP_20UNIT_LANE is valid,Unit is around 20PPM */
        uint32_t ssc_amp_20unit_lane   : 11; /**< [ 10:  0](R/W/H) SSC Amplitude Setting
                                                                 internal
                                                                 SSC Amplitude, Unit is around 20ppm, only valid when ssc_amp_unit_sel=1.check user manual for detail */
#else /* Word 0 - Little Endian */
        uint32_t ssc_amp_20unit_lane   : 11; /**< [ 10:  0](R/W/H) SSC Amplitude Setting
                                                                 internal
                                                                 SSC Amplitude, Unit is around 20ppm, only valid when ssc_amp_unit_sel=1.check user manual for detail */
        uint32_t ssc_amp_unit_sel_lane : 1;  /**< [ 11: 11](R/W/H) SSC Amplitude unit select
                                                                 internal
                                                                 0: SSC_AMP_LANE is valid, Unit is around 125PPM
                                                                 1: SSC_AMP_20UNIT_LANE is valid,Unit is around 20PPM */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_gsermx_tx_system_lane2_s cn; */
};
typedef union cavm_gsermx_tx_system_lane2 cavm_gsermx_tx_system_lane2_t;

static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_GSERMX_TX_SYSTEM_LANE2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=5) || (a==15)))
        return 0x87e0a0006080ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("GSERMX_TX_SYSTEM_LANE2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_GSERMX_TX_SYSTEM_LANE2(a) cavm_gsermx_tx_system_lane2_t
#define bustype_CAVM_GSERMX_TX_SYSTEM_LANE2(a) CSR_TYPE_RSL32b
#define basename_CAVM_GSERMX_TX_SYSTEM_LANE2(a) "GSERMX_TX_SYSTEM_LANE2"
#define device_bar_CAVM_GSERMX_TX_SYSTEM_LANE2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_GSERMX_TX_SYSTEM_LANE2(a) (a)
#define arguments_CAVM_GSERMX_TX_SYSTEM_LANE2(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_GSERM_H__ */
