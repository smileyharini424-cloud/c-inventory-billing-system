# Inventory Management System in C

## Explanation

The Inventory Management System is a menu-driven C project designed to manage product stock.

The system allows users to add products, display inventory, search for products, update product quantities, and generate a bill when products are purchased.

The project demonstrates structures, arrays, functions, searching, arithmetic calculations, and stock management.

## Problem Statement

Develop a C program to manage an inventory of products.

The system should allow the user to:

* Add products
* Store product details
* Display inventory
* Search products using Product ID
* Update product quantity
* Generate a bill
* Automatically reduce stock after a purchase

## Features

* Add product records
* Display complete inventory
* Search product by ID
* Update stock quantity
* Generate customer bill
* Check available stock
* Prevent purchasing more than available stock
* Automatically update inventory after purchase
* Menu-driven interface

## How It Works

1. The program creates a `Product` structure.
2. Products are stored in an array of structures.
3. The user selects an operation from the menu.
4. Product details such as ID, name, price, and quantity are stored.
5. The search operation finds a product using its ID.
6. The update option changes the available quantity.
7. When a product is purchased, the program checks the available stock.
8. The bill is calculated using price × quantity.
9. The purchased quantity is deducted from the inventory.
10. The updated inventory remains available for further operations.

## Technologies Used

* C Programming Language
* GCC Compiler
* Standard Input/Output Library

## Data Structure Used

### Array of Structures

An array of structures is used to store multiple product records.

Each `Product` structure contains:

* Product ID
* Product Name
* Product Price
* Product Quantity

## Methods Used

* `main()`
* `addProduct()`
* `displayProducts()`
* `searchProduct()`
* `updateQuantity()`
* `generateBill()`
* Structures
* Arrays
* Functions
* `for` loop
* `do-while` loop
* `switch-case`
* Conditional statements

## Program Flow

```text
Start
  ↓
Create Product Array
  ↓
Display Menu
  ↓
Select Operation
  ↓
 ┌────────┬─────────┬────────┬────────────┬──────────────┐
 ↓        ↓         ↓        ↓            ↓
Add     Display    Search   Update       Generate
Product Inventory  Product  Quantity     Bill
 ↓        ↓         ↓        ↓            ↓
Store    Show      Find     Modify       Check Stock
Details  Records   by ID    Quantity     ↓
                                            ↓
                                      Calculate Total
                                            ↓
                                      Reduce Stock
                                            ↓
                                      Display Bill
 └────────┴─────────┴────────┴────────────┴──────────────┘
                         ↓
                    Return to Menu
                         ↓
                       Exit?
                    ↓          ↓
                   No         Yes
                   ↓           ↓
                 Menu         End
```

## Sample Input

```text
====================================
       INVENTORY MANAGEMENT SYSTEM
====================================
1. Add Product
2. Display Inventory
3. Search Product
4. Update Quantity
5. Generate Bill
6. Exit
====================================
Enter your choice: 1

Enter Product ID: 101
Enter Product Name: Keyboard
Enter Product Price: Rs. 800
Enter Product Quantity: 10
```

## Sample Output

```text
Product added successfully.
```

### Generate Bill

```text
Enter your choice: 5

Enter Product ID: 101
Product: Keyboard
Price: Rs. 800.00
Available Quantity: 10
Enter Quantity to Buy: 2

========== BILL ==========
Product  : Keyboard
Quantity : 2
Price    : Rs. 800.00
Total    : Rs. 1600.00
==========================
Stock updated successfully.
```

## Time Complexity

### Add Product

`O(1)`

### Display Inventory

`O(n)`

### Search Product

`O(n)`

### Update Quantity

`O(n)`

### Generate Bill

`O(n)`

Where `n` is the number of products stored.

## Space Complexity

`O(n)`

The program stores product records in an array of structures.

## Key Learning

* Understanding structures
* Working with arrays of structures
* Creating modular functions
* Searching records using IDs
* Updating inventory quantities
* Performing billing calculations
* Validating available stock
* Building a real-world inventory application
* Understanding menu-driven programming

## File Location

```text
inventory_management.c
```

## Repository Structure

```text
c-inventory-billing-system/
│
├── inventory_management.c
└── README.md
```

## Author

V.Harini
