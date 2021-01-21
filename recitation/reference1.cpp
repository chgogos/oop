// Τι θα εμφανίσει ο ακόλουθος κώδικας;

#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int &r = a;
    a += 2;
    r *= 2;
    cout << a << endl;
    cout << r << endl;
}

/*
8
8
*/