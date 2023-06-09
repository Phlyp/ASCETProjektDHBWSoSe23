/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Model initialization code
 ********************************************************************************/
#include "PC_PC.init.h"
#include "i_rtautil.h"
#include "vrtacore.h"
#include "IntecrioDeviceInfo.h"
#include "programId_PC_PC.h"
#include "esdl_deltaTimeDefs.h"
#include "PC_PC.l1.h"

void os_setDeltaT (void) {
    ASCET_SET_MODEL_DT(SYSTEM_TICK_DURATION * os_dT / 1.0e9);
}

uint32 getDeltaT (void) {
    return os_dT;
}

uint32 programIdentifier = UNIQUE_PROGRAM_ID;
uint32 maxLockedWays = 3U; /* 768 kB */
uint32 cacheLockKind = 0U; /* Don't lock code or data */

#define MODEL_TYPE_ASCET 0
#define FF 0x00    /* reserved for future use */
#define VV 0x06    /* version */
#define UU 0x01    /* update */
#define RR 0x00    /* refresh */
#define SW_VERSION ((VV & 0xFF) << 16) | ((UU & 0xFF) << 8) | (RR & 0xFF)

uint32 getBuildEnvironment () {
    return MODEL_TYPE_ASCET;
}

uint32 getBuildEnvironmentVersion () {
    return SW_VERSION;
}

char *getModelIdentificationString () {
    return "Project\0";    /* Project name */
}

uint8 checkCommandlineOption (char* option)
{
    vrtaEvent   commandlineEvent;

    commandlineEvent.devID = AM_DEVICE_ID;
    commandlineEvent.devEvent = AM_EVENT_ID_Option;
    commandlineEvent.devEventLen = strlen( option );
    commandlineEvent.devEventData = NULL;

    strcpy( (char*)( commandlineEvent.devEmbeddedData.bVal ), option ); // This is OK if the string is < 16 characters long.

    return ( RTVECUErr_NONE == vrtaGetState( AM_DEVICE_ID, &commandlineEvent ) ) && ( 1 == commandlineEvent.devEmbeddedData.uVal );
}

#define INTECRIO_CLOCK		3
#define INTECRIO_ADMIN		4

bool clockIsRunning ()
{
    vrtaEvent   vrtaEvent;

    vrtaEvent.devID = INTECRIO_CLOCK;
    vrtaEvent.devEvent = INTECRIO_CLOCK_EVENT_STATE;
    vrtaEvent.devEventLen = 0;
    vrtaEvent.devEventData = NULL;

    return ( RTVECUErr_NONE == vrtaGetState( INTECRIO_CLOCK, &vrtaEvent ) ) && ( 1 == vrtaEvent.devEmbeddedData.uVal );
}

typedef enum INTECRIO_CLOCK_TYPE CLOCK_TYPE;

void setClockType (CLOCK_TYPE clockType)
{
    vrtaAction action;

    action.devID = INTECRIO_CLOCK;
    action.devAction = INTECRIO_CLOCK_ACTION_CLOCK;
    action.devActionLen = sizeof (unsigned int);
    action.devActionData = 0;
    action.devEmbeddedData.uVal = clockType;

    vrtaSendAction (INTECRIO_CLOCK, &action);
}

void startOsClock (unsigned int remainingExecutionSteps)
{
    vrtaAction action;

    action.devID = INTECRIO_CLOCK;
    action.devAction = INTECRIO_CLOCK_ACTION_START;
    action.devActionLen = sizeof (unsigned int);
    action.devActionData = 0;
    action.devEmbeddedData.uVal = remainingExecutionSteps;

    vrtaSendAction (INTECRIO_CLOCK, &action);
}

void stopOsClock ()
{
    vrtaAction action;

    action.devID = INTECRIO_CLOCK;
    action.devAction = INTECRIO_CLOCK_ACTION_STOP;
    action.devActionLen = 0;
    action.devActionData = 0;

    vrtaSendAction (INTECRIO_CLOCK, &action);
}

void startRealTimeClockAndOS ()
{
    if (!clockIsRunning())
    {
        setClockType(INTECRIO_CLOCK_TYPE_REAL_TIME);
        startOsClock(0);

        SetNextAppMode(UserAppMode);
    }
}

/* initialize L1 instance tree */
static void initClass_ROOT_PC_PC(ROOT_PC_PC_Class *self)
{
    self->ASCET_TOP_Ptr = (struct L1_PC_PC_Obj*) initInstance_L1_PC_PC();
}

static ASDClassHeader ROOT_ClassHeader_PC_PC = {0, 0, 0, 1, (MethodList *)0, (MethodList *)0};
static ROOT_PC_PC_Class ROOT_PC_PC_ClassObj = {{1, {&ROOT_ClassHeader_PC_PC}, {0}}};

/* Initialization from root node of model */
ASDObject *initializeRoot_PC_PC(void)
{
	struct ROOT_PC_PC_Obj *self = 0;

	initClass_ROOT_PC_PC(&ROOT_PC_PC_ClassObj);
	CREATE_OBJECT(self, ROOT_PC_PC);

	return (ASDObject *)self;
}

ASDObject *initializeModel(void)
{
    return initializeRoot_PC_PC();
}
