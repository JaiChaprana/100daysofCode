/* Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main () {
    FILE *fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file!!");
        return 1;
    }
    char str[100];
    printf("Enter into file: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] == '\n') fprintf(fp, "%s", str);
    else fprintf(fp, "\n%s", str);

    fclose(fp);
    return 0;
}