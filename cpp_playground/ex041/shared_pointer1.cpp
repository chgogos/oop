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
        std::shared_ptr<MyClass> p1 = std::make_shared<MyClass>();
        p1->test();
        {
            std::shared_ptr<MyClass> p2 = p1;
            p2->test();
            std::cout << "End of life for shared pointer p2"<<std::endl;
        }
        std::cout << "End of life for shared pointer p1"<<std::endl;
    }

    return 0;
}