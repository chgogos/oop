#ifndef POINT_HPP
#define POINT_HPP
#include <ostream>

class point
{
private:
    int _x, _y;

public:
    point(int x, int y);
    int x() const;
    int y() const;
    void move(int dx, int dy);
    friend std::ostream &operator<<(std::ostream &os, const point &c);
};

#endif