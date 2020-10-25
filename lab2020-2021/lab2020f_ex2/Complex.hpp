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

    double real();
    double imag();

    Complex operator+(const Complex &other);

    friend std::ostream& operator<<(std::ostream &os, const Complex &c);
};