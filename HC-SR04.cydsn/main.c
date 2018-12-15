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
#include <stdio.h>
#include <stdlib.h>

int Contador=0;
float Distancia;
char imprimir[9];

int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();
    Timer_Start();
    LCD_Position(0,0);
    LCD_PrintString("Distancia:");
    LCD_Position(1,9);
    LCD_PrintString("cm");
    
    for(;;)
    {
        while(Ekko_Read()==0){      //Generacion de pulso en trigger
            Control_Write(1);
            CyDelay(10u);
            Control_Write(0);
            CyDelay(1);             //Espera pulsos generados por el sensor
         }
        
        while(Ekko_Read()==1){};
        Contador=65535-Timer_ReadCounter(); // timer cuenta descendentemente;
        Distancia = Contador/58.0;          // Formula datasheet para pasar a "cm"
        
        LCD_Position(1,4);
        LCD_PrintString("     ");
        LCD_Position(1,4);
        LCD_PrintNumber(Distancia);
        
/*
       sprintf(imprimir,"%.1f cm   ",Distancia);   // ir system, heap size 0x200,
       LCD_Position(1,4);                          // project, built settings, linkeer general, use newln-nano float, true. 
       LCD_PrintString(imprimir);
*/        
    }
}

/* [] END OF FILE */
