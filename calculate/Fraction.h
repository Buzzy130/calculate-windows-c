#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <iostream>
#include <string>
#include <cmath>

class Fraction {
private:
    int numerator;
    int denominator;

    int GCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        else {
            return GCD(b, a % b);
        }
    }

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

    void reduce() {
        int gcd = GCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
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