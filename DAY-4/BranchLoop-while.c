// Repeatedly executes a block of code as long as a condition is True.

// Rules:
// An Entry-controlled loop: The condition is checked before entering the loop. 
// If the condition is False initially, the loop runs 0 times.

#include <stdio.h>

int main() {
    int i = 1;

    printf("Starting while loop...\n");
    // Condition checked first
    while (i <= 5) {
        printf("%d ", i);
        i++; // Critical step: updating the condition variable
    }
    printf("\nLoop finished.\n");

    /*
    MISTAKE: Infinite loop
    int j = 1;
    while (j <= 5) {   //similar like (while (1)) which is always true
        printf("%d ", j);
        // j is never updated, condition is always true.
    }
    */

    return 0;
}