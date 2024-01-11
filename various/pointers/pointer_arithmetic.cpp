#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p;
    p = a;  // ή p=&a[0];
    *p = 7; // {7, 2, 3, 4, 5};
    p++;
    *p = 7; // {7, 7, 3, 4, 5};
    p += 2;
    *p = 7; // {7, 7, 3, 7, 5};
    int *p1 = &a[0];
    int *p2 = &a[4];
    cout << p2 - p1 << endl; // εμφανίζει 4
    // cout << p2 + p1 << endl; // error: invalid operands to binary expression ('int *' and 'int *')
}