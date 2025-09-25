/* Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
        }
    }

    printf("The product of even numbers till %d is %d!!", n, product);

    return 0;
}
