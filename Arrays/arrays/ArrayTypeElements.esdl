package arrays;

// Due to the expensiveness in computation and some restrictions in the target C language, there are some ESDL constraints on array elements (such as number of elements an array can contain).
// Apart from them, we can use arrays to declare variables, characteristics, method returns or arguments just like other types in ESDL.
static class ArrayTypeElements {
// let's look again to our example of two arrays A and B that have seven integer values
// A = [8 8 8 8 8 0 0]
// B = [8 8 8 4 4 0 0]
// the ESDL syntax to declare A and B is pretty simple:
	ArrayOfSevenValue A = {8, 8, 8, 8, 8, 0, 0};
	ArrayOfSevenValue B = {8, 8, 8, 4, 4, 0, 0};
// an empty initializer sets every element of the C and D to its base type's default value
	ArrayOfSevenValue C; // got {0, 0, 0, 0, 0, 0, 0} as default
	AnotherArrayOfSevenValue D; // got {0, 0, 0, 0, 0, 0, 0} as default
// Elements of unconstrained array type must always have a specific size. That constraint includes elements of unconstrained array (don't be fooled by the empty-looking at the type declaration),
	UnconstrainedArrayType U[7] = {8, 8, 8, 8, 8, 0, 0};
// elements with variant size.
	sysconst integer A_SYSTEM_CONST in 1 .. 7 = 5;
// An element of unconstrained array must have bound(s) which is known as max-size.
	UnconstrainedArrayType ucArray[3]; // max size is 3
// In case declared an element array with variant size, the max size will get the value of upper range.
	UnconstrainedArrayType V[A_SYSTEM_CONST] = {8, 8, 8, 8, 8, 0, 0}; // max size is 7, variant arrays can be initialized with its maximum size

// ESDL supports partial initialization for array element. It means, the number of data points can be less or equal the declared size of the array element.
// The missing value(s) will be filled by code generator.
	FixedArray1 fixed_array = {1}; 									// {1, 0}
	UnconstrainedArrayType ucArray1D[4] = {2, 2, 2}; 				// {2, 2, 2, 0}
	UnconstrainedArray2DType ucArray2D[2][3] = {{1, 2},{3, 4}};		// {{1, 2, 0},{3, 4, 0}}
	UnconstrainedArrayType vArray[A_SYSTEM_CONST] = {4, 4, 4};		// {4, 4, 4, 0, 0, 0, 0}

	IntType sum = 0;
// we can declare element arrays of derived type as the following
	ArrayOfBoundedInt_V1_0_10 arr_v1_0_10 = {0};
	ArrayOfBoundedInt_V2_0_10 arr_v2_0_10 = arr_v1_0_10; // compatible, because of they've the same base type and express the same range of values
// elements of unconstrained arrays and fix arrays
	UCArray unconstrainedArray[2];
	UCArray anotherUnconstrainedArray[2];
	FixedArray1 fixed_array1;
	FixedArray2 fixed_array2;
// element of array of struct
	Rams array_of_struct;

	public void assignArrays() {
		unconstrainedArray = anotherUnconstrainedArray; // two arrays have the same type name so they are compatible
		unconstrainedArray = fixed_array1; // we can assign a fix array to an unconstrained array
		fixed_array1 = unconstrainedArray; // two arrays have the same base type and each array dimension's size is equal
	}

	UCArray methodReturnUCArrayFirst() {
		return unconstrainedArray; //same type name
	}

	UCArray methodReturnUCArraySecond() {
		return fixed_array1; //// same base type
	}

	UCArray methodReturnUCArrayThird() {
		return fixed_array2; // same base type 
	}

	void methodWithArgument(UCArray inout arg) {
	}

	void calc() {
		methodWithArgument(unconstrainedArray); // the method argument is defined as unconstrained array so you can pass another with the same type
		methodWithArgument(fixed_array1); // same base type 
		methodWithArgument(fixed_array2); // same base type 
	}

// Let's do some simple operations
	public void worksWithArrays() {

// First, we create a local array to store the calculation result. The array assignment copies value of C to calcResult:
		ArrayOfSevenValue calcResult = C;
//We can assign two arrays which are different type names
		ArrayOfSevenValue caldResult = D; //compatible, because of they're same base type and array dimension's size is equal
// Individual elements contained in an array can be accessed with syntax <<array[index]>>.
// A, B, and C are of basic array type that declares a fixed integer size. Therefore, their index starts at 0. <<array[1]>> give access to the second element rather than the first element.
// We can "add" each individual element of A and B and assign to calcResult,
		calcResult[0] = A[0] + B[0];
		calcResult[1] = A[1] + B[1];
// ...
		calcResult[6] = A[6] + B[6];

// or rewritten it with a for loop.
		for (i in 0 .. 6) {
			calcResult[i] = A[i] + B[i];
		}

// Use <<length()>> intrinsic function to get the actual size of an array:
		for (j in 0 .. calcResult.length() - 1) {
			sum += calcResult[0];
		}

// We can also pass an array to method call as argument,
		sum = calculateSum(U);
		sum = calculateSum(V);

// and have a method that returns an array type.
		sum = calculateSum(getMax(U, V));

	}

// Let's work with an array of struct
	public MB calculateOverallCapacityInArrayOfStruct() {
		MB overall_capacity = 0.0[MB];

		Ram ram_example;
		ram_example.capacity = 1024.0[MB];
		ram_example.usage = 512.0[MB];

		array_of_struct[0] = ram_example;
		array_of_struct[1] = ram_example;
		array_of_struct[2] = ram_example;
		array_of_struct[3] = ram_example;

		for (index in array_of_struct.indexRange()) {
			overall_capacity = array_of_struct[index].capacity + overall_capacity;
		}
		return overall_capacity;
	}

	@no_side_effect
	public integer calculateSum(UnconstrainedArrayType arg) {
		integer sumResult = 0;
// Built-in method <<array.indexRange(dim)>> returns the actual range of the array dimension types.
// <<array.indexRange(0)>> and <<array.indexRange()>> return the same range.
		for (i in arg.indexRange()) {
			sumResult = arg[i];
		}
		return sumResult;
	}

	@no_side_effect
	public UnconstrainedArrayType getMax(UnconstrainedArrayType inout first, UnconstrainedArrayType inout second) {
		if (calculateSum(first) < calculateSum(second)) {
			return first;
		}
		return second;
	}
}// Continue with WorkingTimeCalculation.esdl to see how arrays are used in an example with real world scenario. 