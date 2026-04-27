// A loop that packs initialization, condition checking, and updating into a single line. 
// Ideal for when you know exactly how many times you want to iterate.

// Rules:
// Syntax: for(initialization; condition; update) { ... }
// All three parts are technically optional. 

// 1. Infinite Loop
// for(;;) creates an infinite loop.

// 2. Missing Initialization
// int i = 0;
// for(; i < 5; i++) {
//     printf("%d ", i);
// }
// ⚠ Trap: If i is uninitialized → undefined behavior

// 3. Missing Condition (Infinite Loop Trap)
// for(int i = 0; ; i++) {
//     printf("%d ", i);
// }
// ⚠ Runs forever like while(1)

// 4. Missing Increment
// for(int i = 0; i < 5; ) {
//     printf("%d ", i);
// }
// ⚠ Trap: Infinite loop if you forget to update i manually

// 6. Multiple variables in loop
// for(int i = 0, j = 10; i < 5; i++, j--) {
//     printf("%d %d\n", i, j);
// }
//working
//⚠ Trap: Hard to debug if logic gets complex

// 7. Reverse loop
// for(int i = 5; i > 0; i--) {
//     printf("%d ", i);
// }
// 5 4 3 2 1

// 8. Nested for loop
// for(int i = 1; i <= 3; i++) {
//     for(int j = 1; j <= 2; j++) {
//         printf("%d %d\n", i, j);
//     }
// }

//OUTER FOR LOOP i=1
// Outer FOR loop ---> i=1 , i<=3 >> 1<=3 >> true  --->> 
   //Inner FOR loop ---> j=1, i<=2 >> 1<=2 >> true --->> 1 ,1
        // Inner FOR loop ---> j++ , j=2 i<=2 >> 2<=2 >> true -->> 1,2
            // Inner FOR loop ---> j++ , j=3 i<=2 >> 3<=2 >> false -->> THE END
        
//OUTER FOR LOOP  i++,i=2            
// Outer FOR loop ---> i=2 , i<=3 >> 2<=3 >> true  --->> 
   //Inner FOR loop ---> j=1, i<=2 >> 1<=2 >> true --->> 2 ,1
        // Inner FOR loop ---> j++ , j=2 i<=2 >> 2<=2 >> true -->> 2,2
            // Inner FOR loop ---> j++ , j=3 i<=2 >> 3<=2 >> false -->> THE END
            
//OUTER FOR LOOP  i++,i=3           
// Outer FOR loop ---> i=2 , i<=3 >> 3<=3 >> true  --->> 
   //Inner FOR loop ---> j=1, i<=2 >> 1<=2 >> true --->> 3 ,1
        // Inner FOR loop ---> j++ , j=2 i<=2 >> 2<=2 >> true -->> 3,2
            // Inner FOR loop ---> j++ , j=3 i<=2 >> 3<=2 >> false -->> THE END
            
//OUTER FOR LOOP  i++,i=4
//THE END of whole 

// 9. Empty loop body (Your semicolon trap)
// for(int i = 0; i < 5; i++);  // <- DANGER
// {
//     printf("Runs once\n");
// }
// Loop runs silently
// Block runs only once

// 10. Assignment instead of condition
// for(int i = 0; i = 5; i++) {
//     printf("%d", i);
// }
//⚠ Trap: i = 5 is assignment, not comparison
// Always true → infinite loop

// 11. Using wrong comparison operator
// for(int i = 0; i > 5; i++) {
//     printf("%d", i);
// }
// ⚠ Loop never executes

// 14. Using floating point loop variable
// for(float i = 0; i != 1.0; i += 0.1) {
//     printf("%.1f ", i);
// }
// ⚠ Trap:Precision issues → infinite loop

// 15. Using break and continue
// for(int i = 0; i < 5; i++) {
//     if(i == 3) break;
//     printf("%d ", i);
// }

// for(int i = 0; i < 5; i++) {
//     if(i == 3) continue;
//     printf("%d ", i);
// }

#include <stdio.h>

int main() {
    // Proper Usage

    //1st 1<=5 -> true  print(1) i++ -> i=2
    //2nd 2<=5 -> true  print(2) i++ -> i=3
    //3rd 3<=5 -> true  print(3) i++ -> i=4
    //4th 4<=5 -> true  print(4) i++ -> i=5
    //5th 5<=5 -> true  print(5) i++ -> i=6
    //6th 6<=5 -> false -> THE END
    printf("Standard for loop: ");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Mistake: Accidental Semicolon Trap
    int j;
    // Notice the semicolon at the end of the next line!
    for(j = 1; j <= 5; j++); 
    {
        // This block is NOT part of the loop.
        // It only prints once, after the loop finishes counting to 6 behind the scenes.
        printf("Semicolon trap output: %d\n", j); 
    }

    return 0;
}