// Programming Fundamentals
== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
🔹 1. Instruction
👉 Definition

An instruction is a single command given to the computer to perform a task.

👉 Example(C) :
int a = 5; // instruction
a = a + 2;                // instruction
printf("%d", a);          // instruction

👉 Each line = one instruction

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

🔹 2. Program
👉 Definition

    A program is a collection of instructions executed to solve a problem.

👉 Example:

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}

👉 This entire block = program

------------------------------------------------------------------------------

🔹 3. Programming Language:
👉 Types
🔸 (a) Low-Level Language:

 The lowest level of programming, consisting entirely of binary strings (0s and 1s). 
 This is the only language the CPU directly understands. 
 It is incredibly difficult for humans to read or write.


Machine-dependent
Very fast
Hard to understand

👉 Example (Machine code):

10101000 00001111
🔸 (b) Assembly Language
 A low-level language that uses short mnemonics (abbreviations like ADD, MOV, SUB) 
 instead of raw binary to represent machine code instructions. It is hardware-dependent;
  an assembly program written for an Intel processor won't work on an ARM processor. 
  It requires an "Assembler" to translate it into machine code.

👉 Example:

#include <stdio.h>

int func(int a, int b) {
    return a + b;
}

int main(){
    int a=1,b=2,c;  MOV a,1  MOV b,2 MOV c,0
    c=a+b;          ADD a,b
    // printf("%d",func(a,b));
    {Print whatever written inside the ( )}("%d",c);
    return 0;
}

MOV A, 5  A=5
ADD A, 3  A=A+3  --> 5=5+3 --> 5=8 ---> A=8
🔸 (c) High-Level Language

 Designed to be easy for humans to read, write, and maintain. 
 They use English-like syntax and abstract away hardware details (memory management, CPU registers).
 E.g: C, Python, Java, JavaScript.

👉 Example (C):

int sum = 5 + 3;

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

🔹 4. Procedural Programming
👉 Definition
   Program is divided into functions / procedures

👉 Example(C) :

#include <stdio.h>

void greet()
{
    printf("Hello\n");
}

int main()
{
    greet();
    return 0;
}

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

🔹 5. Non - Procedural Programming
👉 Definition

    Focus on what to do,not how to do

👉 Example(SQL) : Structured Query Language

    SELECT * FROM students WHERE marks > 80;

👉 You don’t specify steps, just the result

    -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

🔹 6. Structured Programming
👉 Concept

    Uses :

    Sequence
    Selection(if / else)
    Iteration(loops)

👉 Example :

#include <stdio.h>

