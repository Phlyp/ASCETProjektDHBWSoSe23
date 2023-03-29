package matrix;

// A matrix is normally a rectangular arrangement of elements into rows and columns. Matrices A and B below have two rows and three columns
// A = 	[ 6 	 4 		24 ]
// 		[ 1 	-8 		 9 ]
// B = 	[ 9 	 9 		 9 ]
// 		[ 1 	-1 		 1 ]

// A and B share the same matrix type, which is represented in ESDL as a two dimensions array type as follows:
type TwoByThreeMatrix is array[2][3] of IntValue;
type IntValue is integer -100 .. 100;

// A matrix with three rows and two columns is represented as:
type ThreeByTwoMatrix is array[3][2] of IntValue;

// ESDL supports more than just simple and fixed matrices. For examples:

// matrix that uses enum as dimension and base-type
type BasicColor is enum {Red, Blue, Green};
type Shade is enum {Dark, Light};
type Color is enum {DarkRed, DarkBlue, DarkGreen, LightRed, LightBlue, LightGreen};
type MatrixOfColor is array[BasicColor][Shade] of Color;

// matrix that has variant sizes depending on a system constants
sysconst integer VARIANT_SIZE in 5 .. 10 = 5;
type MatrixWithVariantSize is array[VARIANT_SIZE][VARIANT_SIZE] of real;

// or unconstrained matrix which does not define fixed dimension types (but elements of it do).
type Matrix is array[][] of real;

// Supported matrix's base types also include simple scalar and complex types (struct and tables). Similar to one dimension array, ESDL also has some constraints on the maximum size of matrices.

// There are many things that we can do with matrices
static class MatrixOperation {
	
	// Let's try to create two matrices A and B above...
	TwoByThreeMatrix A = {{6, 4, 24}, {1, -8, 9}};
	TwoByThreeMatrix B = {{9, 9, 9} , {1, -1, 1}};
	
	// and a matrix C with 3 x 2 dimensions
	ThreeByTwoMatrix C;
	
	// and do some basic operations with them
	public void workWithMatrices() {
		// a matrix element can be accessed as matrix[firstIndex][secondIndex]
		
		// we can add A and B
		TwoByThreeMatrix calResult = {{0, 0, 0}, {0, 0, 0}};
		calResult[0][0] = A[0][0] + B[0][0];
		calResult[0][1] = A[0][1] + B[0][1];
		calResult[0][2] = A[0][2] + B[0][2];
		calResult[1][0] = A[1][0] + B[1][0];
		calResult[1][1] = A[1][1] + B[1][1];
		calResult[1][2] = A[1][2] + B[1][2];
		
		// or subtract B from A but using a for-loop
        // built-in method expression.indexRange(dim) returns the actual range of the matrix dimension types, where dim[0,1] is value of the accessing dimension
		for (i in A.indexRange(0)) {
			for (j in A.indexRange(1)) {
				calResult[i][j] = A[i][j] - B[i][j]; 
			}
		}
		
		// and of course we can work with matrices of different types, e.g. transpose a 2 x 3 matrix to 3 x 2 matrix 
		for (a1 in A.indexRange()) { 	// <<expression.indexRange()>> alone is a short hand for indexRange(0)
			for (a2 in A.indexRange(1)) {
				C[a2][a1] = A[a1][a2]; 
			}
		}
	}
}

// The next sample code shows how matrices are used to solve a "real-world" example