#include "math_functions.h"
#include <cmath>
#include <stdexcept> 

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        throw std::invalid_argument("Division by zero");
    }
}

double power(double a, double b) {
    return std::pow(a, b);
}
