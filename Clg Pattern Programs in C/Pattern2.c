// C program to print a left half-pyramid pattern of stars
// I've included comments for better understanding
#include <stdio.h>

int main()
{
    int rows = 5;

    // Outer loop to iterate over each row
    for (int i = 0; i < rows; i++)
    {
        // Inner loop to print leading spaces before the stars
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }
        // Inner loop to print stars in each row
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        // Move to the next line after each row is printed
        printf("\n");
    }
    return 0;
}
