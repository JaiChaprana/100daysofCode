/* Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    const int last = n % 10;
    int first = n;
    int original = n;
    int place = 1;

    while (first >= 10) {
        first /= 10;
        place *= 10;
    }

    if (place == 1 || first == last) {
        printf("%d", n);
        return 0;
    }

    original = n % place;
    original /= 10;

    const int swapped = last * place + original * 10 + first;

    printf("The swapped number is: %d", swapped);

    return 0;
}
