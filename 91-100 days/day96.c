/* Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

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

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d", s.name, s.id, s.date.day, s.date.month, s.date.year);

    return 0;
}