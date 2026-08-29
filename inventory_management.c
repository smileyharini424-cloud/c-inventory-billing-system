#include <stdio.h>

#define MAX_PRODUCTS 100

struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

void addProduct(struct Product products[], int *count) {
    if (*count >= MAX_PRODUCTS) {
        printf("\nInventory is full.\n");
        return;
    }

    printf("\nEnter Product ID: ");
    scanf("%d", &products[*count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", products[*count].name);

    printf("Enter Product Price: Rs. ");
    scanf("%f", &products[*count].price);

    printf("Enter Product Quantity: ");
    scanf("%d", &products[*count].quantity);

    (*count)++;

    printf("\nProduct added successfully.\n");
}

void displayProducts(struct Product products[], int count) {
    int i;

    if (count == 0) {
        printf("\nNo products available.\n");
        return;
    }

    printf("\n========== Inventory ==========\n");

    for (i = 0; i < count; i++) {
        printf("\nProduct ID : %d\n", products[i].id);
        printf("Name       : %s\n", products[i].name);
        printf("Price      : Rs. %.2f\n", products[i].price);
        printf("Quantity   : %d\n", products[i].quantity);
    }
}

void searchProduct(struct Product products[], int count) {
    int id;
    int i;
    int found = 0;

    printf("\nEnter Product ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (products[i].id == id) {
            printf("\nProduct Found!\n");
            printf("Product ID : %d\n", products[i].id);
            printf("Name       : %s\n", products[i].name);
            printf("Price      : Rs. %.2f\n", products[i].price);
            printf("Quantity   : %d\n", products[i].quantity);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nProduct not found.\n");
    }
}

void updateQuantity(struct Product products[], int count) {
    int id;
    int newQuantity;
    int i;
    int found = 0;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (products[i].id == id) {
            printf("Current Quantity: %d\n",
                   products[i].quantity);

            printf("Enter New Quantity: ");
            scanf("%d", &newQuantity);

            if (newQuantity < 0) {
                printf("\nQuantity cannot be negative.\n");
            }
            else {
                products[i].quantity = newQuantity;
                printf("\nQuantity updated successfully.\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nProduct not found.\n");
    }
}

void generateBill(struct Product products[], int count) {
    int id;
    int quantity;
    int i;
    int found = 0;
    float total;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (products[i].id == id) {
            found = 1;

            printf("Product: %s\n", products[i].name);
            printf("Price: Rs. %.2f\n", products[i].price);
            printf("Available Quantity: %d\n",
                   products[i].quantity);

            printf("Enter Quantity to Buy: ");
            scanf("%d", &quantity);

            if (quantity <= 0) {
                printf("\nInvalid quantity.\n");
            }
            else if (quantity > products[i].quantity) {
                printf("\nInsufficient stock.\n");
            }
            else {
                total = products[i].price * quantity;
                products[i].quantity -= quantity;

                printf("\n========== BILL ==========\n");
                printf("Product  : %s\n", products[i].name);
                printf("Quantity : %d\n", quantity);
                printf("Price    : Rs. %.2f\n",
                       products[i].price);
                printf("Total    : Rs. %.2f\n", total);
                printf("==========================\n");

                printf("Stock updated successfully.\n");
            }

            break;
        }
    }

    if (!found) {
        printf("\nProduct not found.\n");
    }
}

int main() {
    struct Product products[MAX_PRODUCTS];
    int count = 0;
    int choice;

    do {
        printf("\n====================================\n");
        printf("       INVENTORY MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Product\n");
        printf("2. Display Inventory\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Generate Bill\n");
        printf("6. Exit\n");
        printf("====================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addProduct(products, &count);
                break;

            case 2:
                displayProducts(products, count);
                break;

            case 3:
                searchProduct(products, count);
                break;

            case 4:
                updateQuantity(products, count);
                break;

            case 5:
                generateBill(products, count);
                break;

            case 6:
                printf("\nThank you for using Inventory Management System.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
