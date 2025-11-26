/* Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER,
};

struct Person {
    enum Gender gender;
};

int main() {
    char s[10];
    printf("Enter your gender (MALE, FEMALE): ");
    scanf("%s", s);
    struct Person p;


    if (strcmp(s, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(s, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
