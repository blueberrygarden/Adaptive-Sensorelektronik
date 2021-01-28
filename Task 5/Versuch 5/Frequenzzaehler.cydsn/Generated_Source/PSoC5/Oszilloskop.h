/*******************************************************************************
* File Name: Oszilloskop.h  
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

#if !defined(CY_PINS_Oszilloskop_H) /* Pins Oszilloskop_H */
#define CY_PINS_Oszilloskop_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Oszilloskop_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Oszilloskop__PORT == 15 && ((Oszilloskop__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Oszilloskop_Write(uint8 value);
void    Oszilloskop_SetDriveMode(uint8 mode);
uint8   Oszilloskop_ReadDataReg(void);
uint8   Oszilloskop_Read(void);
void    Oszilloskop_SetInterruptMode(uint16 position, uint16 mode);
uint8   Oszilloskop_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Oszilloskop_SetDriveMode() function.
     *  @{
     */
        #define Oszilloskop_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Oszilloskop_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Oszilloskop_DM_RES_UP          PIN_DM_RES_UP
        #define Oszilloskop_DM_RES_DWN         PIN_DM_RES_DWN
        #define Oszilloskop_DM_OD_LO           PIN_DM_OD_LO
        #define Oszilloskop_DM_OD_HI           PIN_DM_OD_HI
        #define Oszilloskop_DM_STRONG          PIN_DM_STRONG
        #define Oszilloskop_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Oszilloskop_MASK               Oszilloskop__MASK
#define Oszilloskop_SHIFT              Oszilloskop__SHIFT
#define Oszilloskop_WIDTH              1u

/* Interrupt constants */
#if defined(Oszilloskop__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Oszilloskop_SetInterruptMode() function.
     *  @{
     */
        #define Oszilloskop_INTR_NONE      (uint16)(0x0000u)
        #define Oszilloskop_INTR_RISING    (uint16)(0x0001u)
        #define Oszilloskop_INTR_FALLING   (uint16)(0x0002u)
        #define Oszilloskop_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Oszilloskop_INTR_MASK      (0x01u) 
#endif /* (Oszilloskop__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Oszilloskop_PS                     (* (reg8 *) Oszilloskop__PS)
/* Data Register */
#define Oszilloskop_DR                     (* (reg8 *) Oszilloskop__DR)
/* Port Number */
#define Oszilloskop_PRT_NUM                (* (reg8 *) Oszilloskop__PRT) 
/* Connect to Analog Globals */                                                  
#define Oszilloskop_AG                     (* (reg8 *) Oszilloskop__AG)                       
/* Analog MUX bux enable */
#define Oszilloskop_AMUX                   (* (reg8 *) Oszilloskop__AMUX) 
/* Bidirectional Enable */                                                        
#define Oszilloskop_BIE                    (* (reg8 *) Oszilloskop__BIE)
/* Bit-mask for Aliased Register Access */
#define Oszilloskop_BIT_MASK               (* (reg8 *) Oszilloskop__BIT_MASK)
/* Bypass Enable */
#define Oszilloskop_BYP                    (* (reg8 *) Oszilloskop__BYP)
/* Port wide control signals */                                                   
#define Oszilloskop_CTL                    (* (reg8 *) Oszilloskop__CTL)
/* Drive Modes */
#define Oszilloskop_DM0                    (* (reg8 *) Oszilloskop__DM0) 
#define Oszilloskop_DM1                    (* (reg8 *) Oszilloskop__DM1)
#define Oszilloskop_DM2                    (* (reg8 *) Oszilloskop__DM2) 
/* Input Buffer Disable Override */
#define Oszilloskop_INP_DIS                (* (reg8 *) Oszilloskop__INP_DIS)
/* LCD Common or Segment Drive */
#define Oszilloskop_LCD_COM_SEG            (* (reg8 *) Oszilloskop__LCD_COM_SEG)
/* Enable Segment LCD */
#define Oszilloskop_LCD_EN                 (* (reg8 *) Oszilloskop__LCD_EN)
/* Slew Rate Control */
#define Oszilloskop_SLW                    (* (reg8 *) Oszilloskop__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Oszilloskop_PRTDSI__CAPS_SEL       (* (reg8 *) Oszilloskop__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Oszilloskop_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Oszilloskop__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Oszilloskop_PRTDSI__OE_SEL0        (* (reg8 *) Oszilloskop__PRTDSI__OE_SEL0) 
#define Oszilloskop_PRTDSI__OE_SEL1        (* (reg8 *) Oszilloskop__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Oszilloskop_PRTDSI__OUT_SEL0       (* (reg8 *) Oszilloskop__PRTDSI__OUT_SEL0) 
#define Oszilloskop_PRTDSI__OUT_SEL1       (* (reg8 *) Oszilloskop__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Oszilloskop_PRTDSI__SYNC_OUT       (* (reg8 *) Oszilloskop__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Oszilloskop__SIO_CFG)
    #define Oszilloskop_SIO_HYST_EN        (* (reg8 *) Oszilloskop__SIO_HYST_EN)
    #define Oszilloskop_SIO_REG_HIFREQ     (* (reg8 *) Oszilloskop__SIO_REG_HIFREQ)
    #define Oszilloskop_SIO_CFG            (* (reg8 *) Oszilloskop__SIO_CFG)
    #define Oszilloskop_SIO_DIFF           (* (reg8 *) Oszilloskop__SIO_DIFF)
#endif /* (Oszilloskop__SIO_CFG) */

/* Interrupt Registers */
#if defined(Oszilloskop__INTSTAT)
    #define Oszilloskop_INTSTAT            (* (reg8 *) Oszilloskop__INTSTAT)
    #define Oszilloskop_SNAP               (* (reg8 *) Oszilloskop__SNAP)
    
	#define Oszilloskop_0_INTTYPE_REG 		(* (reg8 *) Oszilloskop__0__INTTYPE)
#endif /* (Oszilloskop__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Oszilloskop_H */


/* [] END OF FILE */
