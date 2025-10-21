// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/



#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    printf("Enter a string: ");
    fgets(c, sizeof(c), stdin);

    int start = 0;

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == ' ' || c[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                const char temp = c[start];
                c[start] = c[end];
                c[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("%s", c);

    return 0;
}
