;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Tx_1
Tx_1__0__INTTYPE EQU CYREG_PICU1_INTTYPE2
Tx_1__0__MASK EQU 0x04
Tx_1__0__PC EQU CYREG_PRT1_PC2
Tx_1__0__PORT EQU 1
Tx_1__0__SHIFT EQU 2
Tx_1__AG EQU CYREG_PRT1_AG
Tx_1__AMUX EQU CYREG_PRT1_AMUX
Tx_1__BIE EQU CYREG_PRT1_BIE
Tx_1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Tx_1__BYP EQU CYREG_PRT1_BYP
Tx_1__CTL EQU CYREG_PRT1_CTL
Tx_1__DM0 EQU CYREG_PRT1_DM0
Tx_1__DM1 EQU CYREG_PRT1_DM1
Tx_1__DM2 EQU CYREG_PRT1_DM2
Tx_1__DR EQU CYREG_PRT1_DR
Tx_1__INP_DIS EQU CYREG_PRT1_INP_DIS
Tx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Tx_1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Tx_1__LCD_EN EQU CYREG_PRT1_LCD_EN
Tx_1__MASK EQU 0x04
Tx_1__PORT EQU 1
Tx_1__PRT EQU CYREG_PRT1_PRT
Tx_1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Tx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Tx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Tx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Tx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Tx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Tx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Tx_1__PS EQU CYREG_PRT1_PS
Tx_1__SHIFT EQU 2
Tx_1__SLW EQU CYREG_PRT1_SLW

; LCD_1
LCD_1_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_1_LCDPort__0__MASK EQU 0x01
LCD_1_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_1_LCDPort__0__PORT EQU 2
LCD_1_LCDPort__0__SHIFT EQU 0
LCD_1_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_1_LCDPort__1__MASK EQU 0x02
LCD_1_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_1_LCDPort__1__PORT EQU 2
LCD_1_LCDPort__1__SHIFT EQU 1
LCD_1_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_1_LCDPort__2__MASK EQU 0x04
LCD_1_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_1_LCDPort__2__PORT EQU 2
LCD_1_LCDPort__2__SHIFT EQU 2
LCD_1_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_1_LCDPort__3__MASK EQU 0x08
LCD_1_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_1_LCDPort__3__PORT EQU 2
LCD_1_LCDPort__3__SHIFT EQU 3
LCD_1_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_1_LCDPort__4__MASK EQU 0x10
LCD_1_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_1_LCDPort__4__PORT EQU 2
LCD_1_LCDPort__4__SHIFT EQU 4
LCD_1_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_1_LCDPort__5__MASK EQU 0x20
LCD_1_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_1_LCDPort__5__PORT EQU 2
LCD_1_LCDPort__5__SHIFT EQU 5
LCD_1_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_1_LCDPort__6__MASK EQU 0x40
LCD_1_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_1_LCDPort__6__PORT EQU 2
LCD_1_LCDPort__6__SHIFT EQU 6
LCD_1_LCDPort__AG EQU CYREG_PRT2_AG
LCD_1_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_1_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_1_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_1_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_1_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_1_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_1_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_1_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_1_LCDPort__DR EQU CYREG_PRT2_DR
LCD_1_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_1_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_1_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_1_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_1_LCDPort__MASK EQU 0x7F
LCD_1_LCDPort__PORT EQU 2
LCD_1_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_1_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_1_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_1_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_1_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_1_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_1_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_1_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_1_LCDPort__PS EQU CYREG_PRT2_PS
LCD_1_LCDPort__SHIFT EQU 0
LCD_1_LCDPort__SLW EQU CYREG_PRT2_SLW

