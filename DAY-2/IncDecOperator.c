// 1.6 Increment and Decrement Operators(++, --)
#include <stdio.h>
// pre-increment: x is incremented first and then assigned to result1  ++x
// post-increment: y is assigned to result2 first and then incremented  x++
//pre-decrement: x is decremented first and then assigned to result1  --x
//post-decrement: y is assigned to result2 first and then decremented  x--

int main()
{
    int x = 5, y = 5;
    int result1, result2;
    result1 = ++x; //x=x+1=6 result1=x=6
    result2 = y++;  // result2=y=5 y=y+1=6
    printf("x : %d, y : %d, result1: %d, result2: %d\n", x, y, result1, result2); // 6 6 6 5
    //x=6 , y=6 , result1=6, result2=5
    result1 = --x;  // x=x-1=6-1=5 result1=x=5
    result2 = y--;  //result2=y=6 y=y-1=6-1=5
    printf("x : %d, y : %d, result1: %d, result2: %d\n", x, y, result1, result2); // 5 5 5 6
    return 0;
}