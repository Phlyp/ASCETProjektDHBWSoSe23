# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=myCar
TEST_EXE=$(OUTPUT_CONFIG)/$(TEST_BASE_NAME).exe
MKDIR_CMD=mkdir -p

# Compiler options
COMMON_FLAGS=-O0 -g3 -Wall -c -fmessage-length=0 -DESDL_PLATFORM_INTERNAL_BUILD -DOSENV_SINGLE_THREADED 
CFLAGS=$(COMMON_FLAGS) -Wno-unused -std=c17
CXXFLAGS=$(COMMON_FLAGS) -std=gnu++0x

INC=-Iinclude\
    -Isrc\
    -Itests\
    -IC:/ETAS/ASCET-DEVELOPER7.7/configuration/org.eclipse.osgi/82/0/.cp/platform

# Google test config
GOOGLE_TEST_OBJECTS=$(OUTPUT_CONFIG)/tests/AllTests.o
OBJECTS=$(GOOGLE_TEST_OBJECTS)\
  $(OUTPUT_CONFIG)/src/MyCCF_Automatic.o\
  $(OUTPUT_CONFIG)/src/myCar_myDriveUnitTest_Automatic.o\
  $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o\
  $(OUTPUT_CONFIG)/src/myCar_myDrive_Automatic.o\
  $(OUTPUT_CONFIG)/src/myCar_myBattery_myDrive.o\
  $(OUTPUT_CONFIG)/src/myCar_myCar_Automatic.o\
  $(OUTPUT_CONFIG)/src/SystemLib_Miscellaneous_DeltaTimeService_Automatic.o\
  $(OUTPUT_CONFIG)/src/resources_CarMessages_Automatic.o\
  $(OUTPUT_CONFIG)/src/myCar_BatteryState_Automatic.o\
  $(OUTPUT_CONFIG)/src/myCar_Logging_Automatic.o\
  $(OUTPUT_CONFIG)/src/myCar_myDriveTest_Automatic.o\

LIB_PATHS_OPTIONS=\
  -L$(pathcnv SN, C:/Users/fiery/ETAS/ASCET-DEVELOPER-7.7.0/workspace/myCarRecupProjectWork/MyCCF_CGenunit/lib)\
  -L$(pathcnv SN, C:/Users/fiery/ETAS/ASCET-DEVELOPER-7.7.0/workspace/myCarRecupProjectWork/MyCCF)\

LIB_FILES_OPTIONS=-lgtest -lESDL_Linear_Interpolation_x86 


# Google test: compile rules google test entry component AllTests.cpp
$(OUTPUT_CONFIG)/tests/AllTests.o: tests/AllTests.cpp | $(OUTPUT_CONFIG)
	g++ $(INC) $(CXXFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/MyCCF_Automatic.o: src/MyCCF_Automatic.c src/MyCCF_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_myDriveUnitTest_Automatic.o: src/myCar_myDriveUnitTest_Automatic.c src/myCar_myDriveUnitTest_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_myDrive_Automatic.o: src/myCar_myDrive_Automatic.c src/myCar_myDrive_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_myBattery_myDrive.o: src/myCar_myBattery_myDrive.c src/myCar_myBattery_myDrive.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_myCar_Automatic.o: src/myCar_myCar_Automatic.c src/myCar_myCar_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/SystemLib_Miscellaneous_DeltaTimeService_Automatic.o: src/SystemLib_Miscellaneous_DeltaTimeService_Automatic.c src/SystemLib_Miscellaneous_DeltaTimeService_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/resources_CarMessages_Automatic.o: src/resources_CarMessages_Automatic.c src/resources_CarMessages_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_BatteryState_Automatic.o: src/myCar_BatteryState_Automatic.c src/myCar_BatteryState_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_Logging_Automatic.o: src/myCar_Logging_Automatic.c src/myCar_Logging_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/myCar_myDriveTest_Automatic.o: src/myCar_myDriveTest_Automatic.c src/myCar_myDriveTest_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

all:: $(TEST_EXE)

clean::
	rm -rf $(OUTPUT_CONFIG)

.PHONY: $(OUTPUT_CONFIG)
$(OUTPUT_CONFIG):
	$(MKDIR_CMD) $@/src
	$(MKDIR_CMD) $@/tests

$(TEST_EXE): $(OBJECTS)
	g++ -o $@ -static $(OBJECTS) $(LIB_PATHS_OPTIONS) $(LIB_FILES_OPTIONS)
