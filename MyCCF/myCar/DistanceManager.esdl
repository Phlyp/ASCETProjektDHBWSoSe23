package myCar;
import resources.m;
import resources.curve_m;
import resources.kmh;
import resources.s;
import resources.a;
import resources.g;

class DistanceManager {
	@get
	m dist = 0.0[m];
	m h = 0.0[m];
	characteristic curve_m Landscape[20] = {{0.0[m], 100.0[m], 145.569620253165[m], 202.53164556962025[m], 221.51898734177215[m], 240.0[m], 259.49367088607596[m], 300.0[m], 350.0[m], 400.0[m], 450.0[m], 500.0[m], 600.0[m], 700.0[m], 750.0[m], 800.0[m], 820.0[m], 850.0[m], 900.0[m], 1000.0[m]}, {0.0[m], 0.0[m], 4.0[m], 7.125[m], 10.375[m], 10.75[m], 10.5[m], 9.0[m], 5.375[m], 2.625[m], 0.625[m], 1.25[m], 0.625[m], 0.0[m], 0.0[m], 1.375[m], 1.1[m], 0.75[m], 0.625[m], 0.0[m]}};
	private characteristic m TrackSize = 4413.58[m];
	@get
	m totalDist;
	@get
	m ds = 0.0[m];
	m dh = 0.0[m];

	@generated("blockdiagram", "d7ccbb63")
	public a move(s in mydt, kmh in myv, g in myg) {
		if (dist > TrackSize) {
			dist = 0.0[m]; // Main/move 1/if-then 1
		} // Main/move 1
		if (ds > 0.001[m]) {
			dist = (ds + dist); // Main/move 2/if-then 1
		} else {
			ds = 0.001[m]; // Main/move 2/if-else 1
		} // Main/move 2
		if (ds > 0.001[m]) {
			totalDist = (ds + totalDist); // Main/move 3/if-then 1
		} // Main/move 3
		ds = (myv * mydt); // Main/move 4
		h = Landscape.getAt(dist); // Main/move 5
		dh = (h - Landscape.getAt(dist)); // Main/move 6
		return(myg * (dh / ds)); // Main/move 7
	}
}