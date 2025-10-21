// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

char toggleCase(char c) {
    if (c>='a' && c<='z')
        c=c-'a'+'A';
    else if (c>='A' && c<='Z')
        c=c-'A'+'a';

    return c;
}

int main() {
    char c[100],rev[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    printf("\nAfter changing case of each character, the new string is: \n");

    for (int i = 0; c[i]!='\0'; i++) {
        c[i]=toggleCase(c[i]);
        printf("%c",c[i]);
    }

    return 0;
}