#ifndef ESDL_L1_MYCAR_SPLITSIGNAL_AUTOMATIC
#define ESDL_L1_MYCAR_SPLITSIGNAL_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_SplitSignal_Automatic.h"

/* local variables object structure */
struct L1_myCar_SplitSignal_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* minus;
	scalarWrapper_Obj* plus;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_SplitSignal_Automatic_Class;

extern L1_myCar_SplitSignal_Automatic_Class L1_myCar_SplitSignal_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_SplitSignal_Automatic_Obj* initInstance_L1_myCar_SplitSignal_Automatic(const struct myCar_SplitSignal_Automatic* self);

#endif /* ESDL_L1_MYCAR_SPLITSIGNAL_AUTOMATIC */
