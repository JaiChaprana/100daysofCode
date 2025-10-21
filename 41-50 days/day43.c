/* Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char c[100],rev[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    int len = 0;
    while (c[len] != '\0') {
        len++;
    }

    printf("The reversed string is: \n");
    for (int i = 0; i < len; i++) {
        rev[i] = c[len - 1 - i];
        printf("%c",rev[i]);
    }

    return 0;
}