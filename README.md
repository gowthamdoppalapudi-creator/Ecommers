🛒 Product Order Management System
1. Introduction

The Product Order Management System is a console-based application developed using the C programming language. The system is designed to simulate a basic shopping process where users can view products, add items to a cart, and generate a bill.

This project demonstrates the practical implementation of fundamental programming concepts such as structures, arrays, functions, and file handling.

2. Problem Statement

In many small-scale applications, there is a need for a simple and efficient system to manage customer orders and billing. Manual handling of such operations can lead to errors and inefficiency.

The objective of this project is to design a system that automates:

Product selection
Cart management
Bill generation
Order record storage
3. Objectives
To develop a menu-driven application using C
To implement file handling for storing order data
To apply structures for organizing product information
To automate billing with discount calculation
4. Scope of the Project

The system is limited to a predefined set of products and operates in a console environment. It is intended for educational purposes and small-scale usage where basic order management functionality is required.

5. System Design
5.1 Data Structure Used

The project uses a structure to represent product details:

struct Product
{
    int id;
    char name[30];
    float price;
};
5.2 File Handling

The system uses the following files:

ordercount.txt
Stores the last generated order number to ensure uniqueness
orders.txt
Stores complete order details including customer information, items purchased, and billing summary
6. Functional Modules
6.1 Order Number Generation
Reads the last order number from a file
Increments it to generate a new unique order ID
Updates the file with the latest order number
6.2 Product Display Module
Displays the list of available products with their IDs and prices
6.3 Cart Management Module
Allows users to add products to the cart using product ID
Maintains quantity for each selected product
6.4 Cart Viewing Module
Displays all selected items
Calculates and shows the total amount
6.5 Billing and Checkout Module
Computes the total cost of items
Applies discount based on total amount:
10% discount for orders above ₹50,000
5% discount for orders above ₹20,000
Generates the final bill
Saves order details to a file
7. Algorithm
Start the program
Input customer name and phone number
Generate a unique order number
Display menu options
Perform operation based on user choice:
View products
Add items to cart
View cart
Checkout
If checkout is selected:
Calculate total amount
Apply discount
Generate final bill
Store order details in file
Exit the program
8. Sample Output

Order-1
Customer Name: Gowtham
Phone Number: 9876543210

Laptop Qty:1 Amount:50000
Phone Qty:1 Amount:20000

Total: 70000
Discount: 7000
Final Bill: 63000

9. Advantages
Simple and user-friendly interface
Demonstrates core programming concepts
Ensures data persistence using file handling
10. Limitations
Limited to a fixed number of products
No graphical user interface
No authentication or security features
11. Future Enhancements
Dynamic product management using files or database
Implementation of a graphical user interface (GUI)
Integration with a database system
Addition of user authentication and payment features
12. Conclusion

The Product Order Management System successfully demonstrates the implementation of a basic shopping and billing system using C. It provides a clear understanding of file handling, structures, and modular programming.

This project serves as a foundational step toward developing more advanced real-world applications.
