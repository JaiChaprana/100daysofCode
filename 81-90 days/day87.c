/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum role {
    ADMIN,
    USER,
    GUEST,
};

int main() {
    char s[10];
    enum role r;

    scanf("%s", s);

    if (strcmp(s, "ADMIN") == 0) {
        r = ADMIN;
    } else if (strcmp(s, "USER") == 0) {
        r = USER;
    } else if (strcmp(s, "GUEST") == 0) {
        r = GUEST;
    } else {
        printf("Unknown role\n");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
