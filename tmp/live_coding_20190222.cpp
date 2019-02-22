#include <iostream>

#define PI 3.141592
// constexpr double PI=3.141592;

void test(int &x)
{
    x++;
}

void circle(double &r, double &a, double &p)
{
    r *= 2;
    a = PI * r * r;
    p = 2 * PI * r;
}

int main()
{
    int x = 5, y = 10;
    int &r = x;
    r++;
    std::cout << r << std::endl;
    std::cout << x << std::endl;

    test(y);
    std::cout << y << std::endl;

    double radius = 7.8, a, p;
    circle(radius, a, p);
    std::cout << "embadon=" << a << " perimetros=" << p << std::endl;

    return 0;
}