#include "Fraction2.h"

// Constructor
Fraction2::Fraction2(int num, int denom) : numerator(num), denominator(denom) {}

// Addition
Fraction2 Fraction2::operator+(const Fraction2& other) const {
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    Fraction2 result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Subtraction
Fraction2 Fraction2::operator-(const Fraction2& other) const {
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    Fraction2 result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Display
void Fraction2::display() const {
    std::cout << numerator << "/" << denominator << std::endl;
}

