/*******************************************************************************
* File Name: LCDr_1_LCDPort.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LCDr_1_LCDPort_ALIASES_H) /* Pins LCDr_1_LCDPort_ALIASES_H */
#define CY_PINS_LCDr_1_LCDPort_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define LCDr_1_LCDPort_0			(LCDr_1_LCDPort__0__PC)
#define LCDr_1_LCDPort_0_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__0__SHIFT))

#define LCDr_1_LCDPort_1			(LCDr_1_LCDPort__1__PC)
#define LCDr_1_LCDPort_1_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__1__SHIFT))

#define LCDr_1_LCDPort_2			(LCDr_1_LCDPort__2__PC)
#define LCDr_1_LCDPort_2_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__2__SHIFT))

#define LCDr_1_LCDPort_3			(LCDr_1_LCDPort__3__PC)
#define LCDr_1_LCDPort_3_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__3__SHIFT))

#define LCDr_1_LCDPort_4			(LCDr_1_LCDPort__4__PC)
#define LCDr_1_LCDPort_4_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__4__SHIFT))

#define LCDr_1_LCDPort_5			(LCDr_1_LCDPort__5__PC)
#define LCDr_1_LCDPort_5_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__5__SHIFT))

#define LCDr_1_LCDPort_6			(LCDr_1_LCDPort__6__PC)
#define LCDr_1_LCDPort_6_INTR	((uint16)((uint16)0x0001u << LCDr_1_LCDPort__6__SHIFT))

#define LCDr_1_LCDPort_INTR_ALL	 ((uint16)(LCDr_1_LCDPort_0_INTR| LCDr_1_LCDPort_1_INTR| LCDr_1_LCDPort_2_INTR| LCDr_1_LCDPort_3_INTR| LCDr_1_LCDPort_4_INTR| LCDr_1_LCDPort_5_INTR| LCDr_1_LCDPort_6_INTR))

#endif /* End Pins LCDr_1_LCDPort_ALIASES_H */


/* [] END OF FILE */
