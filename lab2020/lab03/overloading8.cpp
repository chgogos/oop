// Υπερφόρτωση του τελεστή << για τα αντικείμενα point

#include <iostream>

using namespace std;

class point
{
    int _x, _y;

public:
    point(int x, int y) : _x(x), _y(y) {}

    int x() const { return _x; }
    int y() const { return _y; }

    friend ostream &operator<<(ostream &s, const point &p);
};

ostream &operator<<(ostream &s, const point &p)
{
    return s << '(' << p._x << ',' << p._y << ')';
}

istream &operator>>(istream &s, point &p)
{
    int x, y;
    if (s >> x >> y)
    {
        p = point(x, y);
    }
    else
    {
        s.setstate(ios::badbit);
    }
    return s;
}

int main()
{
    point p(0, 0);
    cout << "Enter two integer values for specifying a point: ";
    cin >> p;
    if (!cin){
        cerr << "Bad input" << endl;
    } else {
        cout << "You have entered point " << p << endl;
    }
}

/* έξοδος
Enter two integer values for specifying a point: 2 3
You have entered point (2,3)
*/