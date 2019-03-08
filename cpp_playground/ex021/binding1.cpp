#include <iostream>

class Base
{
  public:
    void func1()
    {
        std::cout << "Base::func1" << std::endl;
    }
    virtual void func2()
    {
        std::cout << "Base::func2" << std::endl;
    }
};

class Derived : public Base
{
  public:
    void func1()
    {
        std::cout << "Derived::func1" << std::endl;
    }
    virtual void func2()
    {
        std::cout << "Derived::func2" << std::endl;
    }
};

int main()
{
    Base obj1;
    Derived obj2;

    Base *p = &obj1;
    p->func1(); // static binding
    p->func2(); // dynamic binding (η συνάρτηση που καλείται εξαρτάται από το είδος του αντικειμένου στο οποίο δείχνει ο δείκτης)

    p = &obj2;
    p->func1(); // static binding
    p->func2(); // dynamic binding

    Base &r1 = obj1;
    r1.func1(); // static binding
    r1.func2(); // dynamic binding

    Base &r2 = obj2;
    r2.func1(); // static binding
    r2.func2(); // dynamic binding
    return 0;
}
