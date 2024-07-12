// Write a program that calculates the area of a circle and the volume of a cylinder given the radius and height

#include <stdio.h>

int main()
{
    int radius;
    int height;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle with radius %d is %f \n", radius, 3.14 * radius * radius);

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Enter the volume of the cylinder: ");
    scanf("%d", &height);
    printf("The volume of the cylinder with radius %d and height %d is %f", radius, height, 3.14 * radius * radius * height);

    return 0;
}