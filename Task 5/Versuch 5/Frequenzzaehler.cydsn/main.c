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


int16 diff;
int16 result;
char buffer[30];
char str[30];
extern volatile int intr;


int main(void)
{
    CyGlobalIntEnable;
    Trigger_1_Start();
    Threshold_1_Start();
    Comp_1_Start();
    Comp_2_Start();
    Clock_1_Start();
    Clock_2_Start();
    PWM_1_Start();
    Counter_1_Start();
    UART_1_Start();
    LCD_1_Start();
    isr_1_Start();


    
    for(;;)                                                                                                                                                                                                                                                                                                 
    {
        
       while(intr==0)
       {
       }
       if(intr==1)
       {
            diff=Counter_1_ReadCounter();
            PWM_1_ReadStatusRegister();
            Counter_1_Stop();
            Counter_1_Init();
            intr = 0;
            
            result=diff+8192;
            sprintf(buffer,"%x\r\n", result);
            UART_1_PutString(buffer);
   
           
        }
           
            LCD_1_ClearDisplay();
            LCD_1_Position(0,0);
            LCD_1_PrintNumber(diff);
            
        
        
      
    }
}

/* [] END OF FILE */
