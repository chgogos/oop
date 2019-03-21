#include <iostream>
#include <utility>

class A
{
    int x;

  public:
    // constructor
    A(int x) : x(x)
    {
        std::cout << "constructor A(int) called" << std::endl;
    }

    // copy constructor;
    A(const A &obj) : x(obj.x)
    {
        std::cout << "copy constructor called" << std::endl;
    }

    // move constructor;
    A(const A &&obj)
    {
        std::cout << "move constructor called" << std::endl;
    }

    // copy assignment operator
    A &operator=(const A &obj)
    {
        std::cout << "copy assignment operator called" << std::endl;
        return *this;
    }

    // move assignment operator
    A &operator=(const A &&obj)
    {
        std::cout << "move assignment operator called" << std::endl;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const A &obj)
    {
        os << obj.x;
        return os;
    }
};

void swap1(A &obj1, A &obj2)
{
    A tmp(obj1); // copy constructor called
    obj1 = obj2;
    obj2 = tmp;
}

void swap2(A &obj1, A &obj2)
{
    A tmp(std::move(obj1));
    obj1 = std::move(obj2);
    obj2 = std::move(tmp);
}

int main()
{
    A obj1(5);
    A obj2(7);
    std::cout << "1. " << obj1 << "," << obj2 << std::endl;
    swap1(obj1, obj2);
    std::cout << "2. " << obj1 << "," << obj2 << std::endl;
    swap2(obj1, obj2);
    std::cout << "3. " << obj1 << "," << obj2 << std::endl;
    return 0;
}
