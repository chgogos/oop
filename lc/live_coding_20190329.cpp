#include <iostream>

class Base
{
  public:
    void fun1()
    {
        std::cout << "Base::fun1" << std::endl;
    }
    virtual void fun2()
    {
        std::cout << "Base::fun2" << std::endl;
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
    void fun3()
    {
        std::cout << "Derived::fun3" << std::endl;
    }
};

int main()
{
    std::cout << "Checkpoint 1" << std::endl;
    Base obj1;
    obj1.fun1(); // εμφανίζει Base::fun1
    obj1.fun2(); // εμφανίζει Base::fun2

    std::cout << "Checkpoint 2" << std::endl;
    Derived obj2;
    obj2.fun1(); // εμφανίζει Derived::fun1
    obj2.fun2(); // εμφανίζει Derived::fun2
    obj2.fun3(); // εμφανίζει Derived::fun3

    std::cout << "Checkpoint 3" << std::endl;
    Base *p1 = new Derived(); // upcasting
    p1->fun1();               // εμφανίζει Base::fun1
    p1->fun2();               // εμφανίζει Derived::fun2
    // p1->fun3(); // compiler error: Base has no member fun3
    delete p1;

    std::cout << "Checkpoint 4" << std::endl;
    Derived *p2 = (Derived *)new Base(); // downcasting
    p2->fun1();
    p2->fun2();
    p2->fun3();

    std::cout << "Checkpoint 5" << std::endl;
    Derived *p3 = static_cast<Derived *>(new Base()); // downcasting
    p3->fun1();
    p3->fun2();
    p3->fun3();

    std::cout << "Checkpoint 6" << std::endl;
    Derived *p4 = dynamic_cast<Derived *>(new Base()); // downcasting
    p4->fun1();
    // p4->fun2(); // runtime error: segmentation fault
    p4->fun3();

    return 0;
}
