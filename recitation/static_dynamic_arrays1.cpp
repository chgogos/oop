#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a[] = {2, 7, 1, 3, 6};
    int x;
    cin >> x;
    int *b = (int *)malloc(sizeof(int) * 5 * x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            b[i * 5 + j] = a[j];
        }
    }

    for (int i = 0; i < 5 * x; i++)
    {
        cout << b[i] << " ";
    }

    free(b);
}

/*
3
2 7 1 3 6 2 7 1 3 6 2 7 1 3 6 
*/