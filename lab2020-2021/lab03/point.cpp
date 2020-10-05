#include "point.hpp"

point::point(int x, int y) : _x(x), _y(y) {}

int point::x() const { return _x; }
int point::y() const { return _y; }

void point::move(int dx, int dy)
{
    _x += dx;
    _y += dy;
}

std::ostream &operator<<(std::ostream &os, const point &c)
{
    os << "(" << c._x << "," << c._y << ")";
    return os;
}
