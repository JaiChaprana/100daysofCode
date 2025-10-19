/* Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char c[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    printf("Each character in a new line: \n");

    for (int i=0;c[i]!='\0';i++) {
        if (c[i]!=' ')
            printf("%c\n",c[i]);
    }

    return 0;
}