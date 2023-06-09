/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Virtual PC operating system API
 ********************************************************************************/
#include "a_basdef.h"
#include "protocol\l1\p_sysdef.h"
#include "protocol\l1\p_protl1.h"
#include "protocol\l1\p_stdeb.h"
#include "a_tardef.h"
#include "a_contai.h"
#include "t_croman.h"
#include "t_sglow.h"
#include "t_sgman.h"

extern void Tick_etasCounter(void);

/*----extern declarations for RTA-TRACE processes-----------------------------*/

/*----Definitions for ETC Integration-----------------------------------------*/
#ifdef INCLUDES_HARDWARE_CONFIGURATION
	extern void etasRtioStartupProcess(void);

	extern void etasHWCRTIOPrepareInit(void);
	extern void etasHWCRTIOFinishInit(void);

	extern void etasHWCRTIOPrepareExit(void);
	extern void etasHWCRTIOFinishExit(void);
#endif /* INCLUDES_HARDWARE_CONFIGURATION */

/*----XCP Slave --------------------------------------------------------------*/
#ifdef XCP_SLAVE
	extern uint32 Xcp_Event (uint32 eventId, uint32 doDaq);
	#define XCP_DAQ_Task0 Xcp_Event(0,0);
	#define XCP_STIM_Task0 Xcp_Event(0,1);
#else
	#define XCP_DAQ_Task0
	#define XCP_STIM_Task0
#endif

#ifdef L1_PROTOCOL
	#define SIGNAL_GENERATOR_HOOK_Task0 \
	sgHook(1); \
	crossbarHook(1,0);
#else
	#define SIGNAL_GENERATOR_HOOK_Task0
#endif

#define XCP_NUMBER_OF_EVENTS 1
