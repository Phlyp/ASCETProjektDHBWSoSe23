/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Virtual PC operating system implementation
 ********************************************************************************/
#include "etasVpOs.h"

/******************************************************************************
 * BEGIN: Timer/Counter Definition
 *----------------------------------------------------------------------------*/
uint32 etasGetCounterPeriodUs (void)
{
	return 10000;
}
/*-----------------------------------------------------------------------------
 * END: Timer/Counter Definition
 ******************************************************************************/


/******************************************************************************
 * BEGIN: Application Mode Definitions
 *----------------------------------------------------------------------------*/
T_appModeTableEntry appModeEntries[] = {
	{(AppModeType *)&etasStartupAppMode, "init"},
	{(AppModeType *)&etasInactiveAppMode, "inactive"},
	{(AppModeType *)&UserAppModeAppMode, "active"}
};

T_appModeTable appModeTable = {
	1+2,	/* number of modes in appModeEntries */
	0+2,	/* index of default application mode */
	&appModeEntries[0]
};
/*-----------------------------------------------------------------------------
 * END: Application Mode Definitions
 ******************************************************************************/

DECLARE_TASK_MONITOR(etasConfigTask);
DECLARE_TASK_MONITOR(Task0);

T_taskTableEntry taskTableEntries[] = {
	{(TaskType *)&etasConfigTask, "etasConfigTask", TASK_MONITOR_PTR(etasConfigTask)},
	{(TaskType *)&Task0, "Task0", TASK_MONITOR_PTR(Task0)},
};

T_taskTable taskTable = {
	/* number of tasks (user defined tasks + internally defined tasks) */
	2,
	/* pointers to tasks */
	&taskTableEntries[0]
};

/******************************************************************************
 * BEGIN: Application Mode Init/Exit Tasks
 *----------------------------------------------------------------------------*/

#ifdef XCP_SLAVE
	#include "a_targma.h"

	extern void xcpSlaveInterfaceStart(ASDObjectPtr topObject);
#endif

extern void startRealTimeClockAndOS();
extern uint8 checkCommandlineOption(char*);

void etasStartupInitTask (void)
{
	#ifdef STARTUP_INIT_TASK_START_FW_HOOK
	    STARTUP_INIT_TASK_START_FW_HOOK
	#endif

	etasInitModelProcess();
	etasInitOsProcess();

#ifdef INCLUDES_HARDWARE_CONFIGURATION
	etasRtioStartupProcess();
#endif

#ifdef XCP_SLAVE
	xcpSlaveInterfaceStart(simMan_c.targetTop);
#endif

	if (checkCommandlineOption ("startOS")) {
		startRealTimeClockAndOS();
	}
}

void etasInactiveInitTask (void)
{
}

extern void StartupTask();

void UserAppModeInitTask(void)
{
#ifdef USER_APP_MODE_INIT_TASK_START_FW_HOOK
	USER_APP_MODE_INIT_TASK_START_FW_HOOK
#endif

#ifdef INCLUDES_HARDWARE_CONFIGURATION
	etasHWCRTIOPrepareInit();
#endif

	StartupTask();

#ifdef INCLUDES_HARDWARE_CONFIGURATION
	etasHWCRTIOFinishInit();
#endif
#ifdef USER_APP_MODE_INIT_TASK_END_FW_HOOK
	USER_APP_MODE_INIT_TASK_END_FW_HOOK
#endif
}

void etasInitTasks(void)
{
	AppModeType curAppMode = GetActiveApplicationMode();
	switch(curAppMode)
	{
		case etasStartup:
			etasStartupInitTask();
			break;
		case etasInactive:
			etasInactiveInitTask();
			break;
		case UserAppMode:
			UserAppModeInitTask();
			break;
	}
}


/******************************** Exit tasks **********************************/
void etasStartupExitTask(void)
{
}

void etasInactiveExitTask(void)
{
}

extern void ShutdownTask();

void UserAppModeExitTask(void)
{
#ifdef INCLUDES_HARDWARE_CONFIGURATION
	etasHWCRTIOPrepareExit();
#endif

	ShutdownTask();

#ifdef INCLUDES_HARDWARE_CONFIGURATION
	etasHWCRTIOFinishExit();
#endif
}

/*----dispatcher for exit tasks-----------------------------------------------*/
void etasExitTasks(void)
{
	AppModeType curAppMode = GetActiveApplicationMode();
	switch(curAppMode)
	{
		case etasStartup:
			etasStartupExitTask();
			break;
		case etasInactive:
			etasInactiveExitTask();
			break;
		case UserAppMode:
			UserAppModeExitTask();
			break;
	}
}
/*-----------------------------------------------------------------------------
 * END: Application Mode Init/Exit Tasks
 ******************************************************************************/

/**** OS administration ****/
T_osAdmin osAdmin = {
	&appModeTable,
	&taskTable
};

void Tick_etasCounter(void)
{
	ScheduleStatusType stat_etasCounter;

	osAdvanceCounter_etasCounter(&stat_etasCounter);
	if (stat_etasCounter.status & OS_STATUS_RUNNING) {
		increment_time_compare_register_by(stat_etasCounter.expiry);
	}
}

/******** stimuligenerator table  *********/
sgTaskTableEntry sgTaskTable[1+1] = {NULL};

/*********** crossbar hooks ***************/
crossbarHookTableEntry crossbarHookTableTask0[1] = {NULL}; /* crossbar hook in task Task0 */
crossbarHookTableEntry crossbarHookTableEtasInitTask[1] = {NULL}; /* crossbar hook in task EtasInitTask */
crossbarTaskTableEntry crossbarTaskTable[4] = {   /* crossbar task table */
	{NULL},
	{&crossbarHookTableTask0[0]},
	{&crossbarHookTableEtasInitTask[0]},
	{NULL}
};

/******** initialize model ***************/
extern ASDObject *initializeModel (void);

ASDObject *initializeYukonModel (void)
{
	return initializeModel ();
}

void rtaTraceHook()
{
}
