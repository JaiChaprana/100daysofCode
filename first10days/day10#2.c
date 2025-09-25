// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main() {
    int weekName;
    printf("Enter the week day number: ");
    scanf("%d", &weekName);

    switch (weekName) {
        case 1:
            printf("It is Monday!");
            break;
        case 2:
            printf("It is Tuesday!");
            break;
        case 3:
            printf("It is Wednesday!");
            break;
        case 4:
            printf("It is Thursday!");
            break;
        case 5:
            printf("It is Friday!");
            break;
        case 6:
            printf("It is Saturday!");
            break;
        case 7:
            printf("It is Sunday!");
            break;

        default:
            printf('Enter a number between 1-7');
    }

    return 0;
}
