#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k;
    printf("The result is: %f\n", e);
    // 3 * x / y - z + k
    // 6 / y - z + k
    // 2 - z + k
    //-1 + k
    //-1 + 1
    // 1 - 1
    // 0
    return 0;
}