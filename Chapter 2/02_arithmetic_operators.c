#include <stdio.h>

int main() {
    // Declare variables
    int a = 20;
    int b = 10;
    int result;

    // Addition
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);

    // Subtraction
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);

    // Multiplication
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    // Division
    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);

    // Modulus
    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);

    // Increment
    printf("Before Increment: a = %d\n", a);
    a++;
    printf("After Increment: a = %d\n", a);

    // Decrement
    printf("Before Decrement: b = %d\n", b);
    b--;
    printf("After Decrement: b = %d\n", b);

    return 0;
}
