#include <iostream>
#include <climits> // For data type limits like INT_MAX
#include <iomanip>   // For output formatting
#include <string>    // For string data type

int main() {
    //Display program header
    std::cout << "===================================" << std::endl;
    std::cout << " Practical data type application " << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "This program demonstrates appropriate usage of different data types" << std::endl;
    std::cout << "for various kinds of information" << std::endl;
    
    // Program selection here: 
    // Age data section
    std::cout << "\n----Age DATA section----" << std::endl;
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;
    int totalAges = childAge + teenAge + adultAge;
    float averageAge = totalAges/3.0;
    // Display age information
    std::cout << "Child age: " << childAge << " years" << std::endl;
    std::cout << "Teen age: " << teenAge << " years" << std::endl;
    std::cout << "Adult age: " << adultAge << " years" << std::endl;
    // SHow memory usage: 
    std::cout << "Age memory usage:" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;
    // Demonstrate age calculations
    std::cout << "Age calculations:" << std::endl;
    std::cout << "Total of all ages:" << totalAges << " yearss" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average age:" << averageAge << " yearss" << std::endl;
    
      // ------ PRICE DATA SECTION ------
    double coffeePrice = 3.99;
    double laptopPrice = 1299.99;
    double housePrice = 350000.00;
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    double totalCoffeePrice = coffeePrice + laptopPrice;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n------ PRICE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;
    // Use double for prices (needs decimal precision)
    // Display price information
    std::cout << "Coffee price: $" << coffeePrice << std::endl;
    std::cout << "Laptop price: $" << laptopPrice << std::endl;
    std::cout << "House price: $" << housePrice << std::endl;
    // Show memory usage comparison
    std::cout << "\nPrice storage comparison:" << std::endl;
    std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << " bytes)" << std::endl;
    // Simple price calculations
    std::cout << "\nPrice calculations:" << std::endl;
    std::cout << "Coffee + Laptop total: $" << totalCoffeePrice << std::endl;
    
    // ------ CHARACTER DATA SECTION ------
    // Character variables for single characters
    char grade = 'A';
    char symbol = '#';
    char initial = 'J';
    std::string myInitials = "SJ";
    char myCharInitials[3] = "SJ"; // allocate 1 extra array-element for the '\0' character
    
    std::cout << "\n------ CHARACTER DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;
    // Display character information
    std::cout << "Student grade: " << grade << std::endl;
    std::cout << "Special symbol: " << symbol << std::endl;
    std::cout << "First initial: " << initial << std::endl;
    // Show how characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to number conversion:" << std::endl;
    std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
    std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;
    // Show memory usage
    std::cout << "\nCharacter data memory usage:" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "String containing my initials: (" << myInitials << ") take up " << sizeof(myInitials) << " bytes"<< std::endl;
    std::cout << "Char-array containing my initials: (" << myCharInitials << ") take up " << sizeof(myCharInitials) << " bytes"<< std::endl;
    
    // ------ BOOLEAN DATA SECTION ------
    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;
    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;
    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    // ------ SIMPLE PRODUCT EXAMPLE ------
    // Product information using different data types
    int productId = 1;
    int productId2 = 2;
    double productPrice = 29.99;
    double productPrice2 = 35.69;
    char productGrade = 'B';
    bool inStock = true;
    // Simple calculations
    double salesTax = productPrice * 0.08;  // 8% tax
    double totalPrice = productPrice + salesTax;
    int totalMemory = 2*sizeof(productId) + 2*sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    
    // Set displayed decimal precision:
    std::cout << std::fixed << std::setprecision(3);
    // Display product information
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "Is in Stock? ";
    if (inStock) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    
    
    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPrice << std::endl;
    
    // Memory usage summary
    std::cout << "\nTotal memory used for these product: " << totalMemory << " bytes" << std::endl;
    if (productPrice > productPrice2) {
        std::cout << "Product nr '" << productId2 << "' is cheaper than nr '" << productId << "'" << std::endl;
    } else {
        std::cout << "Product nr '" << productId << "' is cheaper than nr '" << productId2 << "'" << std::endl;
    }
    
    return 0;    
}
