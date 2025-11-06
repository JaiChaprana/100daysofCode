// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/


#include <stdio.h>

void findFirstAndLast(int nums[], int n, int target, int *first, int *last) {
 *first = -1;
 *last = -1;

 int start = 0, end = n - 1;
 while (start <= end) {
  int mid = start + (end - start) / 2;
  if (nums[mid] == target) {
   *first = mid;
   end = mid - 1;
  } else if (nums[mid] < target) {
   start = mid + 1;
  } else {
   end = mid - 1;
  }
 }

 start = 0;
 end = n - 1;
 while (start <= end) {
  int mid = start + (end - start) / 2;
  if (nums[mid] == target) {
   *last = mid;
   start = mid + 1;
  } else if (nums[mid] < target) {
   start = mid + 1;
  } else {
   end = mid - 1;
  }
 }
}

int main() {
 int nums[] = {5, 7, 7, 8, 8, 10};
 int n = sizeof(nums) / sizeof(nums[0]);
 int target;

 printf("Enter a target to find: ");
 scanf("%d", &target);

 int first, last;
 findFirstAndLast(nums, n, target, &first, &last);
 printf("%d,%d\n", first, last);

 return 0;
}
}