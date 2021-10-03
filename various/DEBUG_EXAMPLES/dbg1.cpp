#include <iostream>

using namespace std;

int fun(int x)
{
    int p = 1;
    for (int i = 2; i <= x; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
        sum += fun(a[i]);
    }
    cout << "SUM = " << sum << endl;
}
