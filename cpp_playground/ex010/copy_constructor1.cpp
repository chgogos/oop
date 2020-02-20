// shallow copy

#include <iostream>
#include <vector>

class MyClass
{
private:
    int a;
    double b;
    std::vector<int> c;

public:
    // default constructor
    MyClass() : a(0), b(0.0), c(10, -1)
    {
        std::cout << "default constructor" << std::endl;
    }

    // copy constructor
    MyClass(const MyClass &r) : a(r.a), b(r.b), c(r.c)
    {
        std::cout << "copy constructor" << std::endl;
    }

    // copy assignment
    MyClass &operator=(const MyClass &r)
    {
        std::cout << "copy assignment" << std::endl;
        a = r.a;
        b = r.b;
        c = r.c;
        return *this;
    }

    void modify(int i, int x)
    {
        c[i] = x;
    }

    void print()
    {
        std::cout << "a=" << a << std::endl;
        std::cout << "b=" << b << std::endl;
        std::cout << "c=[ ";
        for (int x : c)
        {
            std::cout << x << " ";
        }
        std::cout << "]" << std::endl;
    }
};

int main()
{
    MyClass obj1;        // default constructor
    MyClass obj2 = obj1; // copy constructor
    MyClass obj3(obj1);  // copy constructor
    MyClass obj4{obj1};  // copy constructor
    MyClass obj5;        // default constructor
    obj5 = obj1;         // copy assignment
    obj1.modify(0, 99);
    std::cout << "obj1" << std::endl;
    obj1.print();
    std::cout << "obj2" << std::endl;
    obj2.print();
    std::cout << "obj3" << std::endl;
    obj3.print();
    std::cout << "obj4" << std::endl;
    obj4.print();
    std::cout << "obj5" << std::endl;
    obj5.print();
    return 0;
}
