// String Handling with Arrays
// In C, a string is just a 1D array of characters that ends with a 
// special invisible character called the null terminator (\0).

// Key Points
// The Size Rule: If you want to store a word with 5 letters like "Hello", 
// your array size must be at least 6 to accommodate the \0.

// String Functions (<string.h>):

// strlen(str): Returns the length of the string (does not count \0).

// strcpy(dest, src): Copies src string into dest.

// strcat(dest, src): Appends (concatenates) src to the end of dest.

// strcmp(str1, str2): Compares two strings alphabetically. Returns 0 if they are identical.


#include<stdio.h>
#include<string.h>

int main(){
    char source[]="Class-11";  // C l a s s - 1 1 \0
    char destination[20];
    char userInput[20];
    
    printf("Before Copy %s \n",destination);
    
    //Copy
    strcpy(destination,source);
    
    printf("After Copy %s \n", destination);
    
    //concatenation
    //Class-11-code
    strcat(destination,"-code");  //now destination becomes Class-11-code
    
    printf("Concatenated %s \n",destination);
    
    //Safe Reading (Handle Spaces)
    printf("Enter your full name \n");
    // scanf("%s",userInput);
    fgets(userInput,sizeof(userInput),stdin);  // user input string, calculate size according to declaration,syntax
    //remove the excess newline character that fgets might read
    userInput[strcspn(userInput,"\n")]='\0';
    printf("My name is %s \n",userInput);
    
    char str2[]="Admin";
    char str3[]="Admin ";
    char str4[]=" Admin";
    printf("When equal %d \n",strcmp(str2,"Admin"));
    printf("When tailing Space %d \n",strcmp(str3,"Admin"));
    printf("When leading Space %d \n",strcmp(str3,"Admin"));
    //comparison
    if(strcmp(str2,"Admin")==0){
        printf("You are not Admin");
    }
    else{
        printf("You are Admin.You are allowed");
    }
    
    return 0;
}


// ⚠️ Trap Alert
// The scanf Space Trap: If you use scanf("%s", myStr), it stops reading the absolute second it hits a space. If you type Computer Science, myStr will only hold "Computer". Always use fgets() for multi-word input.
// Direct Comparison Trap: You cannot compare strings using if (str1 == str2). This syntax compares the memory addresses of the arrays, not their text content. Always use strcmp()

// char name[20];
// Reading and Writing Strings
// Using scanf
// scanf("%s", name);

// Problem:

// Stops at space.

// Input:

// Arka Saha

// Stores only:

// Arka
// Using gets (old/unsafe)
// gets(name);

// Avoid in modern C.

// Using fgets (better)
// fgets(name, sizeof(name), stdin);
// Output
// printf("%s", name);
// Example Program
// #include <stdio.h>

// int main() {
//     char name[30];

//     printf("Enter name: ");
//     fgets(name, sizeof(name), stdin);

//     printf("Hello %s", name);

//     return 0;
// }
// String Concatenation

// Joining two strings.

// Using strcat()
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[50] = "Hello ";
//     char str2[] = "World";

//     strcat(str1, str2);

//     printf("%s", str1);

//     return 0;
// }

// Output:

// Hello World
// Trap in strcat()

// Destination array must have enough space.

// ❌ Dangerous:

// char str1[5] = "Hi";
// strcat(str1, "Hello");
// String Comparison

// Using strcmp()

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[] = "apple";
//     char b[] = "apple";

//     if(strcmp(a,b) == 0)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }
// Trap in String Comparison

// ❌ Wrong:

// if(a == b)

// This compares addresses, not contents.

// ✅ Correct:

// strcmp(a,b)
// Common String Functions
// Function	Purpose
// strlen()	Length
// strcpy()	Copy
// strcat()	Concatenate
// strcmp()	Compare
// Example of strlen()
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello";

//     printf("%lu", strlen(str));

//     return 0;
// }

// Output:

// 5