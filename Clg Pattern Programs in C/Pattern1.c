// C program to print right half pyramid pattern of star
#include <stdio.h>

int main()
{
    int rows = 5;

    // first Loop for printing rows
    for (int i = 0; i < rows; i++)
    {
        // Second Loop for printing character in each rows
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}