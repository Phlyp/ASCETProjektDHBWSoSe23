/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.TargetVelocity
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_TargetVelocity_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define dv_VAL (self->myCar_TargetVelocity_Automatic_CAL_MEM->dv)
#define mn_VAL (self->myCar_TargetVelocity_Automatic_CAL_MEM->mn)
#define mx_VAL (self->myCar_TargetVelocity_Automatic_CAL_MEM->mx)
#define v_VAL (self->myCar_TargetVelocity_Automatic_RAM->v)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_dec'
 * ----------------------------------------------------------------------------
 * model name:...................................'dec'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_TargetVelocity_Automatic_dec ( const struct myCar_TargetVelocity_Automatic * self)
{
   v_VAL = v_VAL - dv_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_dec'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_inc'
 * ----------------------------------------------------------------------------
 * model name:...................................'inc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_TargetVelocity_Automatic_inc ( const struct myCar_TargetVelocity_Automatic * self)
{
   v_VAL = v_VAL + dv_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_inc'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_reset'
 * ----------------------------------------------------------------------------
 * model name:...................................'reset'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_TargetVelocity_Automatic_reset (
               const struct myCar_TargetVelocity_Automatic * self,
   /* IN    */ const float32                                 arg
   )
{
   v_VAL = arg;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_reset'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_velocity'
 * ----------------------------------------------------------------------------
 * model name:...................................'velocity'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 myCar_TargetVelocity_Automatic_velocity ( const struct myCar_TargetVelocity_Automatic * self)
{
   /* temp. variables */
   float32 _t1real32;

   _t1real32 = ((v_VAL >= mn_VAL) ? v_VAL : mn_VAL);
   v_VAL = ((_t1real32 <= mx_VAL) ? _t1real32 : mx_VAL);
   return v_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_TargetVelocity_Automatic_velocity'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



