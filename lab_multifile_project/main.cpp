#include <iostream>
#include "basic_math.h"
#include "advanced_math.h"
#include "geometry.h"

int main() {
    std::cout << "=======MATH DEMO=========" << std::endl;
    std::cout << "--Basic math--" << std::endl;
    std::cout << "5 + 3 = " << add(5,3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5,3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5,3) << std::endl;
    std::cout << "5 / 3 = " << divide(5,3) << std::endl;
    
    return 0;
}

