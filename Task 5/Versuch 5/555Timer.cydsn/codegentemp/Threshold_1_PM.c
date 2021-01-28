/*******************************************************************************
* File Name: Threshold_1_PM.c  
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

#include "Threshold_1.h"

static Threshold_1_backupStruct Threshold_1_backup;


/*******************************************************************************
* Function Name: Threshold_1_SaveConfig
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
void Threshold_1_SaveConfig(void) 
{
    if (!((Threshold_1_CR1 & Threshold_1_SRC_MASK) == Threshold_1_SRC_UDB))
    {
        Threshold_1_backup.data_value = Threshold_1_Data;
    }
}


/*******************************************************************************
* Function Name: Threshold_1_RestoreConfig
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
void Threshold_1_RestoreConfig(void) 
{
    if (!((Threshold_1_CR1 & Threshold_1_SRC_MASK) == Threshold_1_SRC_UDB))
    {
        if((Threshold_1_Strobe & Threshold_1_STRB_MASK) == Threshold_1_STRB_EN)
        {
            Threshold_1_Strobe &= (uint8)(~Threshold_1_STRB_MASK);
            Threshold_1_Data = Threshold_1_backup.data_value;
            Threshold_1_Strobe |= Threshold_1_STRB_EN;
        }
        else
        {
            Threshold_1_Data = Threshold_1_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: Threshold_1_Sleep
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
*  Threshold_1_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void Threshold_1_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(Threshold_1_ACT_PWR_EN == (Threshold_1_PWRMGR & Threshold_1_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        Threshold_1_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        Threshold_1_backup.enableState = 0u;
    }
    
    Threshold_1_Stop();
    Threshold_1_SaveConfig();
}


/*******************************************************************************
* Function Name: Threshold_1_Wakeup
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
*  Threshold_1_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Threshold_1_Wakeup(void) 
{
    Threshold_1_RestoreConfig();
    
    if(Threshold_1_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        Threshold_1_Enable();

        /* Restore the data register */
        Threshold_1_SetValue(Threshold_1_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
