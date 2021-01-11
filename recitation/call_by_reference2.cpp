#include <iostream>

using namespace std;

void circle(double r, double &a, double &p)
{
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
}

int main()
{
    double radius = 10.0;
    double area, perimeter;
    circle(radius, area, perimeter);
    cout << "Area=" << area << " perimeter=" << perimeter << endl;
}

/*
Area=314 perimeter=62.8
*/