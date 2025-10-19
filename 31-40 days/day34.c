/* Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    while (1) {
        printf("Enter element %d in array: \t", count);
        scanf("%d", &arr[count]);
        count++;
        int userYno;
        printf("Enter 0 to stop: \t");
        scanf("%d", &userYno);
        if (userYno == 0) {
            break;
        }
    }

    int toInsert, toInsertPos;
    printf("Enter the number to insert: \t");
    scanf("%d", &toInsert);
    printf("Enter the position to insert at: \t");
    scanf("%d", &toInsertPos);

    for (int i = count; i > toInsertPos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[toInsertPos] = toInsert;
    count++;

    printf("\nNew array is: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
