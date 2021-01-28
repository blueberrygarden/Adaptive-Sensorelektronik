/*******************************************************************************
* File Name: cyfittergnu.inc
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

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU1_INTTYPE2
.set Tx_1__0__MASK, 0x04
.set Tx_1__0__PC, CYREG_PRT1_PC2
.set Tx_1__0__PORT, 1
.set Tx_1__0__SHIFT, 2
.set Tx_1__AG, CYREG_PRT1_AG
.set Tx_1__AMUX, CYREG_PRT1_AMUX
.set Tx_1__BIE, CYREG_PRT1_BIE
.set Tx_1__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Tx_1__BYP, CYREG_PRT1_BYP
.set Tx_1__CTL, CYREG_PRT1_CTL
.set Tx_1__DM0, CYREG_PRT1_DM0
.set Tx_1__DM1, CYREG_PRT1_DM1
.set Tx_1__DM2, CYREG_PRT1_DM2
.set Tx_1__DR, CYREG_PRT1_DR
.set Tx_1__INP_DIS, CYREG_PRT1_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Tx_1__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Tx_1__LCD_EN, CYREG_PRT1_LCD_EN
.set Tx_1__MASK, 0x04
.set Tx_1__PORT, 1
.set Tx_1__PRT, CYREG_PRT1_PRT
.set Tx_1__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Tx_1__PS, CYREG_PRT1_PS
.set Tx_1__SHIFT, 2
.set Tx_1__SLW, CYREG_PRT1_SLW

/* LCD_1 */
.set LCD_1_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_1_LCDPort__0__MASK, 0x01
.set LCD_1_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_1_LCDPort__0__PORT, 2
.set LCD_1_LCDPort__0__SHIFT, 0
.set LCD_1_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_1_LCDPort__1__MASK, 0x02
.set LCD_1_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_1_LCDPort__1__PORT, 2
.set LCD_1_LCDPort__1__SHIFT, 1
.set LCD_1_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_1_LCDPort__2__MASK, 0x04
.set LCD_1_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_1_LCDPort__2__PORT, 2
.set LCD_1_LCDPort__2__SHIFT, 2
.set LCD_1_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_1_LCDPort__3__MASK, 0x08
.set LCD_1_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_1_LCDPort__3__PORT, 2
.set LCD_1_LCDPort__3__SHIFT, 3
.set LCD_1_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_1_LCDPort__4__MASK, 0x10
.set LCD_1_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_1_LCDPort__4__PORT, 2
.set LCD_1_LCDPort__4__SHIFT, 4
.set LCD_1_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_1_LCDPort__5__MASK, 0x20
.set LCD_1_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_1_LCDPort__5__PORT, 2
.set LCD_1_LCDPort__5__SHIFT, 5
.set LCD_1_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_1_LCDPort__6__MASK, 0x40
.set LCD_1_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_1_LCDPort__6__PORT, 2
.set LCD_1_LCDPort__6__SHIFT, 6
.set LCD_1_LCDPort__AG, CYREG_PRT2_AG
.set LCD_1_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_1_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_1_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_1_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_1_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_1_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_1_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_1_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_1_LCDPort__DR, CYREG_PRT2_DR
.set LCD_1_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_1_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_1_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_1_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_1_LCDPort__MASK, 0x7F
.set LCD_1_LCDPort__PORT, 2
.set LCD_1_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_1_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_1_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_1_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_1_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_1_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_1_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_1_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_1_LCDPort__PS, CYREG_PRT2_PS
.set LCD_1_LCDPort__SHIFT, 0
.set LCD_1_LCDPort__SLW, CYREG_PRT2_SLW

/* LED_1 */
.set LED_1__0__INTTYPE, CYREG_PICU4_INTTYPE2
.set LED_1__0__MASK, 0x04
.set LED_1__0__PC, CYREG_PRT4_PC2
.set LED_1__0__PORT, 4
.set LED_1__0__SHIFT, 2
.set LED_1__AG, CYREG_PRT4_AG
.set LED_1__AMUX, CYREG_PRT4_AMUX
.set LED_1__BIE, CYREG_PRT4_BIE
.set LED_1__BIT_MASK, CYREG_PRT4_BIT_MASK
.set LED_1__BYP, CYREG_PRT4_BYP
.set LED_1__CTL, CYREG_PRT4_CTL
.set LED_1__DM0, CYREG_PRT4_DM0
.set LED_1__DM1, CYREG_PRT4_DM1
.set LED_1__DM2, CYREG_PRT4_DM2
.set LED_1__DR, CYREG_PRT4_DR
.set LED_1__INP_DIS, CYREG_PRT4_INP_DIS
.set LED_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU4_BASE
.set LED_1__LCD_COM_SEG, CYREG_PRT4_LCD_COM_SEG
.set LED_1__LCD_EN, CYREG_PRT4_LCD_EN
.set LED_1__MASK, 0x04
.set LED_1__PORT, 4
.set LED_1__PRT, CYREG_PRT4_PRT
.set LED_1__PRTDSI__CAPS_SEL, CYREG_PRT4_CAPS_SEL
.set LED_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT4_DBL_SYNC_IN
.set LED_1__PRTDSI__OE_SEL0, CYREG_PRT4_OE_SEL0
.set LED_1__PRTDSI__OE_SEL1, CYREG_PRT4_OE_SEL1
.set LED_1__PRTDSI__OUT_SEL0, CYREG_PRT4_OUT_SEL0
.set LED_1__PRTDSI__OUT_SEL1, CYREG_PRT4_OUT_SEL1
.set LED_1__PRTDSI__SYNC_OUT, CYREG_PRT4_SYNC_OUT
.set LED_1__PS, CYREG_PRT4_PS
.set LED_1__SHIFT, 2
.set LED_1__SLW, CYREG_PRT4_SLW

