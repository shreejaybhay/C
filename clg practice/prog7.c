// Largest of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Condition for a is greatest
    if (a > b && a > c)
    {
        printf("The greatest number is: %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("The greatest number is: %d\n", b);
    }
    else
    {
        printf("The greatest number is: %d\n", c);
    }
    return 0;
}