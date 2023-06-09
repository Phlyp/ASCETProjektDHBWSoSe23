package myCar;
import resources.DriverMessages;
import resources.CarMessages;

static class Driver
writes DriverMessages.power, DriverMessages.brake, DriverMessages.on, DriverMessages.increment, DriverMessages.decrement, CarMessages.recuperation {
	characteristic real power = 0.0;
	characteristic real brake = 0.0;
	characteristic boolean on = false;
	characteristic boolean inc = false;
	characteristic boolean dec = false;
	characteristic real manual_recup = 0.0;

	@thread
	@generated("blockdiagram", "d62d45a7")
	public void calc() {
		DriverMessages.power = power; // Main/calc 1
		DriverMessages.brake = brake; // Main/calc 2
		DriverMessages.on = on; // Main/calc 3
		DriverMessages.increment = inc; // Main/calc 4
		DriverMessages.decrement = dec; // Main/calc 5
		CarMessages.recuperation = manual_recup; // Main/calc 6
	}
}