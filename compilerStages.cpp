#include <iostream>
#include <iomanip>
#include <cmath>

#define SQUARE(x) ((x) * (x))

const double PI = 3.14159;

int main() {
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Area of circle: " << area << std::endl;
    std::cout << "Square root: " << sqrt(area) << std::endl;
    return 0;
}
