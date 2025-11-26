/* Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

#define PRINT_ENUM(x) printf(#x "=%d\n", x)

enum color {
    RED,
    YELLOW,
    GREEN,
};

int main() {
    PRINT_ENUM(RED);
    PRINT_ENUM(YELLOW);
    PRINT_ENUM(GREEN);
    return 0;
}

