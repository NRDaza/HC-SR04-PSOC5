/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* E */
#define E__0__INTTYPE CYREG_PICU2_INTTYPE4
#define E__0__MASK 0x10u
#define E__0__PC CYREG_PRT2_PC4
#define E__0__PORT 2u
#define E__0__SHIFT 4u
#define E__AG CYREG_PRT2_AG
#define E__AMUX CYREG_PRT2_AMUX
#define E__BIE CYREG_PRT2_BIE
#define E__BIT_MASK CYREG_PRT2_BIT_MASK
#define E__BYP CYREG_PRT2_BYP
#define E__CTL CYREG_PRT2_CTL
#define E__DM0 CYREG_PRT2_DM0
#define E__DM1 CYREG_PRT2_DM1
#define E__DM2 CYREG_PRT2_DM2
#define E__DR CYREG_PRT2_DR
#define E__INP_DIS CYREG_PRT2_INP_DIS
#define E__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define E__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define E__LCD_EN CYREG_PRT2_LCD_EN
#define E__MASK 0x10u
#define E__PORT 2u
#define E__PRT CYREG_PRT2_PRT
#define E__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define E__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define E__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define E__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define E__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define E__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define E__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define E__PS CYREG_PRT2_PS
#define E__SHIFT 4u
#define E__SLW CYREG_PRT2_SLW

/* D4 */
#define D4__0__INTTYPE CYREG_PICU2_INTTYPE0
#define D4__0__MASK 0x01u
#define D4__0__PC CYREG_PRT2_PC0
#define D4__0__PORT 2u
#define D4__0__SHIFT 0u
#define D4__AG CYREG_PRT2_AG
#define D4__AMUX CYREG_PRT2_AMUX
#define D4__BIE CYREG_PRT2_BIE
#define D4__BIT_MASK CYREG_PRT2_BIT_MASK
#define D4__BYP CYREG_PRT2_BYP
#define D4__CTL CYREG_PRT2_CTL
#define D4__DM0 CYREG_PRT2_DM0
#define D4__DM1 CYREG_PRT2_DM1
#define D4__DM2 CYREG_PRT2_DM2
#define D4__DR CYREG_PRT2_DR
#define D4__INP_DIS CYREG_PRT2_INP_DIS
#define D4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define D4__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define D4__LCD_EN CYREG_PRT2_LCD_EN
#define D4__MASK 0x01u
#define D4__PORT 2u
#define D4__PRT CYREG_PRT2_PRT
#define D4__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define D4__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define D4__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define D4__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define D4__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define D4__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define D4__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define D4__PS CYREG_PRT2_PS
#define D4__SHIFT 0u
#define D4__SLW CYREG_PRT2_SLW

/* D5 */
#define D5__0__INTTYPE CYREG_PICU2_INTTYPE1
#define D5__0__MASK 0x02u
#define D5__0__PC CYREG_PRT2_PC1
#define D5__0__PORT 2u
#define D5__0__SHIFT 1u
#define D5__AG CYREG_PRT2_AG
#define D5__AMUX CYREG_PRT2_AMUX
#define D5__BIE CYREG_PRT2_BIE
#define D5__BIT_MASK CYREG_PRT2_BIT_MASK
#define D5__BYP CYREG_PRT2_BYP
#define D5__CTL CYREG_PRT2_CTL
#define D5__DM0 CYREG_PRT2_DM0
#define D5__DM1 CYREG_PRT2_DM1
#define D5__DM2 CYREG_PRT2_DM2
#define D5__DR CYREG_PRT2_DR
#define D5__INP_DIS CYREG_PRT2_INP_DIS
#define D5__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define D5__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define D5__LCD_EN CYREG_PRT2_LCD_EN
#define D5__MASK 0x02u
#define D5__PORT 2u
#define D5__PRT CYREG_PRT2_PRT
#define D5__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define D5__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define D5__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define D5__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define D5__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define D5__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define D5__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define D5__PS CYREG_PRT2_PS
#define D5__SHIFT 1u
#define D5__SLW CYREG_PRT2_SLW

