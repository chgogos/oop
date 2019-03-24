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
        std::weak_ptr<MyClass> p1;
        {
            std::shared_ptr<MyClass> p2 = std::make_shared<MyClass>();
            p1 = p2;
            auto tmp = p1.lock();
            if (tmp)
            {
                tmp->test();
            }
            else
            {
                std::cout << "weak pointer p1 has expired" << std::endl;
            }
            std::cout << "End of life for shared pointer p2" << std::endl;
        }
        auto tmp = p1.lock();
        if (tmp)
        {
            tmp->test();
        }
        else
        {
            std::cout << "weak pointer p1 has expired" << std::endl;
        }
    }
    return 0;
}
