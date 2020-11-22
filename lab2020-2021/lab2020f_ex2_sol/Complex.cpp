#include "Complex.hpp"
#include <cmath>

Complex::Complex() : re(0.0), im(0.0) {}
Complex::Complex(double r) : re(r), im(0.0) {}
Complex::Complex(double r, double i) : re(r), im(i) {}
Complex::Complex(const Complex &other) // ο copy constructor που αυτόματα δημιουργείται έχει την ίδια λειτουργικότητα με αυτή που παρέχουμε
{
    re = other.re;
    im = other.im;
}

double Complex::real()
{
    return re;
}

double Complex::imag()
{
    return im;
}

Complex Complex::conj()
{
    return Complex(re, -im);
}

double Complex::abs()
{
    return sqrt(re * re + im * im);
}

Complex Complex::operator+(const Complex &other)
{
    return Complex(re + other.re, im + other.im);
}

Complex Complex::operator-(const Complex &other)
{
    return Complex(re - other.re, im - other.im);
}

// (a + bi)(c + di) = (ac - bd) + (ad + bc)i
Complex Complex::operator*(const Complex &other)
{
    return Complex(re * other.re - im * other.im, re * other.im + im * other.re);
}

// (a + bi)/(c + di) = (ac+bd)/(c^2+d^2) + (bc-ad)/(c^2+d^2)i
Complex Complex::operator/(const Complex &other)
{
    double r = (re * other.re + im * other.im) / (other.re * other.re + other.im * other.im);
    double i = (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im);
    return Complex(r, i);
}

bool Complex::operator==(const Complex &other) const
{
    return this->im == other.im && this->re == other.re;
}

bool Complex::operator!=(const Complex &other) const
{
    return !(*this == other);
}

Complex Complex::raiseTo(int p)
{
    if (p == 0)
        return Complex(1, 0);
    bool negative_power = false;
    if (p > 0)
    {
        Complex res(*this);
        for (int i = 0; i < p - 1; i++)
        {
            res = res * *this;
        }
        return res;
    }
    else
    {
        Complex mult = Complex(1.0) / *this;
        Complex res(mult);
        for (int i = 0; i < -p - 1; i++)
        {
            res = res * mult;
        }
        return res;
    }
}

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    if (c.im == 0)
        os << c.re;
    else if (c.im < 0)
        os << c.re << " - " << -c.im << "i";
    else
        os << c.re << " + " << c.im << "i";
    return os;
}
