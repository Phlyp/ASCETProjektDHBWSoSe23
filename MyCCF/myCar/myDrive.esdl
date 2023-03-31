package myCar;
import resources.curve_kmh;
import resources.curve_m;
import resources.curve_real_a;
import resources.map_real_kmh;
import resources.m;
import resources.s;
import resources.kmh;
import resources.g;
import resources.a;
import resources.E;
import resources.F;
import resources.kg;
import resources.kWh;
import resources.curve_brake_recuperation;

class myDrive {
	characteristic curve_real_a BrakeMomentum = {{0.0, 1.0, 40.0, 60.0, 80.0, 100.0}, {0.0[a], 0.0[a], -1.0[a], -2.0[a], -3.0[a], -4.0[a]}};
	characteristic map_real_kmh EngineMomentum = {{0.0, 5.0, 20.0, 60.126582278481, 80.0, 100.0}, {0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 150.0[kmh], 200.0[kmh]}, {{0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a], 0.0[a]}, {0.849999999999999[a], 0.6000000000000001[a], 0.30000000000000004[a], 0.0[a], 0.0[a], 0.0[a]}, {3.1500000000000004[a], 2.3499999999999988[a], 1.5500000000000012[a], 0.8000000000000009[a], 0.399999999999999[a], 0.0[a]}, {4.5[a], 3.5999999999999996[a], 2.7[a], 1.5[a], 0.8999999999999999[a], 0.0[a]}, {5.0[a], 4.5[a], 3.8000000000000096[a], 2.799999999999999[a], 1.899999999999999[a], 0.0[a]}}};
	characteristic curve_kmh AirFriction = {{0.0[kmh], 30.0[kmh], 60.0[kmh], 90.0[kmh], 120.0[kmh], 150.0[kmh]}, {0.0[a], -0.1[a], -0.2[a], -0.4[a], -0.8[a], -1.6[a]}};
	characteristic curve_m Landscape[20] = {{0.0[m], 100.0[m], 145.569620253165[m], 202.53164556962025[m], 221.51898734177215[m], 240.0[m], 259.49367088607596[m], 300.0[m], 350.0[m], 400.0[m], 450.0[m], 500.0[m], 600.0[m], 700.0[m], 750.0[m], 800.0[m], 820.0[m], 850.0[m], 900.0[m], 1000.0[m]}, {0.0[m], 0.0[m], 4.0[m], 7.125[m], 10.375[m], 10.75[m], 10.5[m], 9.0[m], 5.375[m], 2.625[m], 0.625[m], 1.25[m], 0.625[m], 0.0[m], 0.0[m], 1.375[m], 1.1[m], 0.75[m], 0.625[m], 0.0[m]}};
	@get
	m h = 0.0[m];
	@get
	m dh = 0.0[m];
	@get
	m ds = 0.0[m];
	@get
	a momentum = 0.0[a];
	@get
	m dist = 0.0[m];
	characteristic private m TrackSize = 4413.58[m];
	@get
	kmh v = 0.0[kmh];
	F force = 0.0[F];
	characteristic kg mass = 1500.0[kg];
	E energy;
	kWh e_kwh;
	public kWh battery = 0.0[kWh];
	myBattery myBattery_instance;
	characteristic curve_brake_recuperation curve_brake_recuperation_table[3] = {{0.0[kmh], 160.0[kmh]}, {0.0[a], -4.0[a]}};
	a recup_momentum;
	boolean noRecupPossible;
	boolean batteryOn;
	real recupMult;
	BatteryState BatteryState_instance;
	@get
	private real power;
	@get
	m totalDist;

	@generated("blockdiagram", "f86bea5d")
	public void move(real in powerCtrl, real in brakeCtrl, s in mydt, g in myg, real in recupCtrl) {
		v = (((BrakeMomentum.getAt(brakeCtrl) + momentum + AirFriction.getAt(v) + recup_momentum + (myg * (dh / ds))) * mydt) + v); // Main/move 1
		if (v < 0.0[kmh]) {
			v = 0.0[kmh]; // Main/move 2/if-then 1
		} // Main/move 2
		ds = (v * mydt); // Main/move 3
		if (ds > 0.001[m]) {
			dist = (ds + dist); // Main/move 4/if-then 1
		} else {
			ds = 0.001[m]; // Main/move 4/if-else 1
		} // Main/move 4
		if (ds > 0.001[m]) {
			totalDist = (ds + totalDist); // Main/move 5/if-then 1
		} // Main/move 5
		if (dist > TrackSize) {
			dist = 0.0[m]; // Main/move 6/if-then 1
		} // Main/move 6
		dh = (h - Landscape.getAt(dist)); // Main/move 7
		h = Landscape.getAt(dist); // Main/move 8
		momentum = EngineMomentum.getAt(power, v); // Main/move 9
		recup_momentum = (curve_brake_recuperation_table.getAt(v) * (recupCtrl / 100.0) * recupMult); // Main/move 10
		battery = myBattery_instance.get_battery((momentum + recup_momentum), ds); // Main/move 11
		BatteryState_instance.battery = battery; // Main/move 12
		BatteryState_instance.powerInput = powerCtrl; // Main/move 13
		BatteryState_instance.batteryStateStatemachineTrigger(); // Main/move 14
		recupMult = BatteryState_instance.recupMult; // Main/move 15
		noRecupPossible = BatteryState_instance.noRecupPossible; // Main/move 16
		power = BatteryState_instance.powerOverride; // Main/move 17
	}
}