/*******************************************************************************
* File Name: Discharge.h  
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

#if !defined(CY_PINS_Discharge_H) /* Pins Discharge_H */
#define CY_PINS_Discharge_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Discharge_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Discharge__PORT == 15 && ((Discharge__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Discharge_Write(uint8 value);
void    Discharge_SetDriveMode(uint8 mode);
uint8   Discharge_ReadDataReg(void);
uint8   Discharge_Read(void);
void    Discharge_SetInterruptMode(uint16 position, uint16 mode);
uint8   Discharge_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Discharge_SetDriveMode() function.
     *  @{
     */
        #define Discharge_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Discharge_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Discharge_DM_RES_UP          PIN_DM_RES_UP
        #define Discharge_DM_RES_DWN         PIN_DM_RES_DWN
        #define Discharge_DM_OD_LO           PIN_DM_OD_LO
        #define Discharge_DM_OD_HI           PIN_DM_OD_HI
        #define Discharge_DM_STRONG          PIN_DM_STRONG
        #define Discharge_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Discharge_MASK               Discharge__MASK
#define Discharge_SHIFT              Discharge__SHIFT
#define Discharge_WIDTH              1u

/* Interrupt constants */
#if defined(Discharge__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Discharge_SetInterruptMode() function.
     *  @{
     */
        #define Discharge_INTR_NONE      (uint16)(0x0000u)
        #define Discharge_INTR_RISING    (uint16)(0x0001u)
        #define Discharge_INTR_FALLING   (uint16)(0x0002u)
        #define Discharge_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Discharge_INTR_MASK      (0x01u) 
#endif /* (Discharge__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Discharge_PS                     (* (reg8 *) Discharge__PS)
/* Data Register */
#define Discharge_DR                     (* (reg8 *) Discharge__DR)
/* Port Number */
#define Discharge_PRT_NUM                (* (reg8 *) Discharge__PRT) 
/* Connect to Analog Globals */                                                  
#define Discharge_AG                     (* (reg8 *) Discharge__AG)                       
/* Analog MUX bux enable */
#define Discharge_AMUX                   (* (reg8 *) Discharge__AMUX) 
/* Bidirectional Enable */                                                        
#define Discharge_BIE                    (* (reg8 *) Discharge__BIE)
/* Bit-mask for Aliased Register Access */
#define Discharge_BIT_MASK               (* (reg8 *) Discharge__BIT_MASK)
/* Bypass Enable */
#define Discharge_BYP                    (* (reg8 *) Discharge__BYP)
/* Port wide control signals */                                                   
#define Discharge_CTL                    (* (reg8 *) Discharge__CTL)
/* Drive Modes */
#define Discharge_DM0                    (* (reg8 *) Discharge__DM0) 
#define Discharge_DM1                    (* (reg8 *) Discharge__DM1)
#define Discharge_DM2                    (* (reg8 *) Discharge__DM2) 
/* Input Buffer Disable Override */
#define Discharge_INP_DIS                (* (reg8 *) Discharge__INP_DIS)
/* LCD Common or Segment Drive */
#define Discharge_LCD_COM_SEG            (* (reg8 *) Discharge__LCD_COM_SEG)
/* Enable Segment LCD */
#define Discharge_LCD_EN                 (* (reg8 *) Discharge__LCD_EN)
/* Slew Rate Control */
#define Discharge_SLW                    (* (reg8 *) Discharge__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Discharge_PRTDSI__CAPS_SEL       (* (reg8 *) Discharge__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Discharge_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Discharge__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Discharge_PRTDSI__OE_SEL0        (* (reg8 *) Discharge__PRTDSI__OE_SEL0) 
#define Discharge_PRTDSI__OE_SEL1        (* (reg8 *) Discharge__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Discharge_PRTDSI__OUT_SEL0       (* (reg8 *) Discharge__PRTDSI__OUT_SEL0) 
#define Discharge_PRTDSI__OUT_SEL1       (* (reg8 *) Discharge__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Discharge_PRTDSI__SYNC_OUT       (* (reg8 *) Discharge__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Discharge__SIO_CFG)
    #define Discharge_SIO_HYST_EN        (* (reg8 *) Discharge__SIO_HYST_EN)
    #define Discharge_SIO_REG_HIFREQ     (* (reg8 *) Discharge__SIO_REG_HIFREQ)
    #define Discharge_SIO_CFG            (* (reg8 *) Discharge__SIO_CFG)
    #define Discharge_SIO_DIFF           (* (reg8 *) Discharge__SIO_DIFF)
#endif /* (Discharge__SIO_CFG) */

/* Interrupt Registers */
#if defined(Discharge__INTSTAT)
    #define Discharge_INTSTAT            (* (reg8 *) Discharge__INTSTAT)
    #define Discharge_SNAP               (* (reg8 *) Discharge__SNAP)
    
	#define Discharge_0_INTTYPE_REG 		(* (reg8 *) Discharge__0__INTTYPE)
#endif /* (Discharge__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Discharge_H */


/* [] END OF FILE */
