#ifndef LINE_SEGMENT_HPP
#define LINE_SEGMENT_HPP
#include "point.hpp"

class line_segment
{
private:
    point _from;
    point _to;

public:
    line_segment(int from_x, int from_y, int to_x, int to_y);
    point &from();
    point &to();
    double distance() const;
    friend std::ostream &operator<<(std::ostream &os, const line_segment &ls);
};

#endif
