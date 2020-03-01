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
    
    // εφόσον δηλωθεί ως friend, έχει πλέον πρόσβαση στα ιδιωτικά μέλη της point
    friend ostream &operator<<(ostream &s, const point &p)
    {
        return s << '(' << p._x << ',' << p._y << ')';
    }
};

int main()
{
    point p{5, 7};
    cout << p << endl;
}