#include "Fraction.h"

// Constructor
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

// Addition
Fraction Fraction::operator+(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Subtraction
Fraction Fraction::operator-(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Multiplication
Fraction Fraction::operator*(const Fraction& other) const {
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Division
Fraction Fraction::operator/(const Fraction& other) const {
    int resultNumerator = numerator * other.denominator;
    int resultDenominator = denominator * other.numerator;
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Squaring
Fraction Fraction::square() const {
    int resultNumerator = numerator * numerator;
    int resultDenominator = denominator * denominator;
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Square Root
Fraction Fraction::squareRoot() const {
    int resultNumerator = std::sqrt(numerator);
    int resultDenominator = std::sqrt(denominator);
    Fraction result(resultNumerator, resultDenominator);
    result.reduce();
    return result;
}

// Display
void Fraction::display() const {
    std::cout << numerator << "/" << denominator << std::endl;
}

