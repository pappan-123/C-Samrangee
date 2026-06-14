// 1. One-Dimensional & Two-Dimensional Arrays

// An array is a collection of variables of the same data type stored in contiguous (side-by-side) memory locations.

// Key Points:

// 1.0-Based Indexing: An array int arr[5] has valid positions from 0 to 4.

// 2.Memory Structure: Even though we look at a 2D array like a grid or matrix, computer memory is strictly linear. C stores 2D arrays in Row-Major Order (it stores the entire first row, then the entire second row, and so on).


// One-Dimensional Array (1D Array):

// Declaration
// int arr[5];

// Initialization
// int arr[5] = {10, 20, 30, 40, 50};

// Input & Output

#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Important Traps in 1D Arrays
// Trap 1: Index starts from 0
// arr[0]   // first element
// arr[4]   // fifth element

// ❌ Wrong:

// arr[5]
// Trap 2: Array index out of bounds
// int arr[5];

// arr[10] = 50; // dangerous

// May cause garbage value or crash.

// Trap 3: Forgetting &
// scanf("%d", &arr[i]);

// ❌ Wrong:

// scanf("%d", arr[i]);
// Trap 4: Fixed size

// Array size cannot change after declaration.

// Practice Questions (1D Array)
// Find sum of all elements.
// Find largest number.
// Find smallest number.
// Count even and odd numbers.
// Reverse the array.
// Search an element.


// Two-Dimensional Array (2D Array):

// Declaration
// int arr[3][4];

// 3 rows and 4 columns.

// Initialization
// int arr[2][3] = {
//     {1,2,3},
//     {4,5,6}
// };

// Input and Output:

#include <stdio.h>

int main() {
    int arr[2][2];
    int i, j;

    printf("Enter elements:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    // Initialization: 2 rows, 3 columns
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // Accessing and modifying elements
    matrix[0][1] = 20; // Changes 2 to 20
    
    // Printing using nested loops
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Important Traps in 2D Arrays
// Trap 1: Confusing rows and columns
// int arr[2][3];

// Means:

// 2 rows
// 3 columns


// Trap 2: Wrong loop limits
// for(i=0; i<2; i++)
// for(j=0; j<3; j++)
// Trap 3: Missing nested loops

// 2D arrays require nested loops.

// Practice Questions (2D Array)
// Matrix addition
// Matrix subtraction
// Matrix transpose
// Sum of each row
// Sum of each column
// Diagonal sum








// 1. What is an array ??
//------------------------

// An array is a collection of data items of the same type

// Items are stored at contiguous memory locations.

// It can also store the collection of derived data types, such as pointers, structures, etc.

// A one-dimensional array is like a list.

// A two-dimensional array is like a table.

// The C language places no limits on the number of dimensions in an array.

// Some texts refer to one-dimensional arrays as vectors, two-dimensional arrays as matrices, and use
// the general term arrays when the number of dimensions is unspecified or unimportant.


// 2. Why do we need arrays ??
//------------------------------

// Code that use arrays is sometimes more organized and readable.

// If you were to store the marks in a test of 56 students, creating 56 variables will make program look
// cluttered and messy.

// Solution to this is arrays! 

// We can create arrays of integers and store the consecutive marks corresponding to the roll number in
// the array

// Advantage of arrays:
// -----------------------

// It is used to represent multiple data items of same type by using only single name

// Accessing an item in a given array is very fast!

// 2 Dimensional arrays makes it easy in mathematical applications as it is used to represent a matrix.

// Properties of arrays:
// -----------------------
// Data in an array is stored in contiguous memory locations

// Each element of an array is of same size

// Any element of the array with given index can be accessed very quickly by using its address which can be
// calculated using the base address and the index.

// SYNTAX FOR DECLARING AND INITIALIZING AN ARRAY

// Data_type name[size]; 
// Data_type name[size] = {x,y,z, ......}://size not required in this case! 
// data_type name[rows][columns]; //for 2-d arrays 
// We can also initialize the array one by one by accessing it using its index: 
//   name[0] = 0; 
 