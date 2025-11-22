/* Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    FILE *fp2 = fopen("output.txt", "w");

    if (fp == NULL || fp2 == NULL) {
        printf("Error running the program!!");
        return 1;
    }

    int c;
    while ((c=fgetc(fp)) != EOF) {
        fputc(toupper(c), fp2);
    }

    fclose(fp);
    fclose(fp2);
    return 0;

}