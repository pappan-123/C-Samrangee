// BRANCHING & LOOPING

// 🔹 if Statement
// Executes a block of code only if a specific condition is True (non-zero).

// Rules:
// If there is only one line of code inside the if, braces {} 
// are optional, but highly recommended for readability.

#include <stdio.h>

int main() {
    int score = 85;

    // Correct Usage
    if (score >= 50) //true
        printf("You passed the exam!\n");
    

    // The Semicolon Trap
    if (score < 50); // <--- ERROR here. This acts as an empty statement.
    //automatically prints because of block scope, not because of the condition.
    {
        // This will print even though score is 85, because the 'if' ended at the semicolon.
        printf("(This prints due to a bad semicolon!)\n"); 
    }

    return 0;
}