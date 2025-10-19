// Q23: Write a program to calculate library fine based on late days as follows:
/* First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days late: ₹6/day
More than 30 days: Membership Cancelled. */

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int numberOfdaysLate, fine = 0;
    printf("Enter the number of late days: ");
    scanf("%d", &numberOfdaysLate);

    for (int i = 0; i <= numberOfdaysLate; i++) {
        if (i <= 5) {
            fine = fine + numberOfdaysLate * 2;
        } else if (i > 5 && i <= 10) {
            fine += numberOfdaysLate * 4;
        } else if (i > 10 && i <= 30) {
            fine += numberOfdaysLate * 6;
        } else {
            printf("Your membership has been cancelled!!");
        }
    }

    printf("The total fine is %d!!", fine);
}
