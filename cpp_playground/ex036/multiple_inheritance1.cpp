#include <iostream>

class Base1
{
  private:
    int a;

  public:
    Base1(int a = 0) : a(a)
    {
        std::cout << "Base1::Base1(int) constructor called" << std::endl;
    }
    void fun1()
    {
        std::cout << "Base1::fun1 called" << std::endl;
    }
};

class Base2
{
  private:
    int b;

  public:
    Base2(int b = 0) : b(b)
    {
        std::cout << "Base2::Base2(int) constructor called" << std::endl;
    }

    void fun2()
    {
        std::cout << "Base2::fun2 called" << std::endl;
    }
};

class Derived : public Base1, public Base2
{
  private:
    int c;

  public:
    Derived(int a=0, int b=0, int c=0) : Base1(a), Base2(b), c(c) {
        std::cout << "Derived::Derived(int,int,int) constructor called" << std::endl;
    }
    void fun3()
    {
        std::cout << "Derived::fun3 called" << std::endl;
        c++;
    }
    void print_data_members()
    {
        // std::cout << "Base1::a=" << a << std::endl; // δεν επιτρέπεται η πρόσβαση
        // std::cout << "Base2::b=" << b << std::endl; // δεν επιτρέπεται η πρόσβαση
        std::cout << "Derived::c=" << c << std::endl;
    }
};

int main()
{
    Derived obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    obj.print_data_members();
    return 0;
}


/*
Base1::Base1(int) constructor called
Base2::Base2(int) constructor called
Derived::Derived(int,int,int) constructor called
Base1::fun1 called
Base2::fun2 called
Derived::fun3 called
Derived::c=1
*/