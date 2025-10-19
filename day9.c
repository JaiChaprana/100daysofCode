// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if (b * b > 4 * a * c) {
        const float root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        const float root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

        if (root1 != root2) {
            printf("Roots are real and different! %f & %f", root1, root2);
        } else {
            printf("Roots are real and same!");
        }
    } else {
        printf("No real roots exist for this quadratic equation!");
    }

    return 0;
}
