/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_CCFState_Automatic.l1.h"
#include "myCar_CCFState_Automatic_private.h"
#include "myCar_CCF_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_CCFState_Automatic_Obj* L1_myCar_CCFState_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_CCFState_Automatic_ClassHeader = {
	0, 0, 8, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_CCFState_Automatic_Class L1_myCar_CCFState_Automatic_ClassObj = {{1, {&L1_myCar_CCFState_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_CCFState_Automatic_Obj* initInstance_L1_myCar_CCFState_Automatic(const struct myCar_CCFState_Automatic* self)
{
	struct L1_myCar_CCFState_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_CCFState_Automatic);
	L1_Instance->act = initInstance_scalarWrapper((uint32)&(act_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->br = initInstance_scalarWrapper((uint32)&(br_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->bra = initInstance_scalarWrapper((uint32)&(bra_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->ctrl = initInstance_scalarWrapper((uint32)&(ctrl_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->on = initInstance_scalarWrapper((uint32)&(on_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->pow = initInstance_scalarWrapper((uint32)&(pow_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->pw = initInstance_scalarWrapper((uint32)&(pw_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->sm = initInstance_scalarWrapper((uint32)&(sm_VAL), sizeof(uint8), ASD_VARIABLE);
	L1_myCar_CCFState_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
