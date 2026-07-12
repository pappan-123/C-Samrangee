// Final Practice Programs
// Store 10 marks and find average.
// Reverse a string without strrev().
// Count vowels in a string.
// Store 5 students using structure.
// Matrix multiplication.
// Nested structure for employee and address.
// Menu-driven string operations.
// Student result management system using structure.

// ===========================================================================================================================================

// Structures are user defined data types in C.
// Using structures allows us to combine data of different types together.
// It is used to create a complex data type which contains diverse information.
// They are very similar to arrays but structure can store data of any type, which is practically more useful.

// Storing Employee Information:

// Structures are user defined data type.
// Suppose we want to store information of 10,000 employees
// working at Abc Pvt. Ltd.
// = Name
// = Address
// = Email
// = Employee id
// Clearly we need some user defined data type which contains
// only this information.

// Defining a structure

// struct [structure_name]
// {

// // data_type var 1

// // data_type var 2

// // data_type var 3 ...
// }
// [structure_variables];

// Declaring a structure variable can be done in two ways:
// 1. Declare a structure variable after the structure definition.
// 2. Declare a structure variable along with the structure definition.

#include <stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
};

struct Employee el, e2;

int main()
{
    return 0;
}

#include <stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
} el, e2;

int main()
{
    struct Employee tt;
    return 0;
}

// Initializing a structure variable can be done in two ways:
//  1. Using the dot operator to assign values to each member of the structure variable.
// 2. Using a single statement to assign values to all members of the structure variable.

#include <stdio.h>
struct Employee
{
    int id;
    float marks;
};
int main()
{
    struct Employee e1;
    e1.id = 12;
    e1.marks = 34.12;
    return 0;
}

#include <stdio.h>
struct Employee
{
    int id;
    float marks;
};
int main()
{
    struct Employee e1 = {12, 34.12};
}

// Accessing Structure members
// Array elements are accessed using the subscript variable.
// In a similar fashion, structure members are accessed using dot [.] operator.
// (.) is called as “structure member operator”.
// To access the member of the structure, we use this operator in between “Structure name” & “member name”

#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct Student s1, s2, s3; // accesible thorugh whole code.


//similar global declaration of structure variable can be done in two ways

// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// } s1, s2, s3; // accesible thorugh whole code.

void print()
{
    printf("%s", s1.name); // will not through error because s1 is declared globally and accessible through whole code.
}

int main()
{
    // struct Student s1,s2,s3;  //only accessible within main
    s1.id = 1;
    s2.id = 2;
    s3.id = 3;
    s1.marks = 85;
    s2.marks = 90;
    s3.marks = 78;
    s1.fav_char = 'A';
    s2.fav_char = 'B';
    s3.fav_char = 'C';
    printf("Student 1: ID=%d, Marks=%d, Favorite Character=%c\n", s1.id, s1.marks, s1.fav_char);
    strcpy(s1.name, "Hello world,how are you ???");
    printf("Student 1 Name: %s\n", s1.name);
    return 0;
}