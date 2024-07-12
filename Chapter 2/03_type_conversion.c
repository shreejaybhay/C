#include <stdio.h>

int main() {
    // Integer and integer operation
    int a = 5;
    int b = 2;
    int intResult = a + b;
    printf("Integer + Integer = %d\n", intResult);

    // Integer and float operation
    float c = 3.5;
    float floatResult1 = a + c;
    printf("Integer + Float = %.1f\n", floatResult1);

    // Float and float operation
    float d = 1.5;
    float floatResult2 = c + d;
    printf("Float + Float = %.1f\n", floatResult2);

    return 0;
}
