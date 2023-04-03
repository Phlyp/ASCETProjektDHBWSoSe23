package myCar;
import resources.curve_kmh;
import resources.curve_real_a;
import resources.map_real_kmh;
import resources.m;
import resources.s;
import resources.kmh;
import resources.g;
import resources.a;
import resources.kWh;
import resources.curve_brake_recuperation;

class myDrive {
	characteristic curve_real_a BrakeMomentum = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0[a], 0.0[a], -1.0[a], -2.0[a], -3.0[a], -4.0[a]}};
	characteristic map_real_kmh EngineMomentum = {{0.0, 5.0, 20.0, 60.126582278481, 80.0, 100.0}, {0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 150.0[kmh], 200.0[kmh]}, {{0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.849999999999999[a], 0.6000000000000001[a], 0.30000000000000004[a], 0.0[a], 0.0[a], 0.0[a]}, {3.1500000000000004[a], 2.3499999999999988[a], 1.5500000000000012[a], 0.8000000000000009[a], 0.399999999999999[a], 0.0[a]}, {4.5[a], 3.5999999999999996[a], 2.7[a], 1.5[a], 0.8999999999999999[a], 0.0[a]}, {5.0[a], 4.5[a], 3.8000000000000096[a], 2.799999999999999[a], 1.899999999999999[a], 0.0[a]}}};
	characteristic curve_kmh AirFriction = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	@get
	m ds = 0.0[m];
	@get
	a momentum = 0.0[a];
	@get
	m dist = 0.0[m];
	@get
	kmh v = 0.0[kmh];
	public kWh battery = 0.0[kWh];
	characteristic curve_brake_recuperation cbrt[3] = {{0.0[kmh], 160.0[kmh]}, {0.0[a], -4.0[a]}};
	a recup_momentum;
	boolean noRecupPossible;
	real recupMult;
	@get
	private real power;
	@get
	m totalDist;
	DistanceManager DistanceManager_instance;
	BatteryManager BatteryManager_instance;

	@generated("blockdiagram", "a2c458db")
	public void move(real in powerCtrl, real in brakeCtrl, s in mydt, g in myg, real in recupCtrl) {
		v = (((BrakeMomentum.getAt(brakeCtrl) + momentum + AirFriction.getAt(v) + recup_momentum + DistanceManager_instance.move(mydt, v, myg)) * mydt) + v); // Main/move 1
		if (v < 0.0[kmh]) {
			v = 0.0[kmh]; // Main/move 2/if-then 1
		} // Main/move 2
		momentum = EngineMomentum.getAt(power, v); // Main/move 3
		recup_momentum = (cbrt.getAt(v) * (recupCtrl / 100.0) * recupMult); // Main/move 4
		dist = DistanceManager_instance.dist; // Main/move 5
		totalDist = DistanceManager_instance.totalDist; // Main/move 6
		ds = DistanceManager_instance.ds; // Main/move 7
		power = BatteryManager_instance.calc_power(powerCtrl, momentum, recup_momentum, ds); // Main/move 8
		recupMult = BatteryManager_instance.recupMult; // Main/move 9
		noRecupPossible = BatteryManager_instance.noRecupPossible; // Main/move 10
		battery = BatteryManager_instance.battery; // Main/move 11
	}
}