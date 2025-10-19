// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>

int main() {
    int monthNumber;
    printf("Enter a month number: ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 1:
            printf("The month is January with 31 days!");
            break;
        case 2:
            printf("The month is February with 28 days!");
            break;
        case 3:
            printf("The month is March with 31 days!");
            break;
        case 4:
            printf("The month is April with 30 days!");
            break;
        case 5:
            printf("The month is May with 31 days!");
            break;
        case 6:
            printf("The month is June with 30 days!");
            break;
        case 7:
            printf("The month is July with 31 days!");
            break;
        case 8:
            printf("The month is August with 31 days!");
            break;
        case 9:
            printf('The month is September with 30 days!');
            break;
        case 10:
            printf("The month is October with 31 days!");
            break;
        case 11:
            printf("The month is November with 30 days!");
            break;
        case 12:
            printf("The month is December with 31 days!");
            break;
        default: printf("Please enter a valid number!!");
    }
}
