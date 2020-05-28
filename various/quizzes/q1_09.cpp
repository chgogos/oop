/*
Quiz 1 - 27/5/2020
*/

#include <iostream>
using namespace std;

class Box
{
private:
    double width, depth, height;
public:
    Box(double w, double d, double h) : width(w), depth(d), height(h) {}
    double get_volume() { return width * height * depth; }
};
int main()
{
    Box b1(1.0, 2.0, 2.0);
    Box b2(3.0, 2.0, 2.0);
    if (b1.get_volume() < b2.get_volume())
        cout << "b1";
    else
        cout << "b2";
}

/*
b1
*/