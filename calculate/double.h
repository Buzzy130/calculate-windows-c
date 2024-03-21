#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // �����������
    Fraction(int num = 0, int denom = 1);

    // ������ ��������, ���������, ��������� � �������
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);

    // ����� ��������� � �������
    Fraction square();

    // ����� ���������� �����
    Fraction squareRoot();

    // ����� ������ �����
    void display();
};

#endif