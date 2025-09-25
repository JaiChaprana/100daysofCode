// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 50) {
        printf("Your grade is F");
    } else if (marks <= 75) {
        printf("Your grade is D");
    } else if (marks <= 90) {
        printf("Your grade is C");
    } else if (marks <= 95) {
        printf("Your grade is B");
    } else {
        printf("Congratulations! You scored an A!!");
    }

    return 0;
}
