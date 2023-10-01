#include <iostream>

using namespace std;

struct circle
{
    double center_x, center_y;
    double radius;
};

double area(circle c){
    return 3.14 * c.radius * c.radius;
}

int main()
{
    circle c;
    c.center_x = 0.0;
    c.center_y = 0.0;
    c.radius = 10.0;

    double a = area(c);
    cout << "emvadon " << a << endl;
}