#include <iostream>

using namespace std;

class A
{
private:
    static int c;

public:
    A()
    {
        c++;
    }
    ~A()
    {
        c--;
    }
    static void info()
    {
        cout << "the name of the class is A "
             << " active objects=" << c << endl;
    }
};

int A::c = 0;

int main()
{
    A::info();
    A obj1;
    {
        A obj2;
        A::info();
    }
    A::info();
}

/*
the name of the class is A  active objects=0
the name of the class is A  active objects=2
the name of the class is A  active objects=1
*/