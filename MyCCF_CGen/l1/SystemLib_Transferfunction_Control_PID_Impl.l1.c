/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "SystemLib_Transferfunction_Control_PID_Impl.l1.h"
#include "SystemLib_Transferfunction_Control_PID_Impl_private.h"
#include "myCar_CCF_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_SystemLib_Transferfunction_Control_PID_Impl_Obj* L1_SystemLib_Transferfunction_Control_PID_ImplInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_SystemLib_Transferfunction_Control_PID_Impl_ClassHeader = {
	0, 0, 3, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_SystemLib_Transferfunction_Control_PID_Impl_Class L1_SystemLib_Transferfunction_Control_PID_Impl_ClassObj = {{1, {&L1_SystemLib_Transferfunction_Control_PID_Impl_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_SystemLib_Transferfunction_Control_PID_Impl_Obj* initInstance_L1_SystemLib_Transferfunction_Control_PID_Impl(const struct SystemLib_Transferfunction_Control_PID_Impl* self)
{
	struct L1_SystemLib_Transferfunction_Control_PID_Impl_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_SystemLib_Transferfunction_Control_PID_Impl);
	L1_Instance->inOLD = initInstance_scalarWrapper((uint32)&(inOLD_VAL), sizeof(float64), ASD_VARIABLE);
	L1_Instance->memory1 = initInstance_scalarWrapper((uint32)&(memory1_VAL), sizeof(float64), ASD_VARIABLE);
	L1_Instance->memory2 = initInstance_scalarWrapper((uint32)&(memory2_VAL), sizeof(float64), ASD_VARIABLE);
	L1_SystemLib_Transferfunction_Control_PID_ImplInstance = L1_Instance;
	return L1_Instance;
}
