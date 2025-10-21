/* Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

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

    if (rev == c) {
        printf("This is a palindrome string!");
    } else {
        printf("This is not a palindrome string!");
    }

    return 0;
}