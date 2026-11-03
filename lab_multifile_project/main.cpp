#include <iostream>
#include "basic_math.h"
#include "advanced_math.h"
#include "geometry.h"

int main() {
    double radius = 5.0;
    double length = 4.0, width = 6.0;
    std::cout << "=======MATH DEMO=========" << std::endl;
    std::cout << "--Basic math--" << std::endl;
    std::cout << "5 + 3 = " << add(5,3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5,3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5,3) << std::endl;
    std::cout << "5 / 3 = " << divide(5,3) << std::endl;
    
    std::cout << "--Advanced math--" << std::endl;
    std::cout << "2^3 = " << power(2,3) << std::endl;
    std::cout << "sqrt(16) = " << squareRoot(16) << std::endl;
    std::cout << "abs(-7.5) = " << absolute(-7.5) << std::endl;
    
    std::cout << "--Geometry--" << std::endl;
    std::cout << "Circle with r = " << radius << ":" << std::endl;
    std::cout << "Area = " << circleArea(radius) << std::endl;
    std::cout << "Perimeter = " << circlePerimeter(radius) << std::endl;
    
    std::cout << "Rectangle with length = " << length << " and width = " << width << ":" << std::endl;
    std::cout << "Area = " << rectangleArea(length, width) << std::endl;
    std::cout << "Perimeter = " << rectanglePerimeter(length, width) << std::endl;
    
    std::cout << "Cube of 3 = " << cube(3) << std::endl;
    return 0;
}

