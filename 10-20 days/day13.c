/* Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main() {
    char choice;
    printf("Enter a operation (+,-,/,*,%%)");
    scanf("%c", &choice);
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (choice) {
        case '+':
            printf("The sum is %d", a + b);
            break;
        case '-':
            if (a > b) {
                printf("The difference is %d", a - b);
            } else if (a < b) {
                printf("The difference is %d", b - a);
            } else {
                printf("The difference is zero!");
            }
            break;
        case '/':
            if (a > b) {
                printf("The quotient is %d", a / b);
            } else if (a < b) {
                printf("The quotient is %d", b / a);
            } else {
                printf("The quotient is one!");
            }
            break;
        case '*':
            printf("The product is %d", a * b);
            break;
        case '%':
            printf("The remainder is %d", a % b);
            break;
        default: printf("Invalid choice!");
    }
}
