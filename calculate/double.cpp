#include <iostream>
#include "Fraction.h"

// �����������
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

// �������� ��������
Fraction Fraction::operator+(const Fraction& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// �������� ���������
Fraction Fraction::operator-(const Fraction& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// �������� ���������
Fraction Fraction::operator*(const Fraction& other) const {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// �������� �������
Fraction Fraction::operator/(const Fraction& other) const {
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Fraction(num, denom);
}

// ������ ���������� ����� � �������
Fraction Fraction::square() const {
    return Fraction(numerator * numerator, denominator * denominator);
}

// ������ ���������� ����������� ����� �� �����
Fraction Fraction::squareRoot() const {
    return Fraction(sqrt(numerator), sqrt(denominator));
}

// ������ ����������� �����
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

    std::cout << "��������� ��������: ";
    resultAdd.display();

    std::cout << "��������� ���������: ";
    resultSubtract.display();

    std::cout << "��������� ���������: ";
    resultMultiply.display();

    std::cout << "��������� �������: ";
    resultDivide.display();

    Fraction squared = fraction1.square();
    Fraction squareRooted = fraction2.squareRoot();

    std::cout << "Square of fraction1: ";
    squared.display();

    std::cout << "Square root of fraction2: ";
    squareRooted.display();

    return 0;
}*/