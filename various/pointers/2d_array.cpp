#include <iostream>

using namespace std;

void print(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m = 3, n = 2;
    int c = 0;
    int **mat = new int *[m];
    for (int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
            mat[i][j] = ++c;
    }

    print(mat, m, n);

    for (int i = 0; i < m; i++)
        delete[] mat[i];
    delete[] mat;
}