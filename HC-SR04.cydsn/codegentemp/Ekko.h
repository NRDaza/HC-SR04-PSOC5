/*******************************************************************************
* File Name: Ekko.h  
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

#if !defined(CY_PINS_Ekko_H) /* Pins Ekko_H */
#define CY_PINS_Ekko_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Ekko_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Ekko__PORT == 15 && ((Ekko__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Ekko_Write(uint8 value);
void    Ekko_SetDriveMode(uint8 mode);
uint8   Ekko_ReadDataReg(void);
uint8   Ekko_Read(void);
void    Ekko_SetInterruptMode(uint16 position, uint16 mode);
uint8   Ekko_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Ekko_SetDriveMode() function.
     *  @{
     */
        #define Ekko_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Ekko_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Ekko_DM_RES_UP          PIN_DM_RES_UP
        #define Ekko_DM_RES_DWN         PIN_DM_RES_DWN
        #define Ekko_DM_OD_LO           PIN_DM_OD_LO
        #define Ekko_DM_OD_HI           PIN_DM_OD_HI
        #define Ekko_DM_STRONG          PIN_DM_STRONG
        #define Ekko_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Ekko_MASK               Ekko__MASK
#define Ekko_SHIFT              Ekko__SHIFT
#define Ekko_WIDTH              1u

/* Interrupt constants */
#if defined(Ekko__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Ekko_SetInterruptMode() function.
     *  @{
     */
        #define Ekko_INTR_NONE      (uint16)(0x0000u)
        #define Ekko_INTR_RISING    (uint16)(0x0001u)
        #define Ekko_INTR_FALLING   (uint16)(0x0002u)
        #define Ekko_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Ekko_INTR_MASK      (0x01u) 
#endif /* (Ekko__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Ekko_PS                     (* (reg8 *) Ekko__PS)
/* Data Register */
#define Ekko_DR                     (* (reg8 *) Ekko__DR)
/* Port Number */
#define Ekko_PRT_NUM                (* (reg8 *) Ekko__PRT) 
/* Connect to Analog Globals */                                                  
#define Ekko_AG                     (* (reg8 *) Ekko__AG)                       
/* Analog MUX bux enable */
#define Ekko_AMUX                   (* (reg8 *) Ekko__AMUX) 
/* Bidirectional Enable */                                                        
#define Ekko_BIE                    (* (reg8 *) Ekko__BIE)
/* Bit-mask for Aliased Register Access */
#define Ekko_BIT_MASK               (* (reg8 *) Ekko__BIT_MASK)
/* Bypass Enable */
#define Ekko_BYP                    (* (reg8 *) Ekko__BYP)
/* Port wide control signals */                                                   
#define Ekko_CTL                    (* (reg8 *) Ekko__CTL)
/* Drive Modes */
#define Ekko_DM0                    (* (reg8 *) Ekko__DM0) 
#define Ekko_DM1                    (* (reg8 *) Ekko__DM1)
#define Ekko_DM2                    (* (reg8 *) Ekko__DM2) 
/* Input Buffer Disable Override */
#define Ekko_INP_DIS                (* (reg8 *) Ekko__INP_DIS)
/* LCD Common or Segment Drive */
#define Ekko_LCD_COM_SEG            (* (reg8 *) Ekko__LCD_COM_SEG)
/* Enable Segment LCD */
#define Ekko_LCD_EN                 (* (reg8 *) Ekko__LCD_EN)
/* Slew Rate Control */
#define Ekko_SLW                    (* (reg8 *) Ekko__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Ekko_PRTDSI__CAPS_SEL       (* (reg8 *) Ekko__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Ekko_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Ekko__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Ekko_PRTDSI__OE_SEL0        (* (reg8 *) Ekko__PRTDSI__OE_SEL0) 
#define Ekko_PRTDSI__OE_SEL1        (* (reg8 *) Ekko__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Ekko_PRTDSI__OUT_SEL0       (* (reg8 *) Ekko__PRTDSI__OUT_SEL0) 
#define Ekko_PRTDSI__OUT_SEL1       (* (reg8 *) Ekko__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Ekko_PRTDSI__SYNC_OUT       (* (reg8 *) Ekko__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Ekko__SIO_CFG)
    #define Ekko_SIO_HYST_EN        (* (reg8 *) Ekko__SIO_HYST_EN)
    #define Ekko_SIO_REG_HIFREQ     (* (reg8 *) Ekko__SIO_REG_HIFREQ)
    #define Ekko_SIO_CFG            (* (reg8 *) Ekko__SIO_CFG)
    #define Ekko_SIO_DIFF           (* (reg8 *) Ekko__SIO_DIFF)
#endif /* (Ekko__SIO_CFG) */

/* Interrupt Registers */
#if defined(Ekko__INTSTAT)
    #define Ekko_INTSTAT            (* (reg8 *) Ekko__INTSTAT)
    #define Ekko_SNAP               (* (reg8 *) Ekko__SNAP)
    
	#define Ekko_0_INTTYPE_REG 		(* (reg8 *) Ekko__0__INTTYPE)
#endif /* (Ekko__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Ekko_H */


/* [] END OF FILE */
