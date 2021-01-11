#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *a;
    double *b;
    char *c;

    a = (int *)malloc(sizeof(int));
    b = (double *)malloc(sizeof(double));
    c = (char *)malloc(sizeof(char));

    *a = 42;
    *b = 3.14;
    *c = 'a';

    cout << *a << endl;
    cout << *b << endl;
    cout << *c << endl;

    free(a);
    free(b);
    free(c);
}

/*
42
3.14
a
*/