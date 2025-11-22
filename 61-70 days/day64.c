/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
  char string[100];
  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin);
  const int len = strlen(string);
  int longest = 0;
  for (int i = 0; i < len; i++) {
    int length = 1;
    for (int j = i + 1; j < len; j++) {
      int found = 0;
      for (int k = i; k < j; k++) {
        if (string[k] == string[j]) {
          found = 1;
          break;
        }
      }
      if (found) break;
      length++;
    }
    if (length > longest) longest = length;
  }
  printf("%d", longest);
}
