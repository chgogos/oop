#include <iostream>
#include <array>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array<int, 10> arr;
    for (int i = 0; i <= 10; i++)
    {
        arr[i] = a[i];
    }
    for (int& x : arr)
    {
        x++;
    }
    for (int& x : arr)
    {
        cout << x << " ";
    }


}

/*
2 3 4 5 6 7 8 9 10 11 
*/