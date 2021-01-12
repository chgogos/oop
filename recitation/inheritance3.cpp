#include <iostream>

using namespace std;

class Base
{
protected:
    int x;

public:
    Base(int x) : x(x) {}
    virtual ~Base() {}
    virtual int get_value()
    {
        return x;
    }
};

class DerivedA : public Base
{
private:
    int y;

public:
    DerivedA(int x, int y) : Base(x), y(y) {}
    int get_value()
    {
        return x + y;
    }
};

class DerivedB : public Base
{
private:
    int z, w;

public:
    DerivedB(int x, int z, int w) : Base(x), z(z), w(w) {}
    int get_value()
    {
        return x + z + w;
    }
};

int main()
{
    Base *obj[5] = {new Base(1),
                    new DerivedA(2, 3),
                    new DerivedB(3, 1, 7),
                    new Base(3),
                    new DerivedA(1, 7)};

    for (int i = 0; i < 5; i++)
    {
        cout << obj[i]->get_value() << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        delete obj[i];
    }
}

/*
1
5
11
3
8
*/