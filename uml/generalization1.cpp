#include <iostream>

using namespace std;

class Base
{
protected:
    int x;
public:
    Base(): x(0){}
};

class Derived : public Base
{
private:
    int y;

public:
    Derived() : y(0) {}
    void foo()
    {
        cout << x << y << endl;
    }
};

int main()
{
    Derived obj;
    obj.foo();
}

/*
00
*/