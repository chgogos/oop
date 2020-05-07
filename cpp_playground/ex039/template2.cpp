#include <iostream>
#include <cmath>
#include <ostream>

class Complex
{
    double re;
    double im;

  public:
    Complex(double re = 0.0, double im = 0.0) : re(re), im(im) {}
    double norm() const { return sqrt(re * re + im * im); }
    bool operator>(const Complex &c)
    {
        return this->norm() > c.norm();
    }
    friend std::ostream &operator<<(std::ostream &os, const Complex &c)
    {
        os << "(" << c.re << "," << c.im << ")";
        return os;
    }
};

template <class T>
T max(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a=5, b=7;
    std::cout << max(a, b) << std::endl;

    Complex c1(3, 2), c2(4, 1);
    std::cout << max(c1, c2) << std::endl;

    return 0;
}

/*
7
(4,1)
*/