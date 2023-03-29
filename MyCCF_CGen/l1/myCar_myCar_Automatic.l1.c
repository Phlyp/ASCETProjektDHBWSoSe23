/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_myCar_Automatic.l1.h"
#include "myCar_myCar_Automatic_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_myCar_Automatic_Obj* L1_myCar_myCar_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_myCar_Automatic_ClassHeader = {
	0, 0, 2, 1, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_myCar_Automatic_Class L1_myCar_myCar_Automatic_ClassObj = {{1, {&L1_myCar_myCar_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_myCar_myCar_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_myCar_myCar_Automatic (L1_myCar_myCar_Automatic_Class* _ASCET_class)
{
	_ASCET_class->mass = initInstance_scalarWrapper((uint32)&(myCar_myCar_mass_VAL), sizeof(float32), ASD_PARAMETER);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_myCar_Automatic_Obj* initInstance_L1_myCar_myCar_Automatic(void)
{
	struct L1_myCar_myCar_Automatic_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_myCar_myCar_Automatic) {
		initialized_myCar_myCar_Automatic = true;
		initClass_L1_myCar_myCar_Automatic(&(L1_myCar_myCar_Automatic_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_myCar_Automatic);
	L1_Instance->myDrive_instance = initInstance_L1_myCar_myDrive_Automatic(&(myDrive_instance_VAL));
	L1_Instance->g = initInstance_scalarWrapper((uint32)&(g_VAL), sizeof(float32), ASD_PARAMETER);
	L1_myCar_myCar_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
