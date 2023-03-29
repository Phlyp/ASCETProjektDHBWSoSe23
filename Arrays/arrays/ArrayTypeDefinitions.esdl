package arrays;

// In programming world, an array is a collection containing a specific number of values of a particular type, where each value has an associated index.
// Each of the two arrays A and B below contains seven integer values
// A = [8 8 8 8 8 0 0]
// B = [8 8 8 4 4 0 0]

// A and B have different values but can share the same array type. In ESDL, such array type is represented as:
type ArrayOfSevenValue is array[7] of IntType;
type AnotherArrayOfSevenValue is array[7] of IntType;
type IntType is integer 0 .. 1000;

//Define two arrays from derived type
type ArrayOfBoundedInt_V1_0_10 is array [1] of BoundedInt_V1_0_10;
type ArrayOfBoundedInt_V2_0_10 is array [1] of BoundedInt_V2_0_10;

type BoundedInt_V1_0_10 is integer 0 .. 10;
type BoundedInt_V2_0_10 is integer 0 .. 10;

//We can define unconstrained array and fixed array as the following
type UCArray is array [] of integer;
type FixedArray1 is array [2] of integer;
type FixedArray2 is array [3] of integer;

// Similarly, an array of 5 real values are defined as
type ArrayOfFiveValue is array[5] of real;

// In ESDL, array type must specify its base type, which is the particular type that every element of the array type is consisted of.
// Base type can be of almost every supported types in ESDL, including simple scalar like integer, real, boolean, enum and complex types like struct and table. Look at the examples below, we can define:

// array of enumerations,
type Color is enum {red, orange, yellow, green, blue, indigo, purple};
type Rainbow is array[7] of Color;

// array of structs,
type Rams is array[4] of Ram;

// array of curves
type ArrayOfCurves is array[5] of Curve; 
type Curve is table integer -> integer;

// or array of maps.
type ArrayOfMaps is array[] of Map;
type AxisType is axis integer;
type Map is group table AxisType, AxisType-> integer;

// We knew that array elements should be assigned with a fixed size. But in the definition of type ArrayOfMaps above, we see an absence of its dimension. 
// While at run time, elements of array type are ensured to have a specific size. For the ease of modeling, the type definitions themselves are more flexible. ESDL allows array index to be:

// an enumeration type,
type WheelSpeed is array [Wheels] of real;
type Wheels is enum {front_left, front_right, rear_left, rear_right};

// a predefined integer type ...
type WorkingTime is array[DaysInMonth] of real; // as there is no day zero
type DaysInMonth is integer 1 .. 31;
// which is equivalent with,
type WorkingTimeAlias is array[1 .. 31] of real;

// a variant size that depends on a system constant,
sysconst integer NUMBER_OF_DAY in 28 .. 31 = 30;
type VariantWorkingTime is array[NUMBER_OF_DAY] of real; // as not every month has the same number of days

// or without any predefined dimension, as showed above with ArrayOfMaps. Note that elements of such type must specify their dimensions.
type UnconstrainedArrayType is array[] of integer;
type UnconstrainedArray2DType is array[][] of integer;

// The type definitions above show how one-dimension arrays look like in ESDL. For two-dimension arrays, refer to the matrix example.

// Now let's go to the next part ArrayTypeElements.esdl which shows how array elements are declared and used.
