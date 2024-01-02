#ifndef __CAVM_CSRS_PGC_H__
#define __CAVM_CSRS_PGC_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2024 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * PGC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pgc_bar_e
 */
#define CAVM_PGC_BAR_E_PGC_PF_BAR2 (0x87e012c00000ll)
#define CAVM_PGC_BAR_E_PGC_PF_BAR2_SIZE 0x40000ull

/**
 * Structure pgc_active_b_pwr_state_s
 *
 * PGC Active(B) Power State Structure
 * Defines the structure for Active(B) Power States.
 */
union cavm_pgc_active_b_pwr_state_s
{
    uint64_t u;
    struct cavm_pgc_active_b_pwr_state_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t next_state            : 6;  /**< [ 63: 58] The Next State field indicates which of the 64 states is the next state. */
        uint64_t timer_terminal_count  : 14; /**< [ 57: 44] The Timer Terminal Count field indicates the minimum number of refclk periods
                                                                 the state is active for before transitioning to the next state. Since the PwrSeq
                                                                 runs on bclk, there is a (-10ns,0] interval of uncertainty for this timer.  When
                                                                 this field is all 0's, the timer is deactivated for this state and there is no
                                                                 minimum time the state is active for. */
        uint64_t reserved_38_43        : 6;
        uint64_t alternate_next_state  : 6;  /**< [ 37: 32] This is the Alternate Next State for Active(B) type states if the logical power
                                                                 domain's bit is set in the Domain field. */
        uint64_t reserved_28_31        : 4;
        uint64_t power_domain          : 8;  /**< [ 27: 20] The domain indicates which logic power domains (one bit per each) should branch
                                                                 to the Alternate Next State. All others branch to the normal Next State. */
        uint64_t reserved_18_19        : 2;
        uint64_t state_outputs         : 14; /**< [ 17:  4] The state's outputs are defined by this field, and they follow the ordering of
                                                                 the pwr_defs::pwr_domain_t structure (except for the Power Down Status output
                                                                 which is not part of this structure). These outputs persist throughout the
                                                                 entirety of the state being active. (Default = 0).
                                                                    4: Power Off Daughter
                                                                    5: Power Off Mother
                                                                    6: Isolate
                                                                    7: Save
                                                                    8: Restore
                                                                    9: Force MDH Reset
                                                                    10: Force Logic Reset
                                                                    11: Force Domain Reset
                                                                    12: Request Clear BIST
                                                                    14:13: POFF
                                                                    15: Clock Off
                                                                    16: Engage Bus Guard
                                                                    17: Power Down Status */
        uint64_t reserved_3            : 1;
        uint64_t state_type            : 3;  /**< [  2:  0] The Type is either Active(A) (3b000), Active(B) (3b001), Halt (3b010), PowerOff (3b100), or PowerOn
                                                                 (3'b110).  Exactly one state must be assigned the PowerOn type, and exactly one
                                                                 state must be assigned the PowerOff state. Furthermore, the PowerOn type must be
                                                                 assigned to PwrSeq State Register(0).  (Default = 0). */
#else /* Word 0 - Little Endian */
        uint64_t state_type            : 3;  /**< [  2:  0] The Type is either Active(A) (3b000), Active(B) (3b001), Halt (3b010), PowerOff (3b100), or PowerOn
                                                                 (3'b110).  Exactly one state must be assigned the PowerOn type, and exactly one
                                                                 state must be assigned the PowerOff state. Furthermore, the PowerOn type must be
                                                                 assigned to PwrSeq State Register(0).  (Default = 0). */
        uint64_t reserved_3            : 1;
        uint64_t state_outputs         : 14; /**< [ 17:  4] The state's outputs are defined by this field, and they follow the ordering of
                                                                 the pwr_defs::pwr_domain_t structure (except for the Power Down Status output
                                                                 which is not part of this structure). These outputs persist throughout the
                                                                 entirety of the state being active. (Default = 0).
                                                                    4: Power Off Daughter
                                                                    5: Power Off Mother
                                                                    6: Isolate
                                                                    7: Save
                                                                    8: Restore
                                                                    9: Force MDH Reset
                                                                    10: Force Logic Reset
                                                                    11: Force Domain Reset
                                                                    12: Request Clear BIST
                                                                    14:13: POFF
                                                                    15: Clock Off
                                                                    16: Engage Bus Guard
                                                                    17: Power Down Status */
        uint64_t reserved_18_19        : 2;
        uint64_t power_domain          : 8;  /**< [ 27: 20] The domain indicates which logic power domains (one bit per each) should branch
                                                                 to the Alternate Next State. All others branch to the normal Next State. */
        uint64_t reserved_28_31        : 4;
        uint64_t alternate_next_state  : 6;  /**< [ 37: 32] This is the Alternate Next State for Active(B) type states if the logical power
                                                                 domain's bit is set in the Domain field. */
        uint64_t reserved_38_43        : 6;
        uint64_t timer_terminal_count  : 14; /**< [ 57: 44] The Timer Terminal Count field indicates the minimum number of refclk periods
                                                                 the state is active for before transitioning to the next state. Since the PwrSeq
                                                                 runs on bclk, there is a (-10ns,0] interval of uncertainty for this timer.  When
                                                                 this field is all 0's, the timer is deactivated for this state and there is no
                                                                 minimum time the state is active for. */
        uint64_t next_state            : 6;  /**< [ 63: 58] The Next State field indicates which of the 64 states is the next state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_active_b_pwr_state_s_s cn; */
};

