#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator itr = v.begin();
    while (itr != v.end())
    {
        cout << *itr << " ";
        (*itr)++;
        itr++;
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}