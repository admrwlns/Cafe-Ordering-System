# Cafe-Ordering-System
A C-based console application for Rara Cafe's beverage ordering system. This program provides an interactive menu for customers to order hot and cold beverages with customizations like sugar levels, ice levels, and toppings.

---

## Features

### Menu System
- **Hot Beverages Menu** - 7 options (Espresso, Americano, Cappucino, etc.)
- **Cold Beverages Menu** - 6 options (Americano, Mochaccino, Milk Tea, etc.)
- **Toppings Selection** - 5 add-ons (Pearl, Grass Jelly, Oreo, etc.)

### Customization Options
- **Sugar Levels** - Normal, Half, Slight, None
- **Ice Levels** - Normal, Half, None (cold beverages only)
- **Multiple Quantities** - Order multiple cups of same beverage

### Payment System
- **Automatic Tax Calculation** - 6% government tax
- **Itemized Receipt** - Subtotal, tax, and grand total
- **Multiple Orders** - Add multiple beverages in one session

---

## Technical Implementation

### Menu Pricing

#### Hot Beverages
| Beverage | Price |
|----------|-------|
| Espresso | RM 6.50 |
| Americano | RM 6.00 |
| Cappucino | RM 7.00 |
| Caffe Latte | RM 7.50 |
| Chocolate | RM 8.50 |
| Teh Tarik | RM 5.00 |
| Matcha Latte | RM 7.30 |

#### Cold Beverages
| Beverage | Price |
|----------|-------|
| Americano | RM 9.00 |
| Mochaccino | RM 10.00 |
| Milk Tea | RM 7.00 |
| Fruit Juice | RM 9.50 |
| Fruity Smoothie | RM 10.50 |
| Signature Coco | RM 11.00 |

#### Toppings
| Topping | Price |
|---------|-------|
| Pearl, Grass Jelly, Oreo | RM 1.30 |
| Aloe Verra, Red Bean | RM 1.50 |

---

## Code Structure

### Main Components
- **User Input Validation** - Error handling for invalid inputs  
- **Menu Navigation** - Hot/Cold beverage selection  
- **Order Customization** - Sugar, ice, and topping options  
- **Price Calculation** - Automatic total with tax  
- **Receipt Generation** - Formatted customer receipt  

### Key Functions
- **Switch Statements** - Beverage and topping selection
- **Do-While Loops** - Input validation
- **Goto Statements** - Menu navigation (Note: Consider refactoring to functions)
- **Mathematical Calculations** - Price computations with tax

---

## Error Handling

- **Input Validation** - All user inputs are validated
- **Range Checking** - Beverage numbers, sugar/ice levels, toppings
- **Quantity Validation** - Minimum 1 cup required
- **Menu Navigation** - Prevents invalid menu selections

---

## Program Flow

1. **Welcome Screen** - User enters '1' to continue
2. **Menu Selection** - Choose between hot/cold beverages
3. **Beverage Selection** - Pick from available options
4. **Customization** - Sugar level, ice level (cold only), toppings
5. **Quantity** - Specify number of cups
6. **Repeat or Checkout** - Add more items or proceed to payment
7. **Receipt Generation** - Display final bill with tax
8. **Payment Confirmation** - Finalize order

---

## Code Features

### Constants
- `taxRate = 0.06` - 6% government tax
- Fixed beverage and topping prices

### Variables
- `priceBeverage` - Base beverage price
- `priceTop` - Topping additional cost
- `sum` - Running total
- `grandTotal` - Final amount with tax

### Control Structures
- `while` loops for input validation
- `switch` statements for menu selections
- `if-else` for conditional logic
- `goto` for menu navigation

---

## Future Enhancements

- Replace `goto` with function calls for better structure
- Add inventory management
- Implement loyalty program
- Add database integration for order history
- Include seasonal promotions
- Add admin mode for price updates

---

