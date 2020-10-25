#include <iostream>

using namespace std;

class A
{
public:
    int a;
    A &operator=(A &&other)
    {
        this->a = other.a;
        other.a = 0;
        return *this;
    }
};

int main()
{
    A a;
    a.a = 1;
    A b;
    b = std::move(a);              //calling A& operator= (A&& other)
    std::cout << a.a << std::endl; //0
    std::cout << b.a << std::endl; //1
}