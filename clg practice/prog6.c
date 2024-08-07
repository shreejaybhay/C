// Basic Calculator Program in C

#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;
    double result;

    // Taking input from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing the calculation based on the operator
    if (operator== '+')
    {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator== '-')
    {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator== '*')
    {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    }
    else if (operator== '/')
    {
        // Check for division by zero
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
    }
    else
    {
        printf("Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}