; LED_1
LED_1__0__INTTYPE EQU CYREG_PICU4_INTTYPE2
LED_1__0__MASK EQU 0x04
LED_1__0__PC EQU CYREG_PRT4_PC2
LED_1__0__PORT EQU 4
LED_1__0__SHIFT EQU 2
LED_1__AG EQU CYREG_PRT4_AG
LED_1__AMUX EQU CYREG_PRT4_AMUX
LED_1__BIE EQU CYREG_PRT4_BIE
LED_1__BIT_MASK EQU CYREG_PRT4_BIT_MASK
LED_1__BYP EQU CYREG_PRT4_BYP
LED_1__CTL EQU CYREG_PRT4_CTL
LED_1__DM0 EQU CYREG_PRT4_DM0
LED_1__DM1 EQU CYREG_PRT4_DM1
LED_1__DM2 EQU CYREG_PRT4_DM2
LED_1__DR EQU CYREG_PRT4_DR
LED_1__INP_DIS EQU CYREG_PRT4_INP_DIS
LED_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
LED_1__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
LED_1__LCD_EN EQU CYREG_PRT4_LCD_EN
LED_1__MASK EQU 0x04
LED_1__PORT EQU 4
LED_1__PRT EQU CYREG_PRT4_PRT
LED_1__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
LED_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
LED_1__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
LED_1__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
LED_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
LED_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
LED_1__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
LED_1__PS EQU CYREG_PRT4_PS
LED_1__SHIFT EQU 2
LED_1__SLW EQU CYREG_PRT4_SLW

; PWM_1
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB04_05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB04_05_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB04_05_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB04_05_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB04_05_MSK
PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB04_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB04_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB04_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB04_ST_CTL
PWM_1_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB04_MSK
PWM_1_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_1_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_1_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM_1_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB05_06_ST
PWM_1_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_1_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_1_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_1_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_1_PWMUDB_genblk8_stsreg__MASK EQU 0x0F
PWM_1_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB05_MSK
PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB05_ST
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB04_05_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB04_05_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB04_05_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB04_05_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB04_05_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB04_05_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB04_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB04_A0
PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB04_A1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB04_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB04_D0
PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB04_D1
PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB04_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB04_F0
PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB04_F1
PWM_1_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_MSK_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB05_06_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB05_06_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB05_06_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB05_06_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB05_06_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB05_06_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB05_A0_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB05_A0
PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB05_A1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB05_D0_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB05_D0
PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB05_D1
PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB05_F0_F1
PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB05_F0
PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB05_F1

; isr_1
isr_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_1__INTC_MASK EQU 0x01
isr_1__INTC_NUMBER EQU 0
isr_1__INTC_PRIOR_NUM EQU 7
isr_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Comp_1
Comp_1_ctComp__CLK EQU CYREG_CMP3_CLK
Comp_1_ctComp__CMP_MASK EQU 0x08
Comp_1_ctComp__CMP_NUMBER EQU 3
Comp_1_ctComp__CR EQU CYREG_CMP3_CR
Comp_1_ctComp__LUT__CR EQU CYREG_LUT3_CR
Comp_1_ctComp__LUT__MSK EQU CYREG_LUT_MSK
Comp_1_ctComp__LUT__MSK_MASK EQU 0x08
Comp_1_ctComp__LUT__MSK_SHIFT EQU 3
Comp_1_ctComp__LUT__MX EQU CYREG_LUT3_MX
Comp_1_ctComp__LUT__SR EQU CYREG_LUT_SR
Comp_1_ctComp__LUT__SR_MASK EQU 0x08
Comp_1_ctComp__LUT__SR_SHIFT EQU 3
Comp_1_ctComp__PM_ACT_CFG EQU CYREG_PM_ACT_CFG7
Comp_1_ctComp__PM_ACT_MSK EQU 0x08
Comp_1_ctComp__PM_STBY_CFG EQU CYREG_PM_STBY_CFG7
Comp_1_ctComp__PM_STBY_MSK EQU 0x08
Comp_1_ctComp__SW0 EQU CYREG_CMP3_SW0
Comp_1_ctComp__SW2 EQU CYREG_CMP3_SW2
Comp_1_ctComp__SW3 EQU CYREG_CMP3_SW3
Comp_1_ctComp__SW4 EQU CYREG_CMP3_SW4
Comp_1_ctComp__SW6 EQU CYREG_CMP3_SW6
Comp_1_ctComp__TR0 EQU CYREG_CMP3_TR0
Comp_1_ctComp__TR1 EQU CYREG_CMP3_TR1
Comp_1_ctComp__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_CMP3_TR0
Comp_1_ctComp__TRIM__TR0_HS EQU CYREG_FLSHID_CUST_TABLES_CMP3_TR0_HS
Comp_1_ctComp__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_CMP3_TR1
Comp_1_ctComp__TRIM__TR1_HS EQU CYREG_FLSHID_CUST_TABLES_CMP3_TR1_HS
Comp_1_ctComp__WRK EQU CYREG_CMP_WRK
Comp_1_ctComp__WRK_MASK EQU 0x08
Comp_1_ctComp__WRK_SHIFT EQU 3

