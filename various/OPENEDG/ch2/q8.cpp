#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> mylist{3,9,2,4,5};
    mylist.erase(mylist.begin());
    for(auto x: mylist){
        cout << x << " ";
    }
}