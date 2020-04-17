#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    auto [x, y, z] = a;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}

/*
1
2
3
*/