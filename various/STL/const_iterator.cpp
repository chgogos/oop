#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    //C++14
    for (auto it = cbegin(v); it < cend(v); it++)
    {
        cout << *it << " ";
        // (*it)++; 
    }
}

/*
1 2 3 4 5
*/