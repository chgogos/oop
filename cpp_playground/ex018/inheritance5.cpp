#include <iostream>

class Base
{
  public:
    void func()
    {
        std::cout << "Base::func" << std::endl;
    }
};

class Derived : public Base
{
  public:
    // overload func
    void func(int x)
    {
        std::cout << "Derived::func(int) parameter=" << x << std::endl;
    }

    // Η func  είναι υπερφορτωμένη (overloaded) στην κλάση Derived
    // Πρέπει να υπάρχει η ακόλουθη δήλωση έτσι ώστε να μπορεί να κληθεί 
    // για κάποιο αντικείμενο τύπου Derived η συνάρτηση func() 
    using Base::func;
};

int main()
{
    Derived obj;
    obj.func(5);
    obj.func();
    return 0;
}
