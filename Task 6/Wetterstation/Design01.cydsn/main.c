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

char buffer[30];
uint16 var_Temperatur;
uint16 var_Druck;
uint16 var_Feuchte;
uint16 result_Feuchte;
uint16 result_Druck;
uint16 result_Temperatur;
extern volatile int intr;
int i;

int main(void)
{
       CyGlobalIntEnable;
       UART_1_Start();
    
       PGA_1_Start();
       ADC_1_Start();
       ADC_1_StartConvert();
    
       Trigger_1_Start();
       Threshold_1_Start();
       Comp_1_Start();
       Comp_2_Start();
       Clock_1_Start();
       Clock_2_Start();
       PWM_1_Start(); 
       Counter_1_Start();
       isr_1_Start(); 
      
    
       VDAC_1_Start();
       PGA_2_Start();
       ADC_2_Start();
       ADC_2_StartConvert();
    
    for(;;) 
    {
      
                if (ADC_1_IsEndConversion(ADC_1_WAIT_FOR_RESULT))
                {
                    result_Temperatur = ADC_1_GetResult16(); 
                    var_Temperatur=result_Temperatur+4096;
                
            
                    sprintf(buffer, "%x", var_Temperatur );
                    UART_1_PutString(buffer);
                    
                }
                CyDelay(100);
  
                while(intr==0)
                {
                }
                intr = 0;
                Counter_1_WriteCounter(0);
                PWM_1_ReadStatusRegister();
               
                while(intr==0)
                {
                }
                if(intr==1)
                {
                    result_Feuchte=Counter_1_ReadCounter();
                    PWM_1_ReadStatusRegister();
                    Counter_1_Stop();
                    Counter_1_Init();
                    intr = 0;
            
                    var_Feuchte=result_Feuchte+8192;
                    sprintf(buffer,"%x", var_Feuchte);
                    UART_1_PutString(buffer);
                
                }
                
                CyDelay(100);
                
                if(ADC_2_IsEndConversion(ADC_2_WAIT_FOR_RESULT))
                {
                    result_Druck = ADC_2_GetResult16(); 
                    var_Druck=result_Druck+12288;
                   
                    sprintf(buffer, "%x", var_Druck );
                    UART_1_PutString(buffer);
                    
                }
                CyDelay(100);
                
    }
}
    
/* [] END OF FILE */
