1.IDE ------> 
 Integrated Developement Environment  ( where we write the programme and compile it and run it )

 E.g : VS code, Sublime Text, Notepad++ etc

2.GCC ---> Compiler to compile and run the programme

Eg. Mingw-64 ( for windows ) , GCC ( for linux )


Basic Syntax & Structure:

1. Pre-processors Commands:
    #include <stdio.h>  ( to include standard input output header file )

   1. Create a File_Name.c ( .c is the extension for C language )
   2. from .c first it creates expanded code which still c but expanded.Extension is .i by pre-processor
   3. From .i it creates assembly code which is in .s extension,which is done by  Compiler.
   4. From .s it creates object code which is in .o extension, which is done by Assembler
   5. From .o it creates executable file which is in .exe extension, which is done by Linker
   6. .exe is loaded into RAM ,allocates memory and support in execution of the programme by Loader

   .c --> Source File (which we write in C language)
   .i --> Pre-processed File
   .s --> Assembly File/Assembly Level Language
   .o --> Object File
   .exe --> Executable File

   Comments: ( which are used to explain the code and are ignored by the compiler )
    E.g : // This is a single line comment
          /* This is a 
             multi-line comment */

   Keywords:  ( which are reserved words in C language and have special meaning and cannot be used as variable names )
    E.g : int, float, char, return, void, if, else, for, while etc

    Identifiers: ( which are names given to variables, functions, arrays etc and must follow certain rules )
    E.g : variable names, function names, array names etc
    
    Constants: ( which are fixed values that cannot be changed during the execution of the program )
    E.g : 10, 3.14, 'A', "Hello World" etc

    String Literals: ( which are sequences of characters enclosed in double quotes )
    E.g : "Hello World", "C Programming" etc

    Escape Characters:
    E.g : \n (new line), \t (tab), \\ (backslash), \" (double quote), \r (carriage return) etc

    Variables
    Data Types: ( which specify the type of data that a variable can hold )
    E.g : int (integer), float (floating point), char (character), double (double precision floating point) etc


    Macros/Macros Template:
    The #define directive in C is a preprocessor command used to create macros, which act as identifiers replaced by specific values or expressions before actual compilation begins

    e.g.

    #include <stdio.h>

    #define PI 3.14159
    #define MAX_LIMIT 100
    #define SQUARE(x) ((x) * (x))

    int main() {
        float area = PI * 5 * 5;
        printf("Area of circle: %f", area); // Replaces PI with 3.14159
        printf("Square of 5: %d", SQUARE(5));
        return 0;
    }