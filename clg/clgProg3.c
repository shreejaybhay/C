#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }

    return 0;
}
