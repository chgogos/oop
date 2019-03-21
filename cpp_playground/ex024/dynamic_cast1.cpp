#include <iostream>

class Base
{
  public:
    virtual void fun1()
    {
        std::cout << "Base fun1" << std::endl;
    }
};

class Derived : public Base
{
  public:
    void fun1()
    {
        std::cout << "Derived fun1" << std::endl;
    }
};

class MyClass
{
};

int main()
{
    Base *p1 = new Base();
    p1->fun1();

    Base *p2 = new Derived();
    p2->fun1();

    Derived *p3 = nullptr;
    p3 = dynamic_cast<Derived *>(p1);
    if (p3 != nullptr)
        p3->fun1();
    else
        std::cout << "A. Dynamic cast is not possible (Base cannot be converted to Derived)" << std::endl;

    p3 = dynamic_cast<Derived *>(p2);
    if (p3 != nullptr)
        p3->fun1();
    else
        std::cout << "B. Dynamic cast is not possible" << std::endl;

    return 0;
}
