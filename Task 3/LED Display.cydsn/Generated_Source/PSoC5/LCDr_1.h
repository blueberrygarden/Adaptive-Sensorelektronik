/*******************************************************************************
* File Name: LCDr_1.h
* Version 2.20
*
* Description:
*  This header file contains registers and constants associated with the
*  Character LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CHARLCD_LCDr_1_H)
#define CY_CHARLCD_LCDr_1_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define LCDr_1_CONVERSION_ROUTINES     (1u)
#define LCDr_1_CUSTOM_CHAR_SET         (0u)

/* Custom character set types */
#define LCDr_1_NONE                     (0u)    /* No Custom Fonts      */
#define LCDr_1_HORIZONTAL_BG            (1u)    /* Horizontal Bar Graph */
#define LCDr_1_VERTICAL_BG              (2u)    /* Vertical Bar Graph   */
#define LCDr_1_USER_DEFINED             (3u)    /* User Defined Fonts   */


/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
} LCDr_1_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void LCDr_1_Init(void) ;
void LCDr_1_Enable(void) ;
void LCDr_1_Start(void) ;
void LCDr_1_Stop(void) ;
void LCDr_1_WriteControl(uint8 cByte) ;
void LCDr_1_WriteData(uint8 dByte) ;
void LCDr_1_PrintString(char8 const string[]) ;
void LCDr_1_Position(uint8 row, uint8 column) ;
void LCDr_1_PutChar(char8 character) ;
void LCDr_1_IsReady(void) ;
void LCDr_1_SaveConfig(void) ;
void LCDr_1_RestoreConfig(void) ;
void LCDr_1_Sleep(void) ;
void LCDr_1_Wakeup(void) ;

#if((LCDr_1_CUSTOM_CHAR_SET == LCDr_1_VERTICAL_BG) || \
                (LCDr_1_CUSTOM_CHAR_SET == LCDr_1_HORIZONTAL_BG))

    void  LCDr_1_LoadCustomFonts(uint8 const customData[])
                        ;

    void  LCDr_1_DrawHorizontalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                         ;

    void LCDr_1_DrawVerticalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                        ;

#endif /* ((LCDr_1_CUSTOM_CHAR_SET == LCDr_1_VERTICAL_BG) */

#if(LCDr_1_CUSTOM_CHAR_SET == LCDr_1_USER_DEFINED)

    void LCDr_1_LoadCustomFonts(uint8 const customData[])
                            ;

#endif /* ((LCDr_1_CUSTOM_CHAR_SET == LCDr_1_USER_DEFINED) */

#if(LCDr_1_CONVERSION_ROUTINES == 1u)

    /* ASCII Conversion Routines */
    void LCDr_1_PrintInt8(uint8 value) ;
    void LCDr_1_PrintInt16(uint16 value) ;
    void LCDr_1_PrintInt32(uint32 value) ;
    void LCDr_1_PrintNumber(uint16 value) ; 
    void LCDr_1_PrintU32Number(uint32 value) ;
    
#endif /* LCDr_1_CONVERSION_ROUTINES == 1u */

/* Clear Macro */
#define LCDr_1_ClearDisplay() LCDr_1_WriteControl(LCDr_1_CLEAR_DISPLAY)

/* Off Macro */
#define LCDr_1_DisplayOff() LCDr_1_WriteControl(LCDr_1_DISPLAY_CURSOR_OFF)

/* On Macro */
#define LCDr_1_DisplayOn() LCDr_1_WriteControl(LCDr_1_DISPLAY_ON_CURSOR_OFF)

#define LCDr_1_PrintNumber(value) LCDr_1_PrintU32Number((uint16) (value))


/***************************************
*           Global Variables
***************************************/

extern uint8 LCDr_1_initVar;
extern uint8 LCDr_1_enableState;
extern uint8 const CYCODE LCDr_1_customFonts[64u];


/***************************************
*           API Constants
***************************************/

/* Full Byte Commands Sent as Two Nibbles */
#define LCDr_1_DISPLAY_8_BIT_INIT       (0x03u)
#define LCDr_1_DISPLAY_4_BIT_INIT       (0x02u)
#define LCDr_1_DISPLAY_CURSOR_OFF       (0x08u)
#define LCDr_1_CLEAR_DISPLAY            (0x01u)
#define LCDr_1_CURSOR_AUTO_INCR_ON      (0x06u)
#define LCDr_1_DISPLAY_CURSOR_ON        (0x0Eu)
#define LCDr_1_DISPLAY_2_LINES_5x10     (0x2Cu)
#define LCDr_1_DISPLAY_ON_CURSOR_OFF    (0x0Cu)

