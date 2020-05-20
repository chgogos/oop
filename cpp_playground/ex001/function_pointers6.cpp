#include <iostream>

using namespace std;

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int a[] = {3, 1, 6, 2, 8, 5};
    int n = sizeof(a) / sizeof(int);

    qsort(a, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

/*
1 2 3 5 6 8 
*/