#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }
    else if (age > 10)
    {
        printf("You are a teenager.\n");
    }
    else
    {
        printf("You are a child.\n");
    }

    return 0;
}