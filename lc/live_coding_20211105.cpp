#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class point
{
private:
    double x, y;

public:
    point(double a, double b) : x(a), y(b) {}

    void display()
    {
        cout << "x=" << x << " y=" << y << endl;
    }

    double sumxy()
    {
        return x + y;
    }
};

int main()
{
    vector<point> v = {{2.1, 3.4}, {3.7, 2.1}, {0.4, 0.7}};

    for (int i = 0; i < v.size(); i++)
    {
        v[i].display();
    }

    sort(begin(v), end(v), [](point p1, point p2)
         { return p1.sumxy() < p2.sumxy(); });

    cout << "*************************" << endl;

    for (point p : v)
    {
        p.display();
    }
}