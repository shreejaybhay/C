/*
Write the C program to calculate area of a rectangle
*/

#include <stdio.h>

int main()
{
    int length;  // Variable to store the length of the rectangle
    int breadth; // Variable to store the breadth of the rectangle

    // Prompt the user to enter the length of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    // Prompt the user to enter the breadth of the rectangle
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate the area of the rectangle
    int area = length * breadth;

    // Print the calculated area
    printf("Area of the rectangle is: %d", area);

    return 0; // Indicate that the program ended successfully
}
