/**
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "modem/reg_base.h"
#ifdef __cplusplus
extern "C" {
#endif

/** MODEM_LPCON_TEST_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_TEST_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x0)
/** MODEM_LPCON_CLK_EN : R/W; bitpos: [0]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_EN    (BIT(0))
#define MODEM_LPCON_CLK_EN_M  (MODEM_LPCON_CLK_EN_V << MODEM_LPCON_CLK_EN_S)
#define MODEM_LPCON_CLK_EN_V  0x00000001U
#define MODEM_LPCON_CLK_EN_S  0

/** MODEM_LPCON_COEX_LP_CLK_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_COEX_LP_CLK_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x4)
/** MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW : R/W; bitpos: [0]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW    (BIT(0))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_M  (MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_V << MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_S)
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_S  0
/** MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST : R/W; bitpos: [1]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST    (BIT(1))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_M  (MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_V << MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_S)
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_S  1
/** MODEM_LPCON_CLK_COEX_LP_SEL_XTAL : R/W; bitpos: [2]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL    (BIT(2))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_M  (MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_V << MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_S)
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_S  2
/** MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K : R/W; bitpos: [3]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K    (BIT(3))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_M  (MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_V << MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_S)
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_S  3
/** MODEM_LPCON_CLK_COEX_LP_DIV_NUM : R/W; bitpos: [15:4]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM    0x00000FFFU
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_M  (MODEM_LPCON_CLK_COEX_LP_DIV_NUM_V << MODEM_LPCON_CLK_COEX_LP_DIV_NUM_S)
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_V  0x00000FFFU
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_S  4

/** MODEM_LPCON_CLK_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_CLK_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x8)
/** MODEM_LPCON_CLK_COEX_EN : R/W; bitpos: [1]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_EN    (BIT(1))
#define MODEM_LPCON_CLK_COEX_EN_M  (MODEM_LPCON_CLK_COEX_EN_V << MODEM_LPCON_CLK_COEX_EN_S)
#define MODEM_LPCON_CLK_COEX_EN_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_EN_S  1
/** MODEM_LPCON_CLK_I2C_MST_EN : R/W; bitpos: [2]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_I2C_MST_EN    (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_EN_M  (MODEM_LPCON_CLK_I2C_MST_EN_V << MODEM_LPCON_CLK_I2C_MST_EN_S)
#define MODEM_LPCON_CLK_I2C_MST_EN_V  0x00000001U
#define MODEM_LPCON_CLK_I2C_MST_EN_S  2
/** MODEM_LPCON_CLK_FE_MEM_EN : R/W; bitpos: [5]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_FE_MEM_EN    (BIT(5))
#define MODEM_LPCON_CLK_FE_MEM_EN_M  (MODEM_LPCON_CLK_FE_MEM_EN_V << MODEM_LPCON_CLK_FE_MEM_EN_S)
#define MODEM_LPCON_CLK_FE_MEM_EN_V  0x00000001U
#define MODEM_LPCON_CLK_FE_MEM_EN_S  5

/** MODEM_LPCON_CLK_CONF_FORCE_ON_REG register
 *  No description
 */
#define MODEM_LPCON_CLK_CONF_FORCE_ON_REG (DR_REG_MODEM_LPCON_BASE + 0xc)
/** MODEM_LPCON_CLK_COEX_FO : R/W; bitpos: [1]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_COEX_FO    (BIT(1))
#define MODEM_LPCON_CLK_COEX_FO_M  (MODEM_LPCON_CLK_COEX_FO_V << MODEM_LPCON_CLK_COEX_FO_S)
#define MODEM_LPCON_CLK_COEX_FO_V  0x00000001U
#define MODEM_LPCON_CLK_COEX_FO_S  1
/** MODEM_LPCON_CLK_I2C_MST_FO : R/W; bitpos: [2]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_I2C_MST_FO    (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_FO_M  (MODEM_LPCON_CLK_I2C_MST_FO_V << MODEM_LPCON_CLK_I2C_MST_FO_S)
#define MODEM_LPCON_CLK_I2C_MST_FO_V  0x00000001U
#define MODEM_LPCON_CLK_I2C_MST_FO_S  2
/** MODEM_LPCON_CLK_FE_MEM_FO : R/W; bitpos: [5]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CLK_FE_MEM_FO    (BIT(5))
#define MODEM_LPCON_CLK_FE_MEM_FO_M  (MODEM_LPCON_CLK_FE_MEM_FO_V << MODEM_LPCON_CLK_FE_MEM_FO_S)
#define MODEM_LPCON_CLK_FE_MEM_FO_V  0x00000001U
#define MODEM_LPCON_CLK_FE_MEM_FO_S  5

/** MODEM_LPCON_TICK_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_TICK_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x10)
/** MODEM_LPCON_PWR_TICK_TARGET : RO; bitpos: [31:6]; default: 0;
 *  No description
 */