; Comp_2
Comp_2_ctComp__CLK EQU CYREG_CMP0_CLK
Comp_2_ctComp__CMP_MASK EQU 0x01
Comp_2_ctComp__CMP_NUMBER EQU 0
Comp_2_ctComp__CR EQU CYREG_CMP0_CR
Comp_2_ctComp__LUT__CR EQU CYREG_LUT0_CR
Comp_2_ctComp__LUT__MSK EQU CYREG_LUT_MSK
Comp_2_ctComp__LUT__MSK_MASK EQU 0x01
Comp_2_ctComp__LUT__MSK_SHIFT EQU 0
Comp_2_ctComp__LUT__MX EQU CYREG_LUT0_MX
Comp_2_ctComp__LUT__SR EQU CYREG_LUT_SR
Comp_2_ctComp__LUT__SR_MASK EQU 0x01
Comp_2_ctComp__LUT__SR_SHIFT EQU 0
Comp_2_ctComp__PM_ACT_CFG EQU CYREG_PM_ACT_CFG7
Comp_2_ctComp__PM_ACT_MSK EQU 0x01
Comp_2_ctComp__PM_STBY_CFG EQU CYREG_PM_STBY_CFG7
Comp_2_ctComp__PM_STBY_MSK EQU 0x01
Comp_2_ctComp__SW0 EQU CYREG_CMP0_SW0
Comp_2_ctComp__SW2 EQU CYREG_CMP0_SW2
Comp_2_ctComp__SW3 EQU CYREG_CMP0_SW3
Comp_2_ctComp__SW4 EQU CYREG_CMP0_SW4
Comp_2_ctComp__SW6 EQU CYREG_CMP0_SW6
Comp_2_ctComp__TR0 EQU CYREG_CMP0_TR0
Comp_2_ctComp__TR1 EQU CYREG_CMP0_TR1
Comp_2_ctComp__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_CMP0_TR0
Comp_2_ctComp__TRIM__TR0_HS EQU CYREG_FLSHID_CUST_TABLES_CMP0_TR0_HS
Comp_2_ctComp__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_CMP0_TR1
Comp_2_ctComp__TRIM__TR1_HS EQU CYREG_FLSHID_CUST_TABLES_CMP0_TR1_HS
Comp_2_ctComp__WRK EQU CYREG_CMP_WRK
Comp_2_ctComp__WRK_MASK EQU 0x01
Comp_2_ctComp__WRK_SHIFT EQU 0

