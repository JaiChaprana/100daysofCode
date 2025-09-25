/*Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <limits.h>
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("The LCM is: %d", n1);
    } else {
        int hcf = INT_MIN;

        for (int i = 1; n1 > n2 ? i <= n2 : i <= n1; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                if (i > hcf) {
                    hcf = i;
                }
            }
        }

        const int lcm = (n1 * n2) / hcf;

        printf("The LCM is: %d", lcm);
    }
}
