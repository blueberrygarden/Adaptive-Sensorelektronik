/*******************************************************************************
* File Name: Trigger_1_PM.c  
* Version 1.90
*
* Description:
*  This file provides the power management source code to API for the
*  VDAC8.  
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Trigger_1.h"

static Trigger_1_backupStruct Trigger_1_backup;


/*******************************************************************************
* Function Name: Trigger_1_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void Trigger_1_SaveConfig(void) 
{
    if (!((Trigger_1_CR1 & Trigger_1_SRC_MASK) == Trigger_1_SRC_UDB))
    {
        Trigger_1_backup.data_value = Trigger_1_Data;
    }
}


/*******************************************************************************
* Function Name: Trigger_1_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
*******************************************************************************/
void Trigger_1_RestoreConfig(void) 
{
    if (!((Trigger_1_CR1 & Trigger_1_SRC_MASK) == Trigger_1_SRC_UDB))
    {
        if((Trigger_1_Strobe & Trigger_1_STRB_MASK) == Trigger_1_STRB_EN)
        {
            Trigger_1_Strobe &= (uint8)(~Trigger_1_STRB_MASK);
            Trigger_1_Data = Trigger_1_backup.data_value;
            Trigger_1_Strobe |= Trigger_1_STRB_EN;
        }
        else
        {
            Trigger_1_Data = Trigger_1_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: Trigger_1_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:  
*  void:  
*
* Return: 
*  void
*
* Global variables:
*  Trigger_1_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void Trigger_1_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(Trigger_1_ACT_PWR_EN == (Trigger_1_PWRMGR & Trigger_1_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        Trigger_1_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        Trigger_1_backup.enableState = 0u;
    }
    
    Trigger_1_Stop();
    Trigger_1_SaveConfig();
}


/*******************************************************************************
* Function Name: Trigger_1_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  Trigger_1_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Trigger_1_Wakeup(void) 
{
    Trigger_1_RestoreConfig();
    
    if(Trigger_1_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        Trigger_1_Enable();

        /* Restore the data register */
        Trigger_1_SetValue(Trigger_1_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
