// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

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

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                const int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }


    int toInsert;
    printf("Enter the number to insert: \t");
    scanf("%d", &toInsert);

    int position = count;
    for (int i = 0; i < count; i++) {
        if (arr[i] > toInsert) {
            position = i;
            break;
        }
    }

    for (int i = count; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = toInsert;
    count++;
    printf("\nFinal array: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
}
