#include <iostream>

using namespace std;

// δήλωση
class Rectangle
{
public:
    Rectangle(double w, double h);
    double area();
    void scale(double factor);
    void print_info();
private:
    double width, height;
    void scale_w(double f);
    void scale_h(double f);
};

// ορισμός
void Rectangle::scale_w(double f)
{
    width = width * f;
}
void Rectangle::scale_h(double f)
{
    height = height * f;
}

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

double Rectangle::area()
{
    return width * height;
}

void Rectangle::scale(double factor)
{
    scale_w(factor);
    scale_h(factor);
}

void Rectangle::print_info()
{
    cout << "width=" << width << " height=" << height << " area=" << area() << endl;
}

int main()
{
    Rectangle obj1(20.5, 11.3);
    obj1.print_info();
    obj1.scale(2.0);
    obj1.print_info();
}