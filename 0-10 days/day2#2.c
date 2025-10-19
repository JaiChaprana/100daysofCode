// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main() {
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);

    float area = radius * radius * 3.14;
    printf("The area is: %f", area);
    printf("The circumference is: %f", 6.28 * radius);

    return 0;
}
