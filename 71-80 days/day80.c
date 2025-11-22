/* Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int rollNumber;
    float marks;
} Student;

int main() {
    Student stu;
    FILE *fp = fopen("student.txt", "a");
    if (fp == NULL) {
        printf("Error entering details!!");
        return 1;
    }
    int n = 0, choice = 1;
    while (choice != 0) {
        char name[20];
        printf("Enter student name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        strcpy(stu.name, name);

        while (getchar() != '\n');
        printf("Enter student roll number: ");
        scanf("%d", &stu.rollNumber);
        while ((getchar()) != '\n');
        printf("Enter student marks: ");
        scanf("%f", &stu.marks);
        while ((getchar()) != '\n');

        fprintf(fp, "%s %d %.2f\n", name, stu.rollNumber, stu.marks );
        n++;
        printf("Enter 0 to exit: ");
        scanf("%d", &choice);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Unable to read from student data!!");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", stu.name, &stu.rollNumber, &stu.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", stu.name, stu.rollNumber, stu.marks);
    }
    fclose(fp);
    return 0;
}