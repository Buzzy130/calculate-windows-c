#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Конструктор
    Fraction(int num = 0, int denom = 1);

    // Методы сложения, вычитания, умножения и деления
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);

    // Метод возвдения в квадрат
    Fraction square();

    // Метод вычисления корня
    Fraction squareRoot();

    // Метод вывода дроби
    void display();
};

#endif