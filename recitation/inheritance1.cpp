#include <iostream>

using namespace std;

class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;

public:
    Base(int x, int y, int z) : x(x), y(y), z(z) {}
    int get_x()
    {
        return x;
    }
};

class Derived : public Base
{
private:
    int w;

public:
    Derived(int x, int y, int z, int w) : Base(x, y, z), w(w) {}
    void info()
    {
        cout << get_x() << " " << y << " " << z << " " << w << endl;
    }
};

int main()
{
    Derived obj(1, 2, 3, 4);
    obj.info();
}