
#include "project.h"
#include "stdio.h"

char buffer[30];
uint16 var,result;

int main(void)
{
       CyGlobalIntEnable;
       PGA_1_Start();
       UART_1_Start();
       LCD_1_Start();
       PWM_1_Start();
       Clock_1_Start();
       ADC_SAR_1_Start();
       ADC_SAR_1_StartConvert();
       for(;;)
       {
            if (ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
            {
               result = ADC_SAR_1_GetResult16(); 
               var=result+4096;
            }
            
            sprintf(buffer, "%x", var );
            UART_1_PutString(buffer);
            CyDelay(1000);
                
                     if((result>=290)&&(result<446))
                     {
                        LCD_1_ClearDisplay();
                        LCD_1_PrintString("20<T.Mess<25");
                        PWM_1_WritePeriod(9);
                        PWM_1_WriteCompare(5);
                     }
                     else if((result>=446)&&(result<600))
                     {
                        LCD_1_ClearDisplay();
                        LCD_1_PrintString("25<T.Mess<30"); 
                        PWM_1_WritePeriod(19);
                        PWM_1_WriteCompare(10);
                     }
                     else if((result>=600)&&(result<756))
                     {
                         LCD_1_ClearDisplay();
                         LCD_1_PrintString("30<T.Mess<35");
                         PWM_1_WritePeriod(29);
                         PWM_1_WriteCompare(15);
                     }
                     else if((result>=756)&&(result<920))
                    {
                         LCD_1_ClearDisplay();
                         LCD_1_PrintString("35<T.Mess<40");
                         PWM_1_WritePeriod(39);
                         PWM_1_WriteCompare(20);
                    }
                     CyDelay(1000);

       }
}
/* [] END OF FILE */
