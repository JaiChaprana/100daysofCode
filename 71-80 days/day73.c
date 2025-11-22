/* Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("No such file!!");
        return 0;
    }
    int words = 0, lines = 0, characters = 0, isWord = 0;
    int c, prev = '\n';
    while ((c = fgetc(fp)) != EOF) {
        characters++;
        if (c == ' ' || c == '\n' || c == '\t') {
            isWord = 0;
        } else if (isWord == 0) {
            isWord = 1;
            words++;
        }
        if (c== '\n') {
            lines++;
        }
        prev = c;
    }

    if (characters > 0 && prev != '\n') lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}
