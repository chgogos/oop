#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;
    // int *p = &a[0]; // εναλλακτικά

    cout << sizeof(a) << endl; // 5 * 4 = 20 bytes;
    cout << sizeof(p) << endl; // 8 bytes;

    *(p + 2) = 99; // αριθμητική δεικτών (pointer arithmetic)

    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

/* έξοδος
20
8
1 2 99 4 5
*/