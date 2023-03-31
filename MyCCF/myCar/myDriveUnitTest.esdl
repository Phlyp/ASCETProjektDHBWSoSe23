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
	characteristic s move_mydt = 0.01[s];
	characteristic g move_myg = 1.0[g];
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
	real pw;
	real br;
	characteristic real c = 0.0;
	PI PI_instance;
	characteristic boolean useSilly = false;

//	@Test
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
		kmh savedSpeed = 0.0 [kmh];
		// get moving
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		
		logger.log(888001.0, 0.0);
		
		// accelerate with move_powercontrol until speed of 70kmh is reached
		while (tester.v < 70.0 [kmh]) {
			tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
//			logger.log(tester.v / 1.0 [kmh], tester.dh / 1.0[m]);
		}
		savedSpeed = tester.v;
		// activate CCF until battery is under crawling capacity
		while (tester.battery > 0.0011 [kWh]) {
			// CCFStateMachine model
			real ctrl = sillyController(tester.v, savedSpeed);
			if (ctrl > 0.0) {
				pw = ctrl;
				br = 0.0;
			} else {
				pw = 0.0;
				br = - ctrl;
			}
			//accelerate or use eddy current brake depending on CCFStateMachine
			tester.move(pw, move_brakeCtrl, move_mydt, move_myg, br);
//			logger.log(tester.power, tester.battery / 1.0 [kWh]);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		// coast until walking speed is reached
		while (tester.v > 7.0 [kmh]) {
			tester.move(0.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		// activate crawling mode
		while (tester.battery > 0.0 [kWh]) {
			tester.move(100.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
//			logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		
	}
	@Test
	public void testPIDistance() {
		kmh savedSpeed = 0.0 [kmh];
		// get moving
		tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		
		logger.log(888002.0, 0.0);
		
		// accelerate with move_powercontrol until speed of 70kmh is reached
		while (tester.dist < 120.0 [m]) {
			tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
//			logger.log(tester.dh / 1.0 [m], tester.ds / 1.0[m]);
		}
		savedSpeed = tester.v;
		// activate CCF until battery is under crawling capacity
		while (tester.battery > 0.0011 [kWh]) {
			// CCFStateMachine model
			real ctrl = PIController(tester.v, savedSpeed);
			if (ctrl > 0.0) {
				pw = ctrl;
				br = 0.0;
			} else {
				pw = 0.0;
				br = - ctrl;
			}
			//accelerate or use eddy current brake depending on CCFStateMachine
			tester.move(pw, move_brakeCtrl, move_mydt, move_myg, br);
//			logger.log(tester.dist / 1.0 [m], tester.totalDist / 1.0[m]);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		// coast until walking speed is reached
		while (tester.v > 7.0 [kmh]) {
			tester.move(0.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		// activate crawling mode
		while (tester.battery > 0.0 [kWh]) {
			tester.move(100.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
//			logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
		}
		logger.log(tester.totalDist / 1.0[m], tester.battery / 1.0 [kWh]);
	}
	
	
	real sillyController(kmh currentSpeed, kmh desiredSpeed) {
		
		TVI.reset(desiredSpeed); 
		if (currentSpeed > TVI.velocity()) {
			ctl = brake; 
		} else {
			ctl = power; 
		} 
		
		return ctl;
	}
	
	real PIController(kmh currentSpeed, kmh desiredSpeed) {
		TVI.reset(desiredSpeed);
		PI_instance.compute(((currentSpeed - TVI.velocity()) / 1.0[kmh]), K, TN);
		ctl = min(100.0, max(PI_instance.value(), -100.0));
		return ctl;
	}
}