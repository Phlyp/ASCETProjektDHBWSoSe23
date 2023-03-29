#ifndef ESDL_L1_RESOURCES_DRIVERMESSAGES_AUTOMATIC
#define ESDL_L1_RESOURCES_DRIVERMESSAGES_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "resources_DriverMessages_Automatic.h"

/* local variables object structure */
struct L1_resources_DriverMessages_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* brake;
	scalarWrapper_Obj* decrement;
	scalarWrapper_Obj* display;
	scalarWrapper_Obj* increment;
	scalarWrapper_Obj* on;
	scalarWrapper_Obj* power;
} L1_resources_DriverMessages_Automatic_Class;

extern L1_resources_DriverMessages_Automatic_Class L1_resources_DriverMessages_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_resources_DriverMessages_Automatic_Obj* initInstance_L1_resources_DriverMessages_Automatic(void);

#endif /* ESDL_L1_RESOURCES_DRIVERMESSAGES_AUTOMATIC */
