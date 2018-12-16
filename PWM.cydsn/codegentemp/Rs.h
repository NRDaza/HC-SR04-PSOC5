/*******************************************************************************
* File Name: Rs.h  
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

#if !defined(CY_PINS_Rs_H) /* Pins Rs_H */
#define CY_PINS_Rs_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Rs_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Rs__PORT == 15 && ((Rs__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Rs_Write(uint8 value);
void    Rs_SetDriveMode(uint8 mode);
uint8   Rs_ReadDataReg(void);
uint8   Rs_Read(void);
void    Rs_SetInterruptMode(uint16 position, uint16 mode);
uint8   Rs_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Rs_SetDriveMode() function.
     *  @{
     */
        #define Rs_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Rs_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Rs_DM_RES_UP          PIN_DM_RES_UP
        #define Rs_DM_RES_DWN         PIN_DM_RES_DWN
        #define Rs_DM_OD_LO           PIN_DM_OD_LO
        #define Rs_DM_OD_HI           PIN_DM_OD_HI
        #define Rs_DM_STRONG          PIN_DM_STRONG
        #define Rs_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Rs_MASK               Rs__MASK
#define Rs_SHIFT              Rs__SHIFT
#define Rs_WIDTH              1u

/* Interrupt constants */
#if defined(Rs__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Rs_SetInterruptMode() function.
     *  @{
     */
        #define Rs_INTR_NONE      (uint16)(0x0000u)
        #define Rs_INTR_RISING    (uint16)(0x0001u)
        #define Rs_INTR_FALLING   (uint16)(0x0002u)
        #define Rs_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Rs_INTR_MASK      (0x01u) 
#endif /* (Rs__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Rs_PS                     (* (reg8 *) Rs__PS)
/* Data Register */
#define Rs_DR                     (* (reg8 *) Rs__DR)
/* Port Number */
#define Rs_PRT_NUM                (* (reg8 *) Rs__PRT) 
/* Connect to Analog Globals */                                                  
#define Rs_AG                     (* (reg8 *) Rs__AG)                       
/* Analog MUX bux enable */
#define Rs_AMUX                   (* (reg8 *) Rs__AMUX) 
/* Bidirectional Enable */                                                        
#define Rs_BIE                    (* (reg8 *) Rs__BIE)
/* Bit-mask for Aliased Register Access */
#define Rs_BIT_MASK               (* (reg8 *) Rs__BIT_MASK)
/* Bypass Enable */
#define Rs_BYP                    (* (reg8 *) Rs__BYP)
/* Port wide control signals */                                                   
#define Rs_CTL                    (* (reg8 *) Rs__CTL)
/* Drive Modes */
#define Rs_DM0                    (* (reg8 *) Rs__DM0) 
#define Rs_DM1                    (* (reg8 *) Rs__DM1)
#define Rs_DM2                    (* (reg8 *) Rs__DM2) 
/* Input Buffer Disable Override */
#define Rs_INP_DIS                (* (reg8 *) Rs__INP_DIS)
/* LCD Common or Segment Drive */
#define Rs_LCD_COM_SEG            (* (reg8 *) Rs__LCD_COM_SEG)
/* Enable Segment LCD */
#define Rs_LCD_EN                 (* (reg8 *) Rs__LCD_EN)
/* Slew Rate Control */
#define Rs_SLW                    (* (reg8 *) Rs__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Rs_PRTDSI__CAPS_SEL       (* (reg8 *) Rs__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Rs_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Rs__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Rs_PRTDSI__OE_SEL0        (* (reg8 *) Rs__PRTDSI__OE_SEL0) 
#define Rs_PRTDSI__OE_SEL1        (* (reg8 *) Rs__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Rs_PRTDSI__OUT_SEL0       (* (reg8 *) Rs__PRTDSI__OUT_SEL0) 
#define Rs_PRTDSI__OUT_SEL1       (* (reg8 *) Rs__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Rs_PRTDSI__SYNC_OUT       (* (reg8 *) Rs__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Rs__SIO_CFG)
    #define Rs_SIO_HYST_EN        (* (reg8 *) Rs__SIO_HYST_EN)
    #define Rs_SIO_REG_HIFREQ     (* (reg8 *) Rs__SIO_REG_HIFREQ)
    #define Rs_SIO_CFG            (* (reg8 *) Rs__SIO_CFG)
    #define Rs_SIO_DIFF           (* (reg8 *) Rs__SIO_DIFF)
#endif /* (Rs__SIO_CFG) */

/* Interrupt Registers */
#if defined(Rs__INTSTAT)
    #define Rs_INTSTAT            (* (reg8 *) Rs__INTSTAT)
    #define Rs_SNAP               (* (reg8 *) Rs__SNAP)
    
	#define Rs_0_INTTYPE_REG 		(* (reg8 *) Rs__0__INTTYPE)
#endif /* (Rs__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Rs_H */


/* [] END OF FILE */
