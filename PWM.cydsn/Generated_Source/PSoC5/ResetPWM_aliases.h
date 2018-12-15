/*******************************************************************************
* File Name: ResetPWM.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_ResetPWM_ALIASES_H) /* Pins ResetPWM_ALIASES_H */
#define CY_PINS_ResetPWM_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define ResetPWM_0			(ResetPWM__0__PC)
#define ResetPWM_0_INTR	((uint16)((uint16)0x0001u << ResetPWM__0__SHIFT))

#define ResetPWM_INTR_ALL	 ((uint16)(ResetPWM_0_INTR))

#endif /* End Pins ResetPWM_ALIASES_H */


/* [] END OF FILE */
