package myCar;
import resources.kWh;

class BatteryState {
	@get
	boolean noRecupPossible;
	@get
	real recupMult;
	@get
	real powerOverride;
	@set
	real powerInput;
	@set
	kWh battery;

	@generated("statemachine", "000000")
	public void batteryStateStatemachineTrigger() triggers BatteryStateStatemachine;

	@generated("statemachine", "5e29b578")
	statemachine BatteryStateStatemachine using BatteryStateStatemachineStates {
		start BatteryNormal;

		state BatteryNormal {
			static {
				noRecupPossible = false;
				recupMult = 1.0;
				powerOverride = powerInput;
			}
			transition battery >= 1.0[kWh] to BatteryFull;
			transition battery < 0.0011[kWh] to crawlModeState;
		}

		state BatteryFull {
			static {
				noRecupPossible = true;
				recupMult = 0.0;
				powerOverride = powerInput;
			}
			transition battery < 1.0[kWh] to BatteryNormal;
		}

		state crawlModeState {
			static {
				powerOverride = (powerInput / 100.0) * 5.5;
			}
			transition battery == 0.0[kWh] to BatteryEmpty;
			transition battery > 0.0011[kWh] to BatteryNormal;
		}

		state BatteryEmpty {
			static {
				powerOverride = 0.0;
			}
			transition battery > 0.0[kWh] to crawlModeState;
		}
	}
}
@generated("statemachine", "000000")
type BatteryStateStatemachineStates is enum {
	BatteryNormal,
	BatteryFull,
	BatteryEmpty,
	crawlModeState
};