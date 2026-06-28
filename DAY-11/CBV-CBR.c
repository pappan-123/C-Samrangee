// Actual and Formal Parameters:

// 1. When a function is called, the values (expressions) that are passed in the call are called the arguments or actual
// parameters
// 2. Formal parameters are local variables which are assigned values from the arguments when the function is called.

#include <stdio.h>

int add(int a, int b)
{ // a,b are formal parameters (where copy of x,y are assigned)
    int y1;
    return a + b;
}

int z;

int main()
{
    int x = 2, y = 3;
    int s = add(x, y); // x,y are actual parameters
    // x=y1; //will give error because y1 is local to add function and cannot be accessed in main function
    x = z; // will not give error because z is global variable and can be accessed in main function
    printf("The sum is %d", s);
}

// In C programming language, we can call a function in two different ways, based on how we specify the arguments,
// and these two ways are:
// a. Call by Value
// b. Call by Reference

// 1. Call by Value:

// - When we call a function by value, it means that we are passing the values of the arguments which are copied into
//   the formal parameters of the function.
// - Which means that the original values remain unchanged and only the parameters inside the function changes.

// 2. Call by Reference:
// The call by reference method of passing arguments to a C function copies the address of the arguments into
// the formal parameters.
// Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments

// Example:

#include<stdio.h>
// function definition to swap the values
void swap(int *x, int *y)
{
    int temp;
    temp = *x; /* save the value at address x */ // temp=34,*x=34,*y=74
    *x = *y; /* put y into x */                  // temp=34,*x=74,*y=74
    *y = temp; /* put temp into y */             // temp=34,*x=74,*y=34
    return;
}

int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}

#include <stdio.h>

void changeValue(int *address)
{
    *address = 45;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}

//quiz
// Given two numbers a and b, add them then subtract them and assign them to a and b using call
// by reference.