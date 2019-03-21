#include <iostream>

class Base
{
  public:
    void fun1()
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

int main()
{
    Derived *p1 = new Derived();
    Derived *p2 = new Derived();
    Derived *p3 = new Derived();
    Base *a[] = {p1, p2, p3};

    // πρόσβαση σε συνάρτηση της παραγόμενης κλάσης μέσω δεικτών στη βασική κλάση
    for (int i = 0; i < 3; i++)
    {
        ((Derived *)a[i])->fun2();
    }

    return 0;
}