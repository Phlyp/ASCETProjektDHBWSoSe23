// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "myCar_myDriveTest_Automatic.h"
}

namespace {
	// test fixture class
	class myCar_myDriveTest_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(myCar_myDriveTest_Automatic_SubClass, myCar_myDriveTest_Automatic_testCrawlDistance) {
		/* user defined local variables */
		float32 currentBattery;
		float32 distCounter;
		float32 myBatteryLevels[5];

		myBatteryLevels[0U] = 0.3F;
		myBatteryLevels[1U] = 0.2F;
		myBatteryLevels[2U] = 0.1F;
		myBatteryLevels[3U] = 0.05F;
		myBatteryLevels[4U] = 0.03F;
		distCounter = 0.0F;
		currentBattery = 0.0F;
		myCar_myDrive_Automatic_move(&(myCar_myDriveTest.tester), 10.0F, myCar_myDriveTest_CAL_MEM.move_brakeCtrl, myCar_myDriveTest_CAL_MEM.move_mydt, myCar_myDriveTest_CAL_MEM.move_myg, myCar_myDriveTest_CAL_MEM.move_recupCtrl);
		myCar_myDrive_Automatic_move(&(myCar_myDriveTest.tester), 10.0F, myCar_myDriveTest_CAL_MEM.move_brakeCtrl, myCar_myDriveTest_CAL_MEM.move_mydt, myCar_myDriveTest_CAL_MEM.move_myg, myCar_myDriveTest_CAL_MEM.move_recupCtrl);
		while (myCar_myDriveTest_RAM.tester.v < 7.0F)
		{
			myCar_myDrive_Automatic_move(&(myCar_myDriveTest.tester), 6.0F, myCar_myDriveTest_CAL_MEM.move_brakeCtrl, myCar_myDriveTest_CAL_MEM.move_mydt, myCar_myDriveTest_CAL_MEM.move_myg, myCar_myDriveTest_CAL_MEM.move_recupCtrl);
		} /* end while */
		currentBattery = myCar_myDriveTest_RAM.tester.battery;
		distCounter = myCar_myDriveTest_RAM.tester.dist;
		while (myCar_myDriveTest_RAM.tester.dist < (distCounter + 100.0F))
		{
			myCar_myDrive_Automatic_move(&(myCar_myDriveTest.tester), 5.5F, myCar_myDriveTest_CAL_MEM.move_brakeCtrl, myCar_myDriveTest_CAL_MEM.move_mydt, myCar_myDriveTest_CAL_MEM.move_myg, myCar_myDriveTest_CAL_MEM.move_recupCtrl);
		} /* end while */
		myCar_Logging_Automatic_log(currentBattery - myCar_myDriveTest_RAM.tester.battery, myCar_myDriveTest_RAM.tester.dist - distCounter);
	}

}