// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter first side: ");
    scanf("%d", &side1);
    printf("Enter second side: ");
    scanf("%d", &side2);
    printf("Enter third side: ");
    scanf("%d", &side3);

    if (side1 == side2 == side3) {
        printf("It is an equilateral triangle!");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an isosceles triangle!");
    } else {
        printf("It is a scalene triangle!");
    }

    return 0;
}
