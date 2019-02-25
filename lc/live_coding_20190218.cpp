#include <iostream>

class Rectangle
{
  public:
    double width, height;
    double area()
    {
        return width * height;
    }
};

int main()
{
    Rectangle r1;
    r1.width=5.2;
    r1.height=4.6;
    std::cout << r1.area() << std::endl;

    Rectangle *r = new Rectangle();
    r->width = 7.1;
    r->height = 2.3;
    std::cout << r->area() << std::endl;
    delete r;
}
