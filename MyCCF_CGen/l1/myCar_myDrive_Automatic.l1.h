#ifndef ESDL_L1_MYCAR_MYDRIVE_AUTOMATIC
#define ESDL_L1_MYCAR_MYDRIVE_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myDrive_Automatic.h"
#include "myCar_DistanceManager_Automatic.l1.h"
#include "myCar_BatteryManager_Automatic.l1.h"

/* local variables object structure */
struct L1_myCar_myDrive_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_myCar_BatteryManager_Automatic_Obj* BatteryManager_instance;
	struct L1_myCar_DistanceManager_Automatic_Obj* DistanceManager_instance;
	charTable1Wrapper_Obj* AirFriction;
	charTable1Wrapper_Obj* BrakeMomentum;
	columnDirCharTable2Wrapper_Obj* EngineMomentum;
	scalarWrapper_Obj* battery;
	charTable1Wrapper_Obj* cbrt;
	scalarWrapper_Obj* dist;
	scalarWrapper_Obj* ds;
	scalarWrapper_Obj* momentum;
	scalarWrapper_Obj* noRecupPossible;
	scalarWrapper_Obj* power;
	scalarWrapper_Obj* recupMult;
	scalarWrapper_Obj* recup_momentum;
	scalarWrapper_Obj* totalDist;
	scalarWrapper_Obj* v;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_myDrive_Automatic_Class;

extern L1_myCar_myDrive_Automatic_Class L1_myCar_myDrive_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_myDrive_Automatic_Obj* initInstance_L1_myCar_myDrive_Automatic(const struct myCar_myDrive_Automatic* self);

#endif /* ESDL_L1_MYCAR_MYDRIVE_AUTOMATIC */
