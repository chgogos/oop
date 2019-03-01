#include <iostream>

class Complex
{
    double re;
    double im;

  public:
    Complex() = default;
    Complex(int re, int im) : re(re), im(im) {}

    // υπερφόρτωση τελεστή + με συνάρτηση μέλος
    Complex operator+(const Complex &x)
    {
        Complex c;
        c.re = re + x.re;
        c.im = im + x.im;
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