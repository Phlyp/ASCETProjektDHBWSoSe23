/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.CCF
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "myCar_CCF_Automatic.h"
#include "resources_CarMessages_Automatic.h"
#include "resources_DriverMessages_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_CCF_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'myCar_CCF'
 * data set:.....................................'MYCAR_CCF_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct myCar_CCF_Automatic_CAL_MEM_SUBSTRUCT myCar_CCF_CAL_MEM = {
   /* struct element:'myCar_CCF_CAL_MEM.K' (modeled as:'K.myCar_CCF') */
   -45.5F,
   /* struct element:'myCar_CCF_CAL_MEM.TN' (modeled as:'TN.myCar_CCF') */
   5.9F,
   /* struct element:'myCar_CCF_CAL_MEM.TV' (modeled as:'TV.myCar_CCF') */
   0.01F,
   /* struct element:'myCar_CCF_CAL_MEM.brake' (modeled as:'brake.myCar_CCF') */
   -30.0F,
   /* struct element:'myCar_CCF_CAL_MEM.c' (modeled as:'c.myCar_CCF') */
   0.0F,
   /* struct element:'myCar_CCF_CAL_MEM.mn' (modeled as:'mn.myCar_CCF') */
   -100.0F,
   /* struct element:'myCar_CCF_CAL_MEM.mx' (modeled as:'mx.myCar_CCF') */
   100.0F,
   /* struct element:'myCar_CCF_CAL_MEM.power' (modeled as:'power.myCar_CCF') */
   50.0F,
   /* struct element:'myCar_CCF_CAL_MEM.vs' (modeled as:'vs.myCar_CCF') */
   70.0F,
   /* struct element:'myCar_CCF_CAL_MEM.useSilly' (modeled as:'useSilly.myCar_CCF') */
   true,
   /* struct element:'myCar_CCF_CAL_MEM.withRecup' (modeled as:'withRecup.myCar_CCF') */
   true,
   /* substruct: myCar_CCF_CAL_MEM.TVI (modeled as:'TVI.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_CAL_MEM.TVI.dv' (modeled as:'dv.TVI.myCar_CCF') */
      5.0F,
      /* struct element:'myCar_CCF_CAL_MEM.TVI.mn' (modeled as:'mn.TVI.myCar_CCF') */
      30.0F,
      /* struct element:'myCar_CCF_CAL_MEM.TVI.mx' (modeled as:'mx.TVI.myCar_CCF') */
      100.0F
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_CCF_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_CCF_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'myCar_CCF'
 * data set:.....................................'MYCAR_CCF_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct myCar_CCF_Automatic_RAM_SUBSTRUCT myCar_CCF_RAM = {
   /* struct element:'myCar_CCF_RAM.br' (modeled as:'br.myCar_CCF') */
   0.0F,
   /* struct element:'myCar_CCF_RAM.ctl' (modeled as:'ctl.myCar_CCF') */
   0.0F,
   /* struct element:'myCar_CCF_RAM.vsoll' (modeled as:'vsoll.myCar_CCF') */
   0.0F,
   /* substruct: myCar_CCF_RAM.CCFS (modeled as:'CCFS.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.CCFS.br' (modeled as:'br.CCFS.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.CCFS.bra' (modeled as:'bra.CCFS.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.CCFS.ctrl' (modeled as:'ctrl.CCFS.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.CCFS.pow' (modeled as:'pow.CCFS.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.CCFS.pw' (modeled as:'pw.CCFS.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.CCFS.act' (modeled as:'act.CCFS.myCar_CCF') */
      false,
      /* struct element:'myCar_CCF_RAM.CCFS.on' (modeled as:'on.CCFS.myCar_CCF') */
      false,
      /* struct element:'myCar_CCF_RAM.CCFS.sm' (modeled as:'sm.CCFS.myCar_CCF') */
      0U
   },
   /* substruct: myCar_CCF_RAM.DecRising (modeled as:'DecRising.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.DecRising.buffer' (modeled as:'buffer.DecRising.myCar_CCF') */
      false,
      /* struct element:'myCar_CCF_RAM.DecRising.oldSignal' (modeled as:'oldSignal.DecRising.myCar_CCF') */
      true
   },
   /* substruct: myCar_CCF_RAM.IncRising (modeled as:'IncRising.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.IncRising.buffer' (modeled as:'buffer.IncRising.myCar_CCF') */
      false,
      /* struct element:'myCar_CCF_RAM.IncRising.oldSignal' (modeled as:'oldSignal.IncRising.myCar_CCF') */
      true
   },
   /* substruct: myCar_CCF_RAM.OnRising (modeled as:'OnRising.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.OnRising.buffer' (modeled as:'buffer.OnRising.myCar_CCF') */
      false,
      /* struct element:'myCar_CCF_RAM.OnRising.oldSignal' (modeled as:'oldSignal.OnRising.myCar_CCF') */
      true
   },
   /* substruct: myCar_CCF_RAM.PID_instance (modeled as:'PID_instance.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.PID_instance.inOLD' (modeled as:'inOLD.PID_instance.myCar_CCF') */
      0.0,
      /* struct element:'myCar_CCF_RAM.PID_instance.memory1' (modeled as:'memory1.PID_instance.myCar_CCF') */
      0.0,
      /* struct element:'myCar_CCF_RAM.PID_instance.memory2' (modeled as:'memory2.PID_instance.myCar_CCF') */
      0.0
   },
   /* substruct: myCar_CCF_RAM.PI_instance (modeled as:'PI_instance.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.PI_instance.memory1' (modeled as:'memory1.PI_instance.myCar_CCF') */
      0.0,
      /* struct element:'myCar_CCF_RAM.PI_instance.memory2' (modeled as:'memory2.PI_instance.myCar_CCF') */
      0.0
   },
   /* substruct: myCar_CCF_RAM.SplitSignal_instance (modeled as:'SplitSignal_instance.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.SplitSignal_instance.minus' (modeled as:'minus.SplitSignal_instance.myCar_CCF') */
      0.0F,
      /* struct element:'myCar_CCF_RAM.SplitSignal_instance.plus' (modeled as:'plus.SplitSignal_instance.myCar_CCF') */
      0.0F
   },
   /* substruct: myCar_CCF_RAM.TVI (modeled as:'TVI.myCar_CCF') */
   {
      /* struct element:'myCar_CCF_RAM.TVI.v' (modeled as:'v.TVI.myCar_CCF') */
      0.0F
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_CCF_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'myCar_CCF'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'myCar_CCF'
 * data set:.....................................'MYCAR_CCF_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct myCar_CCF_Automatic myCar_CCF = {
   /* substruct: myCar_CCF.CCFS (modeled as:'CCFS.myCar_CCF') */
   {
      /* type descriptor pointer 'myCar_CCFState_Automatic_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.CCFS
   },
   /* substruct: myCar_CCF.DecRising (modeled as:'DecRising.myCar_CCF') */
   {
      /* type descriptor pointer 'SystemLib_Miscellaneous_EdgeRising_Impl_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.DecRising
   },
   /* substruct: myCar_CCF.IncRising (modeled as:'IncRising.myCar_CCF') */
   {
      /* type descriptor pointer 'SystemLib_Miscellaneous_EdgeRising_Impl_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.IncRising
   },
   /* substruct: myCar_CCF.OnRising (modeled as:'OnRising.myCar_CCF') */
   {
      /* type descriptor pointer 'SystemLib_Miscellaneous_EdgeRising_Impl_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.OnRising
   },
   /* substruct: myCar_CCF.PID_instance (modeled as:'PID_instance.myCar_CCF') */
   {
      /* type descriptor pointer 'SystemLib_Transferfunction_Control_PID_Impl_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.PID_instance
   },
   /* substruct: myCar_CCF.PI_instance (modeled as:'PI_instance.myCar_CCF') */
   {
      /* type descriptor pointer 'SystemLib_Transferfunction_Control_PI_Impl_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.PI_instance
   },
   /* substruct: myCar_CCF.SplitSignal_instance (modeled as:'SplitSignal_instance.myCar_CCF') */
   {
      /* type descriptor pointer 'myCar_SplitSignal_Automatic_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.SplitSignal_instance
   },
   /* substruct: myCar_CCF.TVI (modeled as:'TVI.myCar_CCF') */
   {
      /* type descriptor pointer 'myCar_TargetVelocity_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &myCar_CCF_CAL_MEM.TVI,
      /* type descriptor pointer 'myCar_TargetVelocity_Automatic_RAM' for memory class substruct for 'RAM' */
      &myCar_CCF_RAM.TVI
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'myCar_CCF'
 ******************************************************************************/





#define brake_VAL (myCar_CCF_CAL_MEM.brake)
#define CCFS_REF (&(myCar_CCF.CCFS))
#define ctl_VAL (myCar_CCF_RAM.ctl)
#define DecRising_REF (&(myCar_CCF.DecRising))
#define IncRising_REF (&(myCar_CCF.IncRising))
#define K_VAL (myCar_CCF_CAL_MEM.K)
#define OnRising_REF (&(myCar_CCF.OnRising))
#define PI_instance_REF (&(myCar_CCF.PI_instance))
#define power_VAL (myCar_CCF_CAL_MEM.power)
#define TN_VAL (myCar_CCF_CAL_MEM.TN)
#define TVI_REF (&(myCar_CCF.TVI))
#define useSilly_VAL (myCar_CCF_CAL_MEM.useSilly)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'myCar_CCF_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void myCar_CCF_Automatic_calc (void)
{
   /* temp. variables */
   float32 _t1real32;
   float64 _t1real64;

   /* define local message copies */
   float32 resources_CarMessages_power__myCar_CCF_Automatic_calc;
   float32 resources_CarMessages_recuperation__myCar_CCF_Automatic_calc;
   uint16 resources_CarMessages_v__myCar_CCF_Automatic_calc;
   float32 resources_DriverMessages_brake__myCar_CCF_Automatic_calc;
   boolean resources_DriverMessages_decrement__myCar_CCF_Automatic_calc;
   boolean resources_DriverMessages_display__myCar_CCF_Automatic_calc;
   boolean resources_DriverMessages_increment__myCar_CCF_Automatic_calc;
   boolean resources_DriverMessages_on__myCar_CCF_Automatic_calc;
   float32 resources_DriverMessages_power__myCar_CCF_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      resources_CarMessages_power__myCar_CCF_Automatic_calc = resources_CarMessages_power;
      resources_CarMessages_recuperation__myCar_CCF_Automatic_calc = resources_CarMessages_recuperation;
      resources_CarMessages_v__myCar_CCF_Automatic_calc = resources_CarMessages_v;
      resources_DriverMessages_brake__myCar_CCF_Automatic_calc = resources_DriverMessages_brake;
      resources_DriverMessages_decrement__myCar_CCF_Automatic_calc = resources_DriverMessages_decrement;
      resources_DriverMessages_display__myCar_CCF_Automatic_calc = resources_DriverMessages_display;
      resources_DriverMessages_increment__myCar_CCF_Automatic_calc = resources_DriverMessages_increment;
      resources_DriverMessages_on__myCar_CCF_Automatic_calc = resources_DriverMessages_on;
      resources_DriverMessages_power__myCar_CCF_Automatic_calc = resources_DriverMessages_power;
      EnableAllInterrupts();
   }
   SystemLib_Miscellaneous_EdgeRising_Impl_compute(OnRising_REF, resources_DriverMessages_on__myCar_CCF_Automatic_calc);
   if (SystemLib_Miscellaneous_EdgeRising_Impl_value(OnRising_REF))
   {
      myCar_TargetVelocity_Automatic_reset(TVI_REF, (float32)resources_CarMessages_v__myCar_CCF_Automatic_calc * 0.01F);
   } /* end if */
   SystemLib_Miscellaneous_EdgeRising_Impl_compute(IncRising_REF, resources_DriverMessages_increment__myCar_CCF_Automatic_calc);
   SystemLib_Miscellaneous_EdgeRising_Impl_compute(DecRising_REF, resources_DriverMessages_decrement__myCar_CCF_Automatic_calc);
   if (SystemLib_Miscellaneous_EdgeRising_Impl_value(IncRising_REF))
   {
      myCar_TargetVelocity_Automatic_inc(TVI_REF);
   } /* end if */
   if (SystemLib_Miscellaneous_EdgeRising_Impl_value(DecRising_REF))
   {
      myCar_TargetVelocity_Automatic_dec(TVI_REF);
   } /* end if */
   if (((float32)resources_CarMessages_v__myCar_CCF_Automatic_calc * 0.01F) > myCar_TargetVelocity_Automatic_velocity(TVI_REF))
   {
      ctl_VAL = brake_VAL;
   }
   else
   {
      ctl_VAL = power_VAL;
   } /* end if */
   SystemLib_Transferfunction_Control_PI_Impl_compute(PI_instance_REF, ((float64)resources_CarMessages_v__myCar_CCF_Automatic_calc * 0.01) - myCar_TargetVelocity_Automatic_velocity(TVI_REF), (float64)K_VAL, (float64)TN_VAL);
   myCar_CCF_RAM.CCFS.act = SystemLib_Miscellaneous_EdgeRising_Impl_value(OnRising_REF);
   if (useSilly_VAL)
   {
      _t1real32 = ctl_VAL;
   }
   else
   {
      _t1real64
         = SystemLib_Transferfunction_Control_PI_Impl_value(PI_instance_REF);
      _t1real32
         = (((float32)_t1real64 >= -100.0F) ? ((((float32)_t1real64 <= 100.0F) ? (float32)_t1real64 : 100.0F)) : -100.0F);
   } /* end if */
   myCar_CCF_RAM.CCFS.ctrl = _t1real32;
   myCar_CCF_RAM.CCFS.pow = resources_DriverMessages_power__myCar_CCF_Automatic_calc;
   myCar_CCF_RAM.CCFS.bra = resources_DriverMessages_brake__myCar_CCF_Automatic_calc;
   myCar_CCFState_Automatic_cCFStateStatemachineTrigger(CCFS_REF);
   resources_CarMessages_power__myCar_CCF_Automatic_calc = myCar_CCF_RAM.CCFS.pw;
   resources_CarMessages_recuperation__myCar_CCF_Automatic_calc = myCar_CCF_RAM.CCFS.br;
   resources_DriverMessages_display__myCar_CCF_Automatic_calc = myCar_CCF_RAM.CCFS.on;
   /* send messages implicitly */
   {
      DisableAllInterrupts();
      resources_CarMessages_power = resources_CarMessages_power__myCar_CCF_Automatic_calc;
      resources_CarMessages_recuperation = resources_CarMessages_recuperation__myCar_CCF_Automatic_calc;
      resources_DriverMessages_display = resources_DriverMessages_display__myCar_CCF_Automatic_calc;
      EnableAllInterrupts();
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'myCar_CCF_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



