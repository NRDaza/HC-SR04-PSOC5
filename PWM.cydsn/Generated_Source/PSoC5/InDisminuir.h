/*******************************************************************************
* File Name: InDisminuir.h  
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

#if !defined(CY_PINS_InDisminuir_H) /* Pins InDisminuir_H */
#define CY_PINS_InDisminuir_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "InDisminuir_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 InDisminuir__PORT == 15 && ((InDisminuir__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    InDisminuir_Write(uint8 value);
void    InDisminuir_SetDriveMode(uint8 mode);
uint8   InDisminuir_ReadDataReg(void);
uint8   InDisminuir_Read(void);
void    InDisminuir_SetInterruptMode(uint16 position, uint16 mode);
uint8   InDisminuir_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the InDisminuir_SetDriveMode() function.
     *  @{
     */
        #define InDisminuir_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define InDisminuir_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define InDisminuir_DM_RES_UP          PIN_DM_RES_UP
        #define InDisminuir_DM_RES_DWN         PIN_DM_RES_DWN
        #define InDisminuir_DM_OD_LO           PIN_DM_OD_LO
        #define InDisminuir_DM_OD_HI           PIN_DM_OD_HI
        #define InDisminuir_DM_STRONG          PIN_DM_STRONG
        #define InDisminuir_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define InDisminuir_MASK               InDisminuir__MASK
#define InDisminuir_SHIFT              InDisminuir__SHIFT
#define InDisminuir_WIDTH              1u

/* Interrupt constants */
#if defined(InDisminuir__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in InDisminuir_SetInterruptMode() function.
     *  @{
     */
        #define InDisminuir_INTR_NONE      (uint16)(0x0000u)
        #define InDisminuir_INTR_RISING    (uint16)(0x0001u)
        #define InDisminuir_INTR_FALLING   (uint16)(0x0002u)
        #define InDisminuir_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define InDisminuir_INTR_MASK      (0x01u) 
#endif /* (InDisminuir__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define InDisminuir_PS                     (* (reg8 *) InDisminuir__PS)
/* Data Register */
#define InDisminuir_DR                     (* (reg8 *) InDisminuir__DR)
/* Port Number */
#define InDisminuir_PRT_NUM                (* (reg8 *) InDisminuir__PRT) 
/* Connect to Analog Globals */                                                  
#define InDisminuir_AG                     (* (reg8 *) InDisminuir__AG)                       
/* Analog MUX bux enable */
#define InDisminuir_AMUX                   (* (reg8 *) InDisminuir__AMUX) 
/* Bidirectional Enable */                                                        
#define InDisminuir_BIE                    (* (reg8 *) InDisminuir__BIE)
/* Bit-mask for Aliased Register Access */
#define InDisminuir_BIT_MASK               (* (reg8 *) InDisminuir__BIT_MASK)
/* Bypass Enable */
#define InDisminuir_BYP                    (* (reg8 *) InDisminuir__BYP)
/* Port wide control signals */                                                   
#define InDisminuir_CTL                    (* (reg8 *) InDisminuir__CTL)
/* Drive Modes */
#define InDisminuir_DM0                    (* (reg8 *) InDisminuir__DM0) 
#define InDisminuir_DM1                    (* (reg8 *) InDisminuir__DM1)
#define InDisminuir_DM2                    (* (reg8 *) InDisminuir__DM2) 
/* Input Buffer Disable Override */
#define InDisminuir_INP_DIS                (* (reg8 *) InDisminuir__INP_DIS)
/* LCD Common or Segment Drive */
#define InDisminuir_LCD_COM_SEG            (* (reg8 *) InDisminuir__LCD_COM_SEG)
/* Enable Segment LCD */
#define InDisminuir_LCD_EN                 (* (reg8 *) InDisminuir__LCD_EN)
/* Slew Rate Control */
#define InDisminuir_SLW                    (* (reg8 *) InDisminuir__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define InDisminuir_PRTDSI__CAPS_SEL       (* (reg8 *) InDisminuir__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define InDisminuir_PRTDSI__DBL_SYNC_IN    (* (reg8 *) InDisminuir__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define InDisminuir_PRTDSI__OE_SEL0        (* (reg8 *) InDisminuir__PRTDSI__OE_SEL0) 
#define InDisminuir_PRTDSI__OE_SEL1        (* (reg8 *) InDisminuir__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define InDisminuir_PRTDSI__OUT_SEL0       (* (reg8 *) InDisminuir__PRTDSI__OUT_SEL0) 
#define InDisminuir_PRTDSI__OUT_SEL1       (* (reg8 *) InDisminuir__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define InDisminuir_PRTDSI__SYNC_OUT       (* (reg8 *) InDisminuir__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(InDisminuir__SIO_CFG)
    #define InDisminuir_SIO_HYST_EN        (* (reg8 *) InDisminuir__SIO_HYST_EN)
    #define InDisminuir_SIO_REG_HIFREQ     (* (reg8 *) InDisminuir__SIO_REG_HIFREQ)
    #define InDisminuir_SIO_CFG            (* (reg8 *) InDisminuir__SIO_CFG)
    #define InDisminuir_SIO_DIFF           (* (reg8 *) InDisminuir__SIO_DIFF)
#endif /* (InDisminuir__SIO_CFG) */

/* Interrupt Registers */
#if defined(InDisminuir__INTSTAT)
    #define InDisminuir_INTSTAT            (* (reg8 *) InDisminuir__INTSTAT)
    #define InDisminuir_SNAP               (* (reg8 *) InDisminuir__SNAP)
    
	#define InDisminuir_0_INTTYPE_REG 		(* (reg8 *) InDisminuir__0__INTTYPE)
#endif /* (InDisminuir__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_InDisminuir_H */


/* [] END OF FILE */
