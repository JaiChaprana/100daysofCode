/* Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <limits.h>
#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;

    while (1) {
        printf("Enter element %d in array:\t", count + 1);
        scanf("%d", &arr[count]);
        count++;

        int userYno;
        printf("Enter 0 to stop:\t");
        scanf("%d", &userYno);
        if (userYno == 0) {
            break;
        }
    }

    int max = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < count; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    printf("\nSecond largest element is: %d\n", secondMax);

    return 0;
}
