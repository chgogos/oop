#include <iostream>

class A
{
  public:
    int x;
    void func1()
    {
        std::cout << "member function: func1 is executing" << std::endl;
    }
    static void func2()
    {
        std::cout << "static member function: func2 is executing" << std::endl;
    }
};

int main()
{
    A *a = nullptr;
    a->func1();
    a->func2();
    // std::cout << a->x << std::endl; // segmentation fault
    return 0;
}