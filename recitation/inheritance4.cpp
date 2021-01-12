#include <iostream>

using namespace std;

class Base
{
public:
    virtual void foo() = 0;
    virtual void bar()
    {
        cout << "Base::bar()" << endl;
    }
};

class Derived : public Base
{
public:
    virtual void foo()
    {
        cout << "Derived::foo()" << endl;
    };
};

int main()
{
    Base *obj = new Derived;
    obj->foo();
    obj->bar();
}

/*
Derived::foo()
Base::bar()
*/