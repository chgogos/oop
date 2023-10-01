#include <iostream>
using namespace std;
class A
{
private:
    double x;

public:
    A() : x(0) {}
    A(double xx) : x(xx) {}

    A operator+(const A &other) const
    {
        A obj;
        obj.x = x + other.x;
        // obj.x = x - 0.1 * x;
        return obj;
    }

    void print()
    {
        cout << x << endl;
    }
};

int main()
{
    A obj1(42), obj2(34), obj3;

    obj3 = obj1 + obj2;

    obj3.print();
}
