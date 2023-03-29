/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.myBattery
 * REPRESENTATION:..............myDrive
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_MYCAR_MYBATTERY_MYDRIVE_H_
#define _ASD_MYCAR_MYBATTERY_MYDRIVE_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct myCar_myBattery_myDrive_CAL_MEM_SUBSTRUCT {
   float32 mass;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct myCar_myBattery_myDrive_RAM_SUBSTRUCT {
   float32 battery;
   float32 e_kwh;
   float32 energy;
   float32 force;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct myCar_myBattery_myDrive {
   struct myCar_myBattery_myDrive_CAL_MEM_SUBSTRUCT * myCar_myBattery_myDrive_CAL_MEM;
   struct myCar_myBattery_myDrive_RAM_SUBSTRUCT * myCar_myBattery_myDrive_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'myCar_myBattery_myDrive'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ....................myCar_myBattery_myDrive */
#define _myCar_myBattery_myDrive_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class myCar_myBattery_myDrive
 ******************************************************************************/
extern float32 myCar_myBattery_myDrive_get_battery (
               const struct myCar_myBattery_myDrive * self,
   /* IN    */ const float32                          momentum,
   /* IN    */ const float32                          ds
   );



#endif /* _ASD_MYCAR_MYBATTERY_MYDRIVE_H_ */
