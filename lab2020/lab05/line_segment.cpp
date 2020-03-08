#include "line_segment.hpp"
#include <cmath>

line_segment::line_segment(int from_x, int from_y, int to_x, int to_y) : _from(point(from_x, from_y)), _to(point(to_x, to_y)) {}
point& line_segment::from() { return _from; }
point& line_segment::to(){ return _to; }
double line_segment::distance() const
{
    int dx = _from.x() - _to.x();
    int dy = _from.y() - _to.y();
    return sqrt(dx * dx + dy * dy);
}

std::ostream &operator<<(std::ostream &os, const line_segment &ls)
{
    os << "from = " << ls._from
       << " to = " << ls._to
       << " distance = " << ls.distance();
    return os;
}