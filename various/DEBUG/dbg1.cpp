#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // int b[10] = {0};
    // for (int i = 0; i < 10; i++)
    //     cout << "b[" << i << "]=" << &b[i] << endl;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
        cout << "a[" << i << "]=" << &a[i] << endl;
    int sum = a[0];
    cout << &sum << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << a[i]  << " " << &a[i] << endl;
        sum += a[i];
    }
    cout << sum << endl;
}