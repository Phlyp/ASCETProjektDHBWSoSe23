// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "myCar_myDriveUnitTest_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "MyCCF_Automatic.h"
}

namespace {
	// test fixture class
	class myCar_myDriveUnitTest_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(myCar_myDriveUnitTest_Automatic_SubClass, myCar_myDriveUnitTest_Automatic_move) {
		while (myCar_myDriveUnitTest_RAM.tester.v < 20.0F)
		{
			myCar_myDrive_Automatic_move(&(myCar_myDriveUnitTest.tester), myCar_myDriveUnitTest_RAM.move_powerCtrl, myCar_myDriveUnitTest_RAM.move_brakeCtrl, myCar_myDriveUnitTest_CAL_MEM.move_mydt, myCar_myDriveUnitTest_CAL_MEM.move_myg, myCar_myDriveUnitTest_RAM.move_recupCrtl);
			myCar_Logging_Automatic_log(myCar_myDriveUnitTest_RAM.time, myCar_myDriveUnitTest_RAM.tester.v);
			myCar_myDriveUnitTest_RAM.time
				= myCar_myDriveUnitTest_RAM.time + myCar_myDriveUnitTest_CAL_MEM.move_mydt;
		} /* end while */
		ASSERT_NEAR((float64)myCar_myDriveUnitTest_RAM.tester.v, 20.0, 1.0);
	}

}