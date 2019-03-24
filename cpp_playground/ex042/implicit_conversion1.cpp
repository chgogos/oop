#include <iostream>

class MyClass
{
  private:
    int a_;
    std::string b_;

  public:
    MyClass(int a) : a_(a), b_("None") {}
    MyClass(std::string b) : b_(b), a_(-1) {}
    void print()
    {
        std::cout << a_ << " " << b_ << std::endl;
    }
};

int main()
{
    MyClass obj1(42);
    obj1.print();

    MyClass obj2 = 42;
    obj2.print();

    MyClass obj3("John");
    obj3.print();

    // MyClass obj = "Jane"; // no suitable constructor exists to convert from "const char [5]" to "MyClass"

    MyClass obj4 = MyClass("Jane");
    obj4.print();

    MyClass obj5 = std::string("Jim");
    obj5.print();

    return 0;
}