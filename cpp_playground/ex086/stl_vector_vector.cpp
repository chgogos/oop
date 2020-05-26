#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<vector<int>> v{{1,2,3},{4,5,6},{7,8,9}};

    for(auto row: v){
        for(int x: row){
            cout << x << " ";
        }
        cout << endl;
    }
    v.clear();
}

/*
1 2 3 
4 5 6 
7 8 9 
*/