/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_BatteryState_Automatic.l1.h"
#include "myCar_BatteryState_Automatic_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_BatteryState_Automatic_Obj* L1_myCar_BatteryState_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_BatteryState_Automatic_ClassHeader = {
	0, 0, 6, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_BatteryState_Automatic_Class L1_myCar_BatteryState_Automatic_ClassObj = {{1, {&L1_myCar_BatteryState_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_BatteryState_Automatic_Obj* initInstance_L1_myCar_BatteryState_Automatic(const struct myCar_BatteryState_Automatic* self)
{
	struct L1_myCar_BatteryState_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_BatteryState_Automatic);
	L1_Instance->battery = initInstance_scalarWrapper((uint32)&(battery_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->noRecupPossible = initInstance_scalarWrapper((uint32)&(noRecupPossible_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->powerInput = initInstance_scalarWrapper((uint32)&(powerInput_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->powerOverride = initInstance_scalarWrapper((uint32)&(powerOverride_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->recupMult = initInstance_scalarWrapper((uint32)&(recupMult_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->sm = initInstance_scalarWrapper((uint32)&(sm_VAL), sizeof(uint8), ASD_VARIABLE);
	L1_myCar_BatteryState_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
