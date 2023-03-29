#ifndef ESDL_L1_SYSTEMLIB_MISCELLANEOUS_DELTATIMESERVICE_AUTOMATIC
#define ESDL_L1_SYSTEMLIB_MISCELLANEOUS_DELTATIMESERVICE_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "SystemLib_Miscellaneous_DeltaTimeService_Automatic.h"

/* local variables object structure */
struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* deltaT;
} L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Class;

extern L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Class L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic_Obj* initInstance_L1_SystemLib_Miscellaneous_DeltaTimeService_Automatic(void);

#endif /* ESDL_L1_SYSTEMLIB_MISCELLANEOUS_DELTATIMESERVICE_AUTOMATIC */
