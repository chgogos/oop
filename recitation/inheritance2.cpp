// Δημιουργήστε ιεραρχία κλάσεων με βασική κλάση την Base και παραγόμενη κλάση την Derived. 
// Ορίστε στη Base δύο συναρτήσεις με ονόματα foo και bar. 
// Συμπληρώστε κώδικα έτσι ώστε στη μεν foo να εφαρμόζεται υπερφόρτωση ενώ στην bar να εφαρμόζεται παράκαμψη για τα αντικείμενα της κλάσης Derived. 
// Καλέστε τις συναρτήσεις στη main.

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