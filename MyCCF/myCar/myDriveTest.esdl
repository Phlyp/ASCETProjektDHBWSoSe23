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
import resources.batteryLevels;

static class myDriveTest {
	myDrive tester;
	Logging logger;
	characteristic real move_powerCtrl = 0.0;
	characteristic real move_brakeCtrl = 0.0;
	characteristic s move_mydt = 0.1[s];
	characteristic g move_myg = 0.0[g];
	characteristic real move_recupCtrl = 0.0;

	@thread
	public void move() {
		tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
	}
	
	@Test
	public void testCrawlDistance() {
		batteryLevels myBatteryLevels[5] = {0.3[kWh], 0.2[kWh], 0.1[kWh], 0.05[kWh], 0.03[kWh]};
		m distCounter = 0.0[m];
		kWh currentBattery = 0.0[kWh];

		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);

		while (tester.v < 7.0[kmh]) {
			tester.move(6.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		
		currentBattery = tester.battery;
		distCounter = tester.dist;
//		logger.log((currentBattery - tester.battery) / 1.0[kWh], (tester.dist) / 1.0[m]);
		while (tester.dist < (distCounter + 100.0[m])) {
			tester.move(5.5, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
//			logger.log((currentBattery - tester.battery) / 1.0[kWh], (tester.dist) / 1.0[m]);
		}

		logger.log((currentBattery - tester.battery) / 1.0[kWh], (tester.dist - distCounter) / 1.0[m]);
	}
}