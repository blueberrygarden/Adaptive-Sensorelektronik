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

int main(void)
{
   
   int i;
   for(i=0; i<=15; i++)
   {
     
     LCD_1_Start();
     LCD_1_Position(0,i);
     LCD_1_PrintString("Guten Tag!");
     CyDelay(1000);
     LCD_1_ClearDisplay();
         if(i==15)
         {
            i=0;
         }
         else
         {}
   }
     
}

/* [] END OF FILE */
