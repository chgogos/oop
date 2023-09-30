#include <iostream>
// #include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
    // ------------------- δέσμευση/αποδέσμευση 1 θέσης μνήμης στη C++
    int *p = new int;
    *p = 7;
    cout << *p << endl;
    delete p;

    // ------------------- δέσμευση/αποδέσμευση 1 θέσης μνήμης στη C

    int *p2 = (int *)malloc(sizeof(int));
    *p2 = 7;
    cout << *p2 << endl;
    free(p2);

    // ------------------- δέσμευση/αποδέσμευση 10 θέσεων μνήμης στη C++

    int *a = new int[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = 42;
        // *(a+i) = 42;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;

    // ------------------- δέσμευση/αποδέσμευση 10 θέσεων μνήμης στη C

    int *b = (int *)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++)
    {
        b[i] = 42;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    free(b);
}

/*
7
7
42 42 42 42 42 42 42 42 42 42 
42 42 42 42 42 42 42 42 42 42
*/
