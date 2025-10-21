// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    printf("Enter a string: ");
    fgets(c,sizeof(c),stdin);

    int found = 0;

    for (int i = 0; i < strlen(c); i++) {
        const char temp = c[i];

        if (c[i]<'a' || c[i]>'z')
            continue;

        for (int j = i + 1; j<strlen(c); j++) {
            if (c[j]==temp) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("%c is the first repeating lowercase alphabet in the string!", temp);
            break;
        }
    }

    if (!found)
        printf("No repeating alphabets in the string!!");

    return 0;
}
