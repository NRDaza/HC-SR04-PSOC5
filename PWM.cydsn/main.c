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

int16 Contador;

 CY_ISR(Aumentar){
        LCD_Position(1,5);
        LCD_PrintString("         ");
     Contador=Contador+30;  
        if (Contador<255){
            PWM_WriteCompare(Contador);
          /*  ResetPWM_Write(1);
            ResetPWM_Write(0);*/
            LCD_Position(1,5);
            LCD_PrintNumber(Contador);
        }else{
        
            Contador=Contador-30;
            LCD_Position(1,5);
            LCD_PrintNumber(Contador);
        }
        CyDelay(500);
        InAumentar_ClearInterrupt();
    }


 CY_ISR(Disminuir){
        LCD_Position(1,5);
        LCD_PrintString("         ");
         Contador=Contador-30;  
        if (Contador>0){
            PWM_WriteCompare(Contador);
          /*  ResetPWM_Write(1);
            ResetPWM_Write(0);*/
            LCD_Position(1,5);
            LCD_PrintNumber(Contador);
           
        }else{
        
        Contador=Contador+30;
            LCD_Position(1,5);
            LCD_PrintNumber(Contador);
        }
    CyDelay(500);
        InDisminuir_ClearInterrupt();
    
    }




int main(void)
{
    
    LCD_Start();
    LCD_Position(0,3);
    LCD_PrintString("CICLO UTIL:");

    CyGlobalIntEnable; /* Enable global interrupts. */

    Aumentar_StartEx(Aumentar);
    Disminuir_StartEx(Disminuir);
    
    PWM_Start();
    Contador=101;
    LCD_Position(1,5);
    
    LCD_PrintNumber(Contador);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {

        /* Place your application code here. */
    }
}

/* [] END OF FILE */
