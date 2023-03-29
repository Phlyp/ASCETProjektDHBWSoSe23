package arrays;

type WeekDay is enum {
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

// It is easy to create an array definition with dimension as basic enumeration type.
type WorkingHours is array[WeekDay] of real;

type Employee is enum {
	Olive = 11, 
	Jack = 22, 
	Harry = 33, 
	Jacob = 44,
	James = 55, 
	John = 66, 
	Robert = 77
};

// Here we see a bit more complex array with unconstrained dimension and base type is composite type (struct)
type ProjectTimeReport is array[] of WorkingTimeReport;

static class WorkingTimeCalculation {
	characteristic WorkingTimeReport Olive = {11, {8.0, 8.0, 8.0, 8.0, 7.0, 0.0, 0.0}};
	characteristic WorkingTimeReport Jack = {22, {8.0, 8.0, 8.0, 8.0, 7.0, 0.0, 0.0}};
	characteristic WorkingTimeReport Harry = {33, {8.0, 8.0, 8.0, 8.0, 4.0, 4.0, 0.0}};
	characteristic WorkingTimeReport Jacob = {44, {8.0, 8.0, 4.0, 8.0, 4.0, 8.0, 0.0}};
	characteristic WorkingTimeReport James = {55, {8.0, 8.0, 8.0, 0.0, 8.0, 8.5, 0.0}};
	characteristic WorkingTimeReport John = {66, {9.0, 9.0, 8.0, 7.0, 8.0, 0.0, 0.0}};
	characteristic WorkingTimeReport Robert = {77, {8.0, 8.0, 4.0, 4.0, 4.0, 4.0, 0.0}};
	
	// We can initialize the complex array with values got from references to variables, or with direct values
	// Here is a mix:
	characteristic ProjectTimeReport projectReport[8] = {Olive, Jack, {77, {8.0, 8.0, 4.0, 4.0, 4.0, 4.0, 0.0}}, Robert, James, John, Jacob, Harry};
	ProjectTimeReport actualReport[8];
	
	public ProjectTimeReport getActualProjectReport() {
		if (actualReport[0].employeeNumber == 0) {
			// Assignment of elements of unconstrained array type are allowed if both sizes are known
			ProjectTimeReport workingCopy[8] = projectReport;
			
			// Arrays declared at both class and method local scope, can be passed in method call as arguments
			refineReport(workingCopy);
			
			actualReport = workingCopy;
		}
		return actualReport;
	}
	
	@no_side_effect 
	private void refineReport(ProjectTimeReport inout prjReport) {
		for (i in prjReport.indexRange()) {
			for (j in prjReport.indexRange()) {
				WorkingTimeReport individualReport = prjReport[i];
				WorkingTimeReport reportToCompare = prjReport[j];
				if (j > i && individualReport.employeeNumber == reportToCompare.employeeNumber) {
					// overwrite an individual element in the array 
					prjReport[i] = {-1, {0.0,0.0,0.0,0.0,0.0,0.0,0.0}};
				}
			}
		}
	}
	
	@no_side_effect 
	public real getProjectTime() {
		real projectTime = 0.0;
		for (id in actualReport.indexRange()) { // loop over each individual in the array
			WorkingTimeReport report = actualReport[id];	// the array element at the accessed index can be used to initialize a local variable
			projectTime += calculateEmployeeTime(report);	// the array element can be passed in method call
		}
		return projectTime;
	}
	
	@no_side_effect 
	public real getIndividualTime(Employee in person) {
		for (id in actualReport.indexRange()) {	// iterator element 'id' run on the actual range of array dimension, which is an enumeration type here
			WorkingTimeReport report = actualReport[id];	// the array element at the accessed index can be used to initialize a local variable
			if (report.employeeNumber == person.value()) {	// thus, intrinsic function 'value' is applicable here
				return calculateEmployeeTime(report);
			}
		}
		return -1.0;
	}
	
	@no_side_effect
	private real calculateEmployeeTime(WorkingTimeReport in report) {
		real workingTime = 0.0;
		WorkingHours loggedHours = report.log;
		for (day in loggedHours.indexRange()) {
			workingTime += loggedHours[day];
		}
		return workingTime;
	}
	
}