#include <iostream>

class Complex
{
    double re;
    double im;

  public:
    Complex() = default;
    Complex(int re, int im) : re(re), im(im) {}

    // υπερφόρτωση τελεστή + με φίλη συνάρτηση
    friend Complex operator+(const Complex &x, const Complex &y)
    {
        Complex c;
        c.re = x.re + y.re;
        c.im = x.im + y.im;
        return c;
    }
    void print()
    {
        if (im >= 0)
            std::cout << re << " + " << im << " j " << std::endl;
        else
            std::cout << re << " - " << -im << " j " << std::endl;
    }
};

int main()
{
    Complex c1(2, -13), c2(3, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}