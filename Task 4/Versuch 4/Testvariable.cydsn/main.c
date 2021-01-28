
#include "project.h"
#include "stdio.h"
char8 buffer[30];
uint8 var;


int main(void)
{
    CyGlobalIntEnable;
    UART_1_Start();
    int i;
    for(i=0; i<100; i++)
    {
        uint8 var=i;
        sprintf(buffer, "%x\r\n", var);
        UART_1_PutString(buffer);
        CyDelay(1000);
        
    }
}

/* [] END OF FILE */
