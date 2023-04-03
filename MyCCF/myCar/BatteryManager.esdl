package myCar;
import resources.kWh;
import resources.a;
import resources.m;

class BatteryManager {
	BatteryState BatteryState_instance;
	myBattery myBattery_instance;
	@get
	kWh battery = 0.0[kWh];
	@get
	real recupMult;
	@get
	boolean noRecupPossible;

	@generated("blockdiagram", "e524b13c")
	public real calc_power(real in powerCtrl, a in momentum, a in recup_momentum, m in ds) {
		battery = myBattery_instance.get_battery((momentum + recup_momentum), ds); // Main/calc_power 1
		BatteryState_instance.battery = battery; // Main/calc_power 2
		BatteryState_instance.powerInput = powerCtrl; // Main/calc_power 3
		BatteryState_instance.batteryStateStatemachineTrigger(); // Main/calc_power 4
		noRecupPossible = BatteryState_instance.noRecupPossible; // Main/calc_power 5
		recupMult = BatteryState_instance.recupMult; // Main/calc_power 6
		return BatteryState_instance.powerOverride; // Main/calc_power 7
	}
}