#define LCDr_1_RESET_CURSOR_POSITION    (0x03u)
#define LCDr_1_CURSOR_WINK              (0x0Du)
#define LCDr_1_CURSOR_BLINK             (0x0Fu)
#define LCDr_1_CURSOR_SH_LEFT           (0x10u)
#define LCDr_1_CURSOR_SH_RIGHT          (0x14u)
#define LCDr_1_DISPLAY_SCRL_LEFT        (0x18u)
#define LCDr_1_DISPLAY_SCRL_RIGHT       (0x1Eu)
#define LCDr_1_CURSOR_HOME              (0x02u)
#define LCDr_1_CURSOR_LEFT              (0x04u)
#define LCDr_1_CURSOR_RIGHT             (0x06u)

/* Point to Character Generator Ram 0 */
#define LCDr_1_CGRAM_0                  (0x40u)

/* Point to Display Data Ram 0 */
#define LCDr_1_DDRAM_0                  (0x80u)

/* LCD Characteristics */
#define LCDr_1_CHARACTER_WIDTH          (0x05u)
#define LCDr_1_CHARACTER_HEIGHT         (0x08u)

#if(LCDr_1_CONVERSION_ROUTINES == 1u)
    #define LCDr_1_NUMBER_OF_REMAINDERS_U32 (0x0Au)
    #define LCDr_1_TEN                      (0x0Au)
    #define LCDr_1_8_BIT_SHIFT              (8u)
    #define LCDr_1_32_BIT_SHIFT             (32u)
    #define LCDr_1_ZERO_CHAR_ASCII          (48u)
#endif /* LCDr_1_CONVERSION_ROUTINES == 1u */

/* Nibble Offset and Mask */
#define LCDr_1_NIBBLE_SHIFT             (0x04u)
#define LCDr_1_NIBBLE_MASK              (0x0Fu)

/* LCD Module Address Constants */
#define LCDr_1_ROW_0_START              (0x80u)
#define LCDr_1_ROW_1_START              (0xC0u)
#define LCDr_1_ROW_2_START              (0x94u)
#define LCDr_1_ROW_3_START              (0xD4u)

/* Custom Character References */
#define LCDr_1_CUSTOM_0                 (0x00u)
#define LCDr_1_CUSTOM_1                 (0x01u)
#define LCDr_1_CUSTOM_2                 (0x02u)
#define LCDr_1_CUSTOM_3                 (0x03u)
#define LCDr_1_CUSTOM_4                 (0x04u)
#define LCDr_1_CUSTOM_5                 (0x05u)
#define LCDr_1_CUSTOM_6                 (0x06u)
#define LCDr_1_CUSTOM_7                 (0x07u)

/* Other constants */
#define LCDr_1_BYTE_UPPER_NIBBLE_SHIFT  (0x04u)
#define LCDr_1_BYTE_LOWER_NIBBLE_MASK   (0x0Fu)
#define LCDr_1_U16_UPPER_BYTE_SHIFT     (0x08u)
#define LCDr_1_U16_LOWER_BYTE_MASK      (0xFFu)
#define LCDr_1_CUSTOM_CHAR_SET_LEN      (0x40u)

#define LCDr_1_LONGEST_CMD_US           (0x651u)
#define LCDr_1_WAIT_CYCLE               (0x10u)
#define LCDr_1_READY_DELAY              ((LCDr_1_LONGEST_CMD_US * 4u)/(LCDr_1_WAIT_CYCLE))


/***************************************
*             Registers
***************************************/

/* Device specific registers */
#if (CY_PSOC4)

    #define LCDr_1_PORT_DR_REG           (*(reg32 *) LCDr_1_LCDPort__DR)  /* Data Output Register */
    #define LCDr_1_PORT_DR_PTR           ( (reg32 *) LCDr_1_LCDPort__DR)
    #define LCDr_1_PORT_PS_REG           (*(reg32 *) LCDr_1_LCDPort__PS)  /* Pin State Register */
    #define LCDr_1_PORT_PS_PTR           ( (reg32 *) LCDr_1_LCDPort__PS)
    
    #define LCDr_1_PORT_PC_REG           (*(reg32 *) LCDr_1_LCDPort__PC)
    #define LCDr_1_PORT_PC_PTR           (*(reg32 *) LCDr_1_LCDPort__PC)
    
#else

    #define LCDr_1_PORT_DR_REG           (*(reg8 *) LCDr_1_LCDPort__DR)  /* Data Output Register */
    #define LCDr_1_PORT_DR_PTR           ( (reg8 *) LCDr_1_LCDPort__DR)
    #define LCDr_1_PORT_PS_REG           (*(reg8 *) LCDr_1_LCDPort__PS)  /* Pin State Register */
    #define LCDr_1_PORT_PS_PTR           ( (reg8 *) LCDr_1_LCDPort__PS)

    #define LCDr_1_PORT_DM0_REG          (*(reg8 *) LCDr_1_LCDPort__DM0) /* Port Drive Mode 0 */
    #define LCDr_1_PORT_DM0_PTR          ( (reg8 *) LCDr_1_LCDPort__DM0)
    #define LCDr_1_PORT_DM1_REG          (*(reg8 *) LCDr_1_LCDPort__DM1) /* Port Drive Mode 1 */
    #define LCDr_1_PORT_DM1_PTR          ( (reg8 *) LCDr_1_LCDPort__DM1)
    #define LCDr_1_PORT_DM2_REG          (*(reg8 *) LCDr_1_LCDPort__DM2) /* Port Drive Mode 2 */
    #define LCDr_1_PORT_DM2_PTR          ( (reg8 *) LCDr_1_LCDPort__DM2)

