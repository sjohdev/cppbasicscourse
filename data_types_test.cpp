#include <iostream>
#include <climits>

int main() {
    int maxValue = INT_MAX;
    unsigned int uSignedInteger = 1;
    signed int signedInteger = -1;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);
    char letter = 'C';
    int letterValue = static_cast<int>(letter);
    
    //Test integer limits
    std::cout << "Integer Limits and Overflow" << std::endl;
    std::cout << "Maximum int value: " << maxValue << std::endl;
    std::cout << "adding 1 to max-value: " << maxValue + 1 << std::endl;
    
    // Test type casting between different types: 
    std::cout << "unsigned int with value 1: " << uSignedInteger << std::endl;
    std::cout << "same variable converted to signed int: " << static_cast<signed int>(uSignedInteger) << std::endl;
    std::cout << "signed int with value -1: " << signedInteger << std::endl;
    std::cout << "same variable converted to unsigned int: " << static_cast<unsigned int>(signedInteger) << std::endl;
    
    std::cout << "\nType Casting Examples: " << std::endl;
    std::cout << "Original price: " << precisePrice << std::endl;
    std::cout << "Price after int-casting: " << roundedPrice << std::endl;
    // Character to integer conversion: 
    std::cout << "Character: '" << letter << "' has ASCII value: " << letterValue << std::endl;
    
    return 0;
}
