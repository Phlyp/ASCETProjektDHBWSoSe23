/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................myCar.myDriveTest
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_MYCAR_MYDRIVETEST_AUTOMATIC_H_
#define _ASD_MYCAR_MYDRIVETEST_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "myCar_Logging_Automatic.h"
#include "myCar_myDrive_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDriveTest_Automatic_CAL_MEM_SUBSTRUCT {
   float32 move_brakeCtrl;
   float32 move_mydt;
   float32 move_myg;
   float32 move_powerCtrl;
   float32 move_recupCtrl;
   struct myCar_myDrive_Automatic_CAL_MEM_SUBSTRUCT tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDriveTest_Automatic_RAM_SUBSTRUCT {
   struct myCar_myDrive_Automatic_RAM_SUBSTRUCT tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct myCar_myDriveTest_Automatic {
   struct myCar_myDrive_Automatic tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'myCar_myDriveTest_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ................myCar_myDriveTest_Automatic */
#define _myCar_myDriveTest_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'myCar_myDriveTest_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern struct myCar_myDriveTest_Automatic_CAL_MEM_SUBSTRUCT myCar_myDriveTest_CAL_MEM;

/* forward declaration of substruct variable 'myCar_myDriveTest_RAM' */
/* containing 'RAM' memory class tree */
extern struct myCar_myDriveTest_Automatic_RAM_SUBSTRUCT myCar_myDriveTest_RAM;

/* forward declaration of component variable 'myCar_myDriveTest' */
/* containing 'ROM' memory class tree */
extern const struct myCar_myDriveTest_Automatic myCar_myDriveTest;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module myCar_myDriveTest_Automatic
 ******************************************************************************/
extern void myCar_myDriveTest_Automatic_testCrawlDistance (void);
extern void myCar_myDriveTest_Automatic_move (void);



#endif /* _ASD_MYCAR_MYDRIVETEST_AUTOMATIC_H_ */