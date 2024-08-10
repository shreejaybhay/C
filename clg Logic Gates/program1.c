// simple C program that demonstrates the use of basic logic gates like AND, OR, and NOT.

#include <stdio.h>

int main()
{
    int A, B;

    // Prompt the user to enter a value for A (0 or 1)
    printf("Enter value for A (0 or 1): ");
    scanf("%d", &A);

    // Prompt the user to enter a value for B (0 or 1)
    printf("Enter value for B (0 or 1): ");
    scanf("%d", &B);

    // Calculate the result of the AND gate (A AND B)
    int andResult = A & B;
    // Display the result of the AND operation
    printf("AND Gate: %d AND %d = %d\n", A, B, andResult);

    // Calculate the result of the OR gate (A OR B)
    int orResult = A | B;
    // Display the result of the OR operation
    printf("OR Gate: %d OR %d = %d\n", A, B, orResult);

    // Calculate the result of the NOT gate (NOT A)
    int notResult = !A;
    // Display the result of the NOT operation
    printf("NOT Gate: NOT %d = %d\n", A, notResult);

    return 0;
}
