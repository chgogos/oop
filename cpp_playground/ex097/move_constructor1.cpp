// move constructor και move assignmnent

#include <iostream>

using namespace std;

class MyClass
{
private:
    int x;
    std::string s;

public:
    MyClass(int xx, std::string ss)
        : x{xx}, s{ss}
    {
    }
    MyClass(MyClass &&rhs)
        : x{std::move(rhs.x)}, s{std::move(rhs.s)}
    {
        std::cout << "Move constructor invoked." << '\n';
    }

    MyClass &operator=(MyClass &&otherobject)
    {
        x = std::move(otherobject.x);
        s = std::move(otherobject.s);
        std::cout << "Move assignement invoked." << '\n';
        return *this;
    }

    void info(){
        cout <<"x:" << x << " s:" << s << endl;
    }
};

int main()
{
    MyClass o1(1, "test");
    MyClass o2(2, "another test");
    MyClass o3 = std::move(o1); // κλήση του move constructor
    o3 = std::move(o2); // κλήση του move assignment

    o1.info();
    o2.info();
    o3.info();
}

/*
Move constructor invoked.
Move assignement invoked.
x:1 s:
x:2 s:
x:2 s:another test
*/