#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int denom = 1);

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    void setNumerator(int num) {
        numerator = num;
    }

    void setDenominator(int denom) {
        denominator = denom;
    }

    // Methods for addition, subtraction, multiplication, and division
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Method for squaring
    Fraction square() const;

    // Method for calculating square root
    Fraction squareRoot() const;

    // Method for displaying the fraction
    void display() const;
};

#endif