package resources;

unit m;  // meter
unit s;  // second
unit h = 3600.0 * s;  // hour
unit kg; // Mass in kilograms

unit km = 1000.0 * m; // kilometer
unit kmh = km / h;   // kilometer per hour
unit a = m / s^2;   // acceleration
unit g = 9.81 * a;  // earth constant
unit F = kg * a; 	// Force in Newton
unit E = F * m;		// Energy in Joules
unit W = E / s;		// Joules / seconds = Watt
unit kWh = 1000.0 * W * h; // kWh = Watt * 1000 * hour