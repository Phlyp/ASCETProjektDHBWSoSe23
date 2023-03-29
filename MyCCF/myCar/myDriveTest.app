application {
	class myCar.myDriveTest
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process myCar.myDriveTest.move
	}
}