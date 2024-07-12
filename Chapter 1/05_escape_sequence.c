#include <stdio.h>

int main() {
    // Newline escape sequence
    printf("Hello, world!\n"); // \n Moves to the next line after printing

    // Tab escape sequence
    printf("Hello,\tworld!\n"); // \t Inserts a tab space between 'Hello,' and 'world!'

    // Backslash escape sequence
    printf("Backslash: \\\n"); // \\\n Prints a single backslash

    // Double quote escape sequence
    printf("Double quote: \"Hello, world!\"\n"); // \"text\" Prints double quotes around the text

    // Single quote escape sequence
    printf("Single quote: \'Hello, world!\'\n"); // \'text\' Prints single quotes around the text

    // Alert (bell) escape sequence
    // Note: This might not produce an audible sound on all systems.
    printf("Alert (bell): \a\n");

    // Backspace escape sequence
    printf("Hello, \bworld!\n"); // \b Moves the cursor one position back (overwrites the comma)

    // Carriage return escape sequence
    printf("Carriage return: Hello, world!\rStart\n"); // \r Moves the cursor to the beginning of the line and overwrites it

    // Vertical tab escape sequence
    printf("Vertical tab: Hello,\vworld!\n"); // \v Inserts a vertical tab (behavior may vary)

    // Form feed escape sequence
    printf("Form feed: Hello,\fworld!\n"); // \f Inserts a form feed (behavior may vary)

    return 0;
}
