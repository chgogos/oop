#include <iostream>

class Base
{
  public:
    virtual void fun() = 0;
};

class Derived : public Base
{
  public:
    virtual void fun() final
    {
        std::cout << "Derived::fun" << std::endl;
    }
};

class Derived2 : public Derived
{
  public:
    // error: declaration of 'fun' overrides a 'final' function
    // void fun()
    // {
    //     std::cout << Derived::fun << std::endl;
    // }
};

int main()
{
    Derived obj;
    obj.fun();

    return 0;
}
