// What is Function:

// Functions are used to divide a large ¢ program into smaller pieces
// A function can be called multiple times to provide reusability and modularity to the C program
// Also called procedure or subroutine

// Function: Syntax :

// The basic syntax of a C functions is written as follows: 
// return_type function_name(data_type parameter|, data_type parameter2,...so on.....){ 
// code to be executed
// }

//Advantages of C Functions:

// 1. We can avoid rewriting same logic through functions
// 2. We can divide work among programmers using functions
// 3. We can easily debug a program using functions

// Declaration, Definition and Call of a Function:

// A function is declared to tell a compiler about its existence
// A function is defined to get some task done
// A function is called in order to be used

//Types of Functions:

// Library functions — Functions included in C header files
// User defined functions - Functions created by
// C programmer to reduce complexity of a
// program

// Function Code Types:

// Without arguments and without return value
// Without arguments and with return value 
// With arguments and without return value 
// With arguments and with return value 


#include<stdio.h>

int sumOfNumbers(int x,int y); // Function Declaration

//With Return Type and With Arguments
int sumOfNumbers(int x,int y) //Formal Parameters/Arguments Value of a,b assigned to x,y
{
    int temp;
    temp=x+y;
    return temp;
}

//With Return Type and Without Arguments
int takeNumberInput(){
    int n;
    printf("Please Enter the value of n \n");
    scanf("%d", &n);
    return n;
}

//Without Return Type and With Arguments
void printStar(int n){
    for(int i=0;i<n;i++){
        printf("%c ", '*');
    }
    printf("\n");
}

//Without Return Type & Without Arguments
void printVoteStatus(){
    printf("Hello World");
}

int main(){
    int a,b,c,d;
    a=5;
    b=6;
    
    //With Return Type and With Arguments
    c= sumOfNumbers(a,b);  // Actual Parameters/Arguments
    printf("Sum of a+b= %d \n",c);
    
    //With Return Type and Without Arguments
    d=takeNumberInput();
    printf("Value of d %d \n",d);
    
    //Without Return Type and With Arguments
    printStar(10);
    
    
    //Without Return Type & Without Arguments
    printVoteStatus();
    
    return 0;
}