/* D6 */
#define D6__0__INTTYPE CYREG_PICU2_INTTYPE2
#define D6__0__MASK 0x04u
#define D6__0__PC CYREG_PRT2_PC2
#define D6__0__PORT 2u
#define D6__0__SHIFT 2u
#define D6__AG CYREG_PRT2_AG
#define D6__AMUX CYREG_PRT2_AMUX
#define D6__BIE CYREG_PRT2_BIE
#define D6__BIT_MASK CYREG_PRT2_BIT_MASK
#define D6__BYP CYREG_PRT2_BYP
#define D6__CTL CYREG_PRT2_CTL
#define D6__DM0 CYREG_PRT2_DM0
#define D6__DM1 CYREG_PRT2_DM1
#define D6__DM2 CYREG_PRT2_DM2
#define D6__DR CYREG_PRT2_DR
#define D6__INP_DIS CYREG_PRT2_INP_DIS
#define D6__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define D6__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define D6__LCD_EN CYREG_PRT2_LCD_EN
#define D6__MASK 0x04u
#define D6__PORT 2u
#define D6__PRT CYREG_PRT2_PRT
#define D6__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define D6__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define D6__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define D6__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define D6__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define D6__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define D6__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define D6__PS CYREG_PRT2_PS
#define D6__SHIFT 2u
#define D6__SLW CYREG_PRT2_SLW

/* D7 */
#define D7__0__INTTYPE CYREG_PICU2_INTTYPE3
#define D7__0__MASK 0x08u
#define D7__0__PC CYREG_PRT2_PC3
#define D7__0__PORT 2u
#define D7__0__SHIFT 3u
#define D7__AG CYREG_PRT2_AG
#define D7__AMUX CYREG_PRT2_AMUX
#define D7__BIE CYREG_PRT2_BIE
#define D7__BIT_MASK CYREG_PRT2_BIT_MASK
#define D7__BYP CYREG_PRT2_BYP
#define D7__CTL CYREG_PRT2_CTL
#define D7__DM0 CYREG_PRT2_DM0
#define D7__DM1 CYREG_PRT2_DM1
#define D7__DM2 CYREG_PRT2_DM2
#define D7__DR CYREG_PRT2_DR
#define D7__INP_DIS CYREG_PRT2_INP_DIS
#define D7__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define D7__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define D7__LCD_EN CYREG_PRT2_LCD_EN
#define D7__MASK 0x08u
#define D7__PORT 2u
#define D7__PRT CYREG_PRT2_PRT
#define D7__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define D7__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define D7__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define D7__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define D7__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define D7__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define D7__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define D7__PS CYREG_PRT2_PS
#define D7__SHIFT 3u
#define D7__SLW CYREG_PRT2_SLW

/* Rs */
#define Rs__0__INTTYPE CYREG_PICU2_INTTYPE5
#define Rs__0__MASK 0x20u
#define Rs__0__PC CYREG_PRT2_PC5
#define Rs__0__PORT 2u
#define Rs__0__SHIFT 5u
#define Rs__AG CYREG_PRT2_AG
#define Rs__AMUX CYREG_PRT2_AMUX
#define Rs__BIE CYREG_PRT2_BIE
#define Rs__BIT_MASK CYREG_PRT2_BIT_MASK
#define Rs__BYP CYREG_PRT2_BYP
#define Rs__CTL CYREG_PRT2_CTL
#define Rs__DM0 CYREG_PRT2_DM0
#define Rs__DM1 CYREG_PRT2_DM1
#define Rs__DM2 CYREG_PRT2_DM2
#define Rs__DR CYREG_PRT2_DR
#define Rs__INP_DIS CYREG_PRT2_INP_DIS
#define Rs__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Rs__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Rs__LCD_EN CYREG_PRT2_LCD_EN
#define Rs__MASK 0x20u
#define Rs__PORT 2u
#define Rs__PRT CYREG_PRT2_PRT
#define Rs__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Rs__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Rs__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Rs__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Rs__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Rs__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Rs__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Rs__PS CYREG_PRT2_PS
#define Rs__SHIFT 5u
#define Rs__SLW CYREG_PRT2_SLW

