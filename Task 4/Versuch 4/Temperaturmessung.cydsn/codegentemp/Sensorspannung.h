/*******************************************************************************
* File Name: Sensorspannung.h  
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

#if !defined(CY_PINS_Sensorspannung_H) /* Pins Sensorspannung_H */
#define CY_PINS_Sensorspannung_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sensorspannung_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sensorspannung__PORT == 15 && ((Sensorspannung__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sensorspannung_Write(uint8 value);
void    Sensorspannung_SetDriveMode(uint8 mode);
uint8   Sensorspannung_ReadDataReg(void);
uint8   Sensorspannung_Read(void);
void    Sensorspannung_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sensorspannung_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sensorspannung_SetDriveMode() function.
     *  @{
     */
        #define Sensorspannung_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sensorspannung_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sensorspannung_DM_RES_UP          PIN_DM_RES_UP
        #define Sensorspannung_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sensorspannung_DM_OD_LO           PIN_DM_OD_LO
        #define Sensorspannung_DM_OD_HI           PIN_DM_OD_HI
        #define Sensorspannung_DM_STRONG          PIN_DM_STRONG
        #define Sensorspannung_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sensorspannung_MASK               Sensorspannung__MASK
#define Sensorspannung_SHIFT              Sensorspannung__SHIFT
#define Sensorspannung_WIDTH              1u

/* Interrupt constants */
#if defined(Sensorspannung__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sensorspannung_SetInterruptMode() function.
     *  @{
     */
        #define Sensorspannung_INTR_NONE      (uint16)(0x0000u)
        #define Sensorspannung_INTR_RISING    (uint16)(0x0001u)
        #define Sensorspannung_INTR_FALLING   (uint16)(0x0002u)
        #define Sensorspannung_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sensorspannung_INTR_MASK      (0x01u) 
#endif /* (Sensorspannung__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sensorspannung_PS                     (* (reg8 *) Sensorspannung__PS)
/* Data Register */
#define Sensorspannung_DR                     (* (reg8 *) Sensorspannung__DR)
/* Port Number */
#define Sensorspannung_PRT_NUM                (* (reg8 *) Sensorspannung__PRT) 
/* Connect to Analog Globals */                                                  
#define Sensorspannung_AG                     (* (reg8 *) Sensorspannung__AG)                       
/* Analog MUX bux enable */
#define Sensorspannung_AMUX                   (* (reg8 *) Sensorspannung__AMUX) 
/* Bidirectional Enable */                                                        
#define Sensorspannung_BIE                    (* (reg8 *) Sensorspannung__BIE)
/* Bit-mask for Aliased Register Access */
#define Sensorspannung_BIT_MASK               (* (reg8 *) Sensorspannung__BIT_MASK)
/* Bypass Enable */
#define Sensorspannung_BYP                    (* (reg8 *) Sensorspannung__BYP)
/* Port wide control signals */                                                   
#define Sensorspannung_CTL                    (* (reg8 *) Sensorspannung__CTL)
/* Drive Modes */
#define Sensorspannung_DM0                    (* (reg8 *) Sensorspannung__DM0) 
#define Sensorspannung_DM1                    (* (reg8 *) Sensorspannung__DM1)
#define Sensorspannung_DM2                    (* (reg8 *) Sensorspannung__DM2) 
/* Input Buffer Disable Override */
#define Sensorspannung_INP_DIS                (* (reg8 *) Sensorspannung__INP_DIS)
/* LCD Common or Segment Drive */
#define Sensorspannung_LCD_COM_SEG            (* (reg8 *) Sensorspannung__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sensorspannung_LCD_EN                 (* (reg8 *) Sensorspannung__LCD_EN)
/* Slew Rate Control */
#define Sensorspannung_SLW                    (* (reg8 *) Sensorspannung__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sensorspannung_PRTDSI__CAPS_SEL       (* (reg8 *) Sensorspannung__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sensorspannung_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sensorspannung__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sensorspannung_PRTDSI__OE_SEL0        (* (reg8 *) Sensorspannung__PRTDSI__OE_SEL0) 
#define Sensorspannung_PRTDSI__OE_SEL1        (* (reg8 *) Sensorspannung__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sensorspannung_PRTDSI__OUT_SEL0       (* (reg8 *) Sensorspannung__PRTDSI__OUT_SEL0) 
#define Sensorspannung_PRTDSI__OUT_SEL1       (* (reg8 *) Sensorspannung__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sensorspannung_PRTDSI__SYNC_OUT       (* (reg8 *) Sensorspannung__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sensorspannung__SIO_CFG)
    #define Sensorspannung_SIO_HYST_EN        (* (reg8 *) Sensorspannung__SIO_HYST_EN)
    #define Sensorspannung_SIO_REG_HIFREQ     (* (reg8 *) Sensorspannung__SIO_REG_HIFREQ)
    #define Sensorspannung_SIO_CFG            (* (reg8 *) Sensorspannung__SIO_CFG)
    #define Sensorspannung_SIO_DIFF           (* (reg8 *) Sensorspannung__SIO_DIFF)
#endif /* (Sensorspannung__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sensorspannung__INTSTAT)
    #define Sensorspannung_INTSTAT            (* (reg8 *) Sensorspannung__INTSTAT)
    #define Sensorspannung_SNAP               (* (reg8 *) Sensorspannung__SNAP)
    
	#define Sensorspannung_0_INTTYPE_REG 		(* (reg8 *) Sensorspannung__0__INTTYPE)
#endif /* (Sensorspannung__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sensorspannung_H */


/* [] END OF FILE */
