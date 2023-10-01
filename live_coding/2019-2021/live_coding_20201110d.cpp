#include <iostream>
using namespace std;

class Box
{
public:
    double w, h, l;
    Box() : w(0), h(0), l(0) {}
    double volume()
    {
        return w * h * l;
    }
};

int main()
{
    Box b1; // stack
    b1.w = 4;
    b1.h = 5;
    b1.l = 7;
    cout << b1.volume() << endl; // 140

    Box *p = &b1;
    cout << (*p).volume() << endl; // 140  (*p).volume() <==> p->volume()
    cout << p->volume() << endl; // 140

    p = new Box; // heap
    p->w = 10; // ή (*p).w = 10;
    p->h = 10;
    p->l = 10;
    cout << p->volume() << endl; // 1000

    delete p;
}

/*
140
140
140
1000
*/