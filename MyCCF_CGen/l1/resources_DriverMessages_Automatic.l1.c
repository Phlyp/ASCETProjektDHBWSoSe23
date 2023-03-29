/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "resources_DriverMessages_Automatic.l1.h"
#include "resources_DriverMessages_Automatic_private.h"
#include "resources_DriverMessages_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_resources_DriverMessages_Automatic_Obj* L1_resources_DriverMessages_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_resources_DriverMessages_Automatic_ClassHeader = {
	0, 0, 0, 6, &_ObjectMethodList, &_ClassMethodList
};
L1_resources_DriverMessages_Automatic_Class L1_resources_DriverMessages_Automatic_ClassObj = {{1, {&L1_resources_DriverMessages_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_resources_DriverMessages_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_resources_DriverMessages_Automatic (L1_resources_DriverMessages_Automatic_Class* _ASCET_class)
{
	_ASCET_class->brake = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_brake_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->decrement = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_decrement_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->display = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_display_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->increment = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_increment_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->on = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_on_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->power = initInstance_scalarWrapper((uint32)&(resources_DriverMessages_power_VAL), sizeof(float32), ASD_VARIABLE);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_resources_DriverMessages_Automatic_Obj* initInstance_L1_resources_DriverMessages_Automatic(void)
{
	struct L1_resources_DriverMessages_Automatic_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_resources_DriverMessages_Automatic) {
		initialized_resources_DriverMessages_Automatic = true;
		initClass_L1_resources_DriverMessages_Automatic(&(L1_resources_DriverMessages_Automatic_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_resources_DriverMessages_Automatic);
	L1_resources_DriverMessages_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
