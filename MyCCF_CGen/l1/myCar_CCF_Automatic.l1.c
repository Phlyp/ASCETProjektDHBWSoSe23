/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_CCF_Automatic.l1.h"
#include "myCar_CCF_Automatic_private.h"
#include "myCar_CCF_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_CCF_Automatic_Obj* L1_myCar_CCF_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_CCF_Automatic_ClassHeader = {
	0, 0, 22, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_CCF_Automatic_Class L1_myCar_CCF_Automatic_ClassObj = {{1, {&L1_myCar_CCF_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_CCF_Automatic_Obj* initInstance_L1_myCar_CCF_Automatic(void)
{
	struct L1_myCar_CCF_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_CCF_Automatic);
	L1_Instance->CCFS = initInstance_L1_myCar_CCFState_Automatic(&(CCFS_VAL));
	L1_Instance->DecRising = initInstance_L1_SystemLib_Miscellaneous_EdgeRising_Impl(&(DecRising_VAL));
	L1_Instance->IncRising = initInstance_L1_SystemLib_Miscellaneous_EdgeRising_Impl(&(IncRising_VAL));
	L1_Instance->OnRising = initInstance_L1_SystemLib_Miscellaneous_EdgeRising_Impl(&(OnRising_VAL));
	L1_Instance->PID_instance = initInstance_L1_SystemLib_Transferfunction_Control_PID_Impl(&(PID_instance_VAL));
	L1_Instance->PI_instance = initInstance_L1_SystemLib_Transferfunction_Control_PI_Impl(&(PI_instance_VAL));
	L1_Instance->SplitSignal_instance = initInstance_L1_myCar_SplitSignal_Automatic(&(SplitSignal_instance_VAL));
	L1_Instance->TVI = initInstance_L1_myCar_TargetVelocity_Automatic(&(TVI_VAL));
	L1_Instance->K = initInstance_scalarWrapper((uint32)&(K_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->TN = initInstance_scalarWrapper((uint32)&(TN_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->TV = initInstance_scalarWrapper((uint32)&(TV_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->br = initInstance_scalarWrapper((uint32)&(br_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->brake = initInstance_scalarWrapper((uint32)&(brake_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->c = initInstance_scalarWrapper((uint32)&(c_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->ctl = initInstance_scalarWrapper((uint32)&(ctl_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->mn = initInstance_scalarWrapper((uint32)&(mn_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->mx = initInstance_scalarWrapper((uint32)&(mx_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->power = initInstance_scalarWrapper((uint32)&(power_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->useSilly = initInstance_scalarWrapper((uint32)&(useSilly_VAL), sizeof(boolean), ASD_PARAMETER);
	L1_Instance->vs = initInstance_scalarWrapper((uint32)&(vs_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->vsoll = initInstance_scalarWrapper((uint32)&(vsoll_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->withRecup = initInstance_scalarWrapper((uint32)&(withRecup_VAL), sizeof(boolean), ASD_PARAMETER);
	L1_myCar_CCF_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
