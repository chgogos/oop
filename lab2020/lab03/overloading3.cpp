// Υπερφόρτωση του τελεστή == για τα αντικείμενα point

#include <iostream>

using namespace std;

class point
{
    int _x, _y;

public:
    point(int x, int y) : _x(x), _y(y) {}

    int x() const { return _x; }
    int y() const { return _y; }

    bool operator==(const point &p) const
    {
        return _x == p._x && _y == p._y;
    }
};

int main()
{
    point p1{5, 7};
    point p2(5, 7);
    if (p1 == p2)
    {
        cout << "EQUAL" << endl;
    }
}