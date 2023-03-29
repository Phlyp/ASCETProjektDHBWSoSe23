package myCar;
import assertLib.Assert;
import resources.curve_kmh;
import resources.curve_m;
import resources.curve_real_a;
import resources.map_real_kmh;
import resources.m;
import resources.s;
import resources.kmh;
import resources.g;
import resources.a;
import resources.kWh;

//CCF imports
import SystemLib.Miscellaneous.EdgeRising;
import SystemLib.Transferfunction.Control.PID;
import SystemLib.Comparators.GreaterZero;
import SystemLib.Nonlinears.Limiter;
import SystemLib.Transferfunction.Control.PI;

static class myDriveUnitTest {
	myDrive tester;
	Logging logger; 
	real move_powerCtrl = 42.0;
	real move_brakeCtrl = 0.0;
	real move_recupCtrl = 0.0;
	characteristic s move_mydt = 0.1[s];
	characteristic g move_myg = 9.81[g];
	s time = 0.0 [s];
	
	// CCF variables
	kmh vsoll;
	TargetVelocity TVI;
	EdgeRising OnRising;
	PID PID_instance;
	characteristic real K = -45.5;
	characteristic real TV = 0.01;
	characteristic real TN = 5.9;
	EdgeRising IncRising;
	EdgeRising DecRising;
	GreaterZero GZ;
	SplitSignal SplitSignal_instance;
	CCFState CCFS;
	Limiter Limiter_instance;
	characteristic real mn = -100.0;
	characteristic real mx = 100.0;
	characteristic kmh vs = 70.0[kmh];
	real ctl;
	characteristic real brake = -30.0;
	characteristic real power = 50.0;
	characteristic boolean withRecup = true;
	real br;
	characteristic real c = 0.0;
	PI PI_instance;
	characteristic boolean useSilly = false;

	@Test
	public void move() {
		while (tester.v < 20.0 [kmh]) {
			tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);	
//			logger.log(time/1.0[s],tester.v/1.0[kmh]);
			time = time + move_mydt;	
		}
		Assert.assertNear(tester.v/1.0[kmh],20.0,1.0);
	}
	@Test
	public void testSillyDistance() {
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		
		while (tester.v < 70.0 [kmh]) {
			tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		while (tester.battery > 0.0011 [kWh]) {
			tester.move(sillyController(tester.v), move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		while (tester.battery > 0.0 [kWh]) {
			tester.move(100.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		
	}
	
	real sillyController(kmh currentSpeed) {
		
		TVI.reset(currentSpeed); 
		if (currentSpeed > TVI.velocity()) {
			ctl = brake; 
		} else {
			ctl = power; 
		} 
		
		return ctl;
	}
	
	real PIController(kmh speed, kmh newSpeed) {
		return 0.0;
	}
}