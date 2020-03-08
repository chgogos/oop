#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "point.hpp"
#include <ostream>

class circle
{
private:
    point _center;
    double _radius;

public:
    circle(int x, int y, double radius);
    point& center();
    double radius() const;
    double area() const;
    friend std::ostream& operator<<(std::ostream &os, const circle &c);
};

#endif
