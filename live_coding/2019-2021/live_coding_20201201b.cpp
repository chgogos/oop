#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // container
    vector<int> v{10,20,7,1,4}; 

    // iterator
    for(vector<int>::iterator itr = v.begin();itr<v.end();itr++){
        *itr *=2;
        cout << *itr << " ";
    }
    cout << endl;
    // algorithm
    sort(v.begin(), v.end());
    for(auto itr = v.begin();itr<v.end();itr++){
        cout << *itr << " ";
    }

}

