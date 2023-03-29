#ifndef ESDL_L1_MYCAR_CCFSTATE_AUTOMATIC
#define ESDL_L1_MYCAR_CCFSTATE_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_CCFState_Automatic.h"

/* local variables object structure */
struct L1_myCar_CCFState_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* act;
	scalarWrapper_Obj* br;
	scalarWrapper_Obj* bra;
	scalarWrapper_Obj* ctrl;
	scalarWrapper_Obj* on;
	scalarWrapper_Obj* pow;
	scalarWrapper_Obj* pw;
	scalarWrapper_Obj* sm;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_CCFState_Automatic_Class;

extern L1_myCar_CCFState_Automatic_Class L1_myCar_CCFState_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_CCFState_Automatic_Obj* initInstance_L1_myCar_CCFState_Automatic(const struct myCar_CCFState_Automatic* self);

#endif /* ESDL_L1_MYCAR_CCFSTATE_AUTOMATIC */
