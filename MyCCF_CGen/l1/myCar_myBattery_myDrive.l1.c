/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_myBattery_myDrive.l1.h"
#include "myCar_myBattery_myDrive_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_myBattery_myDrive_Obj* L1_myCar_myBattery_myDriveInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_myBattery_myDrive_ClassHeader = {
	0, 0, 5, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_myBattery_myDrive_Class L1_myCar_myBattery_myDrive_ClassObj = {{1, {&L1_myCar_myBattery_myDrive_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_myBattery_myDrive_Obj* initInstance_L1_myCar_myBattery_myDrive(const struct myCar_myBattery_myDrive* self)
{
	struct L1_myCar_myBattery_myDrive_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_myBattery_myDrive);
	L1_Instance->battery = initInstance_scalarWrapper((uint32)&(battery_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->e_kwh = initInstance_scalarWrapper((uint32)&(e_kwh_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->energy = initInstance_scalarWrapper((uint32)&(energy_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->force = initInstance_scalarWrapper((uint32)&(force_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->mass = initInstance_scalarWrapper((uint32)&(mass_VAL), sizeof(float32), ASD_PARAMETER);
	L1_myCar_myBattery_myDriveInstance = L1_Instance;
	return L1_Instance;
}
