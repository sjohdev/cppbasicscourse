#include <iostream>
#include <climits>

int main() {
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.14159265359;
    char playerRank = 'A';
    bool gameActive = true;
    
    short myShort = 42;
    long myLong = 3;
    long long myLongLong = 89;
    
    std::cout << "Memory Usage Analysis:" << std::endl;
    std::cout << "int uses: " << sizeof(playerLevel) << " bytes" << std::endl;
    std::cout << "int uses: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float uses: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double uses: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "char uses: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "bool uses: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "short uses: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long uses: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long uses: " << sizeof(long long) << " bytes" << std::endl;
    
    return 0;
}
