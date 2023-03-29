#ifndef ESDL_L1_MYCAR_TARGETVELOCITY_AUTOMATIC
#define ESDL_L1_MYCAR_TARGETVELOCITY_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_TargetVelocity_Automatic.h"

/* local variables object structure */
struct L1_myCar_TargetVelocity_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* dv;
	scalarWrapper_Obj* mn;
	scalarWrapper_Obj* mx;
	scalarWrapper_Obj* v;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_TargetVelocity_Automatic_Class;

extern L1_myCar_TargetVelocity_Automatic_Class L1_myCar_TargetVelocity_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_TargetVelocity_Automatic_Obj* initInstance_L1_myCar_TargetVelocity_Automatic(const struct myCar_TargetVelocity_Automatic* self);

#endif /* ESDL_L1_MYCAR_TARGETVELOCITY_AUTOMATIC */
