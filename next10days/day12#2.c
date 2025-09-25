/* Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700
*/


#include <stdio.h>

int main() {
    int unitNumber, bill = 0;
    printf("Enter the number of units: ");
    scanf("%d", &unitNumber);

    for (int i = 0; i <= unitNumber; i++) {
        if (i <= 100) {
            bill = bill + unitNumber * 5;
        } else if (i > 100 && i <= 200) {
            bill += unitNumber * 7;
        } else if (i > 200 && i <= 300) {
            bill += unitNumber * 10;
        } else {
            bill += unitNumber * 12;
        }
    }

    printf("The total bill is %d!!", bill);
}
