#include <iostream>

class Base
{
public:
  virtual void fun() = 0;
};

class Derived final : public Base
{
public:
  virtual void fun() final
  {
    std::cout << "Derived::fun" << std::endl;
  }
};

// error: base 'Derived' is marked 'final'
// class Derived2 : public Derived
// {
// public:
//   void fun()
//   {
//     std::cout << Derived::fun << std::endl;
//   }
// };

int main()
{
  Derived obj;
  obj.fun();

  return 0;
}
