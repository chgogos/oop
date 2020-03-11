#include <iostream>
#include "my_vector.hpp"

using namespace std;

void print(my_vector &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    cout << "CHECK 1" << endl;
    my_vector v(10);
    for (int i = 0; i < v.size(); i++)
        v[i] = i;

    print(v);

    cout << "CHECK 2" << endl;
    try
    {
        cout << v[10] << endl;
    }
    catch (out_of_range)
    {
        cerr << "error" << endl;
        // std::terminate();
    }

    cout << "CHECK 3" << endl;
    my_vector v2 = {1, 2, 3, 4, 5}; // initializer list
    print(v2);

    cout << "CHECK 4" << endl;
    my_vector v3(v2);
    print(v3);

    cout << "CHECK 5" << endl;
    my_vector v4(100);
    v4 = v2;
    print(v4);
}