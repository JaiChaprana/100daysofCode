/* Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[21];
    int id;
    struct Date date;
};

int main() {
    struct Employee s;

    printf("Enter employee name: ");
    scanf("%s", s.name);
    printf("Enter employee id: ");
    scanf("%d", &s.id);
    printf("Enter employee joining day: ");
    scanf("%d", &s.date.day);
    printf("Enter employee joining month: ");
    scanf("%d", &s.date.month);
    printf("Enter employee joining year: ");
    scanf("%d", &s.date.year);

    // not complete

    return 0;
}