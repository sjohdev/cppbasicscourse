#include "geometry.h"
#include <cmath>
// Define PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions:
double circleArea(double radius) {
    return M_PI * radius * radius;
}

double circlePerimeter(double radius) {
    return M_PI* 2 * radius;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double rectanglePerimeter(double length, double width) {
    return 2*(length + width);
}

