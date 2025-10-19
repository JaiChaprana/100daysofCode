/* Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

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

    int k;
    printf("Enter number of positions to rotate:\t");
    scanf("%d", &k);

    k = k % count;

    int temp[100];
    for (int i = 0; i < count; i++) {
        temp[(i + k) % count] = arr[i];
    }

    for (int i = 0; i < count; i++) {
        arr[i] = temp[i];
    }

    printf("\nArray after rotation:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
