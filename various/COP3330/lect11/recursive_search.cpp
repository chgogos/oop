#include <iostream>
#include <cstdbool>
using namespace std;

bool search(int a[], int beg, int end, int key)
{
    if (beg > end)
        return false;
    if (a[beg] == key)
        return true;
    return search(a, ++beg, end, key);
}

bool search(int a[], int N, int key)
{
    return search(a, 0, N - 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (auto key : {1, 5, 9, 0, 13})
    {
        cout << boolalpha << "Key: " << key << " found: " << search(a, 10, key) << endl;
    }
}

/*
Key: 1 found: true
Key: 5 found: true
Key: 9 found: true
Key: 0 found: true
Key: 13 found: false
*/