/* Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Error assigning memory to the structure!!");
        return 5;
    }

    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter student roll: ");
    scanf("%d", &s->roll);
    printf("Enter student marks: ");
    scanf("%d", &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);
    free(s);
    return 0;
}
