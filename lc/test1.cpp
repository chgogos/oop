#include <iostream>
#include <ostream>

using namespace std;

class point
{
private:
    int _x, _y;

public:
    point(int x, int y) : _x(x), _y(y) {}
    int x() const { return _x; }
    int y() const { return _y; }
    void move(int dx, int dy)
    {
        _x += dx;
        _y += dy;
    }

    // συνάρτηση μέλος reset που θέτει τα _x και _y στο μηδέν

    friend std::ostream &operator<<(std::ostream &os, const point &c);
};

std::ostream &operator<<(std::ostream &os, const point &c)
{
    os << c._x << "," << c._y;
    return os;
}

int main()
{
    point p1(3, 7);
    p1.move(2, 6);
    cout << p1 << endl;

    // κλήση της reset για το σημείο p1 και εμφάνιση του σημείου p1
}
