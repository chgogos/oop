#include "circle.hpp"

circle::circle(int x, int y, double radius) : _center(point(x, y)), _radius(radius) {}
point &circle::center() { return _center; }
double circle::radius() const { return _radius; }
double circle::area() const { return 3.14 * _radius * _radius; }
std::ostream &operator<<(std::ostream &os, const circle &c)
{
    os << "center = " << c._center
       << " radius = " << c._radius
       << " area = " << c.area();
    return os;
}