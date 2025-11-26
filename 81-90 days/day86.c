/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/


#include <stdio.h>
#include <string.h>

enum op {
    ADD,
    SUB,
    MUL,
    DIV
};

int main() {
    int a,b;
    printf("Enter value 1:  ");
    scanf("%d",&a);
    printf("Enter value 2:  ");
    scanf("%d",&b);
    char s[4];
    printf("Enter operation to perform (ADD, SUB, MUL, DIV): ");
    scanf("%s",s);

    enum op ops;

    if (strcmp(s,"ADD") == 0)
        ops = ADD;
    else if (strcmp(s,"SUB") == 0)
        ops = SUB;
    else if (strcmp(s,"MUL") == 0)
        ops = MUL;
    else if (strcmp(s,"DIV") == 0)
        ops = DIV;
    else {
        printf("Invalid input@!\n");
        return 0;
    }

    switch (ops) {
        case ADD:
            printf("%d+%d=%d\n",a,b,a+b);
            break;
        case SUB:
            printf("%d-%d=%d\n",a,b,a-b);
            break;
        case MUL:
            printf("%d*%d=%d\n",a,b,a*b);
            break;
        case DIV:
            printf("%d/%d=%d\n",a,b,a/b);
            break;
    }

    return 0;
}