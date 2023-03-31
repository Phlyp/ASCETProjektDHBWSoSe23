package myCar;
import resources.CarMessages;
import resources.a;
import SystemLib.Miscellaneous.DeltaTimeService;
import resources.s;
import resources.kg;

static class myCar
reads CarMessages.power, CarMessages.brake, CarMessages.recuperation
writes CarMessages.v {
	characteristic a g = 9.81[a];
	myDrive myDrive_instance;
	public characteristic kg mass = 1500.0[kg];

	@thread
	@generated("blockdiagram", "170f7408")
	public void calc() {
		CarMessages.v = myDrive_instance.v; // Main/calc 1
		myDrive_instance.move(CarMessages.power, CarMessages.brake, (DeltaTimeService.deltaT * 4.0[s]), g, CarMessages.recuperation); // Main/calc 2
	}
}