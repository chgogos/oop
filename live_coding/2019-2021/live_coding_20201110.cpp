#include <iostream>
using namespace std;

int main()
{
    int a = 42; // 4 bytes
    double b = 3.14;
    char x[4] = {'a', 'b', 'c', 'd'};
    int *p1 = &a;
    a++;                             // a <- 43
    *p1 = *p1 * 2;                   // a <- 86
    cout << a << " " << *p1 << endl; // 86 86
    cout << sizeof(p1) << endl;      // 8

    // char *p2 = &x[0];
    char *p2 = x; // το όνομα του πίνακα είναι η διεύθυνση του 1ου στοιχείου του πίνακα
    p2 = p2 + 2;
    cout << *p2 << endl; // c

    int y[] = {7, 10, 11, 23};
    cout << sizeof(y) << endl; // 16
    for (int i = 0; i < 4; i++)
    {
        cout << y[i] << endl;
    }
    cout << "---------------" << endl;
    int *p3 = NULL;
    for(p3=y;p3<y+4;p3++){
        cout << *p3 << endl;
    }

    cout << sizeof(a) << endl;    // 4
    cout << sizeof(b) << endl;    // 8
    cout << sizeof(x) << endl;    // 4
    cout << sizeof(x[0]) << endl; // 1
}

/*
86 86
8
c
16
7
10
11
23
---------------
7
10
11
23
4
8
4
1
*/