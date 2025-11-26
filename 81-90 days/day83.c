/* Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum months {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main () {
    char s[4];
    printf("Enter month initials (only 3): ");
    scanf("%s",s);
    enum months m;

    if (strcmp(s, "JAN") == 0)
        m = JAN;
    else if (strcmp(s, "FEB") == 0)
        m = FEB;
    else if (strcmp(s, "MAR") == 0)
        m = MAR;
    else if (strcmp(s, "APR") == 0)
        m = APR;
    else if (strcmp(s, "MAY") == 0)
        m = MAY;
    else if (strcmp(s, "JUN") == 0)
        m = JUN;
    else if (strcmp(s, "JUL") == 0)
        m = JUL;
    else if (strcmp(s, "AUG") == 0)
        m = AUG;
    else if (strcmp(s, "SEP") == 0)
        m = SEP;
    else if (strcmp(s, "OCT") == 0)
        m = OCT;
    else if (strcmp(s, "NOV") == 0)
        m = NOV;
    else if (strcmp(s, "DEC") == 0)
        m = DEC;
    else {
        printf("Invalid month\n");
        return 0;
    }

    switch (m) {
        case JAN: case MAR: case JUL: case MAY: case AUG: case DEC: case OCT:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("29 days\n");
            break;
    }

    return 0;
}