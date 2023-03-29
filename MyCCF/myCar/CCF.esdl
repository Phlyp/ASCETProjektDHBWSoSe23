package myCar;
import resources.DriverMessages;
import resources.CarMessages;
import resources.kmh;
import SystemLib.Miscellaneous.EdgeRising;
import SystemLib.Transferfunction.Control.PID;
import SystemLib.Comparators.GreaterZero;
import SystemLib.Nonlinears.Limiter;
import SystemLib.Transferfunction.Control.PI;

static class CCF
reads DriverMessages.brake, DriverMessages.power, CarMessages.v, DriverMessages.on, DriverMessages.increment, DriverMessages.decrement
writes CarMessages.brake, CarMessages.power, DriverMessages.display, CarMessages.recuperation {
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

	@thread
	@generated("blockdiagram", "9713bcb6")
	public void calc() {
		OnRising.compute(DriverMessages.on); // Main/calc 1
		if (OnRising.value()) {
			TVI.reset(CarMessages.v); // Main/calc 2/if-then 1
		} // Main/calc 2
		IncRising.compute(DriverMessages.increment); // Main/calc 3
		DecRising.compute(DriverMessages.decrement); // Main/calc 4
		if (IncRising.value()) {
			TVI.inc(); // Main/calc 5/if-then 1
		} // Main/calc 5
		if (DecRising.value()) {
			TVI.dec(); // Main/calc 6/if-then 1
		} // Main/calc 6
		if (CarMessages.v > TVI.velocity()) {
			ctl = brake; // Main/calc 7/if-then 1
		} else {
			ctl = power; // Main/calc 7/if-else 1
		} // Main/calc 7
		PI_instance.compute(((CarMessages.v - TVI.velocity()) / 1.0[kmh]), K, TN); // Main/calc 8
		CCFS.act = OnRising.value(); // Main/calc 9
		CCFS.ctrl = (if useSilly then ctl else min(100.0, max(PI_instance.value(), -100.0))); // Main/calc 10
		CCFS.pow = DriverMessages.power; // Main/calc 11
		CCFS.bra = DriverMessages.brake; // Main/calc 12
		CCFS.cCFStateStatemachineTrigger(); // Main/calc 13
		CarMessages.power = CCFS.pw; // Main/calc 14
		CarMessages.recuperation = CCFS.br; // Main/calc 15
		DriverMessages.display = CCFS.on; // Main/calc 16
	}
}