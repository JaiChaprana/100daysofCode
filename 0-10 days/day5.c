// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate;
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    int simpleInterest = principal * rate * time;
    float element1 = principal * pow((1 + rate / 100), time);
    float compoundInterest = element1 - principal;

    printf("Compound Interest is: %f \n", compoundInterest);
    printf("Simple Interest is: %d", simpleInterest);

    return 0;
}
