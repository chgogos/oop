#include <iostream>

using namespace std;

int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

/*
0 1 2 3 4 
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
*/