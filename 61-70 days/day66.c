/* Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/


#include <stdio.h>

int main() {
    int arr[100], n = 0, target, choice = 1, i = -1, j = -1;

    while (1) {
        printf("Enter a positive integer: ");
        scanf("%d", &arr[n]);
        if (arr[n] <= 0) continue;
        n++;
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
    }

    printf("Enter a target value: ");
    scanf("%d", &target);

    for (int a = 0; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            if (arr[a] + arr[b] == target) {
                i = a;
                j = b;
                printf("%d %d", i, j);
                return 1;
            }
        }
    }

    printf("%d %d", i, j);
    return 0;
}