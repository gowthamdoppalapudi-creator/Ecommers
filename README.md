🛒 Product Order Management System (C)
📌 Project Overview

This project is a console-based Product Order Management System developed in C language.
It allows users to view products, add items to a cart, calculate bills with discounts, and store order details in files.

🚀 Features
📦 View available products
➕ Add products to cart
🛍️ View cart details
💰 Automatic bill calculation
🎯 Discount system:
10% discount for orders above ₹50,000
5% discount for orders above ₹20,000
🧾 Generate unique order numbers
💾 Store order history in a file
🏗️ Project Structure
📂 Files Used
main.c → Main program file
ordercount.txt → Stores last order number
orders.txt → Stores all order details
🧠 Concepts Used
Structures (struct)
File Handling (fopen, fprintf, fscanf)
Arrays
Loops and Conditional Statements
Functions
📋 How It Works
Program asks for:
Customer Name
Phone Number

Menu options:

1. View Products
2. Add To Cart
3. View Cart
4. Checkout
5. Exit
User can:
Select products using ID
Add quantity
View total cart
On Checkout:
Total is calculated
Discount applied
Final bill generated
Order saved to file
🧾 Sample Output
Order-1
Customer Name: Gowtham
Phone Number: 9876543210

Laptop Qty:1 Amount:50000
Phone Qty:1 Amount:20000

Total: 70000
Discount: 7000
Final Bill: 63000
⚙️ How to Run
🖥️ Compile the Program
gcc main.c -o shop
▶️ Run the Program
./shop
📈 Future Improvements
Add dynamic product list (from file)
Implement login system
Add delete/update cart options
Create GUI version
Use database instead of text files
