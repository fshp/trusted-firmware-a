/*
 * Copyright (c) 2020, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/debug.h>
#include <lib/mmio.h>

#include <devapc.h>

/* Infra_ao */
static const struct APC_INFRA_PERI_DOM_16 INFRA_AO_SYS0_Devices[] = {

/* 0 */
DAPC_INFRA_AO_SYS0_ATTR("NET_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("NET_S-1",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PCIE_AXI_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SGMII_SBUS0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SGMII_SBUS1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("MCUSYS_CFGREG_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("MCUSYS_CFGREG_APB_S-1",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_AO_AUTO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_AO_MEM_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 10 */
DAPC_INFRA_AO_SYS0_ATTR("RESERVED_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("AP_CIRQ_EINT_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SYS_TIMER_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("CKSYS_APB0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("CKSYS_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("CKSYS_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("TOP_CENTER_APB0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("TOP_CENTER_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("TOP_CENTER_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("TOP_CENTER_APB3_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 20 */
DAPC_INFRA_AO_SYS0_ATTR("TOP_CENTER_APB4_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_INFRA_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DEBUG_CTRL_INFRA_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DEVICE_APC_INFRA_AO_APB_S",
			SEC_RW_ONLY,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("AUDIO_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("AUDIO_S-1",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SSUSB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SSUSB_S-1",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SSUSB_S-2",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 30 */
DAPC_INFRA_AO_SYS0_ATTR("DEBUGSYS_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("CONN_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP0_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP1_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP2_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP3_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP4_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP5_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_CH0_TOP6_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DRAMC_MD32_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 40 */
DAPC_INFRA_AO_SYS0_ATTR("APXGPT_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SEJ_APB_S",
			SEC_RW_ONLY,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SECURITY_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PWM_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_AO2_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DEBUG_CTRL_FMEM_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DEVICE_APC_FMEM_AO_APB_S",
			SEC_RW_ONLY,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 50 */
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB3_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB4_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB5_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB6_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_EAST_APB7_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB0_S",
			SEC_RW_NS_R,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB3_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB4_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 60 */
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB5_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB6_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_SOUTH_APB7_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB3_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB4_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB5_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB6_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 70 */
DAPC_INFRA_AO_SYS0_ATTR("BND_WEST_APB7_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB1_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB2_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB3_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB4_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB5_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB6_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BND_NORTH_APB7_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SYS_CIRQ_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 80 */
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_PDN_AUTO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("TRNG_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("EIP_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("CQ_DMA_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SRAMROM_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("INFRACFG_MEM_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("DEVICE_APC_INFRA_PDN_APB_S",
			SEC_RW_ONLY,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("EMI_FAKE_ENGINE_0_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("EMI_FAKE_ENGINE_1_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 90 */
DAPC_INFRA_AO_SYS0_ATTR("EMI_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("EMI_MPU_APB_S",
			SEC_RW_ONLY,   FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_FMEM_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_INFRA_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_PDN2_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PCIE_AHB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("MSDC0_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("UART0_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("UART1_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 100 */
DAPC_INFRA_AO_SYS0_ATTR("UART2_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SPI0_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("SPI1_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("AUXADC_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PTP_THERM_CTRL_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("I2C_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PERICFG_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PERICFG_PDN_AUTO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("NFI_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("NFIECC_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),

/* 110 */
DAPC_INFRA_AO_SYS0_ATTR("APDMA_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_PAR_PDN_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PERICFG_AO_AUTO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("PERICFG_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
DAPC_INFRA_AO_SYS0_ATTR("BCRM_PERI_PAR_AO_APB_S",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN,
			FORBIDDEN,     FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
};

static const struct APC_INFRA_PERI_DOM_4 INFRA_AO_SYS1_Devices[] = {

/* 0 */
DAPC_INFRA_AO_SYS1_ATTR("SRAMROM_S-1",
			NO_PROTECTION, FORBIDDEN,     FORBIDDEN,     FORBIDDEN),
};

static void set_module_apc(enum DEVAPC_SLAVE_TYPE slave_type,
		uint32_t module, enum DOMAIN_ID domain_id,
		enum DEVAPC_PERM_TYPE perm)
{
	uint32_t apc_register_index;
	uint32_t apc_set_index;
	uintptr_t base = 0, reg;
	uint32_t clr_bit;
	uint32_t set_bit;

	apc_register_index = module / MOD_NO_IN_1_DEVAPC;
	apc_set_index = module % MOD_NO_IN_1_DEVAPC;

	clr_bit = (0x3U << (apc_set_index * 2));
	set_bit = (uint32_t)perm << (apc_set_index * 2);

	if ((slave_type == SLAVE_TYPE_INFRA_AO_SYS0) &&
		(module < SLAVE_NUM_INFRA_AO_SYS0) &&
		(domain_id < (uint32_t)DOM_NUM_INFRA_AO_SYS0)) {
		base = DEVAPC_INFRA_AO_SYS0_D0_APC_0;
	} else if ((slave_type == SLAVE_TYPE_INFRA_AO_SYS1) &&
		(module < SLAVE_NUM_INFRA_AO_SYS1) &&
		(domain_id < (uint32_t)DOM_NUM_INFRA_AO_SYS1)) {
		base = DEVAPC_INFRA_AO_SYS1_D0_APC_0;
	} else {
		ERROR("[DEVAPC] %s: %s, %s:0x%08x, %s:0x%08x, %s:0x%08x\n",
				__func__, "out of boundary",
				"slave_type", slave_type,
				"module", module,
				"domain_id", domain_id);
	}

	if (base != 0U) {
		reg = base + domain_id * 0x40 + apc_register_index * 4;
		mmio_clrsetbits_32(reg, clr_bit, set_bit);
	}
}

static void dump_infra_ao_apc(void)
{
	int reg_num;
	int d, i;

	reg_num = (SLAVE_NUM_INFRA_AO_SYS0 - 1) / MOD_NO_IN_1_DEVAPC;
	for (d = 0; d < DOM_NUM_INFRA_AO_SYS0; d++) {
		for (i = 0; i <= reg_num; i++) {
			VERBOSE("[DEVAPC] (INFRA_AO_SYS0)D%d_APC_%d: 0x%08x\n",
					d, i, devapc_readl(
					DEVAPC_INFRA_AO_SYS0_D0_APC_0 +
					d * 0x40 + i * 4)
			);
		}
	}

	reg_num = (SLAVE_NUM_INFRA_AO_SYS1 - 1) / MOD_NO_IN_1_DEVAPC;
	for (d = 0; d < DOM_NUM_INFRA_AO_SYS1; d++) {
		for (i = 0; i <= reg_num; i++) {
			VERBOSE("[DEVAPC] (INFRA_AO_SYS1)D%d_APC_%d: 0x%08x\n",
					d, i, devapc_readl(
					DEVAPC_INFRA_AO_SYS1_D0_APC_0 +
					d * 0x40 + i * 4)
			);
		}
	}

	VERBOSE("[DEVAPC] (INFRA_AO)MAS_SEC_0: 0x%08x\n",
		devapc_readl(DEVAPC_INFRA_AO_MAS_SEC_0));
	VERBOSE("[DEVAPC] (FMEM_AO)MAS_SEC_0: 0x%08x\n",
		devapc_readl(DEVAPC_FMEM_AO_MAS_SEC_0));
}

static void set_infra_ao_apc(void)
{
	uint32_t infra_ao_size;
	uint32_t i;

	infra_ao_size = ARRAY_SIZE(INFRA_AO_SYS0_Devices);

	for (i = 0; i < infra_ao_size; i++) {
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_0,
				INFRA_AO_SYS0_Devices[i].d0_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_1,
				INFRA_AO_SYS0_Devices[i].d1_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_2,
				INFRA_AO_SYS0_Devices[i].d2_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_3,
				INFRA_AO_SYS0_Devices[i].d3_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_4,
				INFRA_AO_SYS0_Devices[i].d4_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_5,
				INFRA_AO_SYS0_Devices[i].d5_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_6,
				INFRA_AO_SYS0_Devices[i].d6_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_7,
				INFRA_AO_SYS0_Devices[i].d7_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_8,
				INFRA_AO_SYS0_Devices[i].d8_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_9,
				INFRA_AO_SYS0_Devices[i].d9_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_10,
				INFRA_AO_SYS0_Devices[i].d10_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_11,
				INFRA_AO_SYS0_Devices[i].d11_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_12,
				INFRA_AO_SYS0_Devices[i].d12_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_13,
				INFRA_AO_SYS0_Devices[i].d13_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_14,
				INFRA_AO_SYS0_Devices[i].d14_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS0, i, DOMAIN_15,
				INFRA_AO_SYS0_Devices[i].d15_permission);
	}

	infra_ao_size = ARRAY_SIZE(INFRA_AO_SYS1_Devices);

	for (i = 0; i < infra_ao_size; i++) {
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS1, i, DOMAIN_0,
				INFRA_AO_SYS1_Devices[i].d0_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS1, i, DOMAIN_1,
				INFRA_AO_SYS1_Devices[i].d1_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS1, i, DOMAIN_2,
				INFRA_AO_SYS1_Devices[i].d2_permission);
		set_module_apc(SLAVE_TYPE_INFRA_AO_SYS1, i, DOMAIN_3,
				INFRA_AO_SYS1_Devices[i].d3_permission);
	}
}

void devapc_init(void)
{
	/* initialize DEVAPC */
	mmio_write_32(DEVAPC_FMEM_AO_APC_CON, 0x80000001);
	mmio_write_32(DEVAPC_INFRA_AO_APC_CON, 0x80000001);
	mmio_write_32(DEVAPC_INFRA_PDN_APC_CON, 0x80000001);

	/* setup permission */
	set_infra_ao_apc();

	/* dump permission */
	dump_infra_ao_apc();

	INFO("[DEVAPC] %s done\n", __func__);
}
