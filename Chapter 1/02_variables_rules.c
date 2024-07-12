#include <stdio.h>

int main() {
    // Valid variable names
    int a = 10;                // Starts with a letter
    int _variable = 20;        // Starts with an underscore
    int variable1 = 30;        // Combination of letters and digits
    int count = 40;            // All lowercase letters
    int total_sum = 50;        // Uses an underscore to separate words

    // Invalid variable names (uncommenting these lines will cause errors)
    // int 1variable = 60;     // Invalid: Starts with a digit
    // int var!able = 70;      // Invalid: Contains a special character '!'
    // int var iable = 80;     // Invalid: Contains a space
    // int int = 90;           // Invalid: Uses a reserved keyword

    // Print valid variables
    printf("a = %d\n", a);
    printf("_variable = %d\n", _variable);
    printf("variable1 = %d\n", variable1);
    printf("count = %d\n", count);
    printf("total_sum = %d\n", total_sum);

    return 0;
}
