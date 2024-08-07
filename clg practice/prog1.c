//sum and average

#include <stdio.h>

int main()
{
    float num1, num2, num3, sum, avg;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("Sum: %f, avg: %f\n", sum, avg);

    return 0;
}