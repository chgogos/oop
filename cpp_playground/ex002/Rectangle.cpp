#include "Rectangle.h"
#include <iostream>

double Rectangle::area()
{
    return width * height;
}

void Rectangle::scale(double factor)
{
    width *= factor;
}

void Rectangle::print_info()
{
    std::cout << "Rectangle " << this << " width=" << width << " height= " << height << " area=" << area() << std::endl;
}