// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <ctype.h>
#include <stdio.h>


int main() {
    char c[100];
    printf("Enter your full name: ");
    fgets(c, sizeof(c), stdin);

    for (int i = 0; c[i] != '\0'; i++) {
        if (i == 0 && c[0] != ' ') {
            printf("%c.", toupper(c[0]));
        } else if (c[i] == ' ' && c[i+1] != '\0' && c[i+1] != ' ')
            printf("%c.", toupper(c[i+1]));
    }
    printf("\n");

    return 0;
}