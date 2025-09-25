// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is: %d", num1, num2, num1 + num2);
    if (num1 > num2) {
        printf("The difference is: %d", num1 - num2);
        printf("The quotien is: %d", num1 / num2);
    } else {
        printf("The difference is: %d", num2 - num1);
        printf("The quotien is: %d", num2 / num1);
    }
    printf("The product is: %d", num1 * num2);

    return 0;
}
