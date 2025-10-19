/* Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

char toUpperCase(char c) {
    if (c>='a' && c<='z') {
        c=c-'a'+26;
    }
    return c;
}

int main() {
    char c[100];
    printf("Enter a string: \t");
    fgets(c, 100, stdin);

    for (int i=0; c[i]!='\0'; i++) {
        c[i]=toUpperCase(c[i]);
    }

    printf("The converted uppercase string is: %s", c);

    return 0;
}