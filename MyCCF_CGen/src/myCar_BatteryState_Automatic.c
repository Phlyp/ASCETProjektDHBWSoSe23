/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.BatteryState
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_BatteryState_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define battery_VAL (self->myCar_BatteryState_Automatic_RAM->battery)
#define noRecupPossible_VAL (self->myCar_BatteryState_Automatic_RAM->noRecupPossible)
#define powerInput_VAL (self->myCar_BatteryState_Automatic_RAM->powerInput)
#define powerOverride_VAL (self->myCar_BatteryState_Automatic_RAM->powerOverride)
#define recupMult_VAL (self->myCar_BatteryState_Automatic_RAM->recupMult)
#define sm_VAL (self->myCar_BatteryState_Automatic_RAM->sm)

/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define BatteryEmpty 1U
#define BatteryFull 2U
#define BatteryNormal 0U
#define crawlModeState 3U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_BatteryState_Automatic_batteryStateStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'batteryStateStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_BatteryState_Automatic_batteryStateStatemachineTrigger ( const struct myCar_BatteryState_Automatic * self)
{
   switch (sm_VAL)
   {
      case BatteryEmpty:
         powerOverride_VAL = 0.0F;
         break;
      case BatteryFull:
         if (battery_VAL < 1.0F)
         {
            sm_VAL = BatteryNormal;
            break;
         } /* end if */
         noRecupPossible_VAL = true;
         recupMult_VAL = 0.0F;
         powerOverride_VAL = powerInput_VAL;
         break;
      case crawlModeState:
         if (battery_VAL == 0.0F)
         {
            sm_VAL = BatteryEmpty;
            break;
         } /* end if */
         if (battery_VAL > 0.0011F)
         {
            sm_VAL = BatteryNormal;
            break;
         } /* end if */
         powerOverride_VAL = powerInput_VAL * 0.055F;
         break;
      case BatteryNormal:
      default:
         if (battery_VAL >= 1.0F)
         {
            sm_VAL = BatteryFull;
            break;
         } /* end if */
         if (battery_VAL < 0.0011F)
         {
            sm_VAL = crawlModeState;
            break;
         } /* end if */
         noRecupPossible_VAL = false;
         recupMult_VAL = 1.0F;
         powerOverride_VAL = powerInput_VAL;
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_BatteryState_Automatic_batteryStateStatemachineTrigger'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_BatteryState_Automatic_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 myCar_BatteryState_Automatic_esdl_getState ( const struct myCar_BatteryState_Automatic * self)
{
   return sm_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_BatteryState_Automatic_esdl_getState'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



