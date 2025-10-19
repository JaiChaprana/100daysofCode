/* Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

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
        printf("Enter 0 to stop: /t");
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

    int target;
    printf("Enter the number to search: \t");
    scanf("%d", &target);

    int start = 0, end = count - 1, found = -1;
    while (start <= end) {
        const int mid = (start + end) / 2;
        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (found >= 0) {
        printf("Found at index: %d", found);
    } else {
        printf("Not found!!");
    }
}
