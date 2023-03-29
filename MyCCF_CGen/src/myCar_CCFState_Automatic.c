/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.CCFState
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_CCFState_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define act_VAL (self->myCar_CCFState_Automatic_RAM->act)
#define br_VAL (self->myCar_CCFState_Automatic_RAM->br)
#define bra_VAL (self->myCar_CCFState_Automatic_RAM->bra)
#define ctrl_VAL (self->myCar_CCFState_Automatic_RAM->ctrl)
#define on_VAL (self->myCar_CCFState_Automatic_RAM->on)
#define pow_VAL (self->myCar_CCFState_Automatic_RAM->pow)
#define pw_VAL (self->myCar_CCFState_Automatic_RAM->pw)
#define sm_VAL (self->myCar_CCFState_Automatic_RAM->sm)

/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define Control 1U
#define PassThrough 0U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_CCFState_Automatic_cCFStateStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'cCFStateStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void myCar_CCFState_Automatic_cCFStateStatemachineTrigger ( const struct myCar_CCFState_Automatic * self)
{
   switch (sm_VAL)
   {
      case Control:
         if (bra_VAL > 0.0F)
         {
            on_VAL = false;
            sm_VAL = PassThrough;
            break;
         } /* end if */
         if (ctrl_VAL > 0.0F)
         {
            if (pow_VAL > 0.0F)
            {
               pw_VAL = pow_VAL;
            }
            else
            {
               pw_VAL = ctrl_VAL;
            } /* end if */
            br_VAL = 0.0F;
         }
         else
         {
            pw_VAL = 0.0F;
            br_VAL = -ctrl_VAL;
         } /* end if */
         break;
      case PassThrough:
      default:
         if (act_VAL)
         {
            on_VAL = true;
            sm_VAL = Control;
            break;
         } /* end if */
         pw_VAL = pow_VAL;
         br_VAL = bra_VAL;
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_CCFState_Automatic_cCFStateStatemachineTrigger'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'myCar_CCFState_Automatic_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 myCar_CCFState_Automatic_esdl_getState ( const struct myCar_CCFState_Automatic * self)
{
   return sm_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'myCar_CCFState_Automatic_esdl_getState'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



