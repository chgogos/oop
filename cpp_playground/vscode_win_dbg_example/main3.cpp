#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Input value to add to each array's item: ";
    int x;
    cin >> x;
    for (int i = 0; i < 5; i++)
    {
        a[i] += x;
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
