#include <iostream>
#include "Fraction.h"

// Конструктор
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

// Оператор сложения
Fraction Fraction::operator+(const Fraction& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// Оператор вычитания
Fraction Fraction::operator-(const Fraction& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// Оператор умножения
Fraction Fraction::operator*(const Fraction& other) const {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// Оператор деления
Fraction Fraction::operator/(const Fraction& other) const {
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Fraction(num, denom);
}

// Способ возведения дроби в квадрат
Fraction Fraction::square() const {
    return Fraction(numerator * numerator, denominator * denominator);
}

// Способ вычисления квадратного корня из дроби
Fraction Fraction::squareRoot() const {
    return Fraction(sqrt(numerator), sqrt(denominator));
}

// Способ отображения дроби
void Fraction::display() const {
    std::cout << numerator << "|" << denominator << std::endl;
}

/*int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction resultAdd = fraction1 + fraction2;
    Fraction resultSubtract = fraction1 - fraction2;
    Fraction resultMultiply = fraction1 * fraction2;
    Fraction resultDivide = fraction1 / fraction2;

    std::cout << "Результат сложения: ";
    resultAdd.display();

    std::cout << "Результат вычитания: ";
    resultSubtract.display();

    std::cout << "Результат умножения: ";
    resultMultiply.display();

    std::cout << "Результат деления: ";
    resultDivide.display();

    Fraction squared = fraction1.square();
    Fraction squareRooted = fraction2.squareRoot();

    std::cout << "Square of fraction1: ";
    squared.display();

    std::cout << "Square root of fraction2: ";
    squareRooted.display();

    return 0;
}*/