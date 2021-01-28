/*******************************************************************************
* File Name: Compare.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Compare_H) /* Pins Compare_H */
#define CY_PINS_Compare_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Compare_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Compare__PORT == 15 && ((Compare__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Compare_Write(uint8 value);
void    Compare_SetDriveMode(uint8 mode);
uint8   Compare_ReadDataReg(void);
uint8   Compare_Read(void);
void    Compare_SetInterruptMode(uint16 position, uint16 mode);
uint8   Compare_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Compare_SetDriveMode() function.
     *  @{
     */
        #define Compare_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Compare_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Compare_DM_RES_UP          PIN_DM_RES_UP
        #define Compare_DM_RES_DWN         PIN_DM_RES_DWN
        #define Compare_DM_OD_LO           PIN_DM_OD_LO
        #define Compare_DM_OD_HI           PIN_DM_OD_HI
        #define Compare_DM_STRONG          PIN_DM_STRONG
        #define Compare_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Compare_MASK               Compare__MASK
#define Compare_SHIFT              Compare__SHIFT
#define Compare_WIDTH              1u

/* Interrupt constants */
#if defined(Compare__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Compare_SetInterruptMode() function.
     *  @{
     */
        #define Compare_INTR_NONE      (uint16)(0x0000u)
        #define Compare_INTR_RISING    (uint16)(0x0001u)
        #define Compare_INTR_FALLING   (uint16)(0x0002u)
        #define Compare_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Compare_INTR_MASK      (0x01u) 
#endif /* (Compare__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Compare_PS                     (* (reg8 *) Compare__PS)
/* Data Register */
#define Compare_DR                     (* (reg8 *) Compare__DR)
/* Port Number */
#define Compare_PRT_NUM                (* (reg8 *) Compare__PRT) 
/* Connect to Analog Globals */                                                  
#define Compare_AG                     (* (reg8 *) Compare__AG)                       
/* Analog MUX bux enable */
#define Compare_AMUX                   (* (reg8 *) Compare__AMUX) 
/* Bidirectional Enable */                                                        
#define Compare_BIE                    (* (reg8 *) Compare__BIE)
/* Bit-mask for Aliased Register Access */
#define Compare_BIT_MASK               (* (reg8 *) Compare__BIT_MASK)
/* Bypass Enable */
#define Compare_BYP                    (* (reg8 *) Compare__BYP)
/* Port wide control signals */                                                   
#define Compare_CTL                    (* (reg8 *) Compare__CTL)
/* Drive Modes */
#define Compare_DM0                    (* (reg8 *) Compare__DM0) 
#define Compare_DM1                    (* (reg8 *) Compare__DM1)
#define Compare_DM2                    (* (reg8 *) Compare__DM2) 
/* Input Buffer Disable Override */
#define Compare_INP_DIS                (* (reg8 *) Compare__INP_DIS)
/* LCD Common or Segment Drive */
#define Compare_LCD_COM_SEG            (* (reg8 *) Compare__LCD_COM_SEG)
/* Enable Segment LCD */
#define Compare_LCD_EN                 (* (reg8 *) Compare__LCD_EN)
/* Slew Rate Control */
#define Compare_SLW                    (* (reg8 *) Compare__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Compare_PRTDSI__CAPS_SEL       (* (reg8 *) Compare__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Compare_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Compare__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Compare_PRTDSI__OE_SEL0        (* (reg8 *) Compare__PRTDSI__OE_SEL0) 
#define Compare_PRTDSI__OE_SEL1        (* (reg8 *) Compare__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Compare_PRTDSI__OUT_SEL0       (* (reg8 *) Compare__PRTDSI__OUT_SEL0) 
#define Compare_PRTDSI__OUT_SEL1       (* (reg8 *) Compare__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Compare_PRTDSI__SYNC_OUT       (* (reg8 *) Compare__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Compare__SIO_CFG)
    #define Compare_SIO_HYST_EN        (* (reg8 *) Compare__SIO_HYST_EN)
    #define Compare_SIO_REG_HIFREQ     (* (reg8 *) Compare__SIO_REG_HIFREQ)
    #define Compare_SIO_CFG            (* (reg8 *) Compare__SIO_CFG)
    #define Compare_SIO_DIFF           (* (reg8 *) Compare__SIO_DIFF)
#endif /* (Compare__SIO_CFG) */

/* Interrupt Registers */
#if defined(Compare__INTSTAT)
    #define Compare_INTSTAT            (* (reg8 *) Compare__INTSTAT)
    #define Compare_SNAP               (* (reg8 *) Compare__SNAP)
    
	#define Compare_0_INTTYPE_REG 		(* (reg8 *) Compare__0__INTTYPE)
#endif /* (Compare__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Compare_H */


/* [] END OF FILE */
