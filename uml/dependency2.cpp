#include <iostream>

using namespace std;

class B
{
public:
    void fun()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

class A
{
public:
    void f1(B b)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        b.fun();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    };
    void f2(B *b)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        b->fun();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    };
    void f3(B &b)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        b.fun();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
    void f4()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        B b;
        b.fun();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    B obj1;
    A obj2;
    obj2.f1(obj1);
    obj2.f2(&obj1);
    obj2.f3(obj1);
    obj2.f4();
}

/*
19 void A::f1(B)
10 void B::fun()
21 void A::f1(B)
25 void A::f2(B*)
10 void B::fun()
27 void A::f2(B*)
31 void A::f3(B&)
10 void B::fun()
33 void A::f3(B&)
37 void A::f4()
10 void B::fun()
40 void A::f4()
*/