#endif /* CY_PSOC4 */


/***************************************
*       Register Constants
***************************************/

/* SHIFT must be 1 or 0 */
#if (0 == LCDr_1_LCDPort__SHIFT)
    #define LCDr_1_PORT_SHIFT               (0x00u)
#else
    #define LCDr_1_PORT_SHIFT               (0x01u)
#endif /* (0 == LCDr_1_LCDPort__SHIFT) */

#define LCDr_1_PORT_MASK                ((uint8) (LCDr_1_LCDPort__MASK))

#if (CY_PSOC4)

    #define LCDr_1_DM_PIN_STEP              (3u)
    /* Hi-Z Digital is defined by the value of "001b" and this should be set for
    * four data pins, in this way we get - 0x00000249. A similar Strong drive
    * is defined with "110b" so we get 0x00000DB6.
    */
    #define LCDr_1_HIGH_Z_DATA_DM           ((0x00000249ul) << (LCDr_1_PORT_SHIFT *\
                                                                          LCDr_1_DM_PIN_STEP))
    #define LCDr_1_STRONG_DATA_DM           ((0x00000DB6ul) << (LCDr_1_PORT_SHIFT *\
                                                                          LCDr_1_DM_PIN_STEP))
    #define LCDr_1_DATA_PINS_MASK           (0x00000FFFul)
    #define LCDr_1_DM_DATA_MASK             ((uint32) (LCDr_1_DATA_PINS_MASK << \
                                                      (LCDr_1_PORT_SHIFT * LCDr_1_DM_PIN_STEP)))

#else

    /* Drive Mode register values for High Z */
    #define LCDr_1_HIGH_Z_DM0               (0xFFu)
    #define LCDr_1_HIGH_Z_DM1               (0x00u)
    #define LCDr_1_HIGH_Z_DM2               (0x00u)

    /* Drive Mode register values for High Z Analog */
    #define LCDr_1_HIGH_Z_A_DM0             (0x00u)
    #define LCDr_1_HIGH_Z_A_DM1             (0x00u)
    #define LCDr_1_HIGH_Z_A_DM2             (0x00u)

    /* Drive Mode register values for Strong */
    #define LCDr_1_STRONG_DM0               (0x00u)
    #define LCDr_1_STRONG_DM1               (0xFFu)
    #define LCDr_1_STRONG_DM2               (0xFFu)

#endif /* CY_PSOC4 */

/* Pin Masks */
#define LCDr_1_RS                     ((uint8) \
                                                (((uint8) 0x20u) << LCDr_1_LCDPort__SHIFT))
#define LCDr_1_RW                     ((uint8) \
                                                (((uint8) 0x40u) << LCDr_1_LCDPort__SHIFT))
#define LCDr_1_E                      ((uint8) \
                                                (((uint8) 0x10u) << LCDr_1_LCDPort__SHIFT))
#define LCDr_1_READY_BIT              ((uint8) \
                                                (((uint8) 0x08u) << LCDr_1_LCDPort__SHIFT))
#define LCDr_1_DATA_MASK              ((uint8) \
                                                (((uint8) 0x0Fu) << LCDr_1_LCDPort__SHIFT))

/* These names are obsolete and will be removed in future revisions */
#define LCDr_1_PORT_DR                  LCDr_1_PORT_DR_REG
#define LCDr_1_PORT_PS                  LCDr_1_PORT_PS_REG
#define LCDr_1_PORT_DM0                 LCDr_1_PORT_DM0_REG
#define LCDr_1_PORT_DM1                 LCDr_1_PORT_DM1_REG
#define LCDr_1_PORT_DM2                 LCDr_1_PORT_DM2_REG


/***************************************
*       Obsolete function names
***************************************/
#if(LCDr_1_CONVERSION_ROUTINES == 1u)
    /* This function names are obsolete and will be removed in future 
    * revisions of the component.
    */
    #define LCDr_1_PrintDecUint16(x)   LCDr_1_PrintNumber(x)  
    #define LCDr_1_PrintHexUint8(x)    LCDr_1_PrintInt8(x)
    #define LCDr_1_PrintHexUint16(x)   LCDr_1_PrintInt16(x)        

#endif /* LCDr_1_CONVERSION_ROUTINES == 1u */

#endif /* CY_CHARLCD_LCDr_1_H */


/* [] END OF FILE */
