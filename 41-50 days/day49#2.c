// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char c[100];
    printf("Enter your full name: ");
    fgets(c, sizeof(c), stdin);

    if (c[0] != ' ')
        printf("%c.", toupper(c[0]));

    int spaceCount = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == ' ')
            spaceCount++;
    }

    int currentSpaceCount = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        if (currentSpaceCount < spaceCount) {
            if (c[i] == ' ' && c[i+1] != ' ' && c[i+1] != '\0') {
                printf("%c.", toupper(c[i+1]));
                currentSpaceCount++;
            }
        } else {
            printf("%c", c[i]);
        }
    }

    return 0;
}
