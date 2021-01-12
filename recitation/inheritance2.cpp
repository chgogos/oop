#include <iostream>

using namespace std;

class Base
{
public:
    void foo()
    {
        cout << "Base::foo()" << endl;
    }
    void foo(int)
    {
        cout << "Base::foo(int) ==> Base::foo() is overloaded" << endl;
    }
    virtual void bar()
    {
        cout << "Base::bar()" << endl;
    }
};

class Derived : public Base
{
public:
    void bar()
    {
        cout << "Derived::bar() ==> Base::foo() is overridden" << endl;
    }
};

int main()
{
    Base *obj = new Derived();
    obj->foo();
    obj->foo(1);
    obj->bar();
}

/*
Base::foo()
Base::foo(int) ==> Base::foo() is overloaded
Derived::bar() ==> Base::foo() is overridden
*/