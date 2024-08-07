#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reversedStr[100];
    int len, i;

    // Taking input from the user
    printf("Enter a string: ");
    gets(str); // Warning: This function is unsafe and should be replaced with fgets.

    // Getting the length of the input string
    len = strlen(str);

    // Reversing the string
    for (i = 0; i < len; i++)
    {
        reversedStr[i] = str[len - i - 1];
    }
    reversedStr[len] = '\0'; // Null-terminate the reversed string

    // Printing the reversed string
    printf("Reversed string: %s\n", reversedStr);
    return 0;
}