/* PGA_1 */
.set PGA_1_SC__BST, CYREG_SC3_BST
.set PGA_1_SC__CLK, CYREG_SC3_CLK
.set PGA_1_SC__CMPINV, CYREG_SC_CMPINV
.set PGA_1_SC__CMPINV_MASK, 0x08
.set PGA_1_SC__CPTR, CYREG_SC_CPTR
.set PGA_1_SC__CPTR_MASK, 0x08
.set PGA_1_SC__CR0, CYREG_SC3_CR0
.set PGA_1_SC__CR1, CYREG_SC3_CR1
.set PGA_1_SC__CR2, CYREG_SC3_CR2
.set PGA_1_SC__MSK, CYREG_SC_MSK
.set PGA_1_SC__MSK_MASK, 0x08
.set PGA_1_SC__PM_ACT_CFG, CYREG_PM_ACT_CFG9
.set PGA_1_SC__PM_ACT_MSK, 0x08
.set PGA_1_SC__PM_STBY_CFG, CYREG_PM_STBY_CFG9
.set PGA_1_SC__PM_STBY_MSK, 0x08
.set PGA_1_SC__SR, CYREG_SC_SR
.set PGA_1_SC__SR_MASK, 0x08
.set PGA_1_SC__SW0, CYREG_SC3_SW0
.set PGA_1_SC__SW10, CYREG_SC3_SW10
.set PGA_1_SC__SW2, CYREG_SC3_SW2
.set PGA_1_SC__SW3, CYREG_SC3_SW3
.set PGA_1_SC__SW4, CYREG_SC3_SW4
.set PGA_1_SC__SW6, CYREG_SC3_SW6
.set PGA_1_SC__SW7, CYREG_SC3_SW7
.set PGA_1_SC__SW8, CYREG_SC3_SW8
.set PGA_1_SC__WRK1, CYREG_SC_WRK1
.set PGA_1_SC__WRK1_MASK, 0x08

/* UART_1 */
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B1_UDB08_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B1_UDB08_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B1_UDB08_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B1_UDB08_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B1_UDB08_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B1_UDB08_F1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set UART_1_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB09_A0
.set UART_1_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB09_A1
.set UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set UART_1_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB09_D0
.set UART_1_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB09_D1
.set UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set UART_1_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB09_F0
.set UART_1_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB09_F1
.set UART_1_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_1_BUART_sTX_TxSts__0__POS, 0
.set UART_1_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_1_BUART_sTX_TxSts__1__POS, 1
.set UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_1_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_1_BUART_sTX_TxSts__2__POS, 2
.set UART_1_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_1_BUART_sTX_TxSts__3__POS, 3
.set UART_1_BUART_sTX_TxSts__MASK, 0x0F
.set UART_1_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_1_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set UART_1_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set UART_1_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set UART_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_1_IntClock__INDEX, 0x00
.set UART_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_1_IntClock__PM_ACT_MSK, 0x01
.set UART_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_1_IntClock__PM_STBY_MSK, 0x01

/* VDAC_1 */
.set VDAC_1_viDAC8__CR0, CYREG_DAC3_CR0
.set VDAC_1_viDAC8__CR1, CYREG_DAC3_CR1
.set VDAC_1_viDAC8__D, CYREG_DAC3_D
.set VDAC_1_viDAC8__PM_ACT_CFG, CYREG_PM_ACT_CFG8
.set VDAC_1_viDAC8__PM_ACT_MSK, 0x08
.set VDAC_1_viDAC8__PM_STBY_CFG, CYREG_PM_STBY_CFG8
.set VDAC_1_viDAC8__PM_STBY_MSK, 0x08
.set VDAC_1_viDAC8__STROBE, CYREG_DAC3_STROBE
.set VDAC_1_viDAC8__SW0, CYREG_DAC3_SW0
.set VDAC_1_viDAC8__SW2, CYREG_DAC3_SW2
.set VDAC_1_viDAC8__SW3, CYREG_DAC3_SW3
.set VDAC_1_viDAC8__SW4, CYREG_DAC3_SW4
.set VDAC_1_viDAC8__TR, CYREG_DAC3_TR
.set VDAC_1_viDAC8__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DAC3_M1
.set VDAC_1_viDAC8__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DAC3_M2
.set VDAC_1_viDAC8__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DAC3_M3
.set VDAC_1_viDAC8__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DAC3_M4
.set VDAC_1_viDAC8__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DAC3_M5
.set VDAC_1_viDAC8__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DAC3_M6
.set VDAC_1_viDAC8__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DAC3_M7
.set VDAC_1_viDAC8__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DAC3_M8
.set VDAC_1_viDAC8__TST, CYREG_DAC3_TST

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x01
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x02
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x02

