#include <iostream>
#include <memory>

class MyClass
{
  public:
    MyClass()
    {
        std::cout << "MyClass object created " << this << std::endl;
    }
    ~MyClass()
    {
        std::cout << "MyClass object destroyed " << this << std::endl;
    }

    void test()
    {
        std::cout << "just testing" << std::endl;
    }
};

int main()
{
    {
        // 1ος τρόπος δημιουργίας unique pointer
        std::unique_ptr<MyClass> p1(new MyClass());
        p1->test();
        // std::unique_ptr<MyClass> p0 = p1; // error

        // 2ος τρόπος δημιουργίας unique pointer
        std::unique_ptr<MyClass> p2 = std::make_unique<MyClass>(); // C++14
        p2->test();
    }

    return 0;
}