#include <iostream>

using namespace std;

void sort(int A[], int beg, int end)
{
    if (beg >= end)
        return;
    sort(A, beg + 1, end);
    int tmp, i;
    tmp = A[beg];
    for (i = beg + 1; i <= end; i++)
        if (tmp > A[i])
            A[i - 1] = A[i];
        else
            break;
    A[i - 1] = tmp;
}

main()
{
    int X[10] = {10, 20, 1, 2, 6, 3, 299, 100, 30, 8};

    sort(X, 0, 9);
    for (int i = 0; i < 10; i++)
        cout << X[i] << endl;
}

/*
1
2
3
6
8
10
20
30
100
299
*/