/**
 * Structure pgc_pwr_state_s
 *
 * PGC Power State Structure
 * Defines the structure for non-Active(B) Power States.
 */
union cavm_pgc_pwr_state_s
{
    uint64_t u;
    struct cavm_pgc_pwr_state_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t next_state            : 6;  /**< [ 63: 58] The Next State field indicates which of the 64 states is the next state. */
        uint64_t timer_terminal_count  : 14; /**< [ 57: 44] The Timer Terminal Count field indicates the minimum number of refclk periods
                                                                 the state is active for before transitioning to the next state. Since the PwrSeq
                                                                 runs on bclk, there is a (-10ns,0] interval of uncertainty for this timer.  When
                                                                 this field is all 0's, the timer is deactivated for this state and there is no
                                                                 minimum time the state is active for. */
        uint64_t reserved_43           : 1;
        uint64_t target_status_mask    : 11; /**< [ 42: 32] The Target Status Mask qualifies each bit of the Target Status whether it is
                                                                 actively used by this state to determine whether to move to the next state.  A
                                                                 value of 1b0 in any bit of the Target Status Mask indicates that the
                                                                 corresponding bit in the Target Status register should be ignored for next state
                                                                 checking.  A value of 1b1 in any bit of the Target Status Mask indicates that
                                                                 the corresponding bit of the Target Status is checked as part of next state
                                                                 checking. When this field is all zeros, the status inputs are not used for this
                                                                 state's next state checking. (Default = 0). */
        uint64_t reserved_31           : 1;
        uint64_t target_status         : 11; /**< [ 30: 20] When the synchronized status inputs match the Target Status programmed into this
                                                                 field (qualified by the Target Status Mask), the PwrSeq may proceed to the next
                                                                 state as soon as the Timer reaches its terminal count.  The ordering of the
                                                                 Target Status field is given below and follows the ordering of the
                                                                 pwr_defs::pwr_domain_t structure.
                                                                    20: Power Off Daughter
                                                                    21: Power Off Mother
                                                                    22: Isolate
                                                                    23: Save
                                                                    24: Restore
                                                                    25: Clear BIST Acknowledge
                                                                    27:26: POFF
                                                                    28: Clock Off
                                                                    29: Bus Guard Acknowledge
                                                                    30: Idle */
        uint64_t reserved_18_19        : 2;
        uint64_t state_outputs         : 14; /**< [ 17:  4] The state's outputs are defined by this field, and they follow the ordering of
                                                                 the pwr_defs::pwr_domain_t structure (except for the Power Down Status output
                                                                 which is not part of this structure). These outputs persist throughout the
                                                                 entirety of the state being active. (Default = 0).
                                                                    4: Power Off Daughter
                                                                    5: Power Off Mother
                                                                    6: Isolate
                                                                    7: Save
                                                                    8: Restore
                                                                    9: Force MDH Reset
                                                                    10: Force Logic Reset
                                                                    11: Force Domain Reset
                                                                    12: Request Clear BIST
                                                                    14:13: POFF
                                                                    15: Clock Off
                                                                    16: Engage Bus Guard
                                                                    17: Power Down Status */
        uint64_t reserved_3            : 1;
        uint64_t state_type            : 3;  /**< [  2:  0] The Type is either Active(A) (3b000), Active(B) (3b001), Halt (3b010), PowerOff (3b100), or PowerOn
                                                                 (3'b110).  Exactly one state must be assigned the PowerOn type, and exactly one
                                                                 state must be assigned the PowerOff state. Furthermore, the PowerOn type must be
                                                                 assigned to PwrSeq State Register(0).  (Default = 0). */
#else /* Word 0 - Little Endian */
        uint64_t state_type            : 3;  /**< [  2:  0] The Type is either Active(A) (3b000), Active(B) (3b001), Halt (3b010), PowerOff (3b100), or PowerOn
                                                                 (3'b110).  Exactly one state must be assigned the PowerOn type, and exactly one
                                                                 state must be assigned the PowerOff state. Furthermore, the PowerOn type must be
                                                                 assigned to PwrSeq State Register(0).  (Default = 0). */
        uint64_t reserved_3            : 1;
        uint64_t state_outputs         : 14; /**< [ 17:  4] The state's outputs are defined by this field, and they follow the ordering of
                                                                 the pwr_defs::pwr_domain_t structure (except for the Power Down Status output
                                                                 which is not part of this structure). These outputs persist throughout the
                                                                 entirety of the state being active. (Default = 0).
                                                                    4: Power Off Daughter
                                                                    5: Power Off Mother
                                                                    6: Isolate
                                                                    7: Save
                                                                    8: Restore
                                                                    9: Force MDH Reset
                                                                    10: Force Logic Reset
                                                                    11: Force Domain Reset
                                                                    12: Request Clear BIST
                                                                    14:13: POFF
                                                                    15: Clock Off
                                                                    16: Engage Bus Guard
                                                                    17: Power Down Status */
        uint64_t reserved_18_19        : 2;
        uint64_t target_status         : 11; /**< [ 30: 20] When the synchronized status inputs match the Target Status programmed into this
                                                                 field (qualified by the Target Status Mask), the PwrSeq may proceed to the next
                                                                 state as soon as the Timer reaches its terminal count.  The ordering of the
                                                                 Target Status field is given below and follows the ordering of the
                                                                 pwr_defs::pwr_domain_t structure.
                                                                    20: Power Off Daughter
                                                                    21: Power Off Mother
                                                                    22: Isolate
                                                                    23: Save
                                                                    24: Restore
                                                                    25: Clear BIST Acknowledge
                                                                    27:26: POFF
                                                                    28: Clock Off
                                                                    29: Bus Guard Acknowledge
                                                                    30: Idle */
        uint64_t reserved_31           : 1;
        uint64_t target_status_mask    : 11; /**< [ 42: 32] The Target Status Mask qualifies each bit of the Target Status whether it is
                                                                 actively used by this state to determine whether to move to the next state.  A
                                                                 value of 1b0 in any bit of the Target Status Mask indicates that the
                                                                 corresponding bit in the Target Status register should be ignored for next state
                                                                 checking.  A value of 1b1 in any bit of the Target Status Mask indicates that
                                                                 the corresponding bit of the Target Status is checked as part of next state
                                                                 checking. When this field is all zeros, the status inputs are not used for this
                                                                 state's next state checking. (Default = 0). */
        uint64_t reserved_43           : 1;
        uint64_t timer_terminal_count  : 14; /**< [ 57: 44] The Timer Terminal Count field indicates the minimum number of refclk periods
                                                                 the state is active for before transitioning to the next state. Since the PwrSeq
                                                                 runs on bclk, there is a (-10ns,0] interval of uncertainty for this timer.  When
                                                                 this field is all 0's, the timer is deactivated for this state and there is no
                                                                 minimum time the state is active for. */
        uint64_t next_state            : 6;  /**< [ 63: 58] The Next State field indicates which of the 64 states is the next state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_pwr_state_s_s cn; */
};

