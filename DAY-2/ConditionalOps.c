// 1.7 Conditional Operator(?:)
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c;
    c = (a > b) ? a : b; // if a > b, then c = a, else c = b
    // if(a>b){
    // c=a
    // }else{
    //     c=b;
    // }
    // (a>b) == true/false ? true : false;
    printf("c : %d\n", c);
    return 0;
}