/* Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int roll;
    int marks;
};

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

    int topper  = 0, topMarks = 0;

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);

        if (s[i].marks > topMarks) {
            topper = i;
            topMarks = s[i].marks;
        }
    }

    printf("Topper: %s (Marks: %d)", s[topper].name, s[topper].marks);

    return 0;
}