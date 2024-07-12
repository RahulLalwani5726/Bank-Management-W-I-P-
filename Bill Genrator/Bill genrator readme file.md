
# C++ Sales Billing Program

This C++ program allows users to generate a sales bill for a shop. It captures customer information, shop details, product sales, calculates totals including GST and discounts, and outputs a detailed bill to a text file.

## Features

- **Customer Information:** Records customer name and date of purchase.
- **Shop Information:** Captures the shop name.
- **Product Sales:** Allows adding products with their respective quantities and prices.
- **Billing Calculation:** Calculates total amount, adds GST, applies discount, and generates a detailed bill.

## Requirements

- **Compiler:** C++ compiler supporting C++11 standard or higher.
- **Operating System:** Windows (due to the use of `system("cls")` for clearing the console).
- **Dependencies:** Standard C++ library (`<iostream>`, `<fstream>`, `<iomanip>`, `<string>`, `<limits>`).

## Usage

1. **Input Requirements:**
   - Run the program.
   - Enter customer name when prompted.
   - Enter shop name when prompted.
   - Add products with their quantities and prices as needed.

2. **Generating Bill:**
   - Choose option 1 to add products and specify their details (name, quantity, price).
   - Choose option 2 to generate the bill after adding all products.
   - Enter discount percentage and GST percentage as prompted.

3. **Output:**
   - The program will create a text file named in the format `"CustomerName Date.txt"` (e.g., `John Doe Tue Jul 12 2024.txt`) containing a formatted bill.

## Example

Below is an example of how the generated bill might look:

```
          Example Shop

Tue Jul 12 2024
Product Name | Price | Quantity | Total 
----------------------------------------
Item1        | 10.00 | 2        | 20.00 
Item2        | 5.00  | 3        | 15.00 
----------------------------------------
Total Amount     35.00
GST (+5%)         1.75
Discount (-10%)   3.50
----------------------------------------
                 33.25
----------------------------------------

        * Thanks For Shopping *
```

## Contributing

Contributions are welcome! If you find any bugs or have suggestions for improvements, please create an issue or fork the repository and submit a pull request.

---