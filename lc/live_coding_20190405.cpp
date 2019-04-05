#include <iostream>

class Base1
{
  protected:
    int a;
    int x;

  public:
    Base1()
    {
        this->a = 1;
        this->x = 4;
    }
    void fun(){
        std::cout << "Base1::fun()" << std::endl;
    }
};

class Base2
{
  protected:
    int b;
    int x;

  public:
    Base2()
    {
        this->b = 2;
        this->x = 5;
    }
    void fun(){
        std::cout << "Base2::fun()" << std::endl;
    }

};

class Derived : public Base1, public Base2
{
  private:
    int c;

  public:
    Derived()
    {
        c = 3;
    }
    void print()
    {
        std::cout << a << " " << b << " " << c << std::endl;
        std::cout << Base1::x << std::endl;
    }
    using Base2::fun;
};

int main()
{
    Derived obj;
    obj.print();
    obj.Base1::fun();
    obj.fun();
}
