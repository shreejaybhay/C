// Write a program that converts a temperature from Celsius to Fahrenheit

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %f\n", f);

    return 0;
}
