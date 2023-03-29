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

static class myDriveUnitTest {
	myDrive tester;
	Logging logger; 
	real move_powerCtrl = 42.0;
	real move_brakeCtrl = 0.0;
	real move_recupCtrl = 0.0;
	characteristic s move_mydt = 0.01[s];
	characteristic g move_myg = 0.0[g];
	s time = 0.0 [s];

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
	public void testDistance() {
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		tester.move(10.0, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		
		while (tester.v < 70.0 [kmh]) {
			tester.move(move_powerCtrl, move_brakeCtrl, move_mydt, move_myg, move_recupCtrl);
		}
		
	}
	
	real sillyController(kmh speed, kmh newSpeed) {
		return 0.0;
	}
	
	real PIController(kmh speed, kmh newSpeed) {
		return 0.0;
	}
}