#include <iostream>

class Base
{
  public:
    virtual void fun1()
    {
        std::cout << "Base fun1()" << std::endl;
    }
};

class Derived : public Base
{
  public:
    void fun2()
    {
        std::cout << "Derived fun2()" << std::endl;
    }
};

// the need for dynamic_cast generally arises because we want
// to perform derived class operation on a derived class object,
// but we have only a pointer or reference to base (Scott Meyers)
int main()
{
    Derived *p1 = new Derived();
    Derived *p2 = new Derived();
    Derived *p3 = new Derived();
    Base *a[] = {p1, p2, p3};

    // πρόσβαση σε συνάρτηση της παραγόμενης κλάσης μέσω δεικτών στη βασική κλάση
    for (int i = 0; i < 3; i++)
    {
        (dynamic_cast<Derived *>(a[i]))->fun2();
    }

    return 0;
}