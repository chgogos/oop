#include <iostream>
#include <typeinfo> // RTTI (RunTime Type Information)

class Base
{
  public:
    virtual void fun1()
    {
        std::cout << "Base::fun1" << std::endl;
    }
};

class Derived : public Base
{
  public:
    void fun1()
    {
        std::cout << "Derived::fun1" << std::endl;
    }
    void fun2()
    {
        std::cout << "Derived::fun2" << std::endl;
    }
};

int main()
{
    Base *a[] = {new Base(), new Derived()};

    for (int i = 0; i < sizeof(a) / sizeof(Base *); i++)
    {
        if (typeid(*a[i]) == typeid(Base))
        {
            a[i]->fun1();
            std::cout << "Cannot execute fun2" << std::endl;
        }
        else if (typeid(*a[i]) == typeid(Derived))
        {
            Derived *temp = dynamic_cast<Derived *>(a[i]);
            temp->fun1();
            temp->fun2();
        }
    }
    return 0;
}

/*
Base::fun1
Cannot execute fun2
Derived::fun1
Derived::fun2
*/