#define MODEM_LPCON_PWR_TICK_TARGET    0x03FFFFFFU
#define MODEM_LPCON_PWR_TICK_TARGET_M  (MODEM_LPCON_PWR_TICK_TARGET_V << MODEM_LPCON_PWR_TICK_TARGET_S)
#define MODEM_LPCON_PWR_TICK_TARGET_V  0x03FFFFFFU
#define MODEM_LPCON_PWR_TICK_TARGET_S  6

/** MODEM_LPCON_RST_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_RST_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x14)
/** MODEM_LPCON_RST_COEX : WO; bitpos: [1]; default: 0;
 *  No description
 */
#define MODEM_LPCON_RST_COEX    (BIT(1))
#define MODEM_LPCON_RST_COEX_M  (MODEM_LPCON_RST_COEX_V << MODEM_LPCON_RST_COEX_S)
#define MODEM_LPCON_RST_COEX_V  0x00000001U
#define MODEM_LPCON_RST_COEX_S  1
/** MODEM_LPCON_RST_I2C_MST : WO; bitpos: [2]; default: 0;
 *  No description
 */
#define MODEM_LPCON_RST_I2C_MST    (BIT(2))
#define MODEM_LPCON_RST_I2C_MST_M  (MODEM_LPCON_RST_I2C_MST_V << MODEM_LPCON_RST_I2C_MST_S)
#define MODEM_LPCON_RST_I2C_MST_V  0x00000001U
#define MODEM_LPCON_RST_I2C_MST_S  2

/** MODEM_LPCON_MEM_CONF_REG register
 *  No description
 */
#define MODEM_LPCON_MEM_CONF_REG (DR_REG_MODEM_LPCON_BASE + 0x18)
/** MODEM_LPCON_AGC_MEM_FORCE_PU : R/W; bitpos: [2]; default: 1;
 *  No description
 */
#define MODEM_LPCON_AGC_MEM_FORCE_PU    (BIT(2))
#define MODEM_LPCON_AGC_MEM_FORCE_PU_M  (MODEM_LPCON_AGC_MEM_FORCE_PU_V << MODEM_LPCON_AGC_MEM_FORCE_PU_S)
#define MODEM_LPCON_AGC_MEM_FORCE_PU_V  0x00000001U
#define MODEM_LPCON_AGC_MEM_FORCE_PU_S  2
/** MODEM_LPCON_AGC_MEM_FORCE_PD : R/W; bitpos: [3]; default: 0;
 *  No description
 */
#define MODEM_LPCON_AGC_MEM_FORCE_PD    (BIT(3))
#define MODEM_LPCON_AGC_MEM_FORCE_PD_M  (MODEM_LPCON_AGC_MEM_FORCE_PD_V << MODEM_LPCON_AGC_MEM_FORCE_PD_S)
#define MODEM_LPCON_AGC_MEM_FORCE_PD_V  0x00000001U
#define MODEM_LPCON_AGC_MEM_FORCE_PD_S  3
/** MODEM_LPCON_PBUS_MEM_FORCE_PU : R/W; bitpos: [4]; default: 1;
 *  No description
 */
#define MODEM_LPCON_PBUS_MEM_FORCE_PU    (BIT(4))
#define MODEM_LPCON_PBUS_MEM_FORCE_PU_M  (MODEM_LPCON_PBUS_MEM_FORCE_PU_V << MODEM_LPCON_PBUS_MEM_FORCE_PU_S)
#define MODEM_LPCON_PBUS_MEM_FORCE_PU_V  0x00000001U
#define MODEM_LPCON_PBUS_MEM_FORCE_PU_S  4
/** MODEM_LPCON_PBUS_MEM_FORCE_PD : R/W; bitpos: [5]; default: 0;
 *  No description
 */
