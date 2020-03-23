#include <iostream>

using namespace std;

class A
{
private:
    int x = -1;
    const int y = -1;

public:
    A();
    A(int _x, int _y);
    void Show();
};

A::A() { x = 0; }
A::A(int _x, int _y) : x(_x), y(_y) {}

void A::Show()
{
    cout << x << " " << y << endl;
}

int main()
{
    A obj1, obj2(1, 2);
    obj1.Show();
    obj2.Show();
}