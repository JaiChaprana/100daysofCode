/* Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/


/* Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int roll;
    int marks;
};

void compareStu(struct Student s, struct Student t) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", t.name, t.roll, t.marks);

    if (strcmp(t.name, s.name) == 0 && s.roll == t.roll && s.marks == t.marks) {
        printf("They are the same: \n");
        printf("Name: %s | Roll: %d | Marks: %d", t.name, t.roll, t.marks);
        return;
    } else {
        printf("They are not equal!!");
        return;
    }
}

int main() {
    struct Student s;
    struct Student t;

    printf("Enter your name: ");
    scanf("%s", &s.name);

    printf("Enter your roll number: ");
    scanf("%d", &s.roll);

    printf("Enter your marks: ");
    scanf("%d", &s.marks);

    printf("Enter name of student 2: ");
    scanf("%s", &t.name);

    printf("Enter roll number of student 2: ");
    scanf("%d", &t.roll);

    printf("Enter marks of student 2: ");
    scanf("%d", &t.marks);

    compareStu(s,t);

    return 0;
}