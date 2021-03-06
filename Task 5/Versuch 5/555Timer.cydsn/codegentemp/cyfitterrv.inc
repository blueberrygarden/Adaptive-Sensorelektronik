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
Comp_2_ctComp__CLK EQU CYREG_CMP1_CLK
Comp_2_ctComp__CMP_MASK EQU 0x02
Comp_2_ctComp__CMP_NUMBER EQU 1
Comp_2_ctComp__CR EQU CYREG_CMP1_CR
Comp_2_ctComp__LUT__CR EQU CYREG_LUT1_CR
Comp_2_ctComp__LUT__MSK EQU CYREG_LUT_MSK
Comp_2_ctComp__LUT__MSK_MASK EQU 0x02
Comp_2_ctComp__LUT__MSK_SHIFT EQU 1
Comp_2_ctComp__LUT__MX EQU CYREG_LUT1_MX
Comp_2_ctComp__LUT__SR EQU CYREG_LUT_SR
Comp_2_ctComp__LUT__SR_MASK EQU 0x02
Comp_2_ctComp__LUT__SR_SHIFT EQU 1
Comp_2_ctComp__PM_ACT_CFG EQU CYREG_PM_ACT_CFG7
Comp_2_ctComp__PM_ACT_MSK EQU 0x02
Comp_2_ctComp__PM_STBY_CFG EQU CYREG_PM_STBY_CFG7
Comp_2_ctComp__PM_STBY_MSK EQU 0x02
Comp_2_ctComp__SW0 EQU CYREG_CMP1_SW0
Comp_2_ctComp__SW2 EQU CYREG_CMP1_SW2
Comp_2_ctComp__SW3 EQU CYREG_CMP1_SW3
Comp_2_ctComp__SW4 EQU CYREG_CMP1_SW4
Comp_2_ctComp__SW6 EQU CYREG_CMP1_SW6
Comp_2_ctComp__TR0 EQU CYREG_CMP1_TR0
Comp_2_ctComp__TR1 EQU CYREG_CMP1_TR1
Comp_2_ctComp__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_CMP1_TR0
Comp_2_ctComp__TRIM__TR0_HS EQU CYREG_FLSHID_CUST_TABLES_CMP1_TR0_HS
Comp_2_ctComp__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_CMP1_TR1
Comp_2_ctComp__TRIM__TR1_HS EQU CYREG_FLSHID_CUST_TABLES_CMP1_TR1_HS
Comp_2_ctComp__WRK EQU CYREG_CMP_WRK
Comp_2_ctComp__WRK_MASK EQU 0x02
Comp_2_ctComp__WRK_SHIFT EQU 1

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
Threshold_1_viDAC8__CR0 EQU CYREG_DAC1_CR0
Threshold_1_viDAC8__CR1 EQU CYREG_DAC1_CR1
Threshold_1_viDAC8__D EQU CYREG_DAC1_D
Threshold_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
Threshold_1_viDAC8__PM_ACT_MSK EQU 0x02
Threshold_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
Threshold_1_viDAC8__PM_STBY_MSK EQU 0x02
Threshold_1_viDAC8__STROBE EQU CYREG_DAC1_STROBE
Threshold_1_viDAC8__SW0 EQU CYREG_DAC1_SW0
Threshold_1_viDAC8__SW2 EQU CYREG_DAC1_SW2
Threshold_1_viDAC8__SW3 EQU CYREG_DAC1_SW3
Threshold_1_viDAC8__SW4 EQU CYREG_DAC1_SW4
Threshold_1_viDAC8__TR EQU CYREG_DAC1_TR
Threshold_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M1
Threshold_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M2
Threshold_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M3
Threshold_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M4
Threshold_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M5
Threshold_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M6
Threshold_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M7
Threshold_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC1_M8
Threshold_1_viDAC8__TST EQU CYREG_DAC1_TST

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
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
CYDEV_INTR_RISING EQU 0x00000000
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
