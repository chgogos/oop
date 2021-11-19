// deep copy
#include <iostream>
#include <vector>

class MyClass
{
private:
    int a;
    double b;
    int *c;

public:
    MyClass() : a(0), b(0.0), c(new int[10])
    {
        for (int i = 0; i < 10; i++)
            c[i] = -1;
        std::cout << "default constructor" << std::endl;
    }

    ~MyClass()
    {
        delete[] c;
    }

    MyClass(const MyClass &r) : a(r.a), b(r.b)
    {
        c = new int[10];
        for (int i = 0; i < 10; i++)
            c[i] = r.c[i];
        std::cout << "deep copy constructor" << std::endl;
    }

    MyClass &operator=(const MyClass &r)
    {
        std::cout << "copy assignment" << std::endl;
        a = r.a;
        b = r.b;
        c = new int[10];
        for (int i = 0; i < 10; i++)
            c[i] = r.c[i];
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
        for (int i = 0; i < 10; i++)
            std::cout << c[i] << " ";
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

/*
default constructor
deep copy constructor
deep copy constructor
deep copy constructor
default constructor
copy assignment
obj1
a=0
b=0
c=[ 99 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj2
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj3
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj4
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
obj5
a=0
b=0
c=[ -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 ]
*/