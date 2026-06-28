// We pass arrays to a function when we need to pass a list of values to a given function.
// We can pass the arrays to a function :

// 1. By declaring array as a parameter in the function
// 2. By declaring a pointer in the function to hold the base address of the array

//1.BY DECLARING ARRAY AS A PARAMETER IN THE FUNCTION

// int func(int arr[]){
//     int sum = 0;
//     for(int i=0;i<5;i++){
//         sum+=arr[i];
//     }
//     return sum/5;
// }

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int av=func(arr);
//     printf("Average: %d\n", av);
//     return 0;
// }

// Inside func,if you change the value of the array elements, it will affect the original array in main because arrays are passed by reference in C.

//BY PASSING ARRAY'S BASE ADDRESS TO A FUNCTION

// int func(int* ptr){
//     //here *(ptr)---> will give 1
//     //here *(ptr+1)---> will give 2
//     //here *(ptr+2)---> will give 3
//     //here *(ptr+3)---> will give 4
//     //here *(ptr+4)---> will give 5
//     int sum = 0;
//     for(int i=0;i<5;i++){
//         sum += *(ptr + i);
//     }
//     return sum/5;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int av=func(arr);
//     printf("Average: %d\n", av);
//     return 0;
// }


// Code:


#include <stdio.h>

int func1(int array[]){
    for(int i=0;i<4;i++){
        printf("the value at %d is %d\n", i, array[i]);
    }
    array[0]=100; // changing the value of the first element of the array because we are passing the base address of the array to the function
    return 0;
}

void func2(int* ptr){
    for(int i=0;i<4;i++){
        printf("the value at %d is %d\n", i, *(ptr+i));
        // printf("the value at %d is %d\n", i, ptr[i]);
    }
    *(ptr+2)=200; // changing the value of the third element of the array because we are passing the base address of the array to the function
}

void func3(int arr[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("the value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main(){
    int arr[]={23,13,3,4};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr); //as we are passing the base address of the array to the function, any changes made to the array inside the function will affect the original array in main.
    // //so actual array is passed to the function, not a copy of the array.
    // printf("The value at index 0 is %d\n", arr[0]);

    // func2(arr);
    // func2(arr); //here we can see the update *(ptr+2)=200; is reflected in the original array in main because we are passing the base address of the array to the function.
    int arr1[2][2] = {{1, 2}, {3, 4}};
    func3(arr1);
    return 0;
}