/* LCD */
#define LCD_Cntl_Port_Sync_ctrl_reg__0__MASK 0x01u
#define LCD_Cntl_Port_Sync_ctrl_reg__0__POS 0
#define LCD_Cntl_Port_Sync_ctrl_reg__1__MASK 0x02u
#define LCD_Cntl_Port_Sync_ctrl_reg__1__POS 1
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB13_14_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB13_14_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB13_14_MSK
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB13_14_MSK
#define LCD_Cntl_Port_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define LCD_Cntl_Port_Sync_ctrl_reg__2__MASK 0x04u
#define LCD_Cntl_Port_Sync_ctrl_reg__2__POS 2
#define LCD_Cntl_Port_Sync_ctrl_reg__3__MASK 0x08u
#define LCD_Cntl_Port_Sync_ctrl_reg__3__POS 3
#define LCD_Cntl_Port_Sync_ctrl_reg__4__MASK 0x10u
#define LCD_Cntl_Port_Sync_ctrl_reg__4__POS 4
#define LCD_Cntl_Port_Sync_ctrl_reg__5__MASK 0x20u
#define LCD_Cntl_Port_Sync_ctrl_reg__5__POS 5
#define LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB13_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB13_ST_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB13_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB13_ST_CTL
#define LCD_Cntl_Port_Sync_ctrl_reg__MASK 0x3Fu
#define LCD_Cntl_Port_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define LCD_Cntl_Port_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define LCD_Cntl_Port_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB13_MSK

/* PWM */
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define PWM_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_B0_UDB02_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_B0_UDB02_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define PWM_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_B0_UDB02_MSK
#define PWM_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define PWM_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define PWM_PWMUDB_genblk8_stsreg__MASK_REG CYREG_B0_UDB02_MSK
#define PWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define PWM_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_B0_UDB02_ST
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B0_UDB02_03_A0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B0_UDB02_03_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B0_UDB02_03_D0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B0_UDB02_03_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B0_UDB02_03_F0
#define PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B0_UDB02_03_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B0_UDB02_A0_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B0_UDB02_A0
#define PWM_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B0_UDB02_A1
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B0_UDB02_D0_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B0_UDB02_D0
#define PWM_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B0_UDB02_D1
#define PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B0_UDB02_F0_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B0_UDB02_F0
#define PWM_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B0_UDB02_F1
#define PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL

/* Motor */
#define Motor__0__INTTYPE CYREG_PICU0_INTTYPE2
#define Motor__0__MASK 0x04u
#define Motor__0__PC CYREG_PRT0_PC2
#define Motor__0__PORT 0u
#define Motor__0__SHIFT 2u
#define Motor__AG CYREG_PRT0_AG
#define Motor__AMUX CYREG_PRT0_AMUX
#define Motor__BIE CYREG_PRT0_BIE
#define Motor__BIT_MASK CYREG_PRT0_BIT_MASK
#define Motor__BYP CYREG_PRT0_BYP
#define Motor__CTL CYREG_PRT0_CTL
#define Motor__DM0 CYREG_PRT0_DM0
#define Motor__DM1 CYREG_PRT0_DM1
#define Motor__DM2 CYREG_PRT0_DM2
#define Motor__DR CYREG_PRT0_DR
#define Motor__INP_DIS CYREG_PRT0_INP_DIS
#define Motor__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Motor__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Motor__LCD_EN CYREG_PRT0_LCD_EN
#define Motor__MASK 0x04u
#define Motor__PORT 0u
#define Motor__PRT CYREG_PRT0_PRT
#define Motor__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Motor__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Motor__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Motor__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Motor__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Motor__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Motor__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Motor__PS CYREG_PRT0_PS
#define Motor__SHIFT 2u
#define Motor__SLW CYREG_PRT0_SLW

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* Clock_2 */
#define Clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_2__CFG2_SRC_SEL_MASK 0x07u
#define Clock_2__INDEX 0x00u
#define Clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_2__PM_ACT_MSK 0x01u
#define Clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_2__PM_STBY_MSK 0x01u

