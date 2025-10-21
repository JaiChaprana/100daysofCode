/* Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main() {
    char c[100],rev[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    int space = 0, digits = 0, special = 0;

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i]==' ')
            space++;
        else if (c[i]>=48 && c[i]<=57)
            digits++;
        else if (c[i]>=97 && c[i]<=122 || c[i]>=65 && c[i]<=90)
            continue;
        else
            special++;
    }

    printf("The number of spaces in the string is: %d", space);
    printf("The number of digits in the string is: %d", digits);
    printf("The number of special characters in the string is: %d", special);

    return 0;
}