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
    
    VDAC8_1_Start();
    VDAC8_2_Start();
    VDAC8_3_Start();
    PGA_1_Start();
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
