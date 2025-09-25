/* Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    int digiC = 0;
    while (n != 0) {
        const int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
            digiC = 1;
        } else {
            digiC = 0;
        }
        n /= 10;
    }

    if (digiC) {
        printf("The sum of odd digits is: %d", sum);
    } else {
        printf("The sum of odd digits is: 1");
    }
}
