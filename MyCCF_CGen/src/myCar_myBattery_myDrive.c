/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.myBattery
 * REPRESENTATION:..............myDrive
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_myBattery_myDrive.h"
#include "myCar_myCar_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define battery_VAL (self->myCar_myBattery_myDrive_RAM->battery)
#define e_kwh_VAL (self->myCar_myBattery_myDrive_RAM->e_kwh)
#define energy_VAL (self->myCar_myBattery_myDrive_RAM->energy)
#define force_VAL (self->myCar_myBattery_myDrive_RAM->force)
#define myCar_myCar_mass_VAL (myCar_myCar_mass)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_myBattery_myDrive_get_battery'
 * ----------------------------------------------------------------------------
 * model name:...................................'get_battery'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 myCar_myBattery_myDrive_get_battery (
               const struct myCar_myBattery_myDrive * self,
   /* IN    */ const float32                          momentum,
   /* IN    */ const float32                          ds
   )
{
   /* temp. variables */
   float32 _t1real32;

   force_VAL = myCar_myCar_mass_VAL * momentum;
   energy_VAL = force_VAL * ds;
   e_kwh_VAL = energy_VAL * 2.77777777777778e-7F;
   _t1real32 = battery_VAL - e_kwh_VAL;
   battery_VAL
      = ((_t1real32 >= 0.0F) ? (((_t1real32 <= 1.0F) ? _t1real32 : 1.0F)) : 0.0F);
   return battery_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_myBattery_myDrive_get_battery'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