/* ADC_SAR_1 */
.set ADC_SAR_1_ADC_SAR__CLK, CYREG_SAR1_CLK
.set ADC_SAR_1_ADC_SAR__CSR0, CYREG_SAR1_CSR0
.set ADC_SAR_1_ADC_SAR__CSR1, CYREG_SAR1_CSR1
.set ADC_SAR_1_ADC_SAR__CSR2, CYREG_SAR1_CSR2
.set ADC_SAR_1_ADC_SAR__CSR3, CYREG_SAR1_CSR3
.set ADC_SAR_1_ADC_SAR__CSR4, CYREG_SAR1_CSR4
.set ADC_SAR_1_ADC_SAR__CSR5, CYREG_SAR1_CSR5
.set ADC_SAR_1_ADC_SAR__CSR6, CYREG_SAR1_CSR6
.set ADC_SAR_1_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_SAR_1_ADC_SAR__PM_ACT_MSK, 0x02
.set ADC_SAR_1_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_SAR_1_ADC_SAR__PM_STBY_MSK, 0x02
.set ADC_SAR_1_ADC_SAR__SW0, CYREG_SAR1_SW0
.set ADC_SAR_1_ADC_SAR__SW2, CYREG_SAR1_SW2
.set ADC_SAR_1_ADC_SAR__SW3, CYREG_SAR1_SW3
.set ADC_SAR_1_ADC_SAR__SW4, CYREG_SAR1_SW4
.set ADC_SAR_1_ADC_SAR__SW6, CYREG_SAR1_SW6
.set ADC_SAR_1_ADC_SAR__TR0, CYREG_SAR1_TR0
.set ADC_SAR_1_ADC_SAR__WRK0, CYREG_SAR1_WRK0
.set ADC_SAR_1_ADC_SAR__WRK1, CYREG_SAR1_WRK1
.set ADC_SAR_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_SAR_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_SAR_1_IRQ__INTC_MASK, 0x01
.set ADC_SAR_1_IRQ__INTC_NUMBER, 0
.set ADC_SAR_1_IRQ__INTC_PRIOR_NUM, 7
.set ADC_SAR_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_SAR_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_SAR_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_SAR_1_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_SAR_1_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_SAR_1_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_SAR_1_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_SAR_1_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_SAR_1_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_SAR_1_theACLK__INDEX, 0x00
.set ADC_SAR_1_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_SAR_1_theACLK__PM_ACT_MSK, 0x01
.set ADC_SAR_1_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_SAR_1_theACLK__PM_STBY_MSK, 0x01

/* Drucksensor */
.set Drucksensor__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set Drucksensor__0__MASK, 0x01
.set Drucksensor__0__PC, CYREG_PRT3_PC0
.set Drucksensor__0__PORT, 3
.set Drucksensor__0__SHIFT, 0
.set Drucksensor__AG, CYREG_PRT3_AG
.set Drucksensor__AMUX, CYREG_PRT3_AMUX
.set Drucksensor__BIE, CYREG_PRT3_BIE
.set Drucksensor__BIT_MASK, CYREG_PRT3_BIT_MASK
.set Drucksensor__BYP, CYREG_PRT3_BYP
.set Drucksensor__CTL, CYREG_PRT3_CTL
.set Drucksensor__DM0, CYREG_PRT3_DM0
.set Drucksensor__DM1, CYREG_PRT3_DM1
.set Drucksensor__DM2, CYREG_PRT3_DM2
.set Drucksensor__DR, CYREG_PRT3_DR
.set Drucksensor__INP_DIS, CYREG_PRT3_INP_DIS
.set Drucksensor__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set Drucksensor__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set Drucksensor__LCD_EN, CYREG_PRT3_LCD_EN
.set Drucksensor__MASK, 0x01
.set Drucksensor__PORT, 3
.set Drucksensor__PRT, CYREG_PRT3_PRT
.set Drucksensor__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set Drucksensor__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set Drucksensor__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set Drucksensor__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set Drucksensor__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set Drucksensor__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set Drucksensor__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set Drucksensor__PS, CYREG_PRT3_PS
.set Drucksensor__SHIFT, 0
.set Drucksensor__SLW, CYREG_PRT3_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000001
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif