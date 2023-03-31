/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "myCar_myDrive_Automatic.l1.h"
#include "myCar_myDrive_Automatic_private.h"
#include "myCar_myCar_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_myCar_myDrive_Automatic_Obj* L1_myCar_myDrive_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_myCar_myDrive_Automatic_ClassHeader = {
	0, 0, 25, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_myCar_myDrive_Automatic_Class L1_myCar_myDrive_Automatic_ClassObj = {{1, {&L1_myCar_myDrive_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_myCar_myDrive_Automatic_Obj* initInstance_L1_myCar_myDrive_Automatic(const struct myCar_myDrive_Automatic* self)
{
	struct L1_myCar_myDrive_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_myCar_myDrive_Automatic);
	L1_Instance->BatteryState_instance = initInstance_L1_myCar_BatteryState_Automatic(&(BatteryState_instance_VAL));
	L1_Instance->myBattery_instance = initInstance_L1_myCar_myBattery_myDrive(&(myBattery_instance_VAL));
	L1_Instance->AirFriction = initInstance_charTable1Wrapper((uint32)&(AirFriction_VAL.xDist), sizeof(float32), (uint32)&(AirFriction_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->BrakeMomentum = initInstance_charTable1Wrapper((uint32)&(BrakeMomentum_VAL.xDist), sizeof(float32), (uint32)&(BrakeMomentum_VAL.values), sizeof(float32), /* dim */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->EngineMomentum = initInstance_columnDirCharTable2Wrapper((uint32)&(EngineMomentum_VAL.xDist), sizeof(float32), (uint32)&(EngineMomentum_VAL.yDist), sizeof(float32), (uint32)&(EngineMomentum_VAL.values), sizeof(float32), /* dimX */6, /* dimY */6, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->Landscape = initInstance_charTable1Wrapper((uint32)&(Landscape_VAL.xDist), sizeof(float32), (uint32)&(Landscape_VAL.values), sizeof(float32), /* dim */20, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->TrackSize = initInstance_scalarWrapper((uint32)&(TrackSize_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->battery = initInstance_scalarWrapper((uint32)&(battery_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->batteryOn = initInstance_scalarWrapper((uint32)&(batteryOn_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->curve_brake_recuperation_table = initInstance_charTable1Wrapper((uint32)&(curve_brake_recuperation_table_VAL.xDist), sizeof(float32), (uint32)&(curve_brake_recuperation_table_VAL.values), sizeof(float32), /* dim */3, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->dh = initInstance_scalarWrapper((uint32)&(dh_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->dist = initInstance_scalarWrapper((uint32)&(dist_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->ds = initInstance_scalarWrapper((uint32)&(ds_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->e_kwh = initInstance_scalarWrapper((uint32)&(e_kwh_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->energy = initInstance_scalarWrapper((uint32)&(energy_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->force = initInstance_scalarWrapper((uint32)&(force_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->h = initInstance_scalarWrapper((uint32)&(h_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->mass = initInstance_scalarWrapper((uint32)&(mass_VAL), sizeof(float32), ASD_PARAMETER);
	L1_Instance->momentum = initInstance_scalarWrapper((uint32)&(momentum_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->noRecupPossible = initInstance_scalarWrapper((uint32)&(noRecupPossible_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->power = initInstance_scalarWrapper((uint32)&(power_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->recupMult = initInstance_scalarWrapper((uint32)&(recupMult_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->recup_momentum = initInstance_scalarWrapper((uint32)&(recup_momentum_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->totalDist = initInstance_scalarWrapper((uint32)&(totalDist_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->v = initInstance_scalarWrapper((uint32)&(v_VAL), sizeof(float32), ASD_VARIABLE);
	L1_myCar_myDrive_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
