/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int stars;

    for (int i = 1; i <= 5; i++) {
        // decide how many stars for this block
        if (i == 1 || i == 5) stars = 1;
        else if (i == 2 || i == 4) stars = 3;
        else stars = 5;

        // print stars
        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }

        // print blank line between blocks except after last
        if (i != 5) printf("\n");
    }

    return 0;
}