int main()
{
    int n = 5;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

👉 No goto, clean structure (GOTO())

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

🔹 7. Object - Oriented Programming(OOP)
👉 Concept

    Based on :

    Objects Classes 
    ==============
    Abstruction,
    Encapsulation,
    Inheritance, 
    Polymorphism
    ==============

👉 Example(C++) :

#include <iostream>
using namespace std;

class Car{   //class
    public :
        void drive(){  //method of the class
            cout << "Driving car";
        }
    };

int main()
{
    Car c; //object of class Car
    c.drive();
}

// Algorithm fundamentals
== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
🔹 1. Algorithm
👉 Definition

    A step - by - step procedure to solve a problem.

👉 Example : Find sum of two numbers
🔸 Pseudocode START Read a,b

        sum = a + b Print sum END
🔹 2. Characteristics of Algorithm Finite(must end) 
        Definite(clear steps) 
        Input(0 or more) 
        Output(at least 1) 
        Effective(simple steps)


🔹 3. Recursive vs Non - Recursive
🔸 Recursive(function calls itself):

#include <stdio.h>

int fact(int n){
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n = 5;
    printf("Factorial of %d is %d", n, fact(n));
    return 0;
}

🔸 Non - Recursive 
int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

---------------------------------------------------------------------------------------

📊 Representation: Flowcharts and Pseudocode

Flowchart:

A flowchart is a graphical representation of an algorithm.

Flowchart Rules:

1.Always start with an Oval (Start) and end with an Oval (Stop).
2.Use a Parallelogram for Input/Output operations (e.g., "Read X", "Print Y").
3.Use a Rectangle for Processing/Calculations (e.g., "Sum = A + B").
4.Use a Diamond for Decisions/Branching (e.g., "Is X > 5?"). It must have one arrow entering and two arrows leaving (True/False or Yes/No).
5.Use Arrows (Flowlines) to connect symbols. Flow should generally be top-to-bottom and left-to-right.

----------------------------------------------------------------------------------------------------

Pseudocode
Pseudocode is an informal, plain-English representation of an algorithm. 
It looks like code but ignores strict syntax rules (like semicolons or specific variable declarations).

Pseudocode Rules:

1.Use capital letters for keywords (START, END, IF, ELSE, WHILE, READ, PRINT).
2.Indent blocks of code to show hierarchy (just like inside loops or if-statements).
3.Keep it simple and language-independent.

Example: Algorithm to find the Factorial of a number (Iterative)

#include<stdio.h>

int main(){
 float num1,num2,num3,average;
 printf("Enter three numbers: ");
 scanf("%f %f %f",&num1,&num2,&num3);
 average=(num1+num2+num3)/3;
 printf("Average is : %.2f",average);
 return 0;
}

Pseudo Code:

START
DECLARE num1, num2, num3, average AS FLOAT
PRINT "Enter three numbers: "
READ num1, num2, num3
SET average = (num1 + num2 + num3) / 3
PRINT "Average is: ", average
END

-------------------------------------------------------------------------------------------
4. Efficiency of Algorithms
Just because an algorithm works doesn't mean it's good. 
Efficiency measures how many computing resources an algorithm consumes. 
We primary measure two things: Space and Time.

⏱️ Time Complexity: 
The amount of time an algorithm takes to run, expressed as a function of the size 
of the input (n).

// Example 1: Constant Time
// No matter how big 'n' is, this takes 1 step. 
int getFirstElement(int arr[], int n) {
    return arr[0]; // Time Complexity: O(1)
}

// Example 2: Linear Time
// If n is 10, the loop runs 10 times. If n is 1,000,000, it runs 1,000,000 times.
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i]; // Runs 'n' times. Time Complexity: O(n)
    }
    return sum;
}

💾 Space Complexity: 
The amount of temporary working memory (RAM) an algorithm needs to run to completion, 
as a function of the input size (n).

// Example 1: Constant Space
// We only create one integer 'sum' regardless of array size.
// Space Complexity: O(1)
int sumArray(int arr[], int n) {
    int sum = 0; 
    for(int i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    return sum;
}

// Example 2: Linear Space
// We create a whole new array exactly the size of the input 'n'.
// If n is 1,000, we need memory for 1,000 new integers.
// Space Complexity: O(n)
void copyArray(int arr[], int n) {
    int newArr[n]; // Allocating memory dependent on 'n'
    for(int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
}

------------------------------------------------------------------------------------------

Asymptotic Notation (Big O, Big Omega, Big Theta):

1.🔴 Big O Notation (O) - 
The Upper Bound (Worst-Case)Meaning: 
Big O guarantees that an algorithm will take no more than a certain amount of time. 
It is the "worst-case scenario."


2.🟢 Big Omega Notation (Ω) - 
The Lower Bound (Best-Case)Meaning: 
Big Omega guarantees that an algorithm will take at least a certain amount of time. 
It is the "best-case scenario."

3.🔵 Big Theta Notation (Θ) - 
The Tight Bound (Average/Exact-Case)Meaning: 
Big Theta bounds a function from above and below. 
It defines the exact asymptotic behavior. 
You can only use Big Theta if the worst-case and best-case take the exact same rate of time.

