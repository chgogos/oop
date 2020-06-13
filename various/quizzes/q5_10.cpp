#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }

}

/*
1 2 3 4 5 
1 2 3 4 5 
*/