#include <iostream>

class A
{
  private:
    int x;

  public:
    A() : x(0) {}
    void fun() const
    {
        // αλλαγή μέσα σε const συνάρτηση private μέλους με χρήση της const_cast για το this
        (const_cast<A *>(this))->x = 5;
        std::cout << "A::fun()" << std::endl;
    }
    void print()
    {
        std::cout << x << std::endl;
    }
};

int main()
{
    A a;
    a.print();
    a.fun();
    a.print();
    return 0;
}
