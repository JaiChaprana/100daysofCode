/* Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

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

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
    }

    return 0;
}