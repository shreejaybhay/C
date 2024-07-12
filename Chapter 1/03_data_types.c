#include <stdio.h>
#include <stdbool.h> // Include the header for boolean type

int main()
{
    // Integer data type
    int integerVariable = 42; // Integer variable

    // Floating-point data type
    float floatVariable = 3.14f;          // Float variable with 'f' suffix
    double doubleVariable = 3.1415926535; // Double variable for more precision

    // Character data type
    char charVariable = 'A'; // Character variable (single character)

    // Boolean data type (requires stdbool.h header)
    bool boolVariable = true; // Boolean variable (true or false)

    // String data type (array of characters)
    char stringVariable[] = "Hello, world!"; // String variable (array of characters)

    // Printing the values of different data types
    printf("Integer: %d\n", integerVariable);
    printf("Float: %f\n", floatVariable);
    printf("Double: %lf\n", doubleVariable);
    printf("Character: %c\n", charVariable);
    printf("Boolean: %d\n", boolVariable); // Boolean printed as integer (1 for true, 0 for false)
    printf("String: %s\n", stringVariable);

    // Printing the sizes of different data types
    printf("\nSizes of different data types:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of bool: %lu bytes\n", sizeof(bool));
    printf("Size of string (char array): %lu bytes\n", sizeof(stringVariable)); // Size of the whole array

    return 0;
}