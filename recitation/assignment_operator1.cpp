#include <iostream>

using namespace std;

class A
{
private:
    int n;
    int *data;

public:
    A(int n) : n(n), data(new int[n])
    {
        for (int i = 0; i < n; i++)
        {
            data[i] = i + 1;
        }
    }

    A &operator=(const A &obj) // deep copy with assignment operator
    {
        delete[] data;
        n = obj.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = obj.data[i];
        }
        return *this;
    }

    ~A()
    {
        delete[] data;
    }

    void info()
    {
        cout << "Object at " << this << " data at " << data << endl;
    }
};

int main()
{
    A obj1(5);
    A obj2(10);
    obj2 = obj1;
    obj1.info();
    obj2.info();
}

/*
Object at 0x7afe00 data at 0xb42450
Object at 0x7afdf0 data at 0xb42470
*/