/**
 * Register (RSL) pgc_debugger_command
 *
 * PGC Debugger Command Register
 * The Debugger Command register is used by the debugger to force all power domains
 * served by the PGC to the PowerOn state.  This only applies to logical power domains
 * whose operation mode is not S/W Manual and who have not been fuse crippled.
 */
union cavm_pgc_debugger_command
{
    uint64_t u;
    struct cavm_pgc_debugger_command_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t power_up              : 1;  /**< [  0:  0](R/W) Writing a 1 to this bit causes the power up sequence to start for any logical
                                                                 power domain in the PowerOff state.  logical power domains currently in the
                                                                 PowerOn state are held there, and power down requests are ignored.  Power
                                                                 domains currently transitioning to the PowerOn state are allowed to finish.
                                                                 Those transitioning to the PowerOff are also allowed to finish and upon arriving
                                                                 at the PowerOff state, a power up sequence is immediately started.  When this
                                                                 bit is cleared, normal operation is resumed. */
#else /* Word 0 - Little Endian */
        uint64_t power_up              : 1;  /**< [  0:  0](R/W) Writing a 1 to this bit causes the power up sequence to start for any logical
                                                                 power domain in the PowerOff state.  logical power domains currently in the
                                                                 PowerOn state are held there, and power down requests are ignored.  Power
                                                                 domains currently transitioning to the PowerOn state are allowed to finish.
                                                                 Those transitioning to the PowerOff are also allowed to finish and upon arriving
                                                                 at the PowerOff state, a power up sequence is immediately started.  When this
                                                                 bit is cleared, normal operation is resumed. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_debugger_command_s cn; */
};
typedef union cavm_pgc_debugger_command cavm_pgc_debugger_command_t;

