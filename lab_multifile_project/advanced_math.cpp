#include "advanced_math.h"
#include <cmath>

// Function declarations:
double power(double base, int exponent) {
    return pow(base, static_cast<double>(exponent));
}

double squareRoot(double number) {
    return sqrt(number);
}

double absolute(double number) {
    if (number < 0.0) {
        return -1 * number;   
    } else {
        return number;
    }
}

double cube(double number) {
    return number * number * number;
}
