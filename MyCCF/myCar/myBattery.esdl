package myCar;
import resources.E;
import resources.F;
import resources.kg;
import resources.kWh;
import resources.a;
import resources.m;

class myBattery using myDrive{
	F force = 0.0[F];
	characteristic kg mass = 1500.0[kg];
	E energy;
	kWh e_kwh;
	kWh battery = 1.0[kWh];

	@generated("blockdiagram", "f40d63ed")
	public kWh get_battery(a in momentum, m in ds) {
		force = (myCar.mass * momentum); // Main/get_battery 1
		energy = (force * ds); // Main/get_battery 2
		e_kwh = energy; // Main/get_battery 3
		battery = (battery - e_kwh); // Main/get_battery 4
		return battery; // Main/get_battery 5
	}
	
	representation myDrive {
        represent battery using {
            range = 0.0[kWh] .. 1.0[kWh];
        };
    }
}