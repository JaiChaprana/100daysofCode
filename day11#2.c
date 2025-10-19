// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main() {
    float sellingPrice, costPrice;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("\nEnter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("The profit percentage is %.2f!!", ((sellingPrice - costPrice) / costPrice) * 100);
    } else if (sellingPrice < costPrice) {
        printf("The loss percentage is %.2f!!", ((sellingPrice - costPrice) / costPrice) * 100);
    } else {
        printf("Sold at cost price!!");
    }
}
