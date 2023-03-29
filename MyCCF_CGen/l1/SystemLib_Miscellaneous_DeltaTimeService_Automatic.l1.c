/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic.l1.h"
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic_private.h"
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj* L1_SystemLib_Miscellaneous_DeltaTimeService_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_ClassHeader = {
	0, 0, 0, 1, &_ObjectMethodList, &_ClassMethodList
};
L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Class L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_ClassObj = {{1, {&L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_SystemLib_Miscellaneous_DeltaTimeService_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic (L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Class* _ASCET_class)
{
	_ASCET_class->deltaT = initInstance_scalarWrapper((uint32)&(SystemLib_Miscellaneous_DeltaTimeService_deltaT_VAL), sizeof(float32), ASD_VARIABLE);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj* initInstance_L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic(void)
{
	struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_SystemLib_Miscellaneous_DeltaTimeService_Automatic) {
		initialized_SystemLib_Miscellaneous_DeltaTimeService_Automatic = true;
		initClass_L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic(&(L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic);
	L1_SystemLib_Miscellaneous_DeltaTimeService_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
