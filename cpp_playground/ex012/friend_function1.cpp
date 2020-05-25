#include <iostream>

using namespace std;

class MyClass
{
  private:
    int x;

  public:
    MyClass(int x) : x(x) {}
    void func1()
    {
        cout << "func1:" << x << endl;
    }
    friend void func2(MyClass &);
};

// func2 is friend of MyClass, so it can access private members of MyClass objects
// func2 is a global function (not a member of MyClass)
void func2(MyClass &r)
{
    cout << "func2:" << r.x << endl;
}

int main()
{
    MyClass obj1(5);
    obj1.func1();
    func2(obj1);
}

/*
func1:5
func2:5
*/