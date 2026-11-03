
#include "basic_math.h"

// Function definitions:
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return b - a;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b < 0.01 && b > -0.01) {
        return 0;
    }
    return a/b;
}

