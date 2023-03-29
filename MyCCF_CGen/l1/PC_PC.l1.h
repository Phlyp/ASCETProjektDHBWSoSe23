#ifndef ESDL_L1_PC_PC
#define ESDL_L1_PC_PC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myCar_Automatic.l1.h"
#include "resources_CarMessages_Automatic.l1.h"
#include "myCar_CCF_Automatic.l1.h"
#include "resources_DriverMessages_Automatic.l1.h"
#include "myCar_Driver_Automatic.l1.h"
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic.l1.h"

/* local variables object structure */
struct L1_PC_PC_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	struct L1_myCar_CCF_Automatic_Obj* myCar_CCF_Automatic;
	struct L1_resources_CarMessages_Automatic_Obj* resources_CarMessages_Automatic;
	struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj* SystemLib_Miscellaneous_DeltaTimeService_Automatic;
	struct L1_myCar_Driver_Automatic_Obj* myCar_Driver_Automatic;
	struct L1_resources_DriverMessages_Automatic_Obj* resources_DriverMessages_Automatic;
	struct L1_myCar_myCar_Automatic_Obj* myCar_myCar_Automatic;
} L1_PC_PC_Class;

extern L1_PC_PC_Class L1_PC_PC_ClassObj;

/* public L1 init function of this component */
extern struct L1_PC_PC_Obj* initInstance_L1_PC_PC(void);

#endif /* ESDL_L1_PC_PC */
