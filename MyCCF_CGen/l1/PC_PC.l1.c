/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "PC_PC.l1.h"
#include "PC_PC.init.h"
#include "programId_PC_PC.h"

/* L1 protocol function to get program ID */
static uint8 *_L1_getPid (ASDObject *self, uint8 *_ASCET_data)
{
	uint8 defineFlag = true;
	uint32 pid = UNIQUE_PROGRAM_ID;
	addScalar (_ASCET_data, (uint8 *)&pid, sizeof(uint32));
	addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
	return (_ASCET_data);
}

/* L1 protocol function to non-volitile data ID */
static uint8 *_L1_getNVid(ASDObject *self, uint8 *_ASCET_data)
{
	uint8 defineFlag = true;
	uint32 nvid = 0;
	addScalar (_ASCET_data, (uint8 *)&nvid, sizeof(nvid));
	addScalar (_ASCET_data, (uint8 *)&defineFlag, sizeof(defineFlag));
	return (_ASCET_data);
}

static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	_L1_getPid,
	_L1_getNVid
};

/* for singleton components create an L1 instance here */
static struct L1_PC_PC_Obj* L1_PC_PCInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_PC_PC_ClassHeader = {
	0, 2, 0, 6, &_ObjectMethodList, &_ClassMethodList
};
L1_PC_PC_Class L1_PC_PC_ClassObj = {{1, {&L1_PC_PC_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_PC_PC = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_PC_PC (L1_PC_PC_Class* _ASCET_class)
{
	_ASCET_class->myCar_CCF_Automatic = initInstance_L1_myCar_CCF_Automatic();
	_ASCET_class->resources_CarMessages_Automatic = initInstance_L1_resources_CarMessages_Automatic();
	_ASCET_class->SystemLib_Miscellaneous_DeltaTimeService_Automatic = initInstance_L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic();
	_ASCET_class->myCar_Driver_Automatic = initInstance_L1_myCar_Driver_Automatic();
	_ASCET_class->resources_DriverMessages_Automatic = initInstance_L1_resources_DriverMessages_Automatic();
	_ASCET_class->myCar_myCar_Automatic = initInstance_L1_myCar_myCar_Automatic();
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_PC_PC_Obj* initInstance_L1_PC_PC(void)
{
	struct L1_PC_PC_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_PC_PC) {
		initialized_PC_PC = true;
		initClass_L1_PC_PC(&(L1_PC_PC_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_PC_PC);
	L1_PC_PCInstance = L1_Instance;
	return L1_Instance;
}
