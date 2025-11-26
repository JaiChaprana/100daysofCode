/* Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

enum traffic {
    RED,
    YELLOW,
    GREEN,
};

int main() {
    char s[10];
    printf("Enter the color: ");
    scanf("%s", s);

    enum traffic light;

    if (strcmp(s, "RED") == 0) {
        light = RED;
    } else if (strcmp(s, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(s, "GREEN") == 0) {
        light = GREEN;
    }

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid Input!!");
            break;
    }

    return 0;
}