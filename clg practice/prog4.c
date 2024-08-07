// calculates the factorial of a number.

#include <stdio.h>

int main()
{
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger numbers

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for non-negative number
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial using an iterative approach
        for (i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
