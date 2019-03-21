#include <iostream>

class Base
{
  public:
    void fun1()
    {
        std::cout << "Base fun1" << std::endl;
    }

    virtual void fun2()
    {
        std::cout << "Base fun2" << std::endl;
    }
    
};

class Derived : public Base
{
  public:
    // πρέπει η συνάρτηση fun1 της Base να δηλωθεί ως virtual
    void fun1() override // error: only virtual member functions can be marked 'override'
    {
        std::cout << "Derived fun1" << std::endl;
    }

    void fun2() override
    {
        std::cout << "Derived fun1" << std::endl;
    }

};

int main()
{
    Base *p = new Derived();
    p->fun1();
    p->fun2();

    return 0;
}