#include <iostream>

using namespace std;

class circle
{
public:
    double center_x, center_y;
    double radius;
    double area();
    double perimeter();
};

double circle::area()
{
    return 3.14 * radius * radius;
}

double circle::perimeter(){
    return 2* 3.14 * radius;
}

int main()
{
    circle c;
    c.center_x = 0.0;
    c.center_y = 0.0;

    c.radius = 10.0;
    for (int i = 0; i < 10; i++)
    {
        double a = c.area();
        double p = c.perimeter();
        cout << "emvadon: " << a << " perimeter: " << p << endl;
        c.radius += 0.1;
    }
}

/*
emvadon: 314 perimeter: 62.8      
emvadon: 320.311 perimeter: 63.428
emvadon: 326.686 perimeter: 64.056
emvadon: 333.123 perimeter: 64.684
emvadon: 339.622 perimeter: 65.312
emvadon: 346.185 perimeter: 65.94
emvadon: 352.81 perimeter: 66.568
emvadon: 359.499 perimeter: 67.196
emvadon: 366.25 perimeter: 67.824
emvadon: 373.063 perimeter: 68.452
*/