#include <iostream>
#include <cmath>
#include "double.h"

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

Fraction Fraction::operator+(const Fraction& other) {
    return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) {
    return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) {
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

Fraction Fraction::square() {
    return Fraction(numerator * numerator, denominator * denominator);
}

Fraction Fraction::squareRoot() {
    return Fraction(sqrt(numerator), sqrt(denominator));
}

void Fraction::display() {
    std::cout << numerator << "|" << denominator << std::endl;
}

/*int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;
    Fraction squared = f1.square();
    Fraction root = f1.squareRoot();

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    std::cout << "Product: ";
    prod.display();

    std::cout << "Quotient: ";
    quot.display();

    std::cout << "Squared: ";
    squared.display();

    std::cout << "Square Root: ";
    root.display();

    return 0;
}*/