// What is pointers ?

// Variable which stores the address of another variable.
// Can be of type int, char, array, function, or any other pointer.
// Size depends on the architecture. Ex 2 bytes for 32 bit
// Pointer in C programming language can be declared using * (asterisk symbol).


// The address of operator '&' returns the address of a variable
// * is the dereference operator (also called indirection operator) used to get the value
// at a given address

#include <stdio.h>

int main(){
    int a=76;
    int* ptr = &a; // ptr is a pointer to an integer, initialized to the address of a
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *ptr); // dereferencing ptr to get the value of a
    printf("The address of pointer to a is: %p\n", &ptr);
    printf("Address of a: %p\n", &a);
    printf("Address of a: %p\n", ptr);
    printf("Value at the address stored in ptr: %d\n", *ptr); // dereferencing ptr to get the value of a
    return 0;   
}

// Null Pointer

// A pointer that is not assigned any value but NULL is known as the NULL pointer.
// In computer programming, a null pointer is a pointer that does not point to any object or function.
// We can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address
// yet.
// int * ptr = NULL; 

#include <stdio.h>

int main(){
    int *ptr = NULL; // ptr is a null pointer, it does not point to any valid memory address
    int *ptr2; // ptr2 is an uninitialized pointer, it may point to any random memory address (dangerous)
    printf("Value of ptr: %p\n", ptr); // prints (nil) or
    printf("Value of ptr2: %p\n", ptr2); // may print a random memory address (undefined behavior)   
    return 0;
}


// Use of Pointers:
// Dynamic memory allocation
// Arrays, Functions, and Structures
// Return multiple values from a function
// Pointer reduces the code and improves the performance