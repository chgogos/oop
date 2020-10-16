#include <iostream>

class MyClass
{
  private:
    int x;

  public:
    MyClass(int x_) : x(x_) {}

    int &fun1(int &a)
    {
        x = a;
        a = a * 2;
        return a;
    }

    int &fun2(int &a) const
    {
        //  x = a; // error: cannot assign to non-static data member within const member function 'fun2'
        a = a * 2;
        return a;
    }

    const int &fun3(int &a) const
    {
        //  x = a; // error: cannot assign to non-static data member within const member function 'fun2'
        a = a * 2;
        return a;
    }

    int getX()
    {
        return x;
    }
};

void test1()
{
    MyClass obj{5};
    int t1 = 10;
    int &t2 = obj.fun1(t1);

    std::cout << "obj.x=" << obj.getX() << std::endl;
    std::cout << "t1=" << t1 << std::endl;
    std::cout << "t2=" << t2 << std::endl;
}

void test2()
{
    MyClass obj{5};
    int t1 = 10;
    int &t2 = obj.fun2(t1);

    std::cout << "obj.x=" << obj.getX() << std::endl;
    std::cout << "t1=" << t1 << std::endl;
    std::cout << "t2=" << t2 << std::endl;
}

void test3()
{
    MyClass obj{5};
    int t1 = 10;
    // int &t2 = obj.fun3(t1); // error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier
    const int &t2 = obj.fun3(t1);

    std::cout << "obj.x=" << obj.getX() << std::endl;
    std::cout << "t1=" << t1 << std::endl;
    std::cout << "t2=" << t2 << std::endl;
}

int main()
{
    test1();
    test2();
    test3();

    return 0;
}


/*
obj.x=10
t1=20   
t2=20
obj.x=5
t1=20
t2=20
obj.x=5
t1=20
t2=20
*/