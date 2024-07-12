#include <stdio.h>

// Basic variable declarations
int a;
float b;
char c;

// Declaration with initialization
int d = 10;
float e = 5.25;
char f = 'A';

// Multiple variables of the same type
int g, h, i;
float j = 1.1, k = 2.2, l = 3.3;
char m = 'X', n = 'Y';

// Pointer variables
int *ptr;
char *str;
float *fp;

// Array declarations
int arr[10];
char strArr[50];
float matrix[3][3];

// Struct declaration and variables
struct Point {
    int x;
    int y;
};

struct Point p1;                 // Struct variable without initialization
struct Point p2 = {3, 4};        // Struct variable with initialization

// Static variables
static int staticInt;
static float staticFloat = 2.5;

// Extern variables
extern int externInt;
extern float externFloat;

// Const variables
const int constInt = 10;
const float constFloat = 5.25;

// Volatile variables
volatile int volatileInt;
volatile float volatileFloat;


int main() {
    // Example usage of variables
    a = 1;
    b = 2.5;
    c = 'C';
    
    g = 20;
    h = 30;
    i = 40;
    
    ptr = &a;
    str = "Hello, world!";
    fp = &b;

    arr[0] = 100;
    strArr[0] = 'H';
    matrix[0][0] = 1.0;

    p1.x = 5;
    p1.y = 6;

    staticInt = 7;

    // extern variables are assumed to be defined elsewhere
    // externInt = 50;
    // externFloat = 10.25;

    // const variables cannot be modified
    // constInt = 20;
    // constFloat = 15.25;

    volatileInt = 60;
    volatileFloat = 12.75;

    // Print some of the variables
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    printf("d = %d\n", d);
    printf("e = %.2f\n", e);
    printf("f = %c\n", f);

    return 0;
}
