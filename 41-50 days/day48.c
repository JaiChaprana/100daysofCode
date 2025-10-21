// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[100], c2[100], temp[200];
    printf("Enter a string: ");
    fgets(c, sizeof(c), stdin);
    printf("Enter string to check rotation for: ");
    fgets(c2, sizeof(c2), stdin);

    if (strlen(c) != strlen(c2)) {
        printf("Not a rotation!");
        return 0;
    }

    strcpy(temp,c);
    strcpy(temp,c);

    if (strstr(temp, c2) != NULL) {
        printf("It is a rotation");
        return 0;
    }

    return 0;
}
