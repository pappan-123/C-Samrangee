// 1.3 Logical Operators(&&, ||, !)

#include <stdio.h>
int main()
{
    int a = 25, b = 10, c = 15;
    
    // Logical AND (&&)
    if (a < b && b < c) {  //false && true= false
        printf("Logical AND: Both conditions are true.\n");
    }else {
        printf("Logical AND: At least one condition is false.\n");
    }
    
    // Logical OR (||)
    if (a > b || b < c) {    //true || true=true
        printf("Logical OR: At least one condition is true.\n");
    }else {
        printf("Logical OR: Both conditions are false.\n");
    }
    
    // Logical NOT (!)
    if (!(a > b)) {  // !(true) = false
        printf("Logical NOT: The condition is false, so this is true.\n");
    }else {
        printf("Logical NOT: The condition is true, so this is false.\n");
    }
    
    return 0;
}