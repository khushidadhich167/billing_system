# Grocery Store Billing System (C)

A beginner-friendly console project written in C.

## Features
- Select grocery products from a menu
- Enter quantity for each product
- Calculate item amounts and subtotal
- Apply a 5% discount when subtotal is Rs. 1000 or more
- Display a final bill receipt

## Sample prices
- Rice: Rs. 60/kg
- Wheat Flour: Rs. 40/kg
- Sugar: Rs. 45/kg
- Milk: Rs. 30/litre
- Cooking Oil: Rs. 150/litre
- Potato: Rs. 25/kg

These are example prices and can be changed in `grocery_billing.c`.

## How to run

### With GCC
Open a terminal in this folder and run:

```bash
gcc grocery_billing.c -o grocery_billing
```

On Windows:

```bash
grocery_billing.exe
```

On Linux/macOS:

```bash
./grocery_billing
```

## How to use
1. Enter a number from 1 to 6 to add a product.
2. Enter the quantity when prompted.
3. Repeat to add more products.
4. Enter `0` to generate the bill.

## Note
This is a basic learning project. It displays the bill in the terminal and does not save receipts to a file or calculate GST.
