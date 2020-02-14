#include "Rectangle.h"
#include <iostream>

double Rectangle::area() const
{
    return width * height;
}

void Rectangle::scale(const double &factor)
{
    width *= factor;
}

void Rectangle::print_info() const
{
    std::cout << "Rectangle " << this << " width=" << width << " height= " << height << " area=" << area() << std::endl;
}