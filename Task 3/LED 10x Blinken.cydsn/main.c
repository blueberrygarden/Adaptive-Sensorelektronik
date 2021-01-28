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
    for(i=0; i<9;i++)
    {   
        Clock_2_Stop();
        Clock_1_Start();
        CyDelay(1000);
        Clock_1_Stop(); 
    
    }
     for(i=0; i<9;i++)
    {   
        
        Clock_2_Start();
        CyDelay(1000);
        Clock_2_Stop(); 
    
    }

    
}

/* [] END OF FILE */
