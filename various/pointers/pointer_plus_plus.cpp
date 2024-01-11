#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << *p << endl;
        sum += *p++;
    }
    cout << "sum=" << sum << endl;
}