; UART_1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B1_UDB09_10_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B1_UDB09_10_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B1_UDB09_10_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B1_UDB09_10_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B1_UDB09_10_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B1_UDB09_10_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B1_UDB09_A0_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B1_UDB09_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B1_UDB09_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B1_UDB09_D0_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B1_UDB09_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B1_UDB09_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B1_UDB09_F0_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B1_UDB09_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B1_UDB09_F1
UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
UART_1_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B1_UDB08_A0
UART_1_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B1_UDB08_A1
UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
UART_1_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B1_UDB08_D0
UART_1_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B1_UDB08_D1
UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
UART_1_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B1_UDB08_F0
UART_1_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B1_UDB08_F1
UART_1_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_1_BUART_sTX_TxSts__0__POS EQU 0
UART_1_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_1_BUART_sTX_TxSts__1__POS EQU 1
UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
UART_1_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_1_BUART_sTX_TxSts__2__POS EQU 2
UART_1_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_1_BUART_sTX_TxSts__3__POS EQU 3
UART_1_BUART_sTX_TxSts__MASK EQU 0x0F
UART_1_BUART_sTX_TxSts__MASK_REG EQU CYREG_B1_UDB08_MSK
UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
UART_1_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B1_UDB08_ST
UART_1_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
UART_1_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
UART_1_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
UART_1_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_1_IntClock__INDEX EQU 0x02
UART_1_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_1_IntClock__PM_ACT_MSK EQU 0x04
UART_1_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_1_IntClock__PM_STBY_MSK EQU 0x04

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

; Clock_2
Clock_2__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__INDEX EQU 0x01
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_2__PM_ACT_MSK EQU 0x02
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_2__PM_STBY_MSK EQU 0x02

; Compare
Compare__0__INTTYPE EQU CYREG_PICU3_INTTYPE5
Compare__0__MASK EQU 0x20
Compare__0__PC EQU CYREG_PRT3_PC5
Compare__0__PORT EQU 3
Compare__0__SHIFT EQU 5
Compare__AG EQU CYREG_PRT3_AG
Compare__AMUX EQU CYREG_PRT3_AMUX
Compare__BIE EQU CYREG_PRT3_BIE
Compare__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Compare__BYP EQU CYREG_PRT3_BYP
Compare__CTL EQU CYREG_PRT3_CTL
Compare__DM0 EQU CYREG_PRT3_DM0
Compare__DM1 EQU CYREG_PRT3_DM1
Compare__DM2 EQU CYREG_PRT3_DM2
Compare__DR EQU CYREG_PRT3_DR
Compare__INP_DIS EQU CYREG_PRT3_INP_DIS
Compare__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Compare__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Compare__LCD_EN EQU CYREG_PRT3_LCD_EN
Compare__MASK EQU 0x20
Compare__PORT EQU 3
Compare__PRT EQU CYREG_PRT3_PRT
Compare__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Compare__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Compare__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Compare__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Compare__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Compare__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Compare__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Compare__PS EQU CYREG_PRT3_PS
Compare__SHIFT EQU 5
Compare__SLW EQU CYREG_PRT3_SLW

