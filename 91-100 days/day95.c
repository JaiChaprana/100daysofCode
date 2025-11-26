/* Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int roll;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int topper = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    return s[topper];
}

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        char name[21];

        printf("Enter student's name: ");
        scanf("%s", name);

        strcpy(s[i].name, name);

        printf("Enter student's roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter student's marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Details: \n");

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }

    struct Student topper = getTopper(s, 5);

    printf("Name: %s | Roll: %d | Marks: %d", topper.name, topper.roll, topper.marks);

    return 0;
}