/* Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>

int main() {
    int arr[100], i=0, choice;
    while (1) {
        printf("Enter element %d of array", i+1);
        scanf("%d", &arr[i]);
        i++;
        printf("Enter 0 to exit");
        scanf("%d", &choice);
        if (choice == 0) break;
    }
    if (i < 2) return 1;
    int sum=0;
    for (int j = 0; j < i; j++) {
        sum+=arr[j];
    }
    int leftSum = 0, pivot = -1;
    for (int j = 0; j < i; j++) {
        const int rightSum = sum - leftSum - arr[j];
        if (rightSum == leftSum) {
            pivot = arr[j];
            break;
        }
        leftSum += arr[j];
    }

    if (pivot != -1) printf("Pivot is %d\n", pivot);
    else printf("-1");

    return 0;

}