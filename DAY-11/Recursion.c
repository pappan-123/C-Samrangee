// Recursive functions or Recursion is a process when a function cals a copy of itself to work on a smaller problem.
// Any function which calls itself is called recursive function.
// This makes the life of programmer easy by dividing a given problem into easier 
// A termination condition is imposed on such functions to stop them executing copies of themselves forever 
// Any problem that can be solved recursively, can also be solved iteratively 

// Why Recursion is used?

// 1. Any problem that can be solved recursively, can also be solved iteratively.
// 2. However, some problems are best suited to be solved using recursion.
// 3. For example, tower of Hanoi, Fibonacci series, factorial finding, etc.

// Example-1: Factorial Calculation:

// The case at which the function doesn't recur is called the base case.
// The instances where the function keeps calling itself to perform a subtask, is called the recursive case. 
// For factorial calculation the base case occurs at the parameter value of 0 and 1.

#include<stdio.h>

int factorial(int number){
    if(number == 0 || number == 1){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}

int main(){
    int num;
    printf("Enter a number to find factorial: \n");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
}