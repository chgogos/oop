#include <iostream>

using namespace std;

void compute_area_perimeter(double a, double b, double &e, double &p)
{
    e = a * b;
    p = 2 * a + 2 * b;
}

int main()
{
    double a = 5.7, b = 3.4, e, p;
    compute_area_perimeter(a, b, e, p);
    cout << "Area: " << e << endl;
    cout << "Perimeter: " << p << endl;
}
