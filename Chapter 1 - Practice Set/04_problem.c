// Write a program to calculate simple interest given principal amount, rate of interest, and time in years

#include <stdio.h>

int main() {
    float p;    // Principal amount
    float r;    // Rate of interest (as a decimal)
    int t;      // Time in years

    // Prompt the user to enter the principal amount
    printf("Enter the principal amount (P): ");
    scanf("%f", &p);

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest (R): ");
    scanf("%f", &r);

    // Prompt the user to enter the time in years
    printf("Enter the time in years (T): ");
    scanf("%d", &t);

    // Calculate simple interest
    float simple_interest = (p * r * t) / 100;

    // Print the calculated simple interest
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
