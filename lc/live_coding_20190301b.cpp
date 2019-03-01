#include <iostream>
#include <vector>

class MyClass
{
    int a_;
    std::vector<int> b_;

  public:
    MyClass(int a, std::vector<int> b) : a_(a), b_(b)
    {
        std::cout << "Constructor 1" << std::endl;
    }
    // MyClass() : MyClass(0, b_()) {}
    MyClass()  {
        std::cout << "Constructor 2 (default constructor)" << std::endl;
        a_=0;
        std::vector<int> x;
        b_ = x;
    }

    MyClass(const MyClass &m) : a_(m.a_), b_(m.b_) {
        if (a_ < 0) 
            a_ = -a_;
        std::cout << "Constructor 3 (copy constructor)" << std::endl;
    }    

    void print()
    {
        std::cout << "a = " << a_ << std::endl
                  << "b = [ ";
        for (int x : b_)
        {
            std::cout << x << " ";
        }
        std::cout << " ]" << std::endl;
    }
};

int main()
{
    std::cout << "obj1" << std::endl;
    MyClass obj1; // default constructor
    obj1.print();
    std::vector<int> v{5, 6, 7};
    std::cout << "obj2" << std::endl;
    MyClass obj2(-5, v); // constructor(int, vector<int>)
    obj2.print();
    std::cout << "obj3" << std::endl;
    MyClass obj3(obj2); // copy constructor
    obj3.print();
    std::cout << "obj4" << std::endl;
    MyClass obj4 = obj2; // copy constructor
    obj4.print();
    std::cout << "obj5" << std::endl;
    MyClass obj5; // default constructor
    obj5=obj2;
    obj5.print();
}