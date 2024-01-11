#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

void calc(double (*fn)(double), double from, double to, int points)
{
    double step = (to - from) / points;
    for (int i = 0; i <= points; i++)
    {
        double x = from + i * step;
        double y = fn(x);
        cout << "f(" << x << ")=" << y << endl;
    }
}

int main()
{
    double PI = 3.1415;
    calc(sin, -PI, PI, 10);
    calc(cos, -PI, PI, 10);
    calc(sqrt, 0, 100, 10);
}