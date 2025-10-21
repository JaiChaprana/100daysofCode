/* Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char c[100],rev[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i]==' ')
            c[i] = '-';
        printf("%c",c[i]);
    }

    return 0;
}