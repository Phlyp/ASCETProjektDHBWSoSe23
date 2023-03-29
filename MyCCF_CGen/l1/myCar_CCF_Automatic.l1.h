#ifndef ESDL_L1_MYCAR_CCF_AUTOMATIC
#define ESDL_L1_MYCAR_CCF_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_CCF_Automatic.h"
#include "myCar_TargetVelocity_Automatic.l1.h"
#include "SystemLib_Miscellaneous_EdgeRising_Impl.l1.h"
#include "SystemLib_Transferfunction_Control_PID_Impl.l1.h"
#include "myCar_SplitSignal_Automatic.l1.h"
#include "myCar_CCFState_Automatic.l1.h"
#include "SystemLib_Transferfunction_Control_PI_Impl.l1.h"

/* local variables object structure */
struct L1_myCar_CCF_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_myCar_CCFState_Automatic_Obj* CCFS;
	struct L1_SystemLib_Miscellaneous_EdgeRising_Impl_Obj* DecRising;
	struct L1_SystemLib_Miscellaneous_EdgeRising_Impl_Obj* IncRising;
	struct L1_SystemLib_Miscellaneous_EdgeRising_Impl_Obj* OnRising;
	struct L1_SystemLib_Transferfunction_Control_PID_Impl_Obj* PID_instance;
	struct L1_SystemLib_Transferfunction_Control_PI_Impl_Obj* PI_instance;
	struct L1_myCar_SplitSignal_Automatic_Obj* SplitSignal_instance;
	struct L1_myCar_TargetVelocity_Automatic_Obj* TVI;
	scalarWrapper_Obj* K;
	scalarWrapper_Obj* TN;
	scalarWrapper_Obj* TV;
	scalarWrapper_Obj* br;
	scalarWrapper_Obj* brake;
	scalarWrapper_Obj* c;
	scalarWrapper_Obj* ctl;
	scalarWrapper_Obj* mn;
	scalarWrapper_Obj* mx;
	scalarWrapper_Obj* power;
	scalarWrapper_Obj* useSilly;
	scalarWrapper_Obj* vs;
	scalarWrapper_Obj* vsoll;
	scalarWrapper_Obj* withRecup;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_myCar_CCF_Automatic_Class;

extern L1_myCar_CCF_Automatic_Class L1_myCar_CCF_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_myCar_CCF_Automatic_Obj* initInstance_L1_myCar_CCF_Automatic(void);

#endif /* ESDL_L1_MYCAR_CCF_AUTOMATIC */