#define MODEM_LPCON_PBUS_MEM_FORCE_PD    (BIT(5))
#define MODEM_LPCON_PBUS_MEM_FORCE_PD_M  (MODEM_LPCON_PBUS_MEM_FORCE_PD_V << MODEM_LPCON_PBUS_MEM_FORCE_PD_S)
#define MODEM_LPCON_PBUS_MEM_FORCE_PD_V  0x00000001U
#define MODEM_LPCON_PBUS_MEM_FORCE_PD_S  5
/** MODEM_LPCON_I2C_MST_MEM_FORCE_PU : R/W; bitpos: [8]; default: 0;
 *  No description
 */
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PU    (BIT(8))
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PU_M  (MODEM_LPCON_I2C_MST_MEM_FORCE_PU_V << MODEM_LPCON_I2C_MST_MEM_FORCE_PU_S)
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PU_V  0x00000001U
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PU_S  8
/** MODEM_LPCON_I2C_MST_MEM_FORCE_PD : R/W; bitpos: [9]; default: 0;
 *  No description
 */
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PD    (BIT(9))
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PD_M  (MODEM_LPCON_I2C_MST_MEM_FORCE_PD_V << MODEM_LPCON_I2C_MST_MEM_FORCE_PD_S)
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PD_V  0x00000001U
#define MODEM_LPCON_I2C_MST_MEM_FORCE_PD_S  9
/** MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU : R/W; bitpos: [10]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU    (BIT(10))
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU_M  (MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU_V << MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU_S)
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU_V  0x00000001U
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PU_S  10
/** MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD : R/W; bitpos: [11]; default: 0;
 *  No description
 */
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD    (BIT(11))
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD_M  (MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD_V << MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD_S)
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD_V  0x00000001U
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_PD_S  11
/** MODEM_LPCON_MODEM_PWR_MEM_WP : R/W; bitpos: [14:12]; default: 0;
 *  No description
 */
#define MODEM_LPCON_MODEM_PWR_MEM_WP    0x00000007U
#define MODEM_LPCON_MODEM_PWR_MEM_WP_M  (MODEM_LPCON_MODEM_PWR_MEM_WP_V << MODEM_LPCON_MODEM_PWR_MEM_WP_S)
#define MODEM_LPCON_MODEM_PWR_MEM_WP_V  0x00000007U
#define MODEM_LPCON_MODEM_PWR_MEM_WP_S  12
/** MODEM_LPCON_MODEM_PWR_MEM_WA : R/W; bitpos: [17:15]; default: 5;
 *  No description
 */
#define MODEM_LPCON_MODEM_PWR_MEM_WA    0x00000007U
#define MODEM_LPCON_MODEM_PWR_MEM_WA_M  (MODEM_LPCON_MODEM_PWR_MEM_WA_V << MODEM_LPCON_MODEM_PWR_MEM_WA_S)
#define MODEM_LPCON_MODEM_PWR_MEM_WA_V  0x00000007U
#define MODEM_LPCON_MODEM_PWR_MEM_WA_S  15
/** MODEM_LPCON_MODEM_PWR_MEM_RA : R/W; bitpos: [19:18]; default: 0;
 *  No description
 */
#define MODEM_LPCON_MODEM_PWR_MEM_RA    0x00000003U
#define MODEM_LPCON_MODEM_PWR_MEM_RA_M  (MODEM_LPCON_MODEM_PWR_MEM_RA_V << MODEM_LPCON_MODEM_PWR_MEM_RA_S)
#define MODEM_LPCON_MODEM_PWR_MEM_RA_V  0x00000003U
#define MODEM_LPCON_MODEM_PWR_MEM_RA_S  18
/** MODEM_LPCON_MODEM_PWR_MEM_RM : R/W; bitpos: [23:20]; default: 2;
 *  No description
 */
#define MODEM_LPCON_MODEM_PWR_MEM_RM    0x0000000FU
#define MODEM_LPCON_MODEM_PWR_MEM_RM_M  (MODEM_LPCON_MODEM_PWR_MEM_RM_V << MODEM_LPCON_MODEM_PWR_MEM_RM_S)
#define MODEM_LPCON_MODEM_PWR_MEM_RM_V  0x0000000FU
#define MODEM_LPCON_MODEM_PWR_MEM_RM_S  20

/** MODEM_LPCON_DATE_REG register
 *  No description
 */
#define MODEM_LPCON_DATE_REG (DR_REG_MODEM_LPCON_BASE + 0x1c)
/** MODEM_LPCON_DATE : R/W; bitpos: [27:0]; default: 35689088;
 *  No description
 */
#define MODEM_LPCON_DATE    0x0FFFFFFFU
#define MODEM_LPCON_DATE_M  (MODEM_LPCON_DATE_V << MODEM_LPCON_DATE_S)
#define MODEM_LPCON_DATE_V  0x0FFFFFFFU
#define MODEM_LPCON_DATE_S  0

#ifdef __cplusplus
}
#endif
