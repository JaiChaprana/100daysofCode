/* Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    int n, com = 0, m = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int leadZero = 0;
    int digiC = 1;

    while (n != 0) {
        const int digit = n % 10;

        if (digit == 0) {
            com += 1 * m;
            digiC++;
        } else if (digit == 1) {
            if (digiC == 1) {
                leadZero = 1;
                digiC++;
            }
            com += 0 * m;
        } else {
            printf("Invalid input!!");
            return 1;
        }
        m *= 10;
        n = n / 10;
    }
    if (leadZero) {
        printf("The compliment is: 0%d", com);
    } else {
        printf("The compliment is: %d", com);
    }
}
