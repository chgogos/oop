#include <iostream>
using namespace std;

template<class T>
void my_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main()
{
    int x = 5, y = 10;
    my_swap(x, y);
    cout << x << " " << y << endl;

    double z=7.1, w=8.2;
    my_swap(z,w);
    cout << z << " " << w << endl;

    string u="arta", v="ioannina";
    my_swap(u,v);
    cout << u << " " << v << endl;
}