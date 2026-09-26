#include <iostream>

using namespace std;

// κλήση με αναφορά για s και p, με χρήση δεικτών
void fun(int a, int b, int *s, int *p)
{
    *s = a + b;
    *p = a * b;
}

int main()
{
    int x = 10, y = 20;
    int sum, product;
    fun(x, y, &sum, &product);
    cout << sum << endl;
    cout << product << endl;
}

// 30
// 200