// There are four aithmatic operators in C that can be used with pointers. They are:
// 1. Increment operator (++)
// 2. Decrement operator (--)
// 3. Addition operator (+)
// 4. Subtraction operator (-)

// When we perform pointer arithmetic, the operations are done in terms of the size of the data type that the pointer is pointing to. 
// For example, if we have a pointer to an integer (which typically takes 4 bytes), then incrementing the pointer will move it to the next integer (4 bytes ahead in memory).

#include <stdio.h>

int main(){
    int a=34;
    int *ptr=&a;
    //similarly we can do ptr++/ptr--/ptr+2/ptr-2 etc. depending on the data type of pointer
    printf("%d\n",ptr); // prints the value of ptr (the address of a)
    printf("%d\n",ptr+1); // prints ptr's value+ 4(as int takes 4 bytes of memory)
    printf("%d\n",ptr-1); // prints ptr's value- 4(as int takes 4 bytes of memory)
    
    char a='3';
    char *ptr=&a;
    printf("%d\n",ptr); // prints the value of ptr (the address of a)
    printf("%d\n",ptr+1); // prints ptr's value+ 1(as char takes 1 byte of memory)
    printf("%d",ptr-1); // prints ptr's value- 1(as char takes 1 byte of memory)

}

// Consider the following declaration: int arr[10] ;
// What is the type of arr? 
// However, arr, by itself, without any index subscripting, can be assigned to an integer pointer. |
// What type does arr[i] have?

// arr[i] using Pointer Arithmetic:
// arr[i] is equivalent to *(arr + i)
// If arr is a pointer to arr[0], then arr + i is a pointer to arr[i], and dereferencing it gives the value of arr[i].

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,67};
    int *arrayPtr = arr; // Assign the address of the first element to the pointer
    printf("Vaue at position 3 is %d\n",arr[3]); // prints 4
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr); // arr is equivalent to &arr[0]
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr+1); // arr+1 is equivalent to &arr[1]
   
    // arr++/arr-- not allowed as arr is an array name and it is a constant pointer to the first element of the array. We cannot change the address stored in arr.
    arrayPtr++; // allowed as arrayPtr is a pointer variable and we can change the address stored in it.

    printf("The value of the first element of the array is %d\n", *(&arr[0])); // *(&arr[0]) is equivalent to arr[0]
    printf("The value of the first element of the array is %d\n", *(arr)); // *(arr) is equivalent to arr[0]
    printf("The value of the second element of the array is %d\n", *(&arr[1])); // &arr[1] is equivalent to arr[1]
    printf("The value of the second element of the array is %d\n", *(arr+1)); // *(arr+1) is equivalent to arr[1]
}
