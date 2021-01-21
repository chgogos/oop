// Δημιουργήστε ιεραρχία κλάσεων με βασική κλάση την Base και παραγόμενη κλάση την Derived. 
// Ορίστε στη Base δύο συναρτήσεις με ονόματα foo και bar. 
// Ορίστε την foo ως pure virtual. 
// Καλέστε τις συναρτήσεις στη main για ένα αντικείμενο Derived.

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