#include <iostream>

using namespace std;

class point
{
private:
    int x, y;

public:
    point() {}
    point(int x, int y) : x(x), y(y) {}
    void set_xy(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << this << "(x=" << x << ", y=" << y << ")" << endl;
    }
};

int main()
{
    point a_point;
    a_point.set_xy(1, 2);
    a_point.display();
}