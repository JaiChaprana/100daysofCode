/* Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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

    int pos;
    printf("Enter position to delete (0-based index):\t");
    scanf("%d", &pos);

    if (pos < 0 || pos >= count) {
        printf("Invalid position!\n");
        return 0;
    }

    for (int i = pos; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;

    printf("\nNew array is:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
