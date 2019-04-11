#include <iostream>

class A;

class B
{
private:
    // A a; // error: field has incomplete type 'A'
    A *a;

public:
    B(A* pa) : a(pa)
    {
        std::cout << "B constructor called" << std::endl;
    };

    ~B() { }
};

class A
{
private:
    int x;

public:
    A()
    {
        std::cout << "A constructor called" << std::endl;
    };
};

int main()
{
    A obj1;
    B obj2(&obj1);
}