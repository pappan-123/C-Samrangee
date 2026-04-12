#include<stdio.h>
int main()
{
    // int a,b;   // --->> Variable declaration
    int a=100,b=3;  // --->> Variable initialization
    // printf("Enter the value of a and b: ");  //printf is used to print the output on the console
    // scanf("%d %d",&a,&b);  
    // --> & is used to get the address of the variable, so that the input value can be stored in the variable.
    // --> * is used to get the value from the address.
    //--->> scanf is used to take input from the user,
    //%d is used to take integer input, &a and &b are used to 
     //store the input values in the variables a and b respectively.
    // printf("The sum of a and b is: %d\n",a+b);
    // printf("The difference of a and b is: %d\n",a-b);
    // printf("The product of a and b is: %d\n",a*b);
    //10/3=3.333333  metric ton
    // printf("The quotient of a and b is: %d\n",a/b);
    float c= (float)a/(float)b;  // type casting -->> a/b= 3.333333 float c=3.333333 (3.333333 -> 3.333333)
    printf("The quotient of a and b is: %.3f\n",c);
    // printf("The remainder of a and b is: %d\n",a%b);
    return 0;
}