/* Aumentar */
#define Aumentar__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define Aumentar__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define Aumentar__INTC_MASK 0x01u
#define Aumentar__INTC_NUMBER 0u
#define Aumentar__INTC_PRIOR_NUM 7u
#define Aumentar__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define Aumentar__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define Aumentar__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ResetPWM */
#define ResetPWM__0__INTTYPE CYREG_PICU0_INTTYPE4
#define ResetPWM__0__MASK 0x10u
#define ResetPWM__0__PC CYREG_PRT0_PC4
#define ResetPWM__0__PORT 0u
#define ResetPWM__0__SHIFT 4u
#define ResetPWM__AG CYREG_PRT0_AG
#define ResetPWM__AMUX CYREG_PRT0_AMUX
#define ResetPWM__BIE CYREG_PRT0_BIE
#define ResetPWM__BIT_MASK CYREG_PRT0_BIT_MASK
#define ResetPWM__BYP CYREG_PRT0_BYP
#define ResetPWM__CTL CYREG_PRT0_CTL
#define ResetPWM__DM0 CYREG_PRT0_DM0
#define ResetPWM__DM1 CYREG_PRT0_DM1
#define ResetPWM__DM2 CYREG_PRT0_DM2
#define ResetPWM__DR CYREG_PRT0_DR
#define ResetPWM__INP_DIS CYREG_PRT0_INP_DIS
#define ResetPWM__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ResetPWM__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ResetPWM__LCD_EN CYREG_PRT0_LCD_EN
#define ResetPWM__MASK 0x10u
#define ResetPWM__PORT 0u
#define ResetPWM__PRT CYREG_PRT0_PRT
#define ResetPWM__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ResetPWM__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ResetPWM__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ResetPWM__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ResetPWM__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ResetPWM__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ResetPWM__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ResetPWM__PS CYREG_PRT0_PS
#define ResetPWM__SHIFT 4u
#define ResetPWM__SLW CYREG_PRT0_SLW

/* ResetPin */
#define ResetPin__0__INTTYPE CYREG_PICU0_INTTYPE3
#define ResetPin__0__MASK 0x08u
#define ResetPin__0__PC CYREG_PRT0_PC3
#define ResetPin__0__PORT 0u
#define ResetPin__0__SHIFT 3u
#define ResetPin__AG CYREG_PRT0_AG
#define ResetPin__AMUX CYREG_PRT0_AMUX
#define ResetPin__BIE CYREG_PRT0_BIE
#define ResetPin__BIT_MASK CYREG_PRT0_BIT_MASK
#define ResetPin__BYP CYREG_PRT0_BYP
#define ResetPin__CTL CYREG_PRT0_CTL
#define ResetPin__DM0 CYREG_PRT0_DM0
#define ResetPin__DM1 CYREG_PRT0_DM1
#define ResetPin__DM2 CYREG_PRT0_DM2
#define ResetPin__DR CYREG_PRT0_DR
#define ResetPin__INP_DIS CYREG_PRT0_INP_DIS
#define ResetPin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define ResetPin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define ResetPin__LCD_EN CYREG_PRT0_LCD_EN
#define ResetPin__MASK 0x08u
#define ResetPin__PORT 0u
#define ResetPin__PRT CYREG_PRT0_PRT
#define ResetPin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define ResetPin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define ResetPin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define ResetPin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define ResetPin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define ResetPin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define ResetPin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define ResetPin__PS CYREG_PRT0_PS
#define ResetPin__SHIFT 3u
#define ResetPin__SLW CYREG_PRT0_SLW

