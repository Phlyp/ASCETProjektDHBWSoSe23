#ifndef ESDL_L1_MYCAR_MYBATTERY_MYDRIVE
#define ESDL_L1_MYCAR_MYBATTERY_MYDRIVE
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myBattery_myDrive.h"

/* local variables object structure */
struct L1_myCar_myBattery_myDrive_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* battery;
	scalarWrapper_Obj* e_kwh;
	scalarWrapper_Obj* energy;
	scalarWrapper_Obj* force;
	scalarWrapper_Obj* mass;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_myBattery_myDrive_Class;

extern L1_myCar_myBattery_myDrive_Class L1_myCar_myBattery_myDrive_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_myBattery_myDrive_Obj* initInstance_L1_myCar_myBattery_myDrive(const struct myCar_myBattery_myDrive* self);

#endif /* ESDL_L1_MYCAR_MYBATTERY_MYDRIVE */
