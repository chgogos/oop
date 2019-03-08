#include <iostream>

class Base
{
  public:
    int x;
};

class Derived : public Base
{
  public:
    int y;
};

int main()
{
    Base a;
    a.x = 10;
    Derived b;
    b.x = 20;
    b.y = 30;
    Base *p = &a;
    std::cout << "#1>>> " << p->x << std::endl;

    // upcasting
    p = &b;
    std::cout << "#2>>> " << p->x << std::endl;
    // std::cout << "#3>>> " << p->x << " " << p->y << std::endl; // error: no member named 'y' in 'A'

    // B *q=&a; // error: cannot initialize a variable of type 'B *' with an rvalue of type 'A *'
    return 0;
}
