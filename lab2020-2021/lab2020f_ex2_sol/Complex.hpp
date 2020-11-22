#include <iostream>

class Complex
{
private:
    double re;
    double im;

public:
    Complex();
    Complex(double r);
    Complex(double r, double i);
    Complex(const Complex& other);

    double real();
    double imag();

    Complex conj();
    double abs();
    Complex operator+(const Complex &other);
    Complex operator-(const Complex &other);
    Complex operator*(const Complex &other);
    Complex operator/(const Complex &other);
    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;
    Complex raiseTo(int p);

    friend std::ostream& operator<<(std::ostream &os, const Complex &c);
};