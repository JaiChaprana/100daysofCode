/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];

    printf("Enter string 1: ");
    scanf("%s", &s);
    printf("Enter string 2: ");
    scanf("%s", &t);

    const int sLen = strlen(s), tLen = strlen(t);

    if (sLen != tLen) {
        printf("Not Anagram");
        return 0;
    }

    int count[50], cnt = 0;

    for (int i = 0; i < sLen; i++) {
        count[s[i]-'a']++;
        count[t[i]-'a']--;
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 1;

}
