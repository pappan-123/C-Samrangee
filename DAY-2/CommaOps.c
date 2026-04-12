// 1.8 Comma Operator(,)

//The comma operator (,) return the rightmost expression after evaluating all the expressions from left to right.
#include <stdio.h>

int main()
{
    int a = 5, b = 10, c;
    // int p=1,q=2,r=3,s;
    // Using comma operator to evaluate multiple expressions
    // s=(p, q, r); // evaluates p, q, and r sequentially, assigns r to s 
    // printf("p : %d, q : %d, r : %d, s : %d\n", p, q, r, s);
    c = (a++, b++); // evaluates a++ and b++ sequentially, assigns b++ to c
    printf("a : %d, b : %d, c : %d\n", a, b, c);
    return 0;
}