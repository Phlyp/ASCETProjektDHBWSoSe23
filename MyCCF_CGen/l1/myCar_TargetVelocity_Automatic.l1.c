/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_TargetVelocity_Automatic.l1.h"
#include "myCar_TargetVelocity_Automatic_private.h"
#include "myCar_CCF_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_TargetVelocity_Automatic_Obj* L1_myCar_TargetVelocity_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_TargetVelocity_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_TargetVelocity_Automatic_Class L1_myCar_TargetVelocity_Automatic_ClassObj = {{1, {&L1_myCar_TargetVelocity_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_TargetVelocity_Automatic_Obj* initInstance_L1_myCar_TargetVelocity_Automatic(const struct myCar_TargetVelocity_Automatic* self)
{
	struct L1_myCar_TargetVelocity_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_TargetVelocity_Automatic);
	L1_Instance->dv = initInstance_scalarWrapper((uint32)&(dv_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->mn = initInstance_scalarWrapper((uint32)&(mn_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->mx = initInstance_scalarWrapper((uint32)&(mx_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->v = initInstance_scalarWrapper((uint32)&(v_VAL), sizeof(float32), ASD_VARIABLE);
	L1_myCar_TargetVelocity_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