#define CAVM_PGC_DEBUGGER_COMMAND CAVM_PGC_DEBUGGER_COMMAND_FUNC()
static inline uint64_t CAVM_PGC_DEBUGGER_COMMAND_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_DEBUGGER_COMMAND_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e012c00108ll;
    __cavm_csr_fatal("PGC_DEBUGGER_COMMAND", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_DEBUGGER_COMMAND cavm_pgc_debugger_command_t
#define bustype_CAVM_PGC_DEBUGGER_COMMAND CSR_TYPE_RSL
#define basename_CAVM_PGC_DEBUGGER_COMMAND "PGC_DEBUGGER_COMMAND"
#define device_bar_CAVM_PGC_DEBUGGER_COMMAND 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_DEBUGGER_COMMAND 0
#define arguments_CAVM_PGC_DEBUGGER_COMMAND -1,-1,-1,-1

/**
 * Register (RSL) pgc_power_domain_command#
 *
 * PGC Power Domain Command Register
 * Commands for each power domain (MAB) served by the PGC.
 */
union cavm_pgc_power_domain_commandx
{
    uint64_t u;
    struct cavm_pgc_power_domain_commandx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t continue_seq          : 1;  /**< [ 16: 16](R/W1S/H) Writing a 1 to this bit causes the PwrSeq to continue execution of a halted
                                                                 power sequence. This assumes that the PwrSeq is in a Halt state when this
                                                                 command is received. */
        uint64_t reserved_9_15         : 7;
        uint64_t power_down            : 1;  /**< [  8:  8](R/W1S/H) Writing a 1 to this bit causes the power down sequence to start for the power
                                                                 domain. This assumes that the PwrSeq is in the PowerOn state when this command
                                                                 is received. */
        uint64_t reserved_1_7          : 7;
        uint64_t power_up              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 to this bit causes the power up sequence to start for the power
                                                                 domain. This assumes that the PwrSeq is in the PowerOff state when this command
                                                                 is received. */
#else /* Word 0 - Little Endian */
        uint64_t power_up              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 to this bit causes the power up sequence to start for the power
                                                                 domain. This assumes that the PwrSeq is in the PowerOff state when this command
                                                                 is received. */
        uint64_t reserved_1_7          : 7;
        uint64_t power_down            : 1;  /**< [  8:  8](R/W1S/H) Writing a 1 to this bit causes the power down sequence to start for the power
                                                                 domain. This assumes that the PwrSeq is in the PowerOn state when this command
                                                                 is received. */
        uint64_t reserved_9_15         : 7;
        uint64_t continue_seq          : 1;  /**< [ 16: 16](R/W1S/H) Writing a 1 to this bit causes the PwrSeq to continue execution of a halted
                                                                 power sequence. This assumes that the PwrSeq is in a Halt state when this
                                                                 command is received. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_domain_commandx_s cn; */
};
typedef union cavm_pgc_power_domain_commandx cavm_pgc_power_domain_commandx_t;

static inline uint64_t CAVM_PGC_POWER_DOMAIN_COMMANDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_DOMAIN_COMMANDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0x87e012c00080ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("PGC_POWER_DOMAIN_COMMANDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) cavm_pgc_power_domain_commandx_t
#define bustype_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) "PGC_POWER_DOMAIN_COMMANDX"
#define device_bar_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) (a)
#define arguments_CAVM_PGC_POWER_DOMAIN_COMMANDX(a) (a),-1,-1,-1

/**
 * Register (RSL) pgc_power_domain_control#
 *
 * PGC Power Domain Control Register
 * Control for each power domain (MAB) served by the PGC.
 */
union cavm_pgc_power_domain_controlx
{
    uint64_t u;
    struct cavm_pgc_power_domain_controlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mode                  : 2;  /**< [ 63: 62](R/W/H) These bits controls the operational mode for this power domain.  The three modes
                                                                 are S/W Auto (0), Sched Auto (1) and S/W Manual (3).  The default is S/W Auto
                                                                 (0). Note: it is recommended that this field only be changed when the PwrSeq is
                                                                 not actively executing a power sequence and is statically in either the Power On
                                                                 or Power Off state.  It is further recommended that all of the control bits in
                                                                 this register be programmed to the same value that the PwrSeq is driving, so
                                                                 that switching between an Auto mode and S/W Manual mode does not cause any
                                                                 immediate changes to the control signals.  After completing a transition to S/W
                                                                 Manual mode, the control signals can then be modified directly via this
                                                                 register. */
        uint64_t reserved_58_61        : 4;
        uint64_t power_down_status     : 1;  /**< [ 57: 57](R/W) This bit indicates to the PSM block the power status of the MAB where 0 is fully
                                                                 powered on and 1 is fully powered down. */
        uint64_t engage_bus_guard      : 1;  /**< [ 56: 56](R/W) Asserting this bit engages any bus guards outside of any gate-able power domain
                                                                 (e.g. bypassing the MDC chains). */
        uint64_t reserved_49_55        : 7;
        uint64_t clock_off             : 1;  /**< [ 48: 48](R/W) Asserting this bit forces the clock(s) inside the PNR blocks to gate. This is
                                                                 needed during save/restore. */
        uint64_t reserved_45_47        : 3;
        uint64_t poff_override         : 1;  /**< [ 44: 44](R/W) When the MAN/AUTO bit is set, setting POFF_OVERRIDE causes the POFF field of
                                                                 this register to ovveride the POFF setting in the PwrSeq State Registers
                                                                 whenever the POFF setting in the PwrSeq State Registers is non-zero. Since each
                                                                 of the Power Domain Control Registers is dedicated to a specific power domain,
                                                                 the override applies only to the specific power domain. */
        uint64_t reserved_42_43        : 2;
        uint64_t poff                  : 2;  /**< [ 41: 40](R/W) These bits control the power down state of the dual rail memories inside each
                                                                 power domain. These should be set to 2b00 for normal operation.  During power
                                                                 down, these bits must be set to either 2b01 to retain the contents of memories
                                                                 inside the power domain or 2b11 to not retain memory contents through power down
                                                                 (but to further reduce power consumption). */
        uint64_t reserved_33_39        : 7;
        uint64_t request_clear_bist    : 1;  /**< [ 32: 32](R/W) Asserting this bit causes memories that need to be cleared before normal
                                                                 operation to run Clear BIST. */
        uint64_t reserved_27_31        : 5;
        uint64_t force_domain_reset    : 1;  /**< [ 26: 26](R/W) Asserting this bit causes domain reset to be asserted inside the
                                                                 power domain's Reset Hub. */
        uint64_t force_logic_reset     : 1;  /**< [ 25: 25](R/W) Asserting this bit causes chip, core and early resets to be asserted inside the
                                                                 power domain's Reset Hub. */
        uint64_t force_mdh_reset       : 1;  /**< [ 24: 24](R/W) Asserting this bit causes MDH resets to be asserted inside the power domain's Reset Hub. */
        uint64_t reserved_18_23        : 6;
        uint64_t restore               : 1;  /**< [ 17: 17](R/W) Asserting this bit causes all retention flip-flops to restore the values in
                                                                 their respective latches. */
        uint64_t save                  : 1;  /**< [ 16: 16](R/W) Asserting this bit causes all retention latches to enable and capture the value
                                                                 contained in their respective flip-flops. */
        uint64_t reserved_9_15         : 7;
        uint64_t isolate               : 1;  /**< [  8:  8](R/W) Asserting this bit causes the isolation buffers to activate. */
        uint64_t reserved_2_7          : 6;
        uint64_t power_off_mother      : 1;  /**< [  1:  1](R/W) Asserting this bit causes the mother power switch stage to turn off. */
        uint64_t power_off_daughter    : 1;  /**< [  0:  0](R/W) Asserting this bit causes the daughter power switch stage to turn off. */
#else /* Word 0 - Little Endian */
        uint64_t power_off_daughter    : 1;  /**< [  0:  0](R/W) Asserting this bit causes the daughter power switch stage to turn off. */
        uint64_t power_off_mother      : 1;  /**< [  1:  1](R/W) Asserting this bit causes the mother power switch stage to turn off. */
        uint64_t reserved_2_7          : 6;
        uint64_t isolate               : 1;  /**< [  8:  8](R/W) Asserting this bit causes the isolation buffers to activate. */
        uint64_t reserved_9_15         : 7;
        uint64_t save                  : 1;  /**< [ 16: 16](R/W) Asserting this bit causes all retention latches to enable and capture the value
                                                                 contained in their respective flip-flops. */
        uint64_t restore               : 1;  /**< [ 17: 17](R/W) Asserting this bit causes all retention flip-flops to restore the values in
                                                                 their respective latches. */
        uint64_t reserved_18_23        : 6;
        uint64_t force_mdh_reset       : 1;  /**< [ 24: 24](R/W) Asserting this bit causes MDH resets to be asserted inside the power domain's Reset Hub. */
        uint64_t force_logic_reset     : 1;  /**< [ 25: 25](R/W) Asserting this bit causes chip, core and early resets to be asserted inside the
                                                                 power domain's Reset Hub. */
        uint64_t force_domain_reset    : 1;  /**< [ 26: 26](R/W) Asserting this bit causes domain reset to be asserted inside the
                                                                 power domain's Reset Hub. */
        uint64_t reserved_27_31        : 5;
        uint64_t request_clear_bist    : 1;  /**< [ 32: 32](R/W) Asserting this bit causes memories that need to be cleared before normal
                                                                 operation to run Clear BIST. */
        uint64_t reserved_33_39        : 7;
        uint64_t poff                  : 2;  /**< [ 41: 40](R/W) These bits control the power down state of the dual rail memories inside each
                                                                 power domain. These should be set to 2b00 for normal operation.  During power
                                                                 down, these bits must be set to either 2b01 to retain the contents of memories
                                                                 inside the power domain or 2b11 to not retain memory contents through power down
                                                                 (but to further reduce power consumption). */
        uint64_t reserved_42_43        : 2;
        uint64_t poff_override         : 1;  /**< [ 44: 44](R/W) When the MAN/AUTO bit is set, setting POFF_OVERRIDE causes the POFF field of
                                                                 this register to ovveride the POFF setting in the PwrSeq State Registers
                                                                 whenever the POFF setting in the PwrSeq State Registers is non-zero. Since each
                                                                 of the Power Domain Control Registers is dedicated to a specific power domain,
                                                                 the override applies only to the specific power domain. */
        uint64_t reserved_45_47        : 3;
        uint64_t clock_off             : 1;  /**< [ 48: 48](R/W) Asserting this bit forces the clock(s) inside the PNR blocks to gate. This is
                                                                 needed during save/restore. */
        uint64_t reserved_49_55        : 7;
        uint64_t engage_bus_guard      : 1;  /**< [ 56: 56](R/W) Asserting this bit engages any bus guards outside of any gate-able power domain
                                                                 (e.g. bypassing the MDC chains). */
        uint64_t power_down_status     : 1;  /**< [ 57: 57](R/W) This bit indicates to the PSM block the power status of the MAB where 0 is fully
                                                                 powered on and 1 is fully powered down. */
        uint64_t reserved_58_61        : 4;
        uint64_t mode                  : 2;  /**< [ 63: 62](R/W/H) These bits controls the operational mode for this power domain.  The three modes
                                                                 are S/W Auto (0), Sched Auto (1) and S/W Manual (3).  The default is S/W Auto
                                                                 (0). Note: it is recommended that this field only be changed when the PwrSeq is
                                                                 not actively executing a power sequence and is statically in either the Power On
                                                                 or Power Off state.  It is further recommended that all of the control bits in
                                                                 this register be programmed to the same value that the PwrSeq is driving, so
                                                                 that switching between an Auto mode and S/W Manual mode does not cause any
                                                                 immediate changes to the control signals.  After completing a transition to S/W
                                                                 Manual mode, the control signals can then be modified directly via this
                                                                 register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_domain_controlx_s cn; */
};
typedef union cavm_pgc_power_domain_controlx cavm_pgc_power_domain_controlx_t;

static inline uint64_t CAVM_PGC_POWER_DOMAIN_CONTROLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_DOMAIN_CONTROLX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0x87e012c00000ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("PGC_POWER_DOMAIN_CONTROLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) cavm_pgc_power_domain_controlx_t
#define bustype_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) "PGC_POWER_DOMAIN_CONTROLX"
#define device_bar_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) (a)
#define arguments_CAVM_PGC_POWER_DOMAIN_CONTROLX(a) (a),-1,-1,-1

/**
 * Register (RSL) pgc_power_domain_statistics#
 *
 * PGC Power Domain Statistics Register
 * Statistics for each power domain (MAB) served by the PGC.
 */
union cavm_pgc_power_domain_statisticsx
{
    uint64_t u;
    struct cavm_pgc_power_domain_statisticsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t power_down            : 32; /**< [ 63: 32](RO/H) This read-only field contains the number of fully completed power down sequences
                                                                 performed by the PwrSeq on the respective power domain. */
        uint64_t power_up              : 32; /**< [ 31:  0](RO/H) This read-only field contains the number of fully completed power up sequences
                                                                 performed by the PwrSeq on the respective power domain. */
#else /* Word 0 - Little Endian */
        uint64_t power_up              : 32; /**< [ 31:  0](RO/H) This read-only field contains the number of fully completed power up sequences
                                                                 performed by the PwrSeq on the respective power domain. */
        uint64_t power_down            : 32; /**< [ 63: 32](RO/H) This read-only field contains the number of fully completed power down sequences
                                                                 performed by the PwrSeq on the respective power domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_domain_statisticsx_s cn; */
};
typedef union cavm_pgc_power_domain_statisticsx cavm_pgc_power_domain_statisticsx_t;

static inline uint64_t CAVM_PGC_POWER_DOMAIN_STATISTICSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_DOMAIN_STATISTICSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0x87e012c000c0ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("PGC_POWER_DOMAIN_STATISTICSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) cavm_pgc_power_domain_statisticsx_t
#define bustype_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) "PGC_POWER_DOMAIN_STATISTICSX"
#define device_bar_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) (a)
#define arguments_CAVM_PGC_POWER_DOMAIN_STATISTICSX(a) (a),-1,-1,-1

/**
 * Register (RSL) pgc_power_domain_status#
 *
 * PGC Power Domain Status Register
 * Status for each power domain (MAB) served by the PGC.
 */
union cavm_pgc_power_domain_statusx
{
    uint64_t u;
    struct cavm_pgc_power_domain_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pwr_seq_current_state : 6;  /**< [ 63: 58](RO/H) This field indicates the current state of this power domain's power sequence in the PwrSeq. */
        uint64_t ack_bus_guard         : 1;  /**< [ 57: 57](RO/H) This bit sets when all bus guards have engaged. This is in response to the
                                                                 assertion of the Engage Bus Guard bit of the respective Power Domain Control
                                                                 register. */
        uint64_t bus_guard             : 1;  /**< [ 56: 56](RO/H) When this bit is asserted, the bus guard logic outside of the logical power
                                                                 domain is being requested to engage. */
        uint64_t reserved_54_55        : 2;
        uint64_t cripple               : 1;  /**< [ 53: 53](RO/H) This bit comes from the logical power domain indicating that it is crippled via fusing out. */
        uint64_t idle                  : 1;  /**< [ 52: 52](RO/H) This bit comes from the MAB indicating whether the MAB is idle (and therefore okay to power off). */
        uint64_t reserved_49_51        : 3;
        uint64_t clock_off             : 1;  /**< [ 48: 48](RO/H) When asserted, clocks inside the logical power domain are being gated. */
        uint64_t reserved_42_47        : 6;
        uint64_t poff                  : 2;  /**< [ 41: 40](RO/H) These bits indicate the status of the power state of memories inside the logical power domain. */
        uint64_t reserved_34_39        : 6;
        uint64_t ack_clear_bist        : 1;  /**< [ 33: 33](RO/H) When this bit is asserted, the Clear BIST operation has completed for all
                                                                 memories that require Clear BIST. This is in response to the assertion of the
                                                                 Request Clear BIST bit of the respective Power Domain Control register. */
        uint64_t clear_bist            : 1;  /**< [ 32: 32](RO/H) When this bit is asserted, the Clear BIST operation is in process inside the logical power domain. */
        uint64_t reserved_27_31        : 5;
        uint64_t domain_reset          : 1;  /**< [ 26: 26](RO/H) When this bit is asserted, the domain reset is asserted inside the logical power domain. */
        uint64_t logic_reset           : 1;  /**< [ 25: 25](RO/H) When this bit is asserted, the logic resets are asserted inside the logical power domain. */
        uint64_t mdh_reset             : 1;  /**< [ 24: 24](RO/H) When this bit is asserted, the MDH reset is asserted inside the logical power domain. */
        uint64_t reserved_18_23        : 6;
        uint64_t restore               : 1;  /**< [ 17: 17](RO/H) When this bit is asserted, all retention flops are restoring their saved values. */
        uint64_t save                  : 1;  /**< [ 16: 16](RO/H) When this bit is asserted, all retention flops in the logical power domain are
                                                                 saving their current states. */
        uint64_t reserved_9_15         : 7;
        uint64_t isolate               : 1;  /**< [  8:  8](RO/H) When this bit is asserted, isolation is activated in the logical power domain. */
        uint64_t reserved_2_7          : 6;
        uint64_t mother_off            : 1;  /**< [  1:  1](RO/H) When this bit is asserted, the power domain's mother switches are off, and the
                                                                 Power Off Mother bit from the respective Power Domain Control register has
                                                                 propogated through the daisy chain of all mother stage power switches of all the
                                                                 power domain's PNR blocks. */
        uint64_t daughter_off          : 1;  /**< [  0:  0](RO/H) When this bit is asserted, the power domain\'s daughter switches are off, and
                                                                 the Power Off Daughter bit from the respective Power Domain Control register has
                                                                 propogated through the daisy chain of all daughter stage power switches of all
                                                                 the power domain\'s PNR blocks. */
#else /* Word 0 - Little Endian */
        uint64_t daughter_off          : 1;  /**< [  0:  0](RO/H) When this bit is asserted, the power domain\'s daughter switches are off, and
                                                                 the Power Off Daughter bit from the respective Power Domain Control register has
                                                                 propogated through the daisy chain of all daughter stage power switches of all
                                                                 the power domain\'s PNR blocks. */
        uint64_t mother_off            : 1;  /**< [  1:  1](RO/H) When this bit is asserted, the power domain's mother switches are off, and the
                                                                 Power Off Mother bit from the respective Power Domain Control register has
                                                                 propogated through the daisy chain of all mother stage power switches of all the
                                                                 power domain's PNR blocks. */
        uint64_t reserved_2_7          : 6;
        uint64_t isolate               : 1;  /**< [  8:  8](RO/H) When this bit is asserted, isolation is activated in the logical power domain. */
        uint64_t reserved_9_15         : 7;
        uint64_t save                  : 1;  /**< [ 16: 16](RO/H) When this bit is asserted, all retention flops in the logical power domain are
                                                                 saving their current states. */
        uint64_t restore               : 1;  /**< [ 17: 17](RO/H) When this bit is asserted, all retention flops are restoring their saved values. */
        uint64_t reserved_18_23        : 6;
        uint64_t mdh_reset             : 1;  /**< [ 24: 24](RO/H) When this bit is asserted, the MDH reset is asserted inside the logical power domain. */
        uint64_t logic_reset           : 1;  /**< [ 25: 25](RO/H) When this bit is asserted, the logic resets are asserted inside the logical power domain. */
        uint64_t domain_reset          : 1;  /**< [ 26: 26](RO/H) When this bit is asserted, the domain reset is asserted inside the logical power domain. */
        uint64_t reserved_27_31        : 5;
        uint64_t clear_bist            : 1;  /**< [ 32: 32](RO/H) When this bit is asserted, the Clear BIST operation is in process inside the logical power domain. */
        uint64_t ack_clear_bist        : 1;  /**< [ 33: 33](RO/H) When this bit is asserted, the Clear BIST operation has completed for all
                                                                 memories that require Clear BIST. This is in response to the assertion of the
                                                                 Request Clear BIST bit of the respective Power Domain Control register. */
        uint64_t reserved_34_39        : 6;
        uint64_t poff                  : 2;  /**< [ 41: 40](RO/H) These bits indicate the status of the power state of memories inside the logical power domain. */
        uint64_t reserved_42_47        : 6;
        uint64_t clock_off             : 1;  /**< [ 48: 48](RO/H) When asserted, clocks inside the logical power domain are being gated. */
        uint64_t reserved_49_51        : 3;
        uint64_t idle                  : 1;  /**< [ 52: 52](RO/H) This bit comes from the MAB indicating whether the MAB is idle (and therefore okay to power off). */
        uint64_t cripple               : 1;  /**< [ 53: 53](RO/H) This bit comes from the logical power domain indicating that it is crippled via fusing out. */
        uint64_t reserved_54_55        : 2;
        uint64_t bus_guard             : 1;  /**< [ 56: 56](RO/H) When this bit is asserted, the bus guard logic outside of the logical power
                                                                 domain is being requested to engage. */
        uint64_t ack_bus_guard         : 1;  /**< [ 57: 57](RO/H) This bit sets when all bus guards have engaged. This is in response to the
                                                                 assertion of the Engage Bus Guard bit of the respective Power Domain Control
                                                                 register. */
        uint64_t pwr_seq_current_state : 6;  /**< [ 63: 58](RO/H) This field indicates the current state of this power domain's power sequence in the PwrSeq. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_domain_statusx_s cn; */
};
typedef union cavm_pgc_power_domain_statusx cavm_pgc_power_domain_statusx_t;

static inline uint64_t CAVM_PGC_POWER_DOMAIN_STATUSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_DOMAIN_STATUSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0x87e012c00040ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("PGC_POWER_DOMAIN_STATUSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_DOMAIN_STATUSX(a) cavm_pgc_power_domain_statusx_t
#define bustype_CAVM_PGC_POWER_DOMAIN_STATUSX(a) CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_DOMAIN_STATUSX(a) "PGC_POWER_DOMAIN_STATUSX"
#define device_bar_CAVM_PGC_POWER_DOMAIN_STATUSX(a) 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_DOMAIN_STATUSX(a) (a)
#define arguments_CAVM_PGC_POWER_DOMAIN_STATUSX(a) (a),-1,-1,-1

/**
 * Register (RSL) pgc_power_state#
 *
 * PGC Power State Register
 * Control for each power domain (MAB) served by the PGC.
 */
union cavm_pgc_power_statex
{
    uint64_t u;
    struct cavm_pgc_power_statex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) Power state entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) Power state entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_statex_s cn; */
};
typedef union cavm_pgc_power_statex cavm_pgc_power_statex_t;

static inline uint64_t CAVM_PGC_POWER_STATEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_STATEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=63))
        return 0x87e012c00110ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("PGC_POWER_STATEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_STATEX(a) cavm_pgc_power_statex_t
#define bustype_CAVM_PGC_POWER_STATEX(a) CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_STATEX(a) "PGC_POWER_STATEX"
#define device_bar_CAVM_PGC_POWER_STATEX(a) 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_STATEX(a) (a)
#define arguments_CAVM_PGC_POWER_STATEX(a) (a),-1,-1,-1

/**
 * Register (RSL) pgc_power_up_delay
 *
 * PGC Power-Up Delay Register
 * The Power Gating Controller inserts a programmable delay between the starting of
 * power-up sequences on different domains.  This gives system software a way to spread
 * power-up sequences out in time in order to control the aggregate in-rush current
 * load caused by powering up many power domains in a short period of time.  This only
 * affects power-up sequences; the starting of power-down sequences are not affected by
 * this delay.  Also, this delay only is in effect for power domains using Sched Auto
 * and S/W Auto operating modes.
 */
union cavm_pgc_power_up_delay
{
    uint64_t u;
    struct cavm_pgc_power_up_delay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t delay                 : 17; /**< [ 16:  0](R/W) This is the number of 10ns time periods (prescaled clocks) that the PGC waits
                                                                 after starting a power-up sequence on one power domain before being able to
                                                                 start a power-up sequence on another power domain.  The default value for this
                                                                 field is 0 (no delay). */
#else /* Word 0 - Little Endian */
        uint64_t delay                 : 17; /**< [ 16:  0](R/W) This is the number of 10ns time periods (prescaled clocks) that the PGC waits
                                                                 after starting a power-up sequence on one power domain before being able to
                                                                 start a power-up sequence on another power domain.  The default value for this
                                                                 field is 0 (no delay). */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pgc_power_up_delay_s cn; */
};
typedef union cavm_pgc_power_up_delay cavm_pgc_power_up_delay_t;

#define CAVM_PGC_POWER_UP_DELAY CAVM_PGC_POWER_UP_DELAY_FUNC()
static inline uint64_t CAVM_PGC_POWER_UP_DELAY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PGC_POWER_UP_DELAY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e012c00100ll;
    __cavm_csr_fatal("PGC_POWER_UP_DELAY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PGC_POWER_UP_DELAY cavm_pgc_power_up_delay_t
#define bustype_CAVM_PGC_POWER_UP_DELAY CSR_TYPE_RSL
#define basename_CAVM_PGC_POWER_UP_DELAY "PGC_POWER_UP_DELAY"
#define device_bar_CAVM_PGC_POWER_UP_DELAY 0x2 /* PGC_PF_BAR2 */
#define busnum_CAVM_PGC_POWER_UP_DELAY 0
#define arguments_CAVM_PGC_POWER_UP_DELAY -1,-1,-1,-1

#endif /* __CAVM_CSRS_PGC_H__ */
