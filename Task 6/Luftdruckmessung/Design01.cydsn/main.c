/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"
#include "time.h" 

char buffer[30];
uint16 var;
uint16 result;
int i;


int main(void)
{
    CyGlobalIntEnable;
    VDAC_1_Start();
    PGA_1_Start();
    ADC_SAR_1_Start();
    UART_1_Start(); 
    ADC_SAR_1_StartConvert();
    LCD_1_Start();
    
    for(;;)
    {   
        if(ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
        {
            result = ADC_SAR_1_GetResult16(); 
            var=result+12288;
        }   
        sprintf(buffer, "%x", var );
        UART_1_PutString(buffer);
        
        if(result<2595)
        {
            
            LCD_1_ClearDisplay();
            LCD_1_Position(0,0);
            LCD_1_PrintString("EMERGENCY!");
            Clock_1_Start();
            i=i+1;
          
        }
        else
        {
            Clock_1_Stop();
            LCD_1_ClearDisplay();
            LCD_1_Position(0,0);
            LCD_1_PrintString("Gefahr behoben");
            
            LCD_1_Position(1,0);
            LCD_1_PrintNumber(i);
            CyDelay(5000);
            i=0;
        }
        
        CyDelay(1000);
        }
        
    }


/* [] END OF FILE */
