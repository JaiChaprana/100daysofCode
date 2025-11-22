/* Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/


#include <stdio.h>
#include <string.h>

int main() {
    char fn[100];
    printf("Enter source filename: ");
    fgets(fn, sizeof(fn), stdin);
    fn[strcspn(fn,"\n")] = '\0';
    FILE *fp = fopen(fn, "r");
    if (fp == NULL) {
        printf("File does not exist!!");
        return 1;
    }
    printf("File opened successfully.\n");
    char s[100];
    while (fgets(s, sizeof(s), fp) != NULL) {
        printf("%s", s);
    }

    fclose(fp);
    return 0;
}
