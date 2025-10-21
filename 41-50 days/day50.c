// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[30];
    scanf("%s", date);

    int i = 0, j = 0;
    while (date[i] != '/') {
        newDate[j++] = date[i++];
    }

    i += 3;
    newDate[j++] = '-';
    newDate[j++] = 'A';
    newDate[j++] = 'p';
    newDate[j++] = 'r';
    newDate[j++] = '-';

    while (date[i] != '\0') {
        newDate[j++] = date[i++];
    }

    newDate[j] = '\0';
    printf("%s\n", newDate);
    return 0;
}

