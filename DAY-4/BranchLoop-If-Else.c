// 🔹 if-else Statement
// Provides two mutual execution paths. If the condition is True, the if block runs. 
// If False, the else block runs.

// Rules:
// An else must directly follow the closing brace of an if (or else if).

// ELSE-IF

// int marks = 75;

// if (marks >= 90) {
//     printf("Grade A\n");
// } 
// else if (marks >= 70) {
//     printf("Grade B\n");
// } 
// else if (marks >= 50) {
//     printf("Grade C\n");
// } 
// else {
//     printf("Fail\n");
// }

// 👉 Flow:

// Conditions checked top → bottom
// First true block executes
// Rest are skipped

// 3. Nested if–else
// int x = 5, y = 10;

// if (x == 5) {
//     if (y == 10) {
//         printf("x=5 and y=10\n");
//     } else {
//         printf("x=5 but y!=10\n");
//     }
// }

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    if (a > b) {
        printf("A is greater than B.\n");
    } else {
        printf("B is greater than or equal to A.\n");
    }

    // Demonstrating the "Dangling Else" trap
    int x = 5, y = 10;
    
    if (x == 5)
        if (y == 5)
            printf("Both are 5\n");
    else // Because no braces were used, this 'else' belongs to the 'if (y == 5)'!
        printf("This implies y is not 5, even though indentation looks like x is not 5.\n");

    //what compiler thinks for Dangling Else:

    //  if (x == 5) {
    //     if (y == 5)
    //         printf("Both are 5\n");
    //     else
    //         printf("This else belongs to inner if!\n");
    // }

    return 0;
}