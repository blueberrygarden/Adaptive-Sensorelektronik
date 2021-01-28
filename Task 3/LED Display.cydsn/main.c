#include "project.h"

int main(void)
{
    LCD_1_Start();
    LCD_1_Position(0,0);
    LCD_1_PrintString("Hello");
    LCD_1_Position(1,6);
    LCD_1_PrintString("World");
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
