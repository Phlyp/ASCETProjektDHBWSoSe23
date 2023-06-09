/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................SystemLib.Nonlinears.Limiter
 * REPRESENTATION:..............Impl
 * DESCRIPTION:
 *    Limiter returns the input x limited by mn and mx.
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "SystemLib_Nonlinears_Limiter_Impl.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/





/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'SystemLib_Nonlinears_Limiter_Impl_value'
 * ----------------------------------------------------------------------------
 * model name:...................................'value'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float64 SystemLib_Nonlinears_Limiter_Impl_value (
   /* IN    */ const float64 mn,
   /* IN    */ const float64 x,
   /* IN    */ const float64 mx
   )
{
   /* temp. variables */
   float64 _t1real64;

   _t1real64 = ((x <= mx) ? x : mx);
   return ((_t1real64 >= mn) ? _t1real64 : mn);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'SystemLib_Nonlinears_Limiter_Impl_value'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



