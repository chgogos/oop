#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

    int mynumbers[] = {3,9,2,1,4};
    vector<int> v(mynumbers, mynumbers+5);
    set<int> myset(v.begin(), v.end());
    for(auto x: myset){
        cout << x << " ";
    }
    cout << endl;
    myset.erase(myset.lower_bound(2), myset.upper_bound(3));
    for(auto x: myset){
        cout << x << " ";
    }
    cout << endl;
}

/*
1 2 3 4 9 
1 4 9
*/