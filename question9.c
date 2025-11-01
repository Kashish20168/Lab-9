#include <stdio.h>

float calculateItemTotal(int quantity, float price); 

int main() {
    char customerName[50];
    int n;
    float totalBill = 0;

    printf("Enter customer name: ");
    fgets(customerName, sizeof(customerName), stdin);

    printf("Enter number of items purchased: ");
    scanf("%d", &n);

    char itemName[50];
    int quantity;
    float price, itemTotal;

    for (int i = 1; i <= n; i++) {
        printf("\nEnter name of item %d: ", i);
        scanf("%s", itemName);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        printf("Enter price per unit: ");
        scanf("%f", &price);

        itemTotal = calculateItemTotal(quantity, price);
        totalBill += itemTotal;
    }

    printf("\n-------------------------------\n");
    printf("Customer Name: %s", customerName);
    printf("Total Bill: Rs. %.2f\n", totalBill);
    printf("-------------------------------\n");

    return 0;
}

float calculateItemTotal(int quantity, float price) {
    return quantity * price;
}
