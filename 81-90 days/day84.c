/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char s[10];
    enum Status st;

    scanf("%s", s);

    if (strcmp(s, "SUCCESS") == 0)
        st = SUCCESS;
    else if (strcmp(s, "FAILURE") == 0)
        st = FAILURE;
    else if (strcmp(s, "TIMEOUT") == 0)
        st = TIMEOUT;
    else {
        printf("Invalid status\n");
        return 0;
    }

    switch (st)
    {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