; Counter_1
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
Counter_1_CounterUDB_sC16_counterdp_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
Counter_1_CounterUDB_sC16_counterdp_u0__A0_REG EQU CYREG_B0_UDB02_A0
Counter_1_CounterUDB_sC16_counterdp_u0__A1_REG EQU CYREG_B0_UDB02_A1
Counter_1_CounterUDB_sC16_counterdp_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
Counter_1_CounterUDB_sC16_counterdp_u0__D0_REG EQU CYREG_B0_UDB02_D0
Counter_1_CounterUDB_sC16_counterdp_u0__D1_REG EQU CYREG_B0_UDB02_D1
Counter_1_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
Counter_1_CounterUDB_sC16_counterdp_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
Counter_1_CounterUDB_sC16_counterdp_u0__F0_REG EQU CYREG_B0_UDB02_F0
Counter_1_CounterUDB_sC16_counterdp_u0__F1_REG EQU CYREG_B0_UDB02_F1
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB03_04_A0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB03_04_A1
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB03_04_D0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB03_04_D1
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB03_04_F0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB03_04_F1
Counter_1_CounterUDB_sC16_counterdp_u1__A0_A1_REG EQU CYREG_B0_UDB03_A0_A1
Counter_1_CounterUDB_sC16_counterdp_u1__A0_REG EQU CYREG_B0_UDB03_A0
Counter_1_CounterUDB_sC16_counterdp_u1__A1_REG EQU CYREG_B0_UDB03_A1
Counter_1_CounterUDB_sC16_counterdp_u1__D0_D1_REG EQU CYREG_B0_UDB03_D0_D1
Counter_1_CounterUDB_sC16_counterdp_u1__D0_REG EQU CYREG_B0_UDB03_D0
Counter_1_CounterUDB_sC16_counterdp_u1__D1_REG EQU CYREG_B0_UDB03_D1
Counter_1_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__F0_F1_REG EQU CYREG_B0_UDB03_F0_F1
Counter_1_CounterUDB_sC16_counterdp_u1__F0_REG EQU CYREG_B0_UDB03_F0
Counter_1_CounterUDB_sC16_counterdp_u1__F1_REG EQU CYREG_B0_UDB03_F1
Counter_1_CounterUDB_sSTSReg_stsreg__0__MASK EQU 0x01
Counter_1_CounterUDB_sSTSReg_stsreg__0__POS EQU 0
Counter_1_CounterUDB_sSTSReg_stsreg__1__MASK EQU 0x02
Counter_1_CounterUDB_sSTSReg_stsreg__1__POS EQU 1
Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB03_04_ST
Counter_1_CounterUDB_sSTSReg_stsreg__2__MASK EQU 0x04
Counter_1_CounterUDB_sSTSReg_stsreg__2__POS EQU 2
Counter_1_CounterUDB_sSTSReg_stsreg__5__MASK EQU 0x20
Counter_1_CounterUDB_sSTSReg_stsreg__5__POS EQU 5
Counter_1_CounterUDB_sSTSReg_stsreg__6__MASK EQU 0x40
Counter_1_CounterUDB_sSTSReg_stsreg__6__POS EQU 6
Counter_1_CounterUDB_sSTSReg_stsreg__MASK EQU 0x67
Counter_1_CounterUDB_sSTSReg_stsreg__MASK_REG EQU CYREG_B0_UDB03_MSK
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_REG EQU CYREG_B0_UDB03_ST

; Discharge
Discharge__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
Discharge__0__MASK EQU 0x10
Discharge__0__PC EQU CYREG_PRT3_PC4
Discharge__0__PORT EQU 3
Discharge__0__SHIFT EQU 4
Discharge__AG EQU CYREG_PRT3_AG
Discharge__AMUX EQU CYREG_PRT3_AMUX
Discharge__BIE EQU CYREG_PRT3_BIE
Discharge__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Discharge__BYP EQU CYREG_PRT3_BYP
Discharge__CTL EQU CYREG_PRT3_CTL
Discharge__DM0 EQU CYREG_PRT3_DM0
Discharge__DM1 EQU CYREG_PRT3_DM1
Discharge__DM2 EQU CYREG_PRT3_DM2
Discharge__DR EQU CYREG_PRT3_DR
Discharge__INP_DIS EQU CYREG_PRT3_INP_DIS
Discharge__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Discharge__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Discharge__LCD_EN EQU CYREG_PRT3_LCD_EN
Discharge__MASK EQU 0x10
Discharge__PORT EQU 3
Discharge__PRT EQU CYREG_PRT3_PRT
Discharge__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Discharge__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Discharge__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Discharge__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Discharge__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Discharge__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Discharge__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Discharge__PS EQU CYREG_PRT3_PS
Discharge__SHIFT EQU 4
Discharge__SLW EQU CYREG_PRT3_SLW

; Trigger_1
Trigger_1_viDAC8__CR0 EQU CYREG_DAC3_CR0
Trigger_1_viDAC8__CR1 EQU CYREG_DAC3_CR1
Trigger_1_viDAC8__D EQU CYREG_DAC3_D
Trigger_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
Trigger_1_viDAC8__PM_ACT_MSK EQU 0x08
Trigger_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
Trigger_1_viDAC8__PM_STBY_MSK EQU 0x08
Trigger_1_viDAC8__STROBE EQU CYREG_DAC3_STROBE
Trigger_1_viDAC8__SW0 EQU CYREG_DAC3_SW0
Trigger_1_viDAC8__SW2 EQU CYREG_DAC3_SW2
Trigger_1_viDAC8__SW3 EQU CYREG_DAC3_SW3
Trigger_1_viDAC8__SW4 EQU CYREG_DAC3_SW4
Trigger_1_viDAC8__TR EQU CYREG_DAC3_TR
Trigger_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M1
Trigger_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M2
Trigger_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M3
Trigger_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M4
Trigger_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M5
Trigger_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M6
Trigger_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M7
Trigger_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M8
Trigger_1_viDAC8__TST EQU CYREG_DAC3_TST

; Oszilloskop
Oszilloskop__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Oszilloskop__0__MASK EQU 0x02
Oszilloskop__0__PC EQU CYREG_PRT0_PC1
Oszilloskop__0__PORT EQU 0
Oszilloskop__0__SHIFT EQU 1
Oszilloskop__AG EQU CYREG_PRT0_AG
Oszilloskop__AMUX EQU CYREG_PRT0_AMUX
Oszilloskop__BIE EQU CYREG_PRT0_BIE
Oszilloskop__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Oszilloskop__BYP EQU CYREG_PRT0_BYP
Oszilloskop__CTL EQU CYREG_PRT0_CTL
Oszilloskop__DM0 EQU CYREG_PRT0_DM0
Oszilloskop__DM1 EQU CYREG_PRT0_DM1
Oszilloskop__DM2 EQU CYREG_PRT0_DM2
Oszilloskop__DR EQU CYREG_PRT0_DR
Oszilloskop__INP_DIS EQU CYREG_PRT0_INP_DIS
Oszilloskop__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Oszilloskop__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Oszilloskop__LCD_EN EQU CYREG_PRT0_LCD_EN
Oszilloskop__MASK EQU 0x02
Oszilloskop__PORT EQU 0
Oszilloskop__PRT EQU CYREG_PRT0_PRT
Oszilloskop__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Oszilloskop__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Oszilloskop__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Oszilloskop__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Oszilloskop__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Oszilloskop__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Oszilloskop__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Oszilloskop__PS EQU CYREG_PRT0_PS
Oszilloskop__SHIFT EQU 1
Oszilloskop__SLW EQU CYREG_PRT0_SLW

; Threshold_1
Threshold_1_viDAC8__CR0 EQU CYREG_DAC2_CR0
Threshold_1_viDAC8__CR1 EQU CYREG_DAC2_CR1
Threshold_1_viDAC8__D EQU CYREG_DAC2_D
Threshold_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
Threshold_1_viDAC8__PM_ACT_MSK EQU 0x04
Threshold_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
Threshold_1_viDAC8__PM_STBY_MSK EQU 0x04
Threshold_1_viDAC8__STROBE EQU CYREG_DAC2_STROBE
Threshold_1_viDAC8__SW0 EQU CYREG_DAC2_SW0
Threshold_1_viDAC8__SW2 EQU CYREG_DAC2_SW2
Threshold_1_viDAC8__SW3 EQU CYREG_DAC2_SW3
Threshold_1_viDAC8__SW4 EQU CYREG_DAC2_SW4
Threshold_1_viDAC8__TR EQU CYREG_DAC2_TR
Threshold_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M1
Threshold_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M2
Threshold_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M3
Threshold_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M4
Threshold_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M5
Threshold_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M6
Threshold_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M7
Threshold_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC2_M8
Threshold_1_viDAC8__TST EQU CYREG_DAC2_TST

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 33000000
BCLK__BUS_CLK__KHZ EQU 33000
BCLK__BUS_CLK__MHZ EQU 33
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END