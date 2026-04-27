// do-while Loop
// Repeatedly executes a block of code until a condition becomes False.

// Rules:
// An Exit-controlled loop: The condition is checked after executing the block.
// This guarantees the loop will run at least once, even if the condition is False from the start.
// Requires a semicolon at the very end of the statement.

#include <stdio.h>

int main() {
    int i = 10; // Notice 'i' starts at 10

    printf("Starting do-while loop...\n");
    do {
        // This will print once, even though 10 <= 5 is False.
        printf("i is %d\n", i); 
        i++;
    } while (i <= 5); // SEMICOLON IS REQUIRED HERE

    printf("Loop finished.\n");

    return 0;
}