/*
Quiz 1
*/

#include <iostream>
using namespace std;

class box
{
private:
    double width, depth, height;

public:
    box(double w, double d, double h) : width(w), depth(d), height(h) {}
    double get_volume() { return width * height * depth; }
};
int main()
{
    box b1(1.0, 2.0, 2.0);
    box b2(3.0, 2.0, 2.0);
    if (b1.get_volume() > b2.get_volume())
        cout << "b1";
    else
        cout << "b2";
}

/*
b2
*/