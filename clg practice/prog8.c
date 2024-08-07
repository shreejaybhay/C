// Checking value is Prime or not

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers
    if (num <= 3)
        return 1; // 2 and 3 are prime numbers

    // Check for divisibility by 2 and 3
    if (num % 2 == 0 || num % 3 == 0)
        return 0;

    // Check divisibility from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }

    return 1; // Number is prime
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}