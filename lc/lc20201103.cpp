#include <iostream>

using namespace std;

class A
{
private:
    int x;
    double y;

public:
    A() : x(0), y(0.0) // default constructor
    {
        cout << "default constructor" << endl;
    }

    A(int _x, double _y = 2.5) : x(_x), y(_y)
    {
        cout << "overloaded constructor" << endl;
    }
    void show()
    {
        cout << this << ": x=" << x << " y=" << y << " SIZE=" << sizeof(*this) << endl;
    }
};

int main()
{
    A obj1;         // καλείται ο default constructor
    A obj2 = {};    // καλείται ο default constructor
    A obj3{};       // καλείται ο default constructor
    A obj4(5, 7.2); // καλείται ο constructor με 2 παραμέτρους
    A obj5(0, 0.0); // καλείται ο constructor με 2 παραμέτρους
    A obj6(7);      // καλείται ο constructor με 2 παραμέτρους κάνοντας χρήση της default τιμής

    A my_array[4]; // καλείται 4 φορές ο default contructor
    for (int i = 0; i < 4; i++)
    {
        my_array[i].show();
    }

    A my_second_array[4] = {A(2, 3.1), A(3, 4.5), A(2, 3.4), A(3)}; // καλείται 4 φορές ο  contructor με 2 παραμέτρους
    for (int i = 0; i < 4; i++)
    {
        my_second_array[i].show();
    }
}

/*
default constructor   
default constructor   
default constructor   
overloaded constructor
overloaded constructor
overloaded constructor
default constructor   
default constructor   
default constructor
default constructor
0x7afd60: x=0 y=0 SIZE=16
0x7afd70: x=0 y=0 SIZE=16
0x7afd80: x=0 y=0 SIZE=16
0x7afd90: x=0 y=0 SIZE=16
overloaded constructor
overloaded constructor
overloaded constructor
overloaded constructor
0x7afd20: x=2 y=3.1 SIZE=16
0x7afd30: x=3 y=4.5 SIZE=16
0x7afd40: x=2 y=3.4 SIZE=16
0x7afd50: x=3 y=2.5 SIZE=16
*/