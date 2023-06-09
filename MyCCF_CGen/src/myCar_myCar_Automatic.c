/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.myCar
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

#include "myCar_myCar_Automatic.h"
#include "resources_CarMessages_Automatic.h"
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_myCar_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'myCar_myCar'
 * data set:.....................................'MYCAR_MYCAR_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct myCar_myCar_Automatic_CAL_MEM_SUBSTRUCT myCar_myCar_CAL_MEM = {
   /* struct element:'myCar_myCar_CAL_MEM.g' (modeled as:'g.myCar_myCar') */
   9.81F,
   /* substruct: myCar_myCar_CAL_MEM.myDrive_instance (modeled as:'myDrive_instance.myCar_myCar') */
   {
      /* substruct: myCar_myCar_CAL_MEM.myDrive_instance.BatteryManager_instance (modeled as:'BatteryManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* substruct: myCar_myCar_CAL_MEM.myDrive_instance.BatteryManager_instance.myBattery_instance (modeled as:'myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         {
            /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.BatteryManager_instance.myBattery_instance.mass' (modeled as:'mass.myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            1500.0F
         }
      },
      /* substruct: myCar_myCar_CAL_MEM.myDrive_instance.DistanceManager_instance (modeled as:'DistanceManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.DistanceManager_instance.TrackSize' (modeled as:'TrackSize.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         4413.58F,
         /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.DistanceManager_instance.Landscape' (modeled as:'Landscape.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         {
            20U,
            {
               0.0F, 100.0F, 145.569620253165F, 202.53164556962F, 221.518987341772F, 240.0F,
               259.493670886076F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 600.0F, 700.0F,
               750.0F, 800.0F, 820.0F, 850.0F, 900.0F, 1000.0F
            },
            {
               0.0F, 0.0F, 4.0F, 7.125F, 10.375F, 10.75F, 10.5F, 9.0F, 5.375F, 2.625F, 0.625F,
               1.25F, 0.625F, 0.0F, 0.0F, 1.375F, 1.1F, 0.75F, 0.625F, 0.0F
            }
         }
      },
      /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.AirFriction' (modeled as:'AirFriction.myDrive_instance.myCar_myCar') */
      {
         6U,
         {
            0.0F, 30.0F, 60.0F, 90.0F, 120.0F, 150.0F
         },
         {
            0.0F, -0.1F, -0.2F, -0.4F, -0.8F, -1.6F
         }
      },
      /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.BrakeMomentum' (modeled as:'BrakeMomentum.myDrive_instance.myCar_myCar') */
      {
         6U,
         {
            0.0F, 1.0F, 40.0F, 60.0F, 80.0F, 100.0F
         },
         {
            0.0F, 0.0F, -1.0F, -2.0F, -3.0F, -4.0F
         }
      },
      /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.EngineMomentum' (modeled as:'EngineMomentum.myDrive_instance.myCar_myCar') */
      {
         6U,
         6U,
         {
            0.0F, 5.0F, 20.0F, 60.126582278481F, 80.0F, 100.0F
         },
         {
            0.0F, 30.0F, 60.0F, 90.0F, 150.0F, 200.0F
         },
         {
            0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
            0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
            8.49999999999999e-1F, 0.6F, 0.3F, 0.0F, 0.0F, 0.0F,
            3.15F, 2.35F, 1.55F, 8.00000000000001e-1F, 3.99999999999999e-1F, 0.0F,
            4.5F, 3.6F, 2.7F, 1.5F, 0.9F, 0.0F,
            5.0F, 4.5F, 3.80000000000001F, 2.8F, 1.9F, 0.0F
         }
      },
      /* struct element:'myCar_myCar_CAL_MEM.myDrive_instance.cbrt' (modeled as:'cbrt.myDrive_instance.myCar_myCar') */
      {
         3U,
         {
            0.0F, 160.0F, 320.0F
         },
         {
            0.0F, -4.0F, -4.0F
         }
      }
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_myCar_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_myCar_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'myCar_myCar'
 * data set:.....................................'MYCAR_MYCAR_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct myCar_myCar_Automatic_RAM_SUBSTRUCT myCar_myCar_RAM = {
   /* substruct: myCar_myCar_RAM.myDrive_instance (modeled as:'myDrive_instance.myCar_myCar') */
   {
      /* struct element:'myCar_myCar_RAM.myDrive_instance.battery' (modeled as:'battery.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.dist' (modeled as:'dist.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.ds' (modeled as:'ds.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.momentum' (modeled as:'momentum.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.power' (modeled as:'power.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.recupMult' (modeled as:'recupMult.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.recup_momentum' (modeled as:'recup_momentum.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.totalDist' (modeled as:'totalDist.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.v' (modeled as:'v.myDrive_instance.myCar_myCar') */
      0.0F,
      /* struct element:'myCar_myCar_RAM.myDrive_instance.noRecupPossible' (modeled as:'noRecupPossible.myDrive_instance.myCar_myCar') */
      false,
      /* substruct: myCar_myCar_RAM.myDrive_instance.BatteryManager_instance (modeled as:'BatteryManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.battery' (modeled as:'battery.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.recupMult' (modeled as:'recupMult.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.noRecupPossible' (modeled as:'noRecupPossible.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         false,
         /* substruct: myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance (modeled as:'BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         {
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.battery' (modeled as:'battery.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.powerInput' (modeled as:'powerInput.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.powerOverride' (modeled as:'powerOverride.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.recupMult' (modeled as:'recupMult.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.noRecupPossible' (modeled as:'noRecupPossible.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            false,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance.sm' (modeled as:'sm.BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0U
         },
         /* substruct: myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance (modeled as:'myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         {
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance.battery' (modeled as:'battery.myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            1.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance.e_kwh' (modeled as:'e_kwh.myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance.energy' (modeled as:'energy.myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F,
            /* struct element:'myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance.force' (modeled as:'force.myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
            0.0F
         }
      },
      /* substruct: myCar_myCar_RAM.myDrive_instance.DistanceManager_instance (modeled as:'DistanceManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* struct element:'myCar_myCar_RAM.myDrive_instance.DistanceManager_instance.dh' (modeled as:'dh.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.DistanceManager_instance.dist' (modeled as:'dist.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.DistanceManager_instance.ds' (modeled as:'ds.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.DistanceManager_instance.h' (modeled as:'h.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         0.0F,
         /* struct element:'myCar_myCar_RAM.myDrive_instance.DistanceManager_instance.totalDist' (modeled as:'totalDist.DistanceManager_instance.myDrive_instance.myCar_myCar') */
         0.0F
      }
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'myCar_myCar_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'myCar_myCar'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'myCar_myCar'
 * data set:.....................................'MYCAR_MYCAR_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct myCar_myCar_Automatic myCar_myCar = {
   /* substruct: myCar_myCar.myDrive_instance (modeled as:'myDrive_instance.myCar_myCar') */
   {
      /* type descriptor pointer 'myCar_myDrive_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &myCar_myCar_CAL_MEM.myDrive_instance,
      /* type descriptor pointer 'myCar_myDrive_Automatic_RAM' for memory class substruct for 'RAM' */
      &myCar_myCar_RAM.myDrive_instance,
      /* substruct: myCar_myCar.myDrive_instance.BatteryManager_instance (modeled as:'BatteryManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* type descriptor pointer 'myCar_BatteryManager_Automatic_RAM' for memory class substruct for 'RAM' */
         &myCar_myCar_RAM.myDrive_instance.BatteryManager_instance,
         /* substruct: myCar_myCar.myDrive_instance.BatteryManager_instance.BatteryState_instance (modeled as:'BatteryState_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         {
            /* type descriptor pointer 'myCar_BatteryState_Automatic_RAM' for memory class substruct for 'RAM' */
            &myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.BatteryState_instance
         },
         /* substruct: myCar_myCar.myDrive_instance.BatteryManager_instance.myBattery_instance (modeled as:'myBattery_instance.BatteryManager_instance.myDrive_instance.myCar_myCar') */
         {
            /* type descriptor pointer 'myCar_myBattery_myDrive_CAL_MEM' for memory class substruct for 'CAL_MEM' */
            &myCar_myCar_CAL_MEM.myDrive_instance.BatteryManager_instance.myBattery_instance,
            /* type descriptor pointer 'myCar_myBattery_myDrive_RAM' for memory class substruct for 'RAM' */
            &myCar_myCar_RAM.myDrive_instance.BatteryManager_instance.myBattery_instance
         }
      },
      /* substruct: myCar_myCar.myDrive_instance.DistanceManager_instance (modeled as:'DistanceManager_instance.myDrive_instance.myCar_myCar') */
      {
         /* type descriptor pointer 'myCar_DistanceManager_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
         &myCar_myCar_CAL_MEM.myDrive_instance.DistanceManager_instance,
         /* type descriptor pointer 'myCar_DistanceManager_Automatic_RAM' for memory class substruct for 'RAM' */
         &myCar_myCar_RAM.myDrive_instance.DistanceManager_instance
      }
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'myCar_myCar'
 ******************************************************************************/





/******************************************************************************
 * BEGIN: DEFINITION OF VARIABLE 'myCar_myCar_mass'
 * ---------------------------------------------------------------------------*/
float32 myCar_myCar_mass = 1500.0F;
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF VARIABLE 'myCar_myCar_mass'
 ******************************************************************************/


#define g_VAL (myCar_myCar_CAL_MEM.g)
#define myDrive_instance_REF (&(myCar_myCar.myDrive_instance))
#define SystemLib_Miscellaneous_DeltaTimeService_deltaT_VAL (SystemLib_Miscellaneous_DeltaTimeService_deltaT)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'myCar_myCar_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void myCar_myCar_Automatic_calc (void)
{
   /* temp. variables */
   float32 _t1real32;

   /* define local message copies */
   float32 resources_CarMessages_brake__myCar_myCar_Automatic_calc;
   float32 resources_CarMessages_power__myCar_myCar_Automatic_calc;
   float32 resources_CarMessages_recuperation__myCar_myCar_Automatic_calc;
   uint16 resources_CarMessages_v__myCar_myCar_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      resources_CarMessages_brake__myCar_myCar_Automatic_calc = resources_CarMessages_brake;
      resources_CarMessages_power__myCar_myCar_Automatic_calc = resources_CarMessages_power;
      resources_CarMessages_recuperation__myCar_myCar_Automatic_calc = resources_CarMessages_recuperation;
      resources_CarMessages_v__myCar_myCar_Automatic_calc = resources_CarMessages_v;
      EnableAllInterrupts();
   }
   _t1real32
      = ((myCar_myCar_RAM.myDrive_instance.v >= 0.0F) ? (((myCar_myCar_RAM.myDrive_instance.v <= 200.0F) ? (myCar_myCar_RAM.myDrive_instance.v * 100.0F) : 20000.0F)) : 0.0F);
   _t1real32
      = ((_t1real32 < 0.0F) ? (_t1real32 - 0.5F) : (_t1real32 + 0.5F));
   resources_CarMessages_v__myCar_myCar_Automatic_calc
      = ((_t1real32 >= 0.0F) ? (((_t1real32 <= 20000.0F) ? (uint16)_t1real32 : 20000U)) : 0U);
   myCar_myDrive_Automatic_move(myDrive_instance_REF, resources_CarMessages_power__myCar_myCar_Automatic_calc, resources_CarMessages_brake__myCar_myCar_Automatic_calc, SystemLib_Miscellaneous_DeltaTimeService_deltaT_VAL, g_VAL * 1.01936799184506e-1F, resources_CarMessages_recuperation__myCar_myCar_Automatic_calc);
   /* send messages implicitly */
   {
      resources_CarMessages_v = resources_CarMessages_v__myCar_myCar_Automatic_calc;
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'myCar_myCar_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



