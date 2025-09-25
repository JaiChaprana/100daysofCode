// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);

    // ignoring the case when all three or any two numbers are equal

    if (n1 > n2 && n1 > n3) {
        printf("Number one is the largest!");
    } else if (n2 > n1 && n2 > n3) {
        printf("Number two is the largest!");
    } else if (n3 > n1 && n3 > n2) {
        printf("Number three is the largest!");
    } else {
        printf("Numbers are the same!");
    }
}
