#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = a;
    for(int i=0;i<n;i++){
        cout << a[i] << "-" << p[i] << "-" << *(p+i) << endl;
    }
    cout << "size of a: " << sizeof(a) << endl;
    cout << "size of p: " << sizeof(p) << endl;
    p++;
    // a++; // error: lvalue required as increment operand
}