/*******************************************************************************
* File Name: ResetPWM.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_ResetPWM_H) /* Pins ResetPWM_H */
#define CY_PINS_ResetPWM_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ResetPWM_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ResetPWM__PORT == 15 && ((ResetPWM__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ResetPWM_Write(uint8 value);
void    ResetPWM_SetDriveMode(uint8 mode);
uint8   ResetPWM_ReadDataReg(void);
uint8   ResetPWM_Read(void);
void    ResetPWM_SetInterruptMode(uint16 position, uint16 mode);
uint8   ResetPWM_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ResetPWM_SetDriveMode() function.
     *  @{
     */
        #define ResetPWM_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ResetPWM_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ResetPWM_DM_RES_UP          PIN_DM_RES_UP
        #define ResetPWM_DM_RES_DWN         PIN_DM_RES_DWN
        #define ResetPWM_DM_OD_LO           PIN_DM_OD_LO
        #define ResetPWM_DM_OD_HI           PIN_DM_OD_HI
        #define ResetPWM_DM_STRONG          PIN_DM_STRONG
        #define ResetPWM_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ResetPWM_MASK               ResetPWM__MASK
#define ResetPWM_SHIFT              ResetPWM__SHIFT
#define ResetPWM_WIDTH              1u

/* Interrupt constants */
#if defined(ResetPWM__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ResetPWM_SetInterruptMode() function.
     *  @{
     */
        #define ResetPWM_INTR_NONE      (uint16)(0x0000u)
        #define ResetPWM_INTR_RISING    (uint16)(0x0001u)
        #define ResetPWM_INTR_FALLING   (uint16)(0x0002u)
        #define ResetPWM_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ResetPWM_INTR_MASK      (0x01u) 
#endif /* (ResetPWM__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ResetPWM_PS                     (* (reg8 *) ResetPWM__PS)
/* Data Register */
#define ResetPWM_DR                     (* (reg8 *) ResetPWM__DR)
/* Port Number */
#define ResetPWM_PRT_NUM                (* (reg8 *) ResetPWM__PRT) 
/* Connect to Analog Globals */                                                  
#define ResetPWM_AG                     (* (reg8 *) ResetPWM__AG)                       
/* Analog MUX bux enable */
#define ResetPWM_AMUX                   (* (reg8 *) ResetPWM__AMUX) 
/* Bidirectional Enable */                                                        
#define ResetPWM_BIE                    (* (reg8 *) ResetPWM__BIE)
/* Bit-mask for Aliased Register Access */
#define ResetPWM_BIT_MASK               (* (reg8 *) ResetPWM__BIT_MASK)
/* Bypass Enable */
#define ResetPWM_BYP                    (* (reg8 *) ResetPWM__BYP)
/* Port wide control signals */                                                   
#define ResetPWM_CTL                    (* (reg8 *) ResetPWM__CTL)
/* Drive Modes */
#define ResetPWM_DM0                    (* (reg8 *) ResetPWM__DM0) 
#define ResetPWM_DM1                    (* (reg8 *) ResetPWM__DM1)
#define ResetPWM_DM2                    (* (reg8 *) ResetPWM__DM2) 
/* Input Buffer Disable Override */
#define ResetPWM_INP_DIS                (* (reg8 *) ResetPWM__INP_DIS)
/* LCD Common or Segment Drive */
#define ResetPWM_LCD_COM_SEG            (* (reg8 *) ResetPWM__LCD_COM_SEG)
/* Enable Segment LCD */
#define ResetPWM_LCD_EN                 (* (reg8 *) ResetPWM__LCD_EN)
/* Slew Rate Control */
#define ResetPWM_SLW                    (* (reg8 *) ResetPWM__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ResetPWM_PRTDSI__CAPS_SEL       (* (reg8 *) ResetPWM__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ResetPWM_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ResetPWM__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ResetPWM_PRTDSI__OE_SEL0        (* (reg8 *) ResetPWM__PRTDSI__OE_SEL0) 
#define ResetPWM_PRTDSI__OE_SEL1        (* (reg8 *) ResetPWM__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ResetPWM_PRTDSI__OUT_SEL0       (* (reg8 *) ResetPWM__PRTDSI__OUT_SEL0) 
#define ResetPWM_PRTDSI__OUT_SEL1       (* (reg8 *) ResetPWM__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ResetPWM_PRTDSI__SYNC_OUT       (* (reg8 *) ResetPWM__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ResetPWM__SIO_CFG)
    #define ResetPWM_SIO_HYST_EN        (* (reg8 *) ResetPWM__SIO_HYST_EN)
    #define ResetPWM_SIO_REG_HIFREQ     (* (reg8 *) ResetPWM__SIO_REG_HIFREQ)
    #define ResetPWM_SIO_CFG            (* (reg8 *) ResetPWM__SIO_CFG)
    #define ResetPWM_SIO_DIFF           (* (reg8 *) ResetPWM__SIO_DIFF)
#endif /* (ResetPWM__SIO_CFG) */

/* Interrupt Registers */
#if defined(ResetPWM__INTSTAT)
    #define ResetPWM_INTSTAT            (* (reg8 *) ResetPWM__INTSTAT)
    #define ResetPWM_SNAP               (* (reg8 *) ResetPWM__SNAP)
    
	#define ResetPWM_0_INTTYPE_REG 		(* (reg8 *) ResetPWM__0__INTTYPE)
#endif /* (ResetPWM__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ResetPWM_H */


/* [] END OF FILE */
