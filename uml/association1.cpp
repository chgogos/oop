#include <iostream>

using namespace std;

class B
{
public:
    void foo()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

class A
{
private:
    B *b_ptr;

public:
    A(B *b) : b_ptr(b)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
    void bar()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        b_ptr->foo();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    B obj1;
    A obj2(&obj1);
    obj2.bar();
}

/*
22 A::A(B*)
26 void A::bar()
10 void B::foo()
28 void A::bar()
*/