#ifndef ESDL_L1_MYCAR_BATTERYSTATE_AUTOMATIC
#define ESDL_L1_MYCAR_BATTERYSTATE_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_BatteryState_Automatic.h"

/* local variables object structure */
struct L1_myCar_BatteryState_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* battery;
	scalarWrapper_Obj* noRecupPossible;
	scalarWrapper_Obj* powerInput;
	scalarWrapper_Obj* powerOverride;
	scalarWrapper_Obj* recupMult;
	scalarWrapper_Obj* sm;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_BatteryState_Automatic_Class;

extern L1_myCar_BatteryState_Automatic_Class L1_myCar_BatteryState_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_BatteryState_Automatic_Obj* initInstance_L1_myCar_BatteryState_Automatic(const struct myCar_BatteryState_Automatic* self);

#endif /* ESDL_L1_MYCAR_BATTERYSTATE_AUTOMATIC */