/* Disminuir */
#define Disminuir__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define Disminuir__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define Disminuir__INTC_MASK 0x02u
#define Disminuir__INTC_NUMBER 1u
#define Disminuir__INTC_PRIOR_NUM 7u
#define Disminuir__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define Disminuir__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define Disminuir__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* InAumentar */
#define InAumentar__0__INTTYPE CYREG_PICU1_INTTYPE7
#define InAumentar__0__MASK 0x80u
#define InAumentar__0__PC CYREG_PRT1_PC7
#define InAumentar__0__PORT 1u
#define InAumentar__0__SHIFT 7u
#define InAumentar__AG CYREG_PRT1_AG
#define InAumentar__AMUX CYREG_PRT1_AMUX
#define InAumentar__BIE CYREG_PRT1_BIE
#define InAumentar__BIT_MASK CYREG_PRT1_BIT_MASK
#define InAumentar__BYP CYREG_PRT1_BYP
#define InAumentar__CTL CYREG_PRT1_CTL
#define InAumentar__DM0 CYREG_PRT1_DM0
#define InAumentar__DM1 CYREG_PRT1_DM1
#define InAumentar__DM2 CYREG_PRT1_DM2
#define InAumentar__DR CYREG_PRT1_DR
#define InAumentar__INP_DIS CYREG_PRT1_INP_DIS
#define InAumentar__INTSTAT CYREG_PICU1_INTSTAT
#define InAumentar__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define InAumentar__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define InAumentar__LCD_EN CYREG_PRT1_LCD_EN
#define InAumentar__MASK 0x80u
#define InAumentar__PORT 1u
#define InAumentar__PRT CYREG_PRT1_PRT
#define InAumentar__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define InAumentar__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define InAumentar__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define InAumentar__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define InAumentar__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define InAumentar__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define InAumentar__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define InAumentar__PS CYREG_PRT1_PS
#define InAumentar__SHIFT 7u
#define InAumentar__SLW CYREG_PRT1_SLW
#define InAumentar__SNAP CYREG_PICU1_SNAP

/* InDisminuir */
#define InDisminuir__0__INTTYPE CYREG_PICU1_INTTYPE5
#define InDisminuir__0__MASK 0x20u
#define InDisminuir__0__PC CYREG_PRT1_PC5
#define InDisminuir__0__PORT 1u
#define InDisminuir__0__SHIFT 5u
#define InDisminuir__AG CYREG_PRT1_AG
#define InDisminuir__AMUX CYREG_PRT1_AMUX
#define InDisminuir__BIE CYREG_PRT1_BIE
#define InDisminuir__BIT_MASK CYREG_PRT1_BIT_MASK
#define InDisminuir__BYP CYREG_PRT1_BYP
#define InDisminuir__CTL CYREG_PRT1_CTL
#define InDisminuir__DM0 CYREG_PRT1_DM0
#define InDisminuir__DM1 CYREG_PRT1_DM1
#define InDisminuir__DM2 CYREG_PRT1_DM2
#define InDisminuir__DR CYREG_PRT1_DR
#define InDisminuir__INP_DIS CYREG_PRT1_INP_DIS
#define InDisminuir__INTSTAT CYREG_PICU1_INTSTAT
#define InDisminuir__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define InDisminuir__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define InDisminuir__LCD_EN CYREG_PRT1_LCD_EN
#define InDisminuir__MASK 0x20u
#define InDisminuir__PORT 1u
#define InDisminuir__PRT CYREG_PRT1_PRT
#define InDisminuir__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define InDisminuir__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define InDisminuir__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define InDisminuir__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define InDisminuir__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define InDisminuir__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define InDisminuir__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define InDisminuir__PS CYREG_PRT1_PS
#define InDisminuir__SHIFT 5u
#define InDisminuir__SLW CYREG_PRT1_SLW
#define InDisminuir__SNAP CYREG_PICU1_SNAP

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "PWM"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
