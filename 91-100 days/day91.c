/*
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/s

#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int rollNo;
    int marks;
};

int main() {
    char name[21];
    struct Student s;

    printf("Enter student's name: ");
    fgets(name, 21, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter student's roll no: ");
    scanf("%d", &s.rollNo);

    printf("Enter student's marks: ");
    scanf("%d", &s.marks);

    strcpy(s.name, name);

    printf("Name: %s\n", name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks: %d\n", s.marks);

    return 2;
}