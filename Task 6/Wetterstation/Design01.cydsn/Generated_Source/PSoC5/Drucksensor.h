/*******************************************************************************
* File Name: Drucksensor.h  
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

#if !defined(CY_PINS_Drucksensor_H) /* Pins Drucksensor_H */
#define CY_PINS_Drucksensor_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Drucksensor_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Drucksensor__PORT == 15 && ((Drucksensor__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Drucksensor_Write(uint8 value);
void    Drucksensor_SetDriveMode(uint8 mode);
uint8   Drucksensor_ReadDataReg(void);
uint8   Drucksensor_Read(void);
void    Drucksensor_SetInterruptMode(uint16 position, uint16 mode);
uint8   Drucksensor_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Drucksensor_SetDriveMode() function.
     *  @{
     */
        #define Drucksensor_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Drucksensor_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Drucksensor_DM_RES_UP          PIN_DM_RES_UP
        #define Drucksensor_DM_RES_DWN         PIN_DM_RES_DWN
        #define Drucksensor_DM_OD_LO           PIN_DM_OD_LO
        #define Drucksensor_DM_OD_HI           PIN_DM_OD_HI
        #define Drucksensor_DM_STRONG          PIN_DM_STRONG
        #define Drucksensor_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Drucksensor_MASK               Drucksensor__MASK
#define Drucksensor_SHIFT              Drucksensor__SHIFT
#define Drucksensor_WIDTH              1u

/* Interrupt constants */
#if defined(Drucksensor__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Drucksensor_SetInterruptMode() function.
     *  @{
     */
        #define Drucksensor_INTR_NONE      (uint16)(0x0000u)
        #define Drucksensor_INTR_RISING    (uint16)(0x0001u)
        #define Drucksensor_INTR_FALLING   (uint16)(0x0002u)
        #define Drucksensor_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Drucksensor_INTR_MASK      (0x01u) 
#endif /* (Drucksensor__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Drucksensor_PS                     (* (reg8 *) Drucksensor__PS)
/* Data Register */
#define Drucksensor_DR                     (* (reg8 *) Drucksensor__DR)
/* Port Number */
#define Drucksensor_PRT_NUM                (* (reg8 *) Drucksensor__PRT) 
/* Connect to Analog Globals */                                                  
#define Drucksensor_AG                     (* (reg8 *) Drucksensor__AG)                       
/* Analog MUX bux enable */
#define Drucksensor_AMUX                   (* (reg8 *) Drucksensor__AMUX) 
/* Bidirectional Enable */                                                        
#define Drucksensor_BIE                    (* (reg8 *) Drucksensor__BIE)
/* Bit-mask for Aliased Register Access */
#define Drucksensor_BIT_MASK               (* (reg8 *) Drucksensor__BIT_MASK)
/* Bypass Enable */
#define Drucksensor_BYP                    (* (reg8 *) Drucksensor__BYP)
/* Port wide control signals */                                                   
#define Drucksensor_CTL                    (* (reg8 *) Drucksensor__CTL)
/* Drive Modes */
#define Drucksensor_DM0                    (* (reg8 *) Drucksensor__DM0) 
#define Drucksensor_DM1                    (* (reg8 *) Drucksensor__DM1)
#define Drucksensor_DM2                    (* (reg8 *) Drucksensor__DM2) 
/* Input Buffer Disable Override */
#define Drucksensor_INP_DIS                (* (reg8 *) Drucksensor__INP_DIS)
/* LCD Common or Segment Drive */
#define Drucksensor_LCD_COM_SEG            (* (reg8 *) Drucksensor__LCD_COM_SEG)
/* Enable Segment LCD */
#define Drucksensor_LCD_EN                 (* (reg8 *) Drucksensor__LCD_EN)
/* Slew Rate Control */
#define Drucksensor_SLW                    (* (reg8 *) Drucksensor__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Drucksensor_PRTDSI__CAPS_SEL       (* (reg8 *) Drucksensor__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Drucksensor_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Drucksensor__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Drucksensor_PRTDSI__OE_SEL0        (* (reg8 *) Drucksensor__PRTDSI__OE_SEL0) 
#define Drucksensor_PRTDSI__OE_SEL1        (* (reg8 *) Drucksensor__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Drucksensor_PRTDSI__OUT_SEL0       (* (reg8 *) Drucksensor__PRTDSI__OUT_SEL0) 
#define Drucksensor_PRTDSI__OUT_SEL1       (* (reg8 *) Drucksensor__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Drucksensor_PRTDSI__SYNC_OUT       (* (reg8 *) Drucksensor__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Drucksensor__SIO_CFG)
    #define Drucksensor_SIO_HYST_EN        (* (reg8 *) Drucksensor__SIO_HYST_EN)
    #define Drucksensor_SIO_REG_HIFREQ     (* (reg8 *) Drucksensor__SIO_REG_HIFREQ)
    #define Drucksensor_SIO_CFG            (* (reg8 *) Drucksensor__SIO_CFG)
    #define Drucksensor_SIO_DIFF           (* (reg8 *) Drucksensor__SIO_DIFF)
#endif /* (Drucksensor__SIO_CFG) */

/* Interrupt Registers */
#if defined(Drucksensor__INTSTAT)
    #define Drucksensor_INTSTAT            (* (reg8 *) Drucksensor__INTSTAT)
    #define Drucksensor_SNAP               (* (reg8 *) Drucksensor__SNAP)
    
	#define Drucksensor_0_INTTYPE_REG 		(* (reg8 *) Drucksensor__0__INTTYPE)
#endif /* (Drucksensor__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Drucksensor_H */


/* [